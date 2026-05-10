class Solution {
public:
    bool isPalindrome(int x) {
         // Số âm hoặc kết thúc bằng 0 (trừ 0)
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // So sánh
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};