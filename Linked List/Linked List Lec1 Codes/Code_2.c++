
#include <iostream>
using namespace std;
//insert at head
class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}

void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}




int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, 20);
        insertAtHead(head, 50);
        insertAtHead(head, 60);
        insertAtHead(head,90);
   

        print(head);
        cout << endl;
        // cout << "head: " << head -> data << endl;
        // cout << "tail: " << tail->data << endl;

        // insertAtPosition(101, 5, head, tail);
        // cout<< "Printing after insert at position call" << endl;
        // print(head);
        // cout << endl;
        // cout << "head: " << head -> data << endl;
        // cout << "tail: " << tail->data << endl;

        return 0;
}