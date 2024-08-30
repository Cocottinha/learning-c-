#include <iostream>
#include <cstdlib>

float soma(float x, float y){
	return x+y;
}

float subtracao(float x, float y){
	return x-y;
}

float multiplicacao(float x, float y){
	return x*y;
}

float divisao(float x, float y){
	return x/y;
}

int main (int argc, char *argv[]) {
	float a, b;
	char sinal;
	for(int i = 0; i< argc; i++){
		if(i==1) a = atoi(argv[i]);
		if(i==2) sinal = *argv[i];		
		if(i==3) b = atoi(argv[i]);
	}
	if (argc == 1){
		std::cin>>a>>sinal>>b;
	}	
	if (sinal == '+') std::cout<<soma(a,b);
	if (sinal == '-') std::cout<<subtracao(a,b);
	if (sinal == '*') std::cout<<multiplicacao(a,b);
	if (sinal == '/') std::cout<<divisao(a,b);
	
	return 0;
}
