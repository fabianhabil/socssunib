#include <stdio.h>
#include <stdlib.h>
// 2501976503 - Fabian Habil

int main(){
    int n; scanf("%d", &n);
    int j, l, b; scanf("%d%d%d", &j, &l, &b);
    int pass = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        sum = sum + x;
    }
    pass = (sum + j + l + b) / (n + 3);
    // printf("%d %d %d %d %d %d\n", pass, sum, j, l, b, n);
    if(j >= pass) printf("Jojo lolos\n");
    if(j < pass) printf("Jojo tidak lolos\n");
    if(l >= pass) printf("Lili lolos\n");
    if(l < pass) printf("Lili tidak lolos\n");
    if(b >= pass) printf("Bibi lolos\n");
    if(b < pass) printf("Bibi tidak lolos\n");
}