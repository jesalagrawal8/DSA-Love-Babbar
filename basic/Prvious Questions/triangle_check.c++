#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if((a+c)>c && (b+c)>a && (a+c)>b){
        cout<<"This is a triangle";
    }
    else{
        cout<<"This is not a triangle";
    }
}