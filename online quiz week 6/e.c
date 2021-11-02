#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        char s[1001]; 
        scanf("%s", &s); getchar();
        printf("Case #%d : ", i);
        for(int j = strlen(s)-1; j >= 0; j--){
            if(j == 0){
                printf("%c\n", s[j]);
            }
            else{
                printf("%c", s[j]);
            }
        }
    }
}