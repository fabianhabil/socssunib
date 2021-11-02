#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int x = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int angka[n];
        long long int sum = 0;
        long long int sum1 = 0;
        for(int i = 0; i < n; i++){
            scanf("%lld", &angka[i]);
            sum = sum + angka[i];
        }
        for(int j = 0; j < n; j++){
            if(sum < angka[j]){
                sum1++;
            }
        }
        printf("Case #%d: %lld\n", x, sum);
        printf("%lld\n", sum1);
        x++;
    }
}