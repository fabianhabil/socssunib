#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2501976503 - Fabian Habil

int main(){
int t; scanf("%d", &t);
    int index = 1;
    while(t--){
        int n; scanf("%d", &n);
        long long int angkarr[n][n];
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%lld", &angkarr[i][j]);
            }
        }
        printf("Case #%d: ", index);
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = 0; j < n; j++){
                sum = sum + angkarr[j][i];
            }
            if(i == n-1) printf("%lld\n", sum);
            else{
                printf("%lld ", sum);
            }
        }
        index++;
    }
}