// INORDER, PREORDER, POSTORDER TRAVERSAL (recursive approach)
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        // constructor
        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root){
            cout << "Enter the data: ";
            int data;
            cin >> data;
            root = new Node(data);

            if(data == -1) return NULL;

            cout << "Enter data for inserting in left of " << data << endl;
            root->left = buildTree(root->left);

            cout << "Enter data for inserting in right of " << data << endl;
            root->right = buildTree(root->right);

            return root;
}

// LNR
void inorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// NLR
void preorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// LRN
void postorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(void){

    Node* root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Inorder
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    return 0;
}