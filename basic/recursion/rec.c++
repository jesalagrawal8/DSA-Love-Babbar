#include<bits/stdc++.h>
using namespace std;
//checking whether array is sorted using recurrsion
bool checkSorted(vector<int> &v, int& n, int i){
    //base condition
    if(i==(n-1)){
        return true;
    }
    if(v[i+1] < v[i]){
        return false;

    }
    checkSorted(v,n,i+1);


}
int main(){
    vector<int> v{10,20,30,40};
    int n = v.size();
    int i=0;
    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else {
        cout<<"Array is not sorted"<<endl;
    }
}