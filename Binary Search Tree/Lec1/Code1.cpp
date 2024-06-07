#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};
Node* insertIntoBST(Node* &root , int data){
    if(root == NULL){
        //this is the first node we haveto create
        root = new Node(data);
        return root;
    }
    //not the first node
    if(root->data > data){
        //insert in left
        root->left = insertIntoBST(root->left,data);
    }
    else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data;
    }
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
void preOrderTraversal(Node* root){
    //  NLP
    if(root == NULL) return;

    cout<<root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void postOrderTraversal(Node* root){
    //  LRN
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data << " ";
}
void inOrderTraversal(Node* root){
    //  LNR
    if(root == NULL) return;

    inOrderTraversal(root->left);
    cout<<root->data << " ";
    inOrderTraversal(root->right);

}
Node* findNodeInBST(Node* root,int target){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data == target){
        return root;
    }
    if(target >root->data){
        //right subtree me search kro
        return findNodeInBST(root->right, target); 
    }
    else{
        return findNodeInBST(root->left,target);
    }
}
  int minValue(Node* root) {
        Node* temp = root;
        if(temp == NULL){
            return -1;
        }
        while(temp->left != NULL){
            temp = temp->left;
        }
        return temp->data;
    }
      int maxValue(Node* root) {
        Node* temp = root;
        if(temp == NULL){
            return -1;
        }
        while(temp->right != NULL){
            temp = temp->right;
        }
        return temp->data;
    }
 Node* deleteNodeInBST(Node* root, int target){
        //base case
        if(root == NULL){
            return root;
        }
        
        //step 1
        if(root->data == target){
        //I WANT TO DELETE NODE
        //4 cases
        if(root->left == NULL && root->right == NULL){
            //leaf node
          //  delete temp;
            return NULL;
        }
        else if(root->left == NULL && root ->right != NULL){
            Node* child = root->right;
          //  delete temp;
            return child;
        }
        else if(root->left != NULL && root->right == NULL){
             Node* child = root->left;
            //delete root;
            return child;
        }
        else{
            //dono child exist krte h
            //inorder predecessor of left subtree->left subtree me max value
            int inorderPre = maxValue(root->left);
            root->data = inorderPre;
            root->left = deleteNodeInBST(root-> left,inorderPre);
            return root;
        }
        }
        else if(target>root ->data){
            root->right = deleteNodeInBST(root->right,target);
        }
        else if(target< root->data){
            root->left = deleteNodeInBST(root->left,target);
        }
        return root;
 
 }
int main(){
    Node* root = NULL;
    cout<<"Enter the data for Node" << endl;
    takeInput(root);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    // cout<<"Printing inorder:"<<endl;
    // inOrderTraversal(root);
    // cout<<endl;
    //  cout<<"Printing preorder:"<<endl;
    // preOrderTraversal(root);
    // cout<<endl;
    //  cout<<"Printing postorder:"<<endl;
    // postOrderTraversal(root);

    // bool ans = findNodeInBST(root,15);
    // cout<<"present or not : " << ans <<endl;
    // cout<<endl;
    // cout<<"minimum element: " << minValue(root)<<endl;;
    // cout<<"maxmum element: " << maxValue(root)<<endl;;

    deleteNodeInBST(root,100);
    levelOrderTraversal(root);

    return 0;
}
 