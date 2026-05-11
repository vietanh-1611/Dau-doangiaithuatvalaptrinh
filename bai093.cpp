class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        stack<int> st; // Lưu trữ chỉ số (index) của các ngày
        
        for (int i = 0; i < n; i++) {
            // Khi tìm thấy một ngày ấm hơn ngày ở đỉnh ngăn xếp
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                // Tính khoảng cách giữa hai ngày
                answer[prevIndex] = i - prevIndex;
            }
            // Thêm ngày hiện tại vào ngăn xếp để chờ ngày ấm hơn
            st.push(i);
        }
        
        return answer;
    }
};
// MSSV/HoTen - Bai 093
