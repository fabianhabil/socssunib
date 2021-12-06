#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        if((a + b) > c){
            if((a+c) > b){
                if((b+c) > a){
                    printf("Case #%d: Yes\n", index);
                }
                else{
                    printf("Case #%d: No\n", index);
                }
            }
            else{
            printf("Case #%d: No\n", index);
            }
        }
        else{
            printf("Case #%d: No\n", index);
        }
        index++;
    }
}