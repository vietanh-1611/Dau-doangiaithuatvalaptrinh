class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> value = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        // Nếu ký tự hiện tại nhỏ hơn ký tự sau -> trừ
        if (i < s.length() - 1 && value[s[i]] < value[s[i + 1]]) {
            result -= value[s[i]];
        } else {
            result += value[s[i]];
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << romanToInt(s);
    return 0;  
    }
};