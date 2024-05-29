#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,  int target){
    int start=0;
    int end=arr.size()-1;
    int mid= start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        int element =arr[mid];
        if(element==target){
            ans = mid;
            end =mid-1;
        }
        else if(element > target){
            end=mid-1;
         
        }
        else{
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }
    return ans;
}
int main(){
    vector<int> arr{1,2,4,5,6,6,6,6,6,6,12,14,16,20};
    
    int target =6;

    int ans = binarySearch(arr,target);
   
        cout<<ans<<endl;
}