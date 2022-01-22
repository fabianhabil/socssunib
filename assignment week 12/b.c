#include <stdio.h>
#include <stdlib.h>

// 2501976503 - Fabian H

long long int hitung(long long int x){
    return (x * (x+1) * (2*x+1) / 6);
}

long long int binarySearch(long long int x, long long int low, long long int high){
    long long int mid;
    long long int res;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(hitung(mid) > x){
            res = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return res;
}

int main(){
    long long int test;
    int tc;
    scanf("%d", &tc);
    int index = 1;
    while(tc--){
        scanf("%lld", &test);
        printf("Case #%d: ",index);
        printf("%lld\n", binarySearch(test, 0, 1442300));
        index++;
    }
}