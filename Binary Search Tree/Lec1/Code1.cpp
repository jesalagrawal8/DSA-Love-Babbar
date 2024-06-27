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
class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;
    NodeData(){

    }
    NodeData(int size,int max,int min,bool valid){
        this->size = size;
        minVal = min;
        maxVal = max;
        validBST = valid;
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
 Node* bstUsingInorder(int inorder[], int s,int e){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    int element =inorder[mid];
    Node* root = new Node(element);

    root->left = bstUsingInorder(inorder,s,mid-1);
    root->right = bstUsingInorder(inorder,mid+1,e);

    return root;
     }
    void convertIntoSortedDLL(Node* root,Node* &head){
        //base case
        if(root == NULL){
            return;
        }
        //right subrtree into LL
        convertIntoSortedDLL(root->right , head);

        //attach root node
        root->right = head;
        
        if(head!= NULL){
            head->left = root;
        }
        //update head
        head = root;

        //left subtree into ll
        convertIntoSortedDLL(root->left, head);
    }
    void printLinkedList(Node* &head){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data << " ";
            temp = temp->right;
        }
        cout<<endl;
    }
    Node* sortedLinkedListIntoBST(Node* &head,int n){
        //base case
        if(n <= 0 || head == NULL){
            return NULL;
        }
        Node* leftSubTree = sortedLinkedListIntoBST(head, n-1-n/2);

        Node* root = head;
        root->left = leftSubTree;

        head = head->right;

        //right part solve karna h
        root->right = sortedLinkedListIntoBST(head,n/2);
        return root;
    }
    NodeData findLargestBST(Node* root,int &ans){
        //base case
        if(root == NULL){
            NodeData temp(0 , INT_MIN ,INT_MAX,true);
            return temp;
        }
        NodeData leftKaAns = findLargestBST(root->left, ans);
        NodeData rightKaAns = findLargestBST(root->right,ans);

        //checking starts here
        NodeData currNodeKaAns;

        currNodeKaAns.size = leftKaAns.size +rightKaAns.size +1;
        currNodeKaAns.maxVal = max(root->data, rightKaAns.maxVal);
        currNodeKaAns.minVal = min(root->data , leftKaAns.minVal);
         
         if(leftKaAns.validBST && rightKaAns.validBST && (root->data > leftKaAns.maxVal && root->data < rightKaAns.minVal) ) {
            currNodeKaAns.validBST = true;
         }
         else{
            currNodeKaAns.validBST = false;
         }
         if(currNodeKaAns.validBST){
            ans = max(ans , currNodeKaAns.size);
         }
         return currNodeKaAns;
    }
int main(){
    // Node* root = NULL;
    // cout<<"Enter the data for Node" << endl;
    // takeInput(root);

    Node* root = new Node(5);
    Node* first = new Node(2);
    Node* second = new Node(4);
    Node* third = new Node(1);
    Node* fourth = new Node(3);

    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth; 
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);

    int ans = 0;
    findLargestBST(root,ans);
    cout<< "Largest BSK ka size " << ans << endl;
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

    // deleteNodeInBST(root,100);
    // levelOrderTraversal(root);


// int inorder[] = {1,2,3,4,5,6,7,8,9};
// int s = 0;
// int e = 8;

// Node* root = bstUsingInorder(inorder,s,e);
// levelOrderTraversal(root);
// Node* head = NULL;

// cout<<"printing ll "<<endl;
// convertIntoSortedDLL(root,head);
// printLinkedList(head);

// Node* root1 = NULL;
// root1 = sortedLinkedListIntoBST(head, 9);
// cout<< "droping level order travesal for root1" << endl;
// levelOrderTraversal(root1);
//     return 0;
}
 