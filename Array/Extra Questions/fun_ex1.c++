#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    int result=a+b;
    return result;
}



int main()
{
    int a,b;
    cout<<"ENTER THE NUMBER A"<<endl;
    cin>>a;
    cout<<"ENTER THE NUMBER B"<<endl;
    cin>>b;
     
    int sum= add(a,b);
    
    cout<<"Addition of tw number "<<sum<<endl;
}