#include <stdio.h>
#include <stdlib.h>

// 2501976503 - Fabian Habil

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int a, b;
    fscanf(fp, "%d %d", &a, &b);
    printf("%d\n", a+b);
}