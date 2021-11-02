#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        int a, b; scanf("%d %d", &a, &b);
        printf("Case #%d: ", i);
        if(a > b) printf("Go-Jo\n");
        else printf("Bi-Pay\n");
    }
}