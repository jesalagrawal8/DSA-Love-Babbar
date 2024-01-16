#include<bits/stdc++.h>
using namespace std;
int findsqrt(int n) {
    int target = n;
    int s=0;
    int e=n;
    int mid = s + (e-s)/2;
    int ans=-1;
    while(s<=e){

        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            e=mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
         mid = s + (e-s)/2;
    }
return ans;
}
int main(){
    int n;
    cout<< " Enter the number = "<<endl;
    cin>>n;

    int ans = findsqrt(n);
    cout<<" ans is "<< ans <<endl;
}