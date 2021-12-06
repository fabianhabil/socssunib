#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        char input[1000]; scanf("%s", &input);
        printf("Case #%d: ", index);
        for(int i = (strlen(input)) - 1; i >= 0; i--){
            if(input[i] >= 97 && input[i] <= 122){
                printf("%c", input[i] - 32);
            }
            if(input[i] >= 65 && input[i] <= 90){
                printf("%c", input[i] + 32);
            }
        }
        printf("\n");
        index++;
    }
}