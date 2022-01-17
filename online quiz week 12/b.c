#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil Ramdhan

int main(){
    int tc, tc2;
    // FILE *fp = fopen("testdata.in", "r");
    fscanf(stdin, "%d %d", &tc, &tc2);
    // printf("%d %d", tc, tc2);
    int angkasekarang[1500];
    memset(angkasekarang, 0, sizeof(angkasekarang));
    int scan = 0;
    for(int i  = 0; i < tc; i++){
        fscanf(stdin, "%d", &scan);
        angkasekarang[scan] = 1;
    }
    for(int i = 0; i < tc2; i++){
        fscanf(stdin, "%d", &scan);
        // printf("%d\n", scan);
        angkasekarang[scan] = 0;
    }
    int max = 0;
    for(int i = 1001; i > 0; i--){
        if(angkasekarang[i]){
            max = i;
            break;
        }
    }
    // printf("%d\n", angkasekarang[1500]);
    if(max == 0){
        printf("Maximum number is -1\n");
    }
    else{
        printf("Maximum number is %d\n", max);
    }
    // fclose(fp);
}