#include <stdio.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int a, b; scanf("%d %d", &a, &b);
        while(1){
            if(a == b){
                printf("Case #%d: YES\n", index);
                break;
            }
            else{
                if(a == 1){
                    if(b == 1){
                        printf("Case #%d: YES\n", index);
                        break;
                    }
                    else{
                        printf("Case #%d: NO\n", index);
                        break;
                    }
                }
                else{
                    if(a % 2 == 0){
                        a = a / 2;
                    }
                    else{
                        a = (a * 3) + 1;
                    }
                }
            }
        }
        index++;
    }
}