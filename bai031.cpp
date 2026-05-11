class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;
        int last = n - 1;

        // Bước 1: Tìm số lượng số 0 cần nhân bản
        // và xác định vị trí biên (last)
        for (int i = 0; i <= last - zeros; i++) {
            if (arr[i] == 0) {
                // Trường hợp đặc biệt: số 0 nằm ngay sát biên không thể nhân bản
                if (i == last - zeros) {
                    arr[last] = 0; // Chép số 0 này vào cuối
                    last--;
                    break;
                }
                zeros++;
            }
        }

        // Bước 2: Duyệt ngược từ cuối mảng cũ về đầu
        int j = n - 1; // Con trỏ ghi vào mảng mới
        for (int i = last - zeros; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[j--] = 0;
                arr[j--] = 0;
            } else {
                arr[j--] = arr[i];
            }
        }
    }
};
// MSSV/HoTen - Bai 031
