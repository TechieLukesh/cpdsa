#include<stdio.h>
#include<stdlib.h>

void selectionSort(int n, int arr[n]){
for(int i=0; i<n-1; i++){
    int min=i;
    for(int j=i+1; j<n; j++){
        if(arr[min]>arr[j]){
         min=j;
        }
    }

    if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}
for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
}
printf("\n");
}

int main(){
    int n;
    printf("Enter the size of the array.\n");
    scanf("%d",&n);

    //declaring the array
    int arr[n];

    //taking the input of the array 

    printf("Enter the elements of the array.\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    selectionSort(n,arr);
    return 0;
}