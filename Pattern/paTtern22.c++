#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row=row+1){
        //spaces print
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        //counting print
       int start=row+1;
        for(int col=0;col<row+1;col=col+1){
            cout<<start;
            start=start+1;
        }
        //reverse counting
      int reverse=2*row;
        for(int col=0;col<row;col=col+1){
            cout<<reverse;
            reverse=reverse-1;
        }
        cout<<endl;
    }
}