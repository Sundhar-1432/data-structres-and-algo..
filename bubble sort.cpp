#include <iostream>
using namespace std;
#include<algorithm>

int bubble_sort(int arr[],int n){
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<=j-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    return 0;
}
int main() {
    int n;
    cout<<"enter your size:";
    cin>>n;
    int arr[n];
    cout<<"enter your array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"after bubble sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
