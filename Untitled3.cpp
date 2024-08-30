#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    tIni = time(NULL);
    printf("Fibonacci iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni)); // diferença entre a hora de início e a hora de fim

    return 0;
}
