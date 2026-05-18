class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int> cnt(256, 0); // đếm ký tự
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        cnt[s[right]]++;

        // Nếu ký tự bị trùng
        while (cnt[s[right]] > 1) {
            cnt[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;  
    }
};
// MSSV/HoTen - Bai 108
