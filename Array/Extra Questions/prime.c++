#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    for(int i=2;i<=n;i=i+1)
        if(n%i==0){
            count=count+1;
        }
         if(count==1){
              cout<<"no. is prime"<<endl;
        }
        else{
            cout<<"no.is not prime";
        }
    
}
    
