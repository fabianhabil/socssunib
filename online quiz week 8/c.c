#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;   
    while(tc--){
        int listhuruf[128]; memset(listhuruf, 0, sizeof(listhuruf));
        char huruf[100001]; scanf("%s", &huruf);
        int count = 0;
        for(int i = 0; i < strlen(huruf); i++){
            if(listhuruf[huruf[i] - 97] == 0){
                listhuruf[huruf[i] - 97]++;
                count++;
            }
        }
        if(count % 2 == 0){
            printf("Case #%d: Breakable\n", index);
        }
        else{
            printf("Case #%d: Unbreakable\n",index);
        }
        index++;
    }
}