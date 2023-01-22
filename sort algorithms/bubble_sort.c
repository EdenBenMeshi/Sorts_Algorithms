#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void printArray(int* array, int n);
int* createArray(int n);
int* bubbleSort(int *array,int n);
void swap(int *a, int* b);

int main(){
    int n, i;
    int *array;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    array = createArray(n);
    printArray(array,n);
    array = bubbleSort(array,n);
    printArray(array,n);
    free(array);
    return 0;
}

int* bubbleSort(int *array,int n){
    int i,j;
    bool swapped = false;
    for(i=n;i>0;i--){
        swapped = false
        for(j=1;j<i;j++){
            if ( (array[j-1]) > (array[j]) ){
                swap(&array[j-1],&array[j]);
                swapped true;
            }
        }
        if (!swapped) break;
    }
    return array;
}

void swap(int *a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int* createArray(int n){
    int i;
    int *array = (int*)calloc(n, sizeof(int));
    printf("Enter values into the array: \n");
    for( i=0 ; i < n ; i++ ) {
      scanf("%d",&array[i]);
    }
    return array;
}

void printArray(int* array, int n){
    printf("[");
    for(int i=0; i<n; i++){
        printf("%d",array[i]);
        if(i == n-1) {
            break;
        }
        printf(",");
    }
    printf("]");
}