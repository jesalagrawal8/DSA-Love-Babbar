#include <iostream>
using namespace std;
// insert at head in doubly LL
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
         this->prev = NULL;
         this->next = NULL;
       }

    Node(int data){
        this->data = data;
         this->prev = NULL;
         this->next = NULL;
       }
       ~Node() {
                //write your code here
                cout << "Node with value: " << this->data << "deleted" << endl;
        }
};
// this function is for printing the LL
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
int getLength(Node* &head){

    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp=temp-> next;
        len++;
      } 
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int data){
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  //step:1
  Node* newNode = new Node(data);
 //step:2
  newNode->next = head;
  //step:3
  head->prev = newNode;
  //step:4
  head = newNode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step 1
    Node* newNode = new Node(data);
    //step 2
    tail->next = newNode;
    //step 3
    newNode->prev = tail;
    //step 4
    tail = newNode;

}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        

    }
    else{
    if(position == 1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = getLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }
    //insertion in middle
    //step 1 find prevnode and curr
    int i = 1;
    Node* prevNode = head;
    while(i < position){
        prevNode = prevNode-> next;
        i++;
    }
    Node* curr = prevNode->next;
    //step 2 Create an node
    Node* newNode = new Node(data);

    //step 3
    prevNode->next=newNode;

    //step4
    newNode->prev = prevNode;

    //step5
    curr->prev = newNode;
    //step6
    newNode->next=curr;
    }
}
void deleteNode(int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                Node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }
        int len  = getLength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }
}
int main() {
          Node* first = new Node(10);
          Node* second = new Node(20);
          Node* third = new Node(30);
          Node* head = first;
          Node* tail = third;  

          first->next = second;
          second->prev =first;

          second->next = third;
          third-> prev = second;

          print(first);

         cout << endl;
        insertAtHead(head,tail,101);
         print(head);
         cout<<endl;
         insertAtTail(head,tail,201);
         print(head);
        insertAtPosition(head,tail,55,2);
        cout<<endl;
        print(head);
         deleteNode(6, head, tail);
        cout << endl;
         print(head);
 }