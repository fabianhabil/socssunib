#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 2501976503 - Fabian Habil

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d", &tc);
    int index = 1;
    while(tc--){
        int tc2;
        fscanf(fp, "%d", &tc2);
        int sisi[tc2];
        int jumlah = 0;
        int perimeter = 0;
        int area = 0;
        int jumlah2 = 0;
        for(int i = 0; i < tc2; i++){
            fscanf(fp, "%d", &sisi[i]);
            jumlah += sisi[i];
        }
        for(int i = 0; i < tc2; i++){
            if(i == 0){
                jumlah2 += sisi[i];
            }
            else{
                jumlah2 = jumlah2 + abs(sisi[i] - sisi[i-1]);
            }
        }
        jumlah2 += sisi[tc2 - 1];
        perimeter = (jumlah2 + (tc2 * 2)) * 2;
        area = jumlah * 4;
        printf("Case #%d: %d %d\n", index, perimeter, area);
        index++;
    }
}