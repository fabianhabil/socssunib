#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int step = 0;
int visited[8][8];

int conv(char ch){
	switch (ch) {
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		case 'E':
			return 4;
		case 'F':
			return 5;
		case 'G':
			return 6;
		case 'H':
			return 7;
		case '1':
			return 7;
		case '2':
			return 6;
		case '3':
			return 5;
		case '4':
			return 4;
		case '5':
			return 3;
		case '6':
			return 2;
		case '7':
			return 1;
		case '8':
			return 0;	
	}
}

void dfs(int x, int y, int step){
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        return;
    }
    if(step < visited[x][y]){
        visited[x][y] = step;
    }
    else return;
    dfs(x+2, y+1, step+1);
    dfs(x+2, y-1, step+1);
    dfs(x+1, y+2, step+1);
    dfs(x+1, y-2, step+1);
    dfs(x-2, y+1, step+1);
    dfs(x-2, y-1, step+1);
    dfs(x-1, y+2, step+1);
    dfs(x-1, y-2, step+1);
}

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    char inputX, inputY, destX, destY;
    int inputXI, inputYI, destXI, destYI;
    while(tc--){
        getchar();
        scanf("%c%c %c%c", &inputX, &inputY, &destX, &destY);
        inputXI = conv(inputX);
        inputYI = conv(inputY);
        destXI = conv(destX);
        destYI = conv(destY);

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                visited[i][j] = 1000000000;
            }
        }
        dfs(inputXI, inputYI, step);
        printf("Case #%d: %d\n", index, visited[destXI][destYI]);
        step = 0;
        index++;
    }
}