#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2501976503 - Fabian Habil

typedef struct city{
    char city[1020];
    double temperature;
    char typetemperature[3];
}city;

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");

    city input[100];
    char city[1020];
    double temperature;
    char typetemperature[3];
    int count = 0;
    while(fscanf(file, " %[^#]#%lf#%s", &city, &temperature, &typetemperature) != EOF){
        strcpy(input[count].city, city);
        input[count].temperature = temperature;
        strcpy(input[count].typetemperature, typetemperature);
        count++;
    }
    
    for(int i = 0; i < count; i++){
        if(strcmp(input[i].typetemperature, "C") == 0){
            input[i].temperature = (input[i].temperature * 9 / 5) + 32;
        }
    }

    for(int i = 0; i < count; i++){
        for(int j = 0; j < count; j++){
            double temp = 0;
            char tempp[1020];
            char temppp[1020];
            if(input[i].temperature < input[j].temperature){
                temp = input[i].temperature;
                input[i].temperature = input[j].temperature;
                input[j].temperature = temp;
                strcpy(tempp, input[i].city);
                strcpy(input[i].city, input[j].city);
                strcpy(input[j].city, tempp);
                strcpy(temppp, input[i].typetemperature);
                strcpy(input[i].typetemperature, input[j].typetemperature);
                strcpy(input[j].typetemperature, temppp);
            }
            if(input[i].temperature == input[j].temperature){
                if((input[i].city, input[j].city) > 0){
                    strcpy(tempp, input[i].city);
                    strcpy(input[i].city, input[j].city);
                    strcpy(input[j].city, tempp);
                    strcpy(temppp, input[i].typetemperature);
                    strcpy(input[i].typetemperature, input[j].typetemperature);
                    strcpy(input[j].typetemperature, temppp);
                }
            }
        }
    }

    for(int i = 0; i < count; i++){
        if(strcmp(input[i].typetemperature, "C") == 0){
            input[i].temperature = (input[i].temperature - 32) * 5 / 9;
        }
    }

    for(int i = 0; i < count; i++){
        printf("%s is %.2lf%s\n", input[i].city, input[i].temperature, input[i].typetemperature);
    }
    fclose(file);
}