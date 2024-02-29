#include<bits/stdc++.h>
using namespace std;
//in sorted ll
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
     ~Node() {
                //write your code here
                cout << "Node with value: " << this->data << "deleted" << endl;
        }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
void removeDuplicate(Node* head){
    if(head == NULL){
        cout<<"ll is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        cout<<"Single node in ll"<<endl;
        return;
    }
    //more than one node in ll
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr->next;
        if((curr->next !=NULL) && (curr->data == curr->next->data )){
            //equal
            Node* temp = curr->next;
            curr->next = curr->next->next;
            //delete
            temp->next = NULL;
            delete temp;
        }
        else{
            curr =curr->next;
        }
    }
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout<<"input: ";
    print(head);

    cout<<endl;

    removeDuplicate(head);
    cout<<"Output ll is: ";
    print(head);
}  