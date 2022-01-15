#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

typedef struct makanan{
    char namamakanan[100];
    int product;
}makanan;

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    int index = 1;  
    while(tc--){
        makanan test[120];
        int tc2;
        fscanf(fp, "%d\n", &tc2);
        // printf("%d\n", tc2);
        printf("Case #%d:\n", index);
        char operation[100];
        int ada = 0, adaberapa = 0;
        for(int i = 0; i < tc2; i++){
            char temporarymakanan[100];
            int ada = 0, j, temporarymany;
            fscanf(fp, "%[^#]#%[^#]#%d\n", &operation, &temporarymakanan, &temporarymany);
            for(j = 0; j < adaberapa; j++){
                if(strcmp(temporarymakanan, test[j].namamakanan) == 0){
                    ada = 1;
                    break;
                }
            }
            if(!ada){
                strcpy(test[adaberapa].namamakanan, temporarymakanan);
                if(operation[0] == 's'){
                    test[adaberapa].product = -temporarymany;
                }
                else{
                    test[adaberapa].product = temporarymany;
                }
                adaberapa++;
            }
            else{
                if(operation[0] == 's'){
                    test[j].product -= temporarymany;
                }
                else{
                    test[j].product += temporarymany;
                }
            }
        }
        int gakcukup = 0;
        // printf("%d\n", adaberapa);
        for(int i = 0; i < adaberapa; i++){
            if(test[i].product < 0){
                printf("stock is not enough for product %s\n", test[i].namamakanan);
                gakcukup = 1;
            }
        }
        if(!gakcukup){
            for(int i = 0; i < adaberapa; i++){
                printf("%s - %d\n", test[i].namamakanan, test[i].product);
            }
        }
        index++;
    }
}