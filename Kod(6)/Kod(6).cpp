#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    else {
        return n * factorial(n - 1); 
    }
}

int main() {

    setlocale(LC_ALL, "Ukrainian");
    int n;
    std::cout << "������ �����: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "�������� ��'������ ����� �� ����������." << std::endl;
    }
    else {
        unsigned long long result = factorial(n);
        std::cout << "�������� " << n << " = " << result << std::endl;
    }

    return 0;
}