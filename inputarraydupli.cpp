#include<iostream>
using namespace std;

int main(){
    // taking size of the array
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    //declaring the array
    int arr[n];

    //initializing duplicates element
    int dupli=0;

    //taking the input elements in the array
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Finding the duplicates
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                dupli=arr[i];
            }
        }
    }

    cout<<dupli<<" is the duplicate element"<<endl;
    return 0;
   
}