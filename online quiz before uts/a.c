#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int itung(int a, int b){
    int hasil = 0;
    int kelipatan = 1;
    int digithasil = 0;
    while(a > 0 || b > 0){
        digithasil = (a % 10) + (b % 10);
        digithasil = digithasil % 10;
        hasil = (digithasil * kelipatan) + hasil;
        a = a / 10;
        b = b / 10;
        kelipatan = kelipatan * 10;
    }
    return hasil;
}

int main(){
    int n; scanf("%d", &n);
    int index = 1;
    while(n--){
        int a, b; scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", index, itung(a,b));
        index++;
    }
}