#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter how manu numbers you want as input : ";
    cin>>n;
    int arr[n];
cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
int i=0;
    while(i!=n){
        if(i>=1 && arr[i-1]>arr[i]){
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
            i--;
        }
        else{
            i++;
        }
    }
    cout<<"Sorted :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}