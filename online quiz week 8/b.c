#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        

int angkalist[1000001];
int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int t; scanf("%d", &t);
        int count = 0;
        int listangka[t];
        memset(angkalist, 0, sizeof(angkalist));
        for(int i = 0; i < t; i++){
            scanf("%d", &listangka[i]);
            angkalist[listangka[i]]++;
        }
        for(int i = 0; i < 1000001; i++){
            if(angkalist[i] > 0){
                count++;
            }
        }
        printf("Case #%d: %d\n", index, count);
        index++;
    }
}