#include <iostream>
#include <cstdlib>

int main (int argc, char *argv[]) {	
	int a;
	unsigned long long resultado = 1;
	if (argc == 1){
		std::cout<<"Fatorial de: ";
		std::cin>>a;
	}	
	if(a<=0){
		std::cerr << "0 não é permitido!";
		return 1;
	}
	for (int b = 1; b<= a; ++b){
		std::cout<<b-1<<": "<<resultado<<"\n";
		resultado *= b;
	}			
	std::cout<<a<<": "<<resultado;
	return 0;
}
