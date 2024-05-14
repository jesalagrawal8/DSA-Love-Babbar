#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this-> data = data;
        left = NULL;
        right = NULL;
    }

};
Node* buildtree(){
    int data;
    cout <<"Enter the data" << endl;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    //step A B C
    Node* root = new Node(data);
    cout<< "Enter data for left part of "<< data << " node" << endl;
    root-> left =  buildtree();

    cout<< "Enter data for right part of "<< data << " node" << endl;
     root-> right =  buildtree();

    return root;


}

void levelOrderTraversal(Node* root){
    queue<Node*> q;

    //initially
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        // A
        Node* temp = q.front();

        // B 
        q.pop();

        if(temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);

            }
        }
        else{
            // C
            cout<< temp->data << " ";

            // D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
        }
        }
    }

}
//in order traversal
void inOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    //L N R (LEFT) (CURRENT) (RIGHT)
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

//pre order traversal
void PreOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    //N  L R  (CURRENT) (LEFT) (RIGHT)
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
}

//post order traversal
void postOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    //L R N (LEFT) (RIGHT) (CURRENT)
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root == NULL){
       return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight , rightHeight) +1;

    return ans;
}

int main(){
Node* root = NULL;
root = buildtree();
levelOrderTraversal(root);
cout << " Height" <<height(root);
}