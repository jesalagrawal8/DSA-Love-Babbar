#include<bits/stdc++.h>
using namespace std;
//linear search
bool find(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){

    int arr[]={1,5,6,9,6};
    int size = 5;
    int key;
    cin>>key;

    if(find(arr,size,key)){
        cout<<"Found"<<endl;

    }
    else{
        cout<<"not found";
    }
}
// bool find(int arr[], int size, int key) {

// 	//linear search

// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key) 
// 			return true;
// 	}

// 	//not present
// 	return false;
// }