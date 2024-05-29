#include<iostream>
using namespace std;
//hollow rectangle

int main(){
    int n,m;
cin>>n;
cin>>m;

for(int row=0;row<n;row=row+1){
   
    if(row==0 || row==(n-1)){
       
        for(int col=0;col<m;col=col+1)
        {
            cout<<"*";
        }
    }
    else{
    cout<<"*";
    for(int i=0; i<(m-2);i=i+1){
        cout<<" ";
    }
    cout<<"*";
    }
    cout<<endl;

}

}