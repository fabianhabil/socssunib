#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

typedef struct test{
    char nama[100];
    int angka;
}test;

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        char name[100];
        int n;
        int x; scanf("%d", &x);
        test TEST[x];
        test temp;
        for(int i = 0; i < x; i++){
            getchar();
            scanf("%[^#]#%d", &name, &n); 
            strcpy(TEST[i].nama, name);
            TEST[i].angka = n;
        }
        // for(int i = 0; i < x; i++){
        //     for(int j = 0; j < x; j++){
        //         int temp = 0;
        //         char tempp[55];
        //         if(nunsorted[i] < nunsorted[j]){
        //             temp = nunsorted[i];
        //             nunsorted[i] = nunsorted[j];
        //             nunsorted[j] = temp;
        //             strcpy(tempp, listnama[i]);
        //             strcpy(listnama[i], listnama[j]);
        //             strcpy(listnama[j], tempp);
        //         }
        //             if(nunsorted[i] == nunsorted[j]){
        //                 if(strcmp(listnama[i], listnama[j]) < 0){
        //                     strcpy(tempp, listnama[i]);
        //                     strcpy(listnama[i], listnama[j]);
        //                     strcpy(listnama[j], tempp);
        //                 }
        //             }
        //     }
        // }
        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                if(TEST[i].angka < TEST[j].angka){
                    temp = TEST[i];
                    TEST[i] = TEST[j];
                    TEST[j] = temp;
                }
                if(TEST[i].angka == TEST[j].angka){
                    if(strcmp(TEST[i].nama, TEST[j].nama) < 0){
                        temp = TEST[i];
                        TEST[i] = TEST[j];
                        TEST[j] = temp;
                    }
                }
            }
        }
        printf("Case #%d:\n", index);
        for(int i = 0; i < x; i++){
            printf("%s - %d\n", TEST[i].nama, TEST[i].angka);
            // printf("%s - %d temp\n", temp.nama, temp.angka);
        }
        index++;
    }
}
