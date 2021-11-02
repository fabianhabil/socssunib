#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b;
    long long int result = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i < b + 1; i++){
        result += i;
    }
    printf("%lld\n", result);
}