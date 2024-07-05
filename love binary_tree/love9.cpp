// Maximum depth or height of binary tree
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

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // purana level complete traverse ho chuka h
            cout << endl;
            if(!q.empty()){
                // queue still has some child node
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int maxDepth(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}

int main(void){

    Node* root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Level Order Traversal
    levelOrderTraversal(root);

    cout << "Depth of BT: " << maxDepth(root) << endl;
    return 0;
}