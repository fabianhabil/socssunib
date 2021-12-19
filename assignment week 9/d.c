#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        long long int n, x, y;
        scanf("%lld %lld %lld", &n, &x, &y);
        long long fibarr[21];
        fibarr[0] = x;
        fibarr[1] = y;
        for(int i = 2; i <= 20; i++){
            fibarr[i] = fibarr[i-1] - fibarr[i-2];
        }
        printf("Case #%d: %lld\n", index, fibarr[n]);
        index++;
    }
}