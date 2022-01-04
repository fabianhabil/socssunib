#include <stdio.h>
#include <stdlib.h>

int* test(){
    static int x[4];
    for(int i = 0; i < 4; i++){
        x[i] = i%2;
    }
    return x;
}

int main(){
    int *arr = test();
    for(int i  = 0 ; i < 4; i++){
        printf("%d\n", *(arr+i));
    }
}