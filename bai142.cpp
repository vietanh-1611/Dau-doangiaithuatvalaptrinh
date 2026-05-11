class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Chỉ cần xét 2 cạnh đầu tiên
        // Cạnh 1: edges[0][0] và edges[0][1]
        // Cạnh 2: edges[1][0] và edges[1][1]
        
        int a = edges[0][0];
        int b = edges[0][1];
        
        int c = edges[1][0];
        int d = edges[1][1];
        
        // Nút nào lặp lại ở cả hai cạnh thì đó là tâm
        if (a == c || a == d) {
            return a;
        }
        
        return b;
    }
};