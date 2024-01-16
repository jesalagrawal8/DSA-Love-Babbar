#include<bits/stdc++.h>
using namespace std;
//transpose of array
void transpose(int arr[][3], int rows ,int cols , int brr[][3]){
     for ( int i=0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
        {
        brr[j][i] =arr[i][j] ;
            
        } 
               
    }
}
void printarr(int arr[][3], int rows, int cols){
  for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    
   // taking input from user
   
    for ( int i=0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    printarr(arr,rows, cols);
    int brr[3][3];
    transpose(arr,rows,cols, brr);
    printarr(brr,rows,cols);
}    
