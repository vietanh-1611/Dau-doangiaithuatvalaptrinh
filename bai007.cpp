class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Bước 1: Đếm tần suất xuất hiện của mỗi số
        unordered_map<int, int> counts;
        for (int n : nums) {
            counts[n]++;
        }

        // Bước 2: Dùng Min-Heap để lưu top k phần tử
        // pair<tần suất, giá trị>
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        for (auto const& [val, freq] : counts) {
            min_heap.push({freq, val});
            // Nếu heap vượt quá k, loại bỏ phần tử có tần suất thấp nhất
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        // Bước 3: Chuyển kết quả từ heap sang vector
        vector<int> result;
        while (!min_heap.empty()) {
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;
    }
};