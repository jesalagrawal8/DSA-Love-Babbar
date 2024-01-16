#include<bits/stdc++.h>
using namespace std;
// to find key element in aray
bool getKey(int arr[][3], int rows ,int cols ,int key){
     for ( int i=0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
        {
            if(arr[i][j] == key){
                return true;
            }
            
                
            
        }
        
    }
    return false;
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key = 4 ;
   // taking input from user
   
    for ( int i=0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    //printing the array
    for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<< getKey(arr,rows,cols,key);
}