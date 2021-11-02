#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil Ramdhan
int main(){
    int tc; scanf("%d", &tc);
    int baris;
    int index = 1;
    while(tc--){
    scanf("%d", &baris);
        printf("Case #%d:\n", index);
        for(int i=1; i<=baris; i++){
            for(int j = 1; j <= baris; j++){
                if(j <= baris - i) printf(" ");
                else{
                    if((i + j) % 2 == 0){
                        printf("*");
                }
                    else printf("#");
                }
            }
        printf("\n");
        }
        index++;
    }
}