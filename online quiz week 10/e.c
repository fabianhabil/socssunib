#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    long long int index = 1;
    while(tc--){
        long long int n, x, count = 0; scanf("%lld %lld", &n, &x);
        long long int listangka[500];
        for(int i = 0; i < n; i++){
            scanf("%lld", &listangka[i]);
        }
        for(int i = 0; i < n ; i++){
            for(int j = i + 1; j < n ; j++){
                if(listangka[i] > listangka[j]){
                    int temp = listangka[i];
                    listangka[i] = listangka[j];
                    listangka[j] = temp;
                    count++;
                }
            }
        }
        printf("Case #%lld: %lld\n", index, count * x);
        count = 0;
        index++;
    }
}