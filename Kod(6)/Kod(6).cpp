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
    std::cout << "¬вед≥ть число: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "‘актор≥ал в≥д'Їмного числа не визначений." << std::endl;
    }
    else {
        unsigned long long result = factorial(n);
        std::cout << "‘актор≥ал " << n << " = " << result << std::endl;
    }

    return 0;
}