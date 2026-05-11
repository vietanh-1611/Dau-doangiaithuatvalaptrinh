class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
    int n = nums.size();

    int closestSum = nums[0] + nums[1] + nums[2]; // giá trị ban đầu

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            // Cập nhật nếu gần target hơn
            if (abs(sum - target) < abs(closestSum - target)) {
                closestSum = sum;
            }

            if (sum < target)
                left++;
            else if (sum > target)
                right--;
            else
                return sum; // đúng target luôn
        }
    }

    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums, target);
    return 0;
    }
};
// MSSV/HoTen - Bai 088
