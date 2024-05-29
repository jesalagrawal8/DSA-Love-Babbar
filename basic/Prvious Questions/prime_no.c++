#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<n<<" is not prime";
            break;
        }
        else{
            cout<<n<<"is a prime";
break;
        }
    }
}