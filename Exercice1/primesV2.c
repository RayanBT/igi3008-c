// primes.c

#include <stdio.h>
#include <math.h>

int isprime(int p) {
    if (p <= 1) 
        return 0;
    if (p <= 3) 
        return 1;
    if (p % 2 == 0 || p % 3 == 0) 
        return 0;

    int limit = (int)sqrt(p);
    for (int i = 5; i <= limit; i += 6) {
        if (p % i == 0 || p % (i + 2) == 0) 
            return 0;
    }
    
    return 1;
}

int main() {
    int n = 0;
    for (int i = 0; i < 100; i++)
    {
        if (isprime(i)) {
            n++;
        }
    }    
    printf("%d\n", n);
    return 0;
}