#include <stdio.h>
#include <stdlib.h>

// 2501976503 - Fabian Habil
int n, angkarr[200];

void dfs(int index, int sum){
    if(index > n-( (n+1) / 2 ) && index <= n){
        printf("%d\n", sum);
        return;
    }
    if(index * 2 <= n) dfs(index*2, sum+angkarr[index*2]);
    if(index * 2 + 1 <= n) dfs(index*2+1, sum+angkarr[index*2+1]);
}

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &angkarr[i]);
        }
        printf("Case #%d:\n",index);
        dfs(1, angkarr[1]);
        index++;
    }
}