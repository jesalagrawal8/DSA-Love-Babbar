#include<bits/stdc++.h>
using namespace std;

//intersection of array
 int main(){

    vector<int> arr{1,2,3,4,5};
    vector<int> brr{3,4,5,6,8};

    vector<int> ans;

    for(int i=0; i<arr.size();i++){
        int element = arr[i];

        for (int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j]){
               brr[j] = -1;
                ans.push_back(element);
            }
        }
        
    }

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }
    
    


}