#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t; scanf("%d", &t);
    int index = 1;
    while(t--){
        char karakter[1001];
        scanf("%s", karakter);
        printf("Case %d: ", index);
        for(int i = strlen(karakter) - 1; i >= 0; i--){
            printf("%d", karakter[i] % 2);
        }
        printf("\n");
        index++;
    }
}