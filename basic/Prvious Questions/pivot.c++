#include<bits/stdc++.h>
using namespace std;
int findpivot(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+ (e-s)/2;

    while (s<=e){
        if(s==e){
            return  s;
        }
        if(arr[mid+1]<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if (arr[s]> arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid = s+ (e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{8,9,10,2,4,6};
    int ans = findpivot(arr);
     
     cout << " index is :"<< ans <<endl;
     cout << " value is : " << arr[ans];
}