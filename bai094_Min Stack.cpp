class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;

public:
    MinStack() {
        // Khởi tạo đối tượng
    }
    
    void push(int val) {
        mainStack.push(val);
        
        // Nếu minStack trống hoặc giá trị mới <= giá trị nhỏ nhất hiện tại
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        } else {
            // Nếu không, giá trị nhỏ nhất vẫn là giá trị cũ
            minStack.push(minStack.top());
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
// MSSV/HoTen - Bai 094
