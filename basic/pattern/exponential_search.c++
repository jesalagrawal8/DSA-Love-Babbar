#include<bits/stdc++.h>
using namespace std;
int bs(int a[] , int start , int end , int x){
    int mid = start + (end-start)/2;
    while(start<=end){
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] > x){
            end=mid-1;
        }
        else{
            start=end+1;
        }
    }
}
int expSearch(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && a[i]<=x){
        i=i*2;
    }
    return bs(a , i/2 , min(i,n) ,x);
}
int main(){
    int a[]= {3,4,5,6,11,13,14,15,56,70};
    int n= sizeof(a)/sizeof(int);
    int x= 13;
    int ans = expSearch(a, n , x);
    cout<< ans<<endl;
}