
//Operations of abstract data types

#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){

    for(int i=0;i<n;i++){

        printf(" element of array= %d\n",arr[i]);
    }

}

int main(){

    int arr[]={1,2,3,4,5,6};

    display(arr,6);

    printf(" maximum element from this array %d ", max(arr));

}