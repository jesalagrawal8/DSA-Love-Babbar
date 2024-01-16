#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={0,8,6,3,7,9,5,4,65,3,5,32,56,59,9,8,98};
    int size=17;

    int maxi= INT_MIN;

    for(int i=0;i<size;i++){

        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout << "Maximum number in this array " << maxi;
}