#include <stdio.h>
#include <stdlib.h>

// 2501976503 - Fabian Habil Ramdhan
int main(){
    int a, b; scanf("%d %d", &a,&b);
    int output; scanf("%d", &output);
    long long int fibarray[output+1];
    fibarray[0] = a;
    fibarray[1] = b;
    for(int i = 2; i <= output; i++){
        fibarray[i] = fibarray[i-1] + fibarray[i-2];
    }
    printf("%lld\n", fibarray[output]);

}