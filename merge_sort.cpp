using namespace std;
#include <iostream>
#include <vector>

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    
    while(left<=mid&&right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }
    
    while(left<=mid){
         temp.push_back(arr[left++]);
    }
     while(right<=high){
         temp.push_back(arr[right++]);
    }
    
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void merge_sort(vector<int>&arr,int low,int high){
    if(low==high)return ;
    int mid=(low+high)/2;
    
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    vector<int>nums={1,4,3,2,5,6,9,8,7,6,5,4};
    merge_sort(nums,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
