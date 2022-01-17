#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    int tc;
    scanf("%d", &tc);
    int scan;
    int easy = 0;
    for(int i = 0 ; i < tc; i++){
        scanf("%d", &scan);
        if(scan == 1){
            easy = 1;
        }
    }
    if(easy != 1){
        printf("easy\n");
    }
    else{
        printf("not easy\n");
    }
}