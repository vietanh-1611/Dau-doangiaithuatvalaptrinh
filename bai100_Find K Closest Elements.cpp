class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int left = 0;
        int right = n - k; // Phạm vi tối đa mà chỉ số bắt đầu có thể đứng
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // So sánh khoảng cách của arr[mid] và arr[mid + k] tới x
            // Ta dùng công thức: x - arr[mid] > arr[mid + k] - x 
            // để tránh dùng hàm abs() và xử lý được trường hợp bằng nhau (ưu tiên số nhỏ hơn)
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1; // Cửa sổ tiềm năng nằm bên phải
            } else {
                right = mid; // Cửa sổ tiềm năng nằm bên trái hoặc chính là mid
            }
        }
        
        // Trả về k phần tử bắt đầu từ vị trí left đã tìm được
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
// MSSV/HoTen - Bai 100
