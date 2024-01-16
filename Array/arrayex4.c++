#include<bits/stdc++.h>
using namespace std;

// this function is for printing elements

void printarr(int arr[], int size){

    for (int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

//func for increment of element of array
void inc(int arr[], int size){

    arr[0]= arr[0] +10;
    printarr(arr, size);
}

int main(){

int arr[] = {5,6,7,8,9,10};
int size = 6;
printarr(arr, size);
inc( arr, size);
printarr(arr, size);
}