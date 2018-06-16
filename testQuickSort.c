#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int n;
int* arr;
void pirntArray() {
    int i;
    for(i = 0;i < n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

int partition(int LB, int UB, int A) {
    int UP = LB -1;
    int DOWN = UB;

    while(true) {
        while(arr[++UP] < A);
        while(DOWN > 0 && arr[--DOWN] > A);
        if(UP >= DOWN) {
            break;
        }
        else {
            swap(UP,DOWN);
        }
    }
    swap(UP,UB);
    pirntArray();
    return UP;
}


void quickSort(int LB, int UB) {
    if(UB-LB <= 0) {
        return;   
    }
    else {
        int a = (UB+LB)/2; //taking the mean value as pivot.
        swap(a,UB); //take the pivot to end of the array.
        int A = arr[UB];
        int pp = partition(LB, UB, A);
        quickSort(LB,pp-1);
        quickSort(pp+1,UB);
   }        
}

int main() {
    int i;
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int[n]));
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    quickSort(0,n-1);
    pirntArray();
}