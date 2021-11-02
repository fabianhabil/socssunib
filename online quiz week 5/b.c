#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int input[tc];
    int output[tc];
    for(int k = 0; k < tc; k++){
        scanf("%d", &input[k]);
    }
    for(int i = 0; i < tc; i++){
        scanf("%d", &output[input[i]]);
    }
    for(int j = 0; j < tc; j++){
        if(j == tc-1){
        printf("%d\n", output[j]);    
        }
        else{
        printf("%d ", output[j]);
        }
    }
}