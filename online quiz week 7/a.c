#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int tc = 3;
    for(int i = 0; i < tc; i++){
        int x;
        scanf("%d", &x);
        char asd[x];
        scanf("%s", asd);
        printf("%c%c\n", asd[x-1], asd[0]);
    }
}