#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; 
        char a[5], b[5];
        char temp[16][10001], input[16][10001];
        scanf("%d %s %s", &n, &input[0], &input[1]); 
        getchar();
        for(int i = 2; i <= n; i++){
            strcpy(temp[0], input[i-1]);
            strcat(temp[0], input[i-2]);
            strcpy(input[i], temp[0]);
        }
        printf("Case #%d: %s\n", index, input[n]);
        index++;
    }
}