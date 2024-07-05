// BUILD TREE FROM LEVEL ORDER TRAVERSAL
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

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter data for root: ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
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

int main(void){

    Node* root = NULL;
    // creating a tree
    buildFromLevelOrder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // Level Order Traversal
    levelOrderTraversal(root);
    return 0;
}