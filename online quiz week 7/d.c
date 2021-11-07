#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, m; scanf("%d %d", &n, &m);
    char karakter[n];
    scanf("%s", karakter);
    for(int i = 0; i < m; i++){
        int a; scanf("%d", &a);
        if(karakter[a] >= 'A' && karakter[a] <= 'Z'){
            karakter[a] = karakter[a] + 32;
        }
        else if(karakter[a] >= 'a' && karakter[a] <= 'z'){
            karakter[a] = karakter[a] - 32;
        }
    }
    printf("%s", karakter);
    printf("\n");
}