class Solution {
public:
    // Hàm để duy trì tính chất Max-Heap
    void heapify(vector<int>& nums, int n, int i) {
        int largest = i;       // Khởi tạo largest là gốc
        int left = 2 * i + 1;  // Con trái = 2*i + 1
        int right = 2 * i + 2; // Con phải = 2*i + 2

        // Nếu con trái lớn hơn gốc
        if (left < n && nums[left] > nums[largest])
            largest = left;

        // Nếu con phải lớn hơn gốc (hoặc lớn hơn con trái)
        if (right < n && nums[right] > nums[largest])
            largest = right;

        // Nếu largest không còn là gốc
        if (largest != i) {
            swap(nums[i], nums[largest]);

            // Đệ quy heapify cho cây con bị ảnh hưởng
            heapify(nums, n, largest);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        // Bước 1: Xây dựng Max-Heap (sắp xếp lại mảng)
        // Bắt đầu từ nút nội bộ cuối cùng lên đến gốc
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }

        // Bước 2: Trích xuất từng phần tử từ heap
        for (int i = n - 1; i > 0; i--) {
            // Di chuyển gốc hiện tại (lớn nhất) về cuối mảng
            swap(nums[0], nums[i]);

            // Gọi hàm heapify trên heap đã bị giảm kích thước
            heapify(nums, i, 0);
        }

        return nums;
    }
};
// MSSV/HoTen - Bai 012
