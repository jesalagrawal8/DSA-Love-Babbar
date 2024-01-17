#include<bits/stdc++.h>
using namespace std;

int main()
{
    //create vector
    vector<int> arr;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(1);

    for(int i=0; i<arr.size();i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;


    arr.pop_back();
    for(int i=0; i<arr.size();i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    //another way of creating vector

    vector<int> brr(10, -1);

    for(int i=0; i<brr.size();i++){
        cout<< brr[i] << " ";
    }
    cout<<endl;

    
    

}