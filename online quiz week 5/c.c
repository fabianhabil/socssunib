#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int price[tc];
    for(int i = 0; i < tc; i++){
        scanf("%d", &price[i]);
    }
    int revisi; scanf("%d", &revisi);
    int c, b;
    for(int j = 0; j < revisi; j++){
        scanf("%d%d", &c, &b);
        price[c-1] = b;
        printf("Case #%d: ", j+1);
        for(int k = 0; k < tc; k++){
            if(k == tc-1){
            printf("%d\n", price[k]);
            }
            else{
                printf("%d ", price[k]);
            }
        }
    }
}