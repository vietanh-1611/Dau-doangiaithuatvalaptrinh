class Solution {
public:
    vector<string> result;

    void backtrack(string digits, int index, string current) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        string mapping[] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string letters = mapping[digits[index] - '0'];

        for (char c : letters) {
            backtrack(digits, index + 1, current + c);
        }
    }

    vector<string> letterCombinations(string digits) {
        result.clear();
        if (digits.empty()) return result;

        backtrack(digits, 0, "");
        return result;
    }
};