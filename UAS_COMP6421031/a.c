#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil - LB75 - UAS Algorithm and Programming (SOCS Problem A)


long long int fpb(long long int a, long long int b){
    if (b == 0) return a;
    else return fpb(b, a % b);
}

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", fpb(a,b));
}