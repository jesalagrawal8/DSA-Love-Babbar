#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,  int target){
    int start=0;
    int end=arr.size()-1;
    int mid= start + (end-start)/2;
    while(start<=end){
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid-1]>=0 && arr[mid-1]==target){
        return mid-1;
    }
    if(arr[mid+1]<=arr.size() && arr[mid+1] == target){
        return mid+1;
    }
    
    if(target > arr[mid]){
    start = mid+2;
    }
    else{
        end=mid-2;
    }
    mid= start + (end-start)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target=10;

    int ans = binarySearch(arr , target);
    cout<<" index of " << target << " is "<< ans;

}