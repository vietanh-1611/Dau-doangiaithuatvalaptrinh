class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Chỉ số của phần tử cuối cùng thực tế trong nums1
        int i = m - 1;
        // Chỉ số của phần tử cuối cùng trong nums2
        int j = n - 1;
        // Chỉ số của vị trí cuối cùng trong mảng nums1 (độ dài m + n)
        int k = m + n - 1;

        // Duyệt khi cả hai mảng vẫn còn phần tử
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // Nếu nums2 vẫn còn phần tử (trong khi nums1 đã hết)
        // Ta chỉ việc chép nốt vào đầu nums1.
        // (Nếu nums1 còn phần tử thì chúng đã nằm đúng chỗ sẵn rồi)
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
// MSSV/HoTen - Bai 085
