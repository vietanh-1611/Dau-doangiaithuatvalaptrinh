class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // Tính toán theo công thức đề bài cung cấp
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        
        // Trả về kết quả dưới dạng mảng (vector)
        return {kelvin, fahrenheit};
    }
};