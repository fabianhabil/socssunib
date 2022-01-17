#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil Ramdhan

int main() {
    int tc;
    scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int tc2; scanf("%d", &tc2);
        int listmmr[10000];
        int max = 0;
        memset(listmmr, 0, sizeof(listmmr));
        for(int i = 0; i < tc2; i++){
            int temp;
            scanf("%d", &temp);
            listmmr[temp] = 1;
            if(max < temp) max = temp;
        }
        int nanya;
        scanf("%d", &nanya);
        if(listmmr[nanya] == 0){
            printf("CASE #%d: -1 -1\n", index);
        }
        else{
            if(max == nanya){
                int temp;
                for(int i = max - 1 ; i > 0; i--){
                    if(listmmr[i]){
                        temp = i;
                        break;
                    }
                }
                printf("CASE #%d: %d %d\n", index, temp, max);
            }
            else{
                int temp;
                for(int i = nanya + 1; i < 10000; i++){
                    if(listmmr[i]){
                        temp = i;
                        break;
                    }
                }
                printf("CASE #%d: %d %d\n", index, nanya, temp);
            }
        }
        index++;
    }
}