/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
* Modul : 3 - Structures and Dynamic Arrays
* Hari dan Tanggal : Senin, 27 April 2026
* Nama File : 
* Pembuat : Joachim (13224034)
* Deskripsi: 
*/

#include <stdio.h>
#include <stdlib.h>

int count(int* arr, int arr_size){
    int count = 0;
    for (int i = 0; i < arr_size; ++i) {
        count++;
    }
    return count;
}

int sort(int* arr, int arr_size){
    int n = arr_size;
    for (int i = 0;i < n-1; i++){
        for(int j = 0; j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

float mediangenap(int* arr, int arr_size){
    float hasil;
    int n = arr_size;

    hasil = (arr[n/2]+ arr[(n/2) + 1])/2 ;

    return hasil;
}

int medianganjil(int* arr, int arr_size){
    int hasil;
    int n = arr_size;
    hasil = arr[n/2];

    return hasil;
}

int main(){
    int* arr = NULL;
    int arr_size = 0;
    int temp;

    scanf("%d", &temp);
    while (temp != -1){
        ++arr_size;
        if (arr_size == 1) {
            arr = (int*) malloc(sizeof(int));
        } else {
            arr = (int*) realloc(arr, arr_size * sizeof(int));
        }
        arr[arr_size - 1] = temp;
        scanf("%d", &temp);

    }

    printf("COUNT %d",count(arr, arr_size) );
    printf("SORTED "); sort(arr, arr_size);
    for (int j = 0; j< arr_size; j++){
        printf("%d ", arr[j]);
    }
    if (arr_size % 2 == 0){
        printf("MEDIAN %.2f", mediangenap(arr, arr_size));
    }
    if (arr_size % 2 != 0){
        printf("MEDIAN %d", medianganjil(arr, arr_size));
    }


    free(arr);

}
