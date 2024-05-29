#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int fact=1;
    if(n>=1){
        fact=fact*n;
        n=n-1;

    }
    
    cout<<fact<<endl;
    
}