#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc = 3;
    while(tc--){
        long long int a, b;
        scanf("%lld + %lld =", &a, &b);
        printf("%lld\n", a + b);
    }
}