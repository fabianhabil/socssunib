#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil Ramdhan

typedef struct mahasiswa{
    char nama[50];
    int nilai;
}mahasiswa;

int compare(const void *a, const void *b){
    mahasiswa *A = (mahasiswa*)a;
    mahasiswa *B = (mahasiswa*)b;
    if(A->nilai == B->nilai){
        return strcmp(A->nama, B-> nama);
    }
    else return B->nilai - A-> nilai;
}

int partition(mahasiswa test[], int mulai, int akhir){
    mahasiswa temp;
    mahasiswa pivot = test[akhir];
    int i  = mulai - 1;
    for(int j = mulai; j <= akhir -1; j++){
        if(test[j].nilai >= pivot.nilai){
            i++;
            temp = test[i];
            test[i] = test[j];
            test[j] = temp;
        } 
        if (strcmp(test[j].nama, pivot.nama) < 0) {
            i++;
            temp = test[i];
            test[i] = test[j];
            test[j] = temp;
            // printf("%s %d %s %d\n", test[j].nama, test[j].nilai, pivot.nama, pivot.nilai);
		}
    }
    temp = test[i+1];
    test[i+1] = test[akhir];
    test[akhir] = temp;
    return(i + 1);
}

void quickSort(mahasiswa test[], int mulai, int akhir){
    if(mulai < akhir){
        int tengah = partition(test, mulai, akhir);
        quickSort(test, mulai, tengah - 1);
        quickSort(test, tengah + 1, akhir);
    }
}

int partitionNama(mahasiswa test[], int mulai, int akhir){
    mahasiswa temp;
    mahasiswa pivot = test[akhir];
    int i  = mulai - 1;
    for(int j = mulai; j <= akhir -1; j++){
        if(strcmp(test[j].nama, pivot.nama) < 0 && test[j].nilai <= pivot.nilai){
        	i++;
            temp = test[i];
        	test[i] = test[j];
            test[j] = temp;
        }
    }
    temp = test[i+1];
    test[i+1] = test[akhir];
    test[akhir] = temp;
    return(i + 1);
}

void quickSortNama(mahasiswa test[], int mulai, int akhir){
    if(mulai < akhir){
        int tengah = partition(test, mulai, akhir);
        quickSortNama(test, mulai, tengah - 1);
        quickSortNama(test, tengah + 1, akhir);
    }
}

int main(){
    int tc;
    scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int tc2;
        scanf("%d", &tc2);
        // printf("%d", tc2);
        mahasiswa test[1000];
        for(int i = 0; i < tc2; i++){
            scanf(" %[^#]#%d", &test[i].nama, &test[i].nilai);
        }
        // qsort(test, tc2, sizeof(mahasiswa), compare);
        quickSort(test, 0, tc2-1);
        //quickSortNama(test, 0, tc2-1);
        // quickSortNama(test, 0, tc2-1);
        for(int i  = 0; i < tc2; i++){
            printf("%s %d\n", test[i].nama,test[i].nilai);
        }
        //  char temp[50];
        //  scanf("%s", &temp);
        //  int rank = 1;
        //  for(int i = 0; i < tc2; i++){
        //      if(strcmp(temp, test[i].nama) == 0){
        //          printf("Case #%d: %d\n", index, rank);
        //          break;
        //      }
        //      else{
        //          rank++;
        //      }
        //  }
        index++;
    }
}