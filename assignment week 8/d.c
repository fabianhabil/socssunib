#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct asdf{
    char id[10];
    char nama[20];
    long long int harga;
};

int main(){
    int tc; scanf("%d", &tc);
    struct asdf test[tc];
    for(int i = 0; i < tc; i++){
        scanf(" %[^\n]", &test[i].id);
        scanf(" %[^\n]", &test[i].nama);
        scanf("%lld", &test[i].harga);
    }
    long long int median = test[(tc/2)].harga;
    for(int i = 0; i < tc; i ++){
        if(median <= test[i].harga){
            printf("%s %s\n", test[i].id, test[i].nama);
        }
    }
}