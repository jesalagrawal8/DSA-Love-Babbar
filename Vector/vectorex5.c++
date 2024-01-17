#include<bits/stdc++.h>
using namespace std;

//triplet
 int main(){
    
    vector <int> arr{10,20,30,40,50,60};
    int sum= 70;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
            for (int j = i+1; j < arr.size(); j++)
            {
                int element2 = arr[j];
                    for (int k = j+1; j < arr.size(); k++)
                    {
                        if(element + element2 + arr[k] == sum){
                    cout << "pair sum is : " << element << " " << element2 << " " << arr[k] << endl;;
                }
                
                    }
                
            }
            
    }
    

 }