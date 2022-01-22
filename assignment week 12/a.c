#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil Ramdhan

int main(){
    int tc, tc2; 
    scanf("%d %d", &tc, &tc2);
    int angkalist[100010];
    int angkanyari[tc2];
    memset(angkalist, 0, sizeof(angkalist));
    for(int i = 1; i <= tc; i++){
        int temp;
        scanf("%d", &temp);
        if(angkalist[temp]){
            continue;
        }
        else{
            angkalist[temp] = i;
        }
    }
    for(int i = 0; i < tc2; i++){
        int temp;
        scanf("%d", &temp);
        if(angkalist[temp]){
            printf("%d\n", angkalist[temp]);
        }
        else{
            printf("%d\n", -1);
        }
        // printf("%d\n", angkalist[temp]);
    }
}