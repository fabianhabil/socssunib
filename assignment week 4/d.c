#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b, c, d;
    for(int i = 0; i < 2; i++){
        scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
        printf("%lld ",(a+b)*(c-d));
    }
    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
    printf("%lld\n",(a+b)*(c-d));
}