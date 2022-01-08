#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

typedef struct youtube{
    char judul[1005];
    char artist[1005];
    int views;
}test;

int main(){
    test youtube[100];
    test temp;
    int n = 0;
    FILE *fp;
    fp = fopen("testdata.in", "r");
    while(!feof(fp)){
        fscanf(fp, "%[^#]#%[^#]#%d\n", &youtube[n].judul, &youtube[n].artist, &youtube[n].views);
        n++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(youtube[i].views > youtube[j].views){
                temp = youtube[i];
                youtube[i] = youtube[j];
                youtube[j] = temp;
            }
            if(youtube[i].views == youtube[j].views){
                if(strcmp(youtube[i].judul, youtube[j].judul) < 0){
                    temp = youtube[i];
                    youtube[i] = youtube[j];
                    youtube[j] = temp;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s by %s - %d\n", youtube[i].judul, youtube[i].artist, youtube[i].views);
    }
}