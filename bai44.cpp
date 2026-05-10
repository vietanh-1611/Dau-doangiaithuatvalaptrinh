class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        
        // dp[i][j] nghĩa là s[0...i-1] khớp với p[0...j-1]
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Trường hợp cơ bản: hai chuỗi rỗng khớp nhau
        dp[0][0] = true;
        
        // Xử lý các dấu '*' ở đầu mẫu p (vì chúng có thể khớp với chuỗi rỗng)
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 1];
            }
        }
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                    // Ký tự khớp hoặc gặp '?'
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    // '*' khớp rỗng (dp[i][j-1]) hoặc khớp ký tự hiện tại (dp[i-1][j])
                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};