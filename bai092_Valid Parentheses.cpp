class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Nếu là dấu mở
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // Nếu stack rỗng -> sai
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // Kiểm tra có khớp không
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty(); // Nếu rỗng -> hợp lệ
    }
};
// MSSV/HoTen - Bai 092
