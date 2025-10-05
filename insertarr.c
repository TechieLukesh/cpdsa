#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array.\n");
    scanf("%d",&n);
    //declaring the array
    int arr[n+1];
    printf("Enter the elements of the array.\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int ele;
    printf("Enter an alement to insert.\n");
    scanf("%d",&ele);
    int i;
    for(i=n-1; i>0&&arr[i]>ele; i--){
          arr[i+1]=arr[i];  
        }
   
    arr[i+1]=ele;
    for(int i=0; i<=n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}