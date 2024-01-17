#include<bits/stdc++.h>
using namespace std;
//union of arrays
int main(){

    int arr[] ={1,2,6,8,9};
    int sizea= 5;
    int brr[]={3,11,12,7,5};
    int sizeb = 5;

    vector<int> ans;

   
    cout<<"first array is :"<< endl;
    for (int i = 0; i < sizea; i++)
    {
        cout << arr[i] << " ";
        ans.push_back(arr[i]);
    }
    cout<< endl;
     cout<<"second array is :"<< endl;
    for (int i = 0; i < sizeb; i++)
    {
        cout << brr[i] << " ";
        ans.push_back(brr[i]);
    }
      cout<< endl;

    cout<< "resultant array is "<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i] << " ";
    }
    
    
}