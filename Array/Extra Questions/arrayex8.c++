#include<bits/stdc++.h>
using namespace std;
void findMissing(int a[], int n ){
cout<<"indexs visited are"<<endl;
//here the indexing of array are from 1
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if(a[index - 1 ] > 0){
            a[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
     cout<<a[i]<< " ";
    }
    cout<<"missing number will be"<<endl;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        cout<<i+1<< " ";
    }
    
    
}
int main(){

    int n;
    int a[] = {1,3,5,3,4};
    n = sizeof(a)/sizeof(int);

    findMissing(a , n);
}