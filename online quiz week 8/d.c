#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long int faktor(long long int x){
    long long int count = 0;
    for(int i = 1; i <= sqrt(x); i++){
        if(x % i == 0){
            if(i * i != x){
                count += 2;
            }
            else count++;
        }
    }
    return count;
}

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        long long int x; scanf("%lld", &x);
        printf("Case #%d: %lld\n", index, faktor(x));
        index++;
    }
}