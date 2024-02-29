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
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool checkPalindrome(Node* head){
    if(head == NULL){
        cout<< "LL is empty"<< endl;
        return true;
    }
    //1node in ll
    if(head->next ==NULL){
        cout<<"single node is a ll"<<endl;
        return true;
    }

    //step 1 find a middle node
    Node* slow = head;
    Node* fast = head->next;//for even 

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    } 
    //slow pointer is pointing toward middl
    //step2 reverse ll after middle node;
    Node* reverseKaHead = reverse(slow->next);
    slow->next = reverseKaHead;

    //step 3 Start comparision
    Node* temp1 = head;
    Node * temp2 = reverseKaHead;
    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            return false;

        }
        else{
            temp1=temp1->next;
            temp2= temp2->next;
        }
    }
    return true;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(30);
    Node* fifth = new Node(20);
    Node* sixth = new Node(10);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    
    bool isPalindrome = checkPalindrome(head);

    if(isPalindrome){
        cout<< "LL is Palindrome"<<endl;
    }
    else{
        cout<<"LL is not a palindrome"<<endl;
    }
}