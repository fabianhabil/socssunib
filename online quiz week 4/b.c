#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    while(tc--){
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", (a/b) << b);
    }
}