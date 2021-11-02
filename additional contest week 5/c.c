#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int views[tc];
    for(int i = 0; i < tc; i++){
        scanf("%d", &views[i]);
    }
    int tc2; scanf("%d", &tc2);
    int index = 1;
    while(tc2--){
        int a, b; scanf("%d%d", &a, &b);
        int sum = 0;
        for(int i = a-1; i <= b-1; i++){
            sum = sum + views[i];
        }
        printf("Case #%d: %d\n", index, sum);
        index++;
    }
}