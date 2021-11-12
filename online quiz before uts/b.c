#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        printf("Case #%d:\n", index);
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 || i % 5 == 0){
                if(i % 15 == 0){
                    printf("%d Lili\n", i);
                }
                else{
                    printf("%d Jojo\n", i);
                }
            }
            else{
                printf("%d Lili\n", i);
            }
        }
        index++;
    }
}