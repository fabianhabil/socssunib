#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//  2501976503 - Fabian Habil

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int tc; 
    fscanf(fp, "%d", &tc);
    int index = 1;
    while(tc--){
        int ascii;
        fscanf(fp, "%d", &ascii);
        // printf("%d\n", ascii);
        char input[1010];
        fscanf(fp, " %[^\n]", &input);
        // printf("%s\n", input);
        for(int i = 0; i < strlen(input); i++){
            if(input[i] == '0'){
                input[i] = 'O';
            }
            else if(input[i] == '1'){
                input[i] = 'I';
            }
            else if(input[i] == '3'){
                input[i] = 'E';
            }
            else if(input[i] == '4'){
                input[i] = 'A';
            }
            else if(input[i] == '5'){
                input[i] = 'S';
            }
            else if(input[i] == '6'){
                input[i] = 'G';
            }
            else if(input[i] == '7'){
                input[i] = 'T';
            }
            else if(input[i] == '8'){
                input[i] = 'B';
            }
            else if(input[i] == 32){
                continue;
            }
        }
        for(int i = 0; i < strlen(input); i++){
            if(input[i] == 32){
                continue;
            }
            else{
                if(input[i] - ascii < 65){
                    int temp = 90 - ((ascii - (input[i] - 64)));
                    // printf("%d\n", temp);
                    input[i] = temp;

                }
                else{
                    input[i] = input[i] - ascii;
                }
            }
        }
        printf("Case #%d: %s\n", index, input);
        index++;
    }
}