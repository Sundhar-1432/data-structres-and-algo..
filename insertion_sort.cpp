#include <iostream>
using namespace std;
void insert(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
}
}
int main() {
    int arr[5]={
        5,4,3,2,1
    };
    insert(arr,5);
    for(int n:arr){
        cout<<n<<" ";
    }

    return 0;
}
