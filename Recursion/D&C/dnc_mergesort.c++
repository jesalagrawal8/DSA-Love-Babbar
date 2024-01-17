#include<bits/stdc++.h>
using namespace std;
int merge(int* arr,int s,int e){
    int mid = (s+e)/2;
    //length of the array
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right =new int[len2];
    
    //copy values
    int k = s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    
     k = mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge logic 

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArray = 0;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArray++] = left[leftIndex++];
        }
        else{
            arr[mainArray++] = right[rightIndex];
        }
    }
     while(leftIndex < len1){
        arr[mainArray++] = left[leftIndex++];
     }

     while(rightIndex < len2){
        arr[mainArray++] = right[rightIndex++];
     }

}
void mergeSort(int* arr,int s,int e){
    //s=e ->single element
    //s>e -.invalid index
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    //left part sort krdo recursion se
    mergeSort(arr,s,mid);

    //Rigght part sort krdo reccursion se
    mergeSort(arr,mid+1,e);

    //2no array ko merge krdo
    merge(arr,s,e);
}
int main(){

    int arr[]={4,5,13,2,12};
    int n = 5;
    int s=0;
    int e = n-1;

    mergeSort(arr,s,e);

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";

    }
    cout <<endl;
}