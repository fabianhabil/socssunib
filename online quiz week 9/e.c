#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil Ramdhan

int a, b;
int visited[103][103]; 
int count = 0;
char map[103][103];

void dfs(int x, int y){
    if(visited[x][y] == 1 || map[x][y] == '#' || x < 0 || y < 0 || x >= a || y >= b){
        // printf("%d %d\n", x, y);
        return;
    }
    if(map[x][y] == '*'){
        count++;
        // printf("kena bos");
    }
    // for(int i = 0; i < a; i++){
    //     printf("%s\n", &map[i]);
    // }
    // printf("%d %d sekarang \n", x, y);
    visited[x][y] = 1;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}


int main(){
    int tc; scanf("%d", &tc);
    memset(visited, 0, sizeof(visited));    
    int index = 1;
    while(tc--){
        scanf("%d %d", &a, &b);
        map[a][b];
        for(int i = 0; i < a; i++){
            scanf(" %[^\n]", &map[i]);
        }
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(map[i][j] == 'P'){
                    int x = i, y = j;
                    dfs(x , y);
                }
            }
        }
        printf("Case #%d: %d\n", index, count);
        index++;
        memset(visited, 0, sizeof(visited));
        count = 0;
    }
}