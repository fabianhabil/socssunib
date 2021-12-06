#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    int sum = 0;
    while(tc--){
        int size; scanf("%d", &size);
        int angka[size][size];
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                scanf("%d", &angka[i][j]);
            }
        }
        printf("Case #%d: ", index);
        for(int i = 0; i < size; i++){
            sum = 0;
            for(int j = 0; j < size; j++){
                sum = sum + angka[j][i];
            }
            if(i == size-1) printf("%d\n", sum);
            else printf("%d ", sum);
        }
        index++;
    }
}