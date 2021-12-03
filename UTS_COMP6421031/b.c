#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 2501976503 - Fabian Habil - LB75 - UTS Algorithm and Programming (SOCS Problem B)

int main(){
    long long int input; scanf("%lld", &input);
    double hasil = 0;
    int count = 0;
    if(input == 0){
        printf("Error\n");
    }
    else{
        hasil += input;
        count++;
        while(1){
            scanf("%lld", &input);
            if(input == 0){
                break;
            }
            else{
                hasil += input;
                count++;
            }
        }
        printf("%.1lf\n", hasil / count);
    }
}