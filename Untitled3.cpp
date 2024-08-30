#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Fun��o iterativa para calcular um termo n da sequ�ncia de fibonacci
        Como a sequ�ncia cresce muito r�pido, est� sendo usado o operador long para que o tipo int ocupe 8 bytes.
*/
long long int fiboI(int n){
    long long int a = 0, b = 1, c;
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

int main () {

    int n = 50;
    time_t tIni, tFim;

    tIni = time(NULL); // obtem a hora do computador
    printf("Fibonacci iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni)); // diferen�a entre a hora de in�cio e a hora de fim

    return 0;
}
