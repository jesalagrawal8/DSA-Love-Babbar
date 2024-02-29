#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
Node* sortzeroonetwo2(Node* &head){
    if(head == NULL){
        cout<<"ll is empty"<<endl;
        return;
    }
    if(head->next=NULL){
        cout<<"single node"<<endl;
        return;
    }
    //create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

     Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

     Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //traverse the original link =ed list
    Node* curr = head;
    while(curr != NULL){
        if(curr -> data == 0){
            //take out the zero wali node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the zero wli node in zeroHead wali ll
            zeroTail->next = temp;
            zeroTail=temp;
        }
        else if(curr -> data ==1){
             //take out the one wali node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the zero wli node in oneHead wali ll
            oneTail->next = temp;
            oneTail=temp;
        }
        else if(curr -> data = 2){
             //take out the two wali node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the zero wli node in twoHead wali ll
            twoTail->next = temp;
            twoTail=temp;
        }
    }
    //teeno ll ready h
    //join thwm

    //Modify one wali list 
    Node* temp = oneHead;
    oneHead = oneHead ->next;
    temp->next = NULL;
    delete temp;

     //Modify two wali list 
    temp = twoHead;
    twoHead = twoHead ->next;
    temp->next = NULL;
    delete temp;

    //join list
    if(oneHead != NULL){
        //one wali list is not emoty
        zeroTail->next= oneHead;
        if(twoHead != NULL){
            oneTail->next = twoHead;
        }
    }
    else{
        //one wali list empty ho
        if(twoHead != NULL){
            zeroTail->next=twoHead;
        }
    }

    // remove zeroHead dummy node
    temp = zeroHead;
    zeroHead = zeroHead ->next;
    temp->next = NULL;
    delete temp;

    //return new head
    return zeroHead;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(0);
    Node* fourth = new Node(0);
    Node* fifth = new Node(2);
    Node* sixth = new Node(0);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout<<"input: ";
    print(head);

    cout<<endl;

    head = sortzeroonetwo2(head);
    cout<<"Output ll is: ";
    print(head);
}