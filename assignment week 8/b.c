#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int tc; scanf("%d", &tc);
    long long int hasil = 0;
    while(tc--){
        int a; scanf("%d", &a);
        if(a >= 0){
            hasil = hasil + a;
        }
    }
    printf("%lld\n", hasil);
}