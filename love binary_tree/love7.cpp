// INORDER, PREORDER, POSTORDER TRAVERSAL (iterative approach)
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

// // LNR
vector<int> inorder(Node* root){
    vector<int> ans;
    if(root == NULL) return ans;

    stack<Node*> st;
    Node* temp = root;

    while(true){
        if(temp != NULL){
            st.push(temp);
            temp = temp->left;
        }
        else{
            if(st.empty()) break;

            temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            temp = temp->right;
        }
    }
    return ans;
}

// // NLR
vector<int> preorder(Node* root){
    vector<int> ans;
    if(root == NULL) return ans;

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();

        ans.push_back(root->data);

        if(root->right != NULL){
            st.push(root->right);
        }

        if(root->left != NULL){
            st.push(root->left);
        }
    }
    return ans;    
}

// LRN
vector<int> postorder(Node* root){
    // Using two stack
    vector<int> ans;
    if(root == NULL) return ans;
    stack<Node*> st1;
    st1.push(root);

    stack<Node*> st2;

    while(!st1.empty()){
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);

        if(temp->left != NULL){
            st1.push(temp->left);
        }

        if(temp->right != NULL){
            st1.push(temp->right);
        }
    }

    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}

// LRN
vector<int> postorder2(Node* root){
    // Using one stack
    vector<int> ans;
    if(root == NULL) return ans;

    stack<Node*> st;
    Node* curr = root;

    while(curr != NULL || !st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                // upgrage to ans
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);

                while(!st.empty() && temp == st.top()->right){
                    // upgrage to ans
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }
    }
    return ans;
}

void printTree(vector<int> v){
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
}

int main(void){

    Node* root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << endl;
    printTree( inorder(root) );
    printTree( preorder(root) );
    printTree( postorder(root) );
    printTree( postorder2(root) );
    // postorder(root);
    return 0;
}