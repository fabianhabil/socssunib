#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; scanf("%d", &n);
    for(int j = 1; j <= n; j++){
        char s[1001];
        scanf("%s", &s);
        // printf("%d", strlen(s));
        printf("Case %d: ", j);
        for(int i = 0; i < strlen(s); i++){
                if(i == strlen(s)-1){
                    printf("%d\n", s[i]);
                }
                else{
                printf("%d-", s[i]);
                }
        }
    }
}