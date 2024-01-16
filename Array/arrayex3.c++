#include<bits/stdc++.h>
using namespace std;

//taking the elements from user and how many elemnts you want add in array

int main(){

int arr[10];

int n;
cout <<"How many elemnts you want add in array" << endl;
cin >> n;
cout << "enter the elements of the array"<<endl;

for(int i=0; i<10; i++){
cin >> arr[i];
}

//printing the elements
for(int i=0;i<10;i++)
{
    cout<<arr[i]<<" ";
}
// int arr[500];

//   int n;
//   cout << "How many numbers you want to add in array" << endl;

//   cin >> n;

//   cout << "Enter the numbers " << endl;
//   for(int i=0; i<n; i++) {
//     cin >> arr[i];
//   }
}