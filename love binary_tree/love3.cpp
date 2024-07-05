// REVERSE LEVEL ORDER TRAVERSAL
#include<iostream>
#include<queue>
#include<stack>
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

void reverseLevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    stack<Node*> st;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            // purana level complete traverse ho chuka h
            // cout << endl;
            st.push(temp);
            if(!q.empty()){
                // queue still has some child node
                q.push(NULL);
            }
        }
        else{
            // cout << temp->data << " ";
            st.push(temp);

            if(temp->right){
                q.push(temp->right);
            }

            if(temp->left){
                q.push(temp->left);
            }

        }
    }

    // print from stack
    while(!st.empty()){
        if(st.top() == NULL){
            cout << endl;
        }
        else{
            cout << st.top()->data << " ";
        }
        st.pop();
    }
}

int main(void){

    Node* root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Level Order Traversal
    reverseLevelOrderTraversal(root);
    return 0;
}