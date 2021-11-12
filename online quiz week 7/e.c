#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        long long int x; scanf("%lld", &x);
        long long int count = 0;
        for(int i = 1; i*i<=x; i++){
        if(x % i == 0){
            if(i*i != x){
                count += 2;
            }
            else count++;
            }
        }
        printf("Case #%d: %lld\n", index, count);
        index++;
    }
}