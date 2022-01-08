#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    int baris, huruf;
    scanf("%d%d", &baris, &huruf);
    char test[250][250], tempp[250];
    for(int i = 0; i < baris; i++){
        scanf(" %[^\n]", test[i]);
    }
    for(int i = 0; i < baris; i++){
        char temp;
        for(int j = 0; j < huruf; j++){
            for(int k = j+1; k < huruf; k++){
                if(test[i][j] > test[i][k]){
                    temp = test[i][j];
                    test[i][j] = test[i][k];
                    test[i][k] = temp;
                }
            }
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = i + 1; j < baris; j++){
            if(strcmp(test[i], test[j]) < 0){
                strcpy(tempp, test[i]);
                strcpy(test[i], test[j]);
                strcpy(test[j], tempp);
            }
        }
    }
    for(int i = 0; i < baris; i++){
        printf("%s\n", test[i]);
    }
}