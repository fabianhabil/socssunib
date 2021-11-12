#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        int angka[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &angka[i]);
        }
        int a, b; 
        scanf("%d %d", &a, &b);
        if(angka[a-1] > angka[b-1]){
            printf("Case #%d : Bibi\n", index);
        }
        else if(angka[a-1] < angka[b-1]){
            printf("Case #%d : Lili\n", index);
        }
        else{
            printf("Case #%d : Draw\n", index);
        }
        index++;
    }
}