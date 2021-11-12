#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[10001];
    scanf(" %[^\n]", s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'I' || s[i] == 'i'){
            s[i] = '1';
        }
        else if(s[i] == 'R' || s[i] == 'r'){
            s[i] = '2';
        }
        else if(s[i] == 'E' || s[i] == 'e'){
            s[i] = '3';
        }
        else if(s[i] == 'A' || s[i] == 'a'){
            s[i] = '4';
        }
        else if(s[i] == 'S' || s[i] == 's'){
            s[i] = '5';
        }
        else if(s[i] == 'G' || s[i] == 'g'){
            s[i] = '6';
        }
        else if(s[i] == 'T' || s[i] == 't'){
            s[i] = '7';
        }
        else if(s[i] == 'B' || s[i] == 'b'){
            s[i] = '8';
        }
        else if(s[i] == 'P' || s[i] == 'p'){
            s[i] = '9';
        }
        else if(s[i] == 'O' || s[i] == 'o'){
            s[i] = '0';
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    printf("%s\n", s);
}