#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

int main(){
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        char name[55];
        int n;
        int x; scanf("%d", &x);
        char listnama[55][55];
        int nunsorted[55];
        for(int i = 0; i < x; i++){
            getchar();
            scanf("%[^#]#%d", &name, &n); 
            strcpy(listnama[i], name);
            nunsorted[i] = n;
        }
        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                int temp = 0;
                char tempp[55];
                if(nunsorted[i] > nunsorted[j]){
                    temp = nunsorted[i];
                    nunsorted[i] = nunsorted[j];
                    nunsorted[j] = temp;
                    strcpy(tempp, listnama[i]);
                    strcpy(listnama[i], listnama[j]);
                    strcpy(listnama[j], tempp);
                }
                    if(nunsorted[i] == nunsorted[j]){
                        if(strcmp(listnama[i], listnama[j]) < 0){
                            strcpy(tempp, listnama[i]);
                            strcpy(listnama[i], listnama[j]);
                            strcpy(listnama[j], tempp);
                        }
                    }
            }
        }
        printf("Case #%d:\n", index);
        for(int i = 0; i < x; i++){
            printf("%s - %d\n", listnama[i], nunsorted[i]);   
        }
        index++;
    }
}
