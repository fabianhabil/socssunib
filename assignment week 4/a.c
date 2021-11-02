#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int x;
    scanf("%lld", &x);
    printf("%lld plus %lld is %lld\n", x, x, x + x);
    printf("minus one is %lld\n", (x+x) - 1);
}