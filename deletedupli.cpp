#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,2,5,4,5,10,4,11,4,12};
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}

