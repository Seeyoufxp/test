#include <iostream>

class Cube {
private:
    int length;
    int width;
    int height;

public:
    // 构造函数，设置默认边长为3, 2, 1
    Cube(int l = 3, int w = 2, int h = 1) : length(l), width(w), height(h) {}

    // 计算立方体体积的成员函数
    int Compute() {
        return length * width * height;
    }
};

int main() {
    int l, w, h;
    std::cout << "输入立方体的长宽高：" << std::endl;
    std::cin >> l >> w >> h;
    Cube A(l, w, h);
    Cube B;
    std::cout << A.Compute() << std::endl;
    std::cout << B.Compute() << std::endl;
    return 0;
}