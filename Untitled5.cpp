#include <iostream>
#include <cstdlib>



double fibonacci(int num) {
	int a, b, c;
	int contador = 2;
	a = 1;
	b = 1;
	do{
		c = a + b;
		a = b;
		b = c;
		contador++;
		std::cout<<c<< " ";
	}while (contador != num);
	return c;
 }


int main() {
    int n;
	int *ptr;
	ptr = &n;

    std::cout << "Digite um número: ";
    
    std::cin >> n;
    
    std::cout << "Resultado: "<< fibonacci(n)<<std::endl;   
	free(ptr);
	
    return 0;
}




















