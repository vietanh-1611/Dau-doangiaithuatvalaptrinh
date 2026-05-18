class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return "";

    string prefix = strs[0];  // lấy chuỗi đầu làm tiền tố

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) { 
            prefix.pop_back();  // xóa ký tự cuối
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0; 
    }
};
// MSSV/HoTen - Bai 005
