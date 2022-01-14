#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d", &tc);
    while(tc--){
        int alfabet[26];
        int berubah[26];
        char input[105];
        char a, b;
        int tc2;
        memset(berubah, 0, sizeof(alfabet));
        memset(alfabet, 0, sizeof(alfabet));
        fscanf(fp, " %[^\n]", &input);
        // printf("%s\n", input);
        fscanf(fp, "%d\n", &tc2);
        // printf("%d\n", tc2);
        for(int i = 0; i < tc2; i++){
            fscanf(fp, "%c %c\n", &a, &b);
            // printf("%c %c\n", a, b);
            if(berubah[a-65]){
                continue;
            }
            for(int j = 0; j < strlen(input); j++){
                if(input[j] == a){
                    input[j] = b;
                }
            }
            berubah[a-65] = 1;
        }
        // printf("%s\n", input);
        for(int i = 0; i < strlen(input); i++){
            alfabet[input[i] - 65]++;
        }
        for(int i = 0; i < 26; i++){
            if(alfabet[i]){
                printf("%c %d\n", i + 65, alfabet[i]);
            }
        }
        // for(int i = 0; i < 26; i++){
        //     printf("%c : %d index berubah\n", i + 65, berubah[i]);
        //     printf("%c : %d alfabet\n", i + 65, alfabet[i]);
        // }
        memset(berubah, 0, sizeof(alfabet));
        memset(alfabet, 0, sizeof(alfabet));
        // printf("%s\n", input);
    }
}
