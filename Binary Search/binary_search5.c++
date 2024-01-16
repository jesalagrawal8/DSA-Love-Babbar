#include<bits/stdc++.h>
using namespace std;
// division of two number
int solve(int divident ,int divisor){
   int s=0;
   int e=divident;
    int ans=0;
   int mid= s+ (e-s)/2; 
   while(s<=e){
    if(mid*divisor == divident){
        return mid;
    }
    else if(mid*divisor > divident){
        e=mid-1;
    }
    else{
        ans = mid;
        s=mid+1;
    }
    mid= s+ (e-s)/2; 
   }
   return ans;
}
int main(){
    int divident = 22;
    int divisor =7;

    int ans = solve (divident,divisor);
    cout<< " ans is "<< ans;
}
