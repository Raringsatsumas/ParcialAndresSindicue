#include <stdio.h>
#include <time.h>

int main() {
    long long n = 3;
    long long total = 0;
    clock_t inicio = clock();

    for (long long i = 1; i <= n; i++) {
        total += i;
    }

    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Resultado: %lld\n", total);
    printf("Tiempo: %f segundos\n", tiempo);
    
    return 0;
}
