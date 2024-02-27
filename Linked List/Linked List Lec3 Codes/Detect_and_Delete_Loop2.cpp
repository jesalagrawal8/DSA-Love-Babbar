#include<bits/stdc++.h>
using namespace std;
//to find starting point of a loop
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next= NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
Node* getMiddle(Node* &head){
    if(head == NULL){
        cout<< "LL is Empty" << endl;
        return head;
    }
    if(head->next == NULL){
        //only one element
        return head;
    }
    //LL have greater than one node
    Node* slow = head;
    Node* fast = head ->next;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}
Node* reverseKnodes(Node* &head,int k){
    if(head == NULL){
        //ll is empty
        return head;
    }
    int len = findLength(head);
    if(k > len){
        cout<<" enter valid length"<<endl;
        return head;
    }
        //it means number of nodes in ll is >=k;
        //step 1 = reverse the k nodes of ll
        Node* prev = NULL;
        Node* curr = head; 
        Node* forward = curr->next;
        int count =0;
        while(count < k){ 
           forward = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count++;

        }
        //step 2 recurrsive call
        if(forward != NULL){
           head->next = reverseKnodes(forward,k);
        }
        //step 3 return head of modified ll

           return prev;
    }
bool checkforLoop(Node* &head){
    if(head == NULL){
        cout<<" ll is empty"<<endl;
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}
Node* startingPointLoop(Node* &head){
    if(head == NULL){
        cout<<" ll is empty"<<endl;
        return  NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            slow = head;
            break;
        }
    }
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
   
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next =sixth; 
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;

//     print(head);
//     cout<<endl;
//    head = reverseKnodes(head,3);
//     print(head);
    //cout<< " MiDDLE ELEMENT: " <<getMiddle(head)->data <<endl;

    // cout<<" Loop is present or not : "<< checkforLoop(head) << endl;
    cout<< "Starting Point of loop is : "<<startingPointLoop(head)->data <<endl;;

}