class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n - 3; i++) {
        // Bỏ trùng i
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++) {
            // Bỏ trùng j
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // Bỏ trùng left & right
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums, target);

    for (auto v : ans) {
        cout << "[";
        for (int x : v) cout << x << " ";
        cout << "] ";
    }

    return 0;
    }
};
// MSSV/HoTen - Bai 089
