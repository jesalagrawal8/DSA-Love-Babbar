#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s, int e){
    //step 1 : Choose pivot Element
    int pivotIndex =s;
    int pivotElement = arr[s];

    //step 2 -> Find right posiion for pivot elment and place it
    int count = 0;
    for(int i = s+1 ; i <= e ; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    //jab me is upar wale loop se bahar hua to mere pass pivot ka right index present hai
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //pivot k left me chote element and right me bade element
    int i=s;
    int j=e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }
    }

    //2 case ho skte h
    //you fund the element to swaop
    //no need to swap
    if(i < pivotIndex && j > pivotIndex){
        swap(arr[i],arr[j]);
    }
    return pivotIndex;
}
void quickSort(int* arr, int s, int e){
    //base condition 
    if( s >= e){
        return;
    }

    //partition logic return pivotIndex
    int p = partition(arr,s,e);

    //recurrsive calls 
    //pivot element -> left
    quickSort(arr,s,p-1);

    //pivot element ->right
    quickSort(arr,p+1,e);
}
int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n=7;

    int s=0;
    int e=n-1;
    quickSort(arr,s,e);

    for(int i=0; i<n ; i++){
        cout<< arr[i] << " ";

    }
    cout<< endl;
}