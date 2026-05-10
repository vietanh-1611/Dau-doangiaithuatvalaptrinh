class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // mốc ban đầu

        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();

                if (st.empty()) {
                    st.push(i); // reset mốc
                } else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }

        return maxLen;
    }
};