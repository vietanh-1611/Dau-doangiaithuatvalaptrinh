class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int canTim = target - nums[i];

        // Nếu đã tồn tại số cần tìm
        if (mp.count(canTim)) {
            return {mp[canTim], i};
        }

        // Lưu số hiện tại vào map
        mp[nums[i]] = i;
    }

    return {}; // theo đề bài thì dòng này hầu như không chạy
    }
};