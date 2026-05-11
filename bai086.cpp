class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Hoán đổi hai ký tự ở hai đầu
            swap(s[left], s[right]);
            
            // Di chuyển hai con trỏ lại gần nhau hơn
            left++;
            right--;
        }
    }
};
// MSSV/HoTen - Bai 086
