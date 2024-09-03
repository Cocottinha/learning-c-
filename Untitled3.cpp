#include <iostream>

double fibonacci(int num) {
    if (num <= 0) return 0;
    if (num == 1 || num == 2) return 1;

    long long int a = 1, b = 1, c;
    for (int i = 3; i <= num; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    int *ptr;
	ptr = &n;
	
    std::cout << "Digite um número: ";
    std::cin >> *ptr;

    std::cout << fibonacci(*ptr) << std::endl;

    return 0;
}
