#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    long long int x;
    char matkullist[tc][15];
    long long int xlist[tc];
    for(int i = 0; i < tc; i++){
        getchar();
        scanf("%s %lld", &matkullist[i], &xlist[i]);

    }

    for(int i = 0; i < tc; i++){
        for(int j = 0 ; j < tc; j++){
            int temp = 0;
            char tempp[15];
            if(xlist[i] < xlist[j]){
                temp = xlist[i];
                xlist[i] = xlist[j];
                xlist[j] = temp;
                strcpy(tempp, matkullist[i]);
                strcpy(matkullist[i], matkullist[j]);
                strcpy(matkullist[j], tempp);
            }
            if(xlist[i] == xlist[j]){
                if(strcmp(matkullist[i], matkullist[j]) < 0){
                    strcpy(tempp, matkullist[i]);
                    strcpy(matkullist[i], matkullist[j]);
                    strcpy(matkullist[j], tempp); 
                }
            }
        }
    }

    for(int i = 0; i < tc; i++){
        printf("%s\n", matkullist[i]);
    }
}