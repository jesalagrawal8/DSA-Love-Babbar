#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // full pyramid
    //        *
    //       * *
    //      * * *
    //     * * * *
    for(int i=0;i<n;i++){
        //spaces
       for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //star
       for(int j=0;j<(i+1);j++){
            cout<<" *";
        }
    
    cout<<endl;
    }
}
