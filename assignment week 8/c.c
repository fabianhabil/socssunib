#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct code{
    char lesson[10];
    char day[10];
    int time;
};

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    struct code test[tc];
    int asd = 0;
    for(int i = 0; i < tc; i++){
        scanf(" %[^\n]", &test[i].lesson);
        scanf(" %[^\n]", &test[i].day);
        scanf("%d", &test[i].time);
    }
    int tc2; scanf("%d", &tc2);
    while(tc2--){
        int a; scanf("%d", &a);
        printf("Query #%d:\n", index);
        printf("Code: %s\n", test[a-1].lesson);
        printf("Day: %s\n", test[a-1].day);
        printf("Time: %02d:00\n", test[a-1].time);
        index++;
    }
}