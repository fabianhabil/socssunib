#include <stdio.h>
#include <stdlib.h>

//  2501976503 - Fabian Habil Ramdhan

int count = 0;

int fib(int n){
    if(n <= 1){
        count++;
        return n;
    }
    count++;
    return fib(n-1) + fib(n-2);
}

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n;
        scanf("%d", &n); fib(n);
        printf("Case #%d: %d\n", index, count);
        count = 0;
        index++;
    }
}