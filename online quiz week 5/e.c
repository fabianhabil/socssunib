#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2501976503 - Fabian Habil Ramdhan

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        int angkainput[n];
        int angkalist[200001]; memset(angkalist, 0, sizeof(angkalist));
        int angkaoutput[200001]; memset(angkaoutput, 0, sizeof(angkaoutput));
        for(int i = 0; i < n; i++){
            scanf("%d", &angkainput[i]);
            angkalist[angkainput[i]]++;
        }
        int max = 0;
        for(int i = 0; i < 200001; i++){
            if(angkalist[i] > max){
                max = angkalist[i];
            }
        }
        int count = 0;
        for(int i = 0; i < 200001; i++){
            if(angkalist[i] == max){
                angkaoutput[count] = i;
                count++;
            }
        }
        // for(int i = 0; i < count; i++){
        //     printf("%d", angkaoutput[i]);
        // }
        printf("Case #%d: %d\n", index, max);
        index++;
        for(int i = 0; i < count-1; i++){
            printf("%d ", angkaoutput[i]);
        }
        printf("%d\n", angkaoutput[count-1]);
    }
}   