#include<bits/stdc++.h>
using namespace std;
//binary search using recurrsion
int binarysearch(vector<int> &v,int s, int e,int target){
    int mid =(s+e)/2;
    //base case
    if(s>e){
        return -1;
    }
    if(v[mid] == target){
        return mid;
    }
    if(v[mid] < target){
        return binarysearch(v,mid+1,e,target);
}
    else{
        return binarysearch(v,s,mid-1,target);
    }
}
int main(){
    vector<int> v{10,20,30,40,50,99};
    int target = 99;

    int n = v.size();
    int s=0;
    int e=n-1;

    int ans = binarysearch(v,s,e,target);

    cout<<"Answer is:"<< ans << endl;
}