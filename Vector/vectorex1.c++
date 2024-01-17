#include<bits/stdc++.h>
using namespace std;
//unique element in array(no duplicate)
int find(vector<int> arr){
    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans= arr[i]^ans;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array"<< endl;
    cin>>n;



    vector<int> arr(n);

    cout<< "Enter the elements of array" << endl;

    for(int i=0; i<arr.size();i++){
        cin >> arr[i];
    }

      int uniqueElement = find(arr);
     cout<< "Unique element in this array is : " << uniqueElement ;

}