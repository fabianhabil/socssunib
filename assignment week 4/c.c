#include <stdlib.h>
#include <stdio.h>

int main(){
    double a, b, c, d;
    for(int i = 0; i < 3; i++){
        double sum = 0;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        sum = sum + ((a/1) * 2);
        sum = sum + ((b/2) * 4);
        sum = sum + ((c/3) * 6);
        sum = sum + ((d/4) * 4);
        printf("%.2lf\n", sum);
    }
}