#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil - LB75 - UAS Algorithm and Programming (SOCS Problem B)

int main() {
    long long int x, count = 0, z;
    long long int binary[33]; memset(binary, 0, sizeof(binary));
    scanf("%lld", &x);
    for (int i = 0; x > 0; i++) {
        if (x == 0) break;
        binary[i] = x % 2;
        x = x / 2;
        count++;
    }
    for (int i = 15; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}