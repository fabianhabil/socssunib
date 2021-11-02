#include <stdio.h>
#include <stdlib.h>

int main() {
    int t; scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n; scanf("%d", &n);
        long long int a = 0, b = n - 1;
        
        for (long long int j = 0; j < n; j++) {
            for (long long int k = 0; k < n; k++)    
                if (j == 0 || j == n - 1) {
                    printf("*");
                } else {
                    if (k == a || k == b || k == 0 || k == n - 1) {
                        printf("*");
                    } else {     
                        printf(" ");
                    }
                }
                a++;
                b--;
                printf("\n");
            }
        printf("\n");
    }
    
    return 0;
}