class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        // Cấp phát trước bộ nhớ để tránh việc resize vector nhiều lần
        answer.reserve(n);
        
        for (int i = 1; i <= n; i++) {
            // Kiểm tra chia hết cho cả 3 và 5 trước
            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
            } 
            else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } 
            else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } 
            else {
                // Chuyển số nguyên i thành chuỗi
                answer.push_back(to_string(i));
            }
        }
        
        return answer;
    }
};
// MSSV/HoTen - Bai 022
