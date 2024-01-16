#include<bits/stdc++.h>
using namespace std;
c
int main(){
    int arr[]={2,4,5,6,12,14,16,20};
    int size=8;
    int target =2;

    int finalans = binarySearch(arr, size,target);

    if( finalans == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<< "Target found at "<< finalans << " index"<<endl;
    }
}