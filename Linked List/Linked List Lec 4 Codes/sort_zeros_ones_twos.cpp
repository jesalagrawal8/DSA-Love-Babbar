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
void sortzeroonetwo(Node* &head){
    //step1 find count of zeros ones and twos
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zero++;
        }
        else if(temp->data == 1){
            one++;
        }
        else if(temp->data == 2){
            two++;
        }
        temp = temp->next;
    }
    //step2 fill zeros ones and two in original ll
    temp = head;
    while(temp != NULL){
        //fill
        while(zero--){
            temp->data = 0;
            temp = temp->next;
        }
        while(one--){
            temp->data = 1;
            temp = temp->next;
        }
        while(two--){
            temp->data = 2;
            temp = temp->next;
        }
    }
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(0);
    Node* fourth = new Node(0);
    Node* fifth = new Node(2);
    Node* sixth = new Node(1);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout<<"input: ";
    print(head);

    cout<<endl;

    sortzeroonetwo(head);
    cout<<"Output ll is: ";
    print(head);
}