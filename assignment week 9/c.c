#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int listangka[n];
        long long int max = 0, count = 0;
        for(int i = 0; i < n; i++){
            scanf("%lld", &listangka[i]);
                max = listangka[i];
            if(max < listangka[i]){
            }
        }
        for(int i  = 0; i < n; i++){
            if(listangka[i] == max){
                count++;
            }
        }
        printf("Case #%d: %lld\n", index, count);
        index++;
    }
}