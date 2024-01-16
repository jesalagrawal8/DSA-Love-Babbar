#include<bits/stdc++.h>
using namespace std;

//  pair sum

 int main(){
    
    vector <int> arr{10,20,30,40,50,60};
    int sum= 70;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
            for (int j = i+1; j < arr.size(); j++)
            {
                if(element + arr[j] == sum){
                    cout << "pair sum is : " << element << " " << arr[j] << endl;;
                }
                
            }
            
    }
    

 }