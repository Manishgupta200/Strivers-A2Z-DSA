// pre, In, Post order traversal in one traversal
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

// implementation tree
Node* buildTree(Node* root){
    cout << "Enter data: ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
}

// Pre, In, post order traversal in one traversal
vector<vector<int>> preInPostTraversal(Node* root){
    stack<pair<Node*, int>> st;
    st.push( {root, 1} );

    vector<int> pre, in, post;

    if(root == NULL) return {};

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        // pre (print-left-right)
        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            // left
            if(it.first->left != NULL){
                st.push( {it.first->left, 1} );
            }
        }
        // in (left-print-right)
        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            // right
            if(it.first->right != NULL){
                st.push( {it.first->right, 1} );
            }
        }
        // post (left-right-print)
        else{
            post.push_back(it.first->data);
        }
    }

    
    vector<vector<int>> ans(3);
    ans[0] = pre;
    ans[1] = in;
    ans[2] = post;

    return ans;
}

void printPreInPost(vector<vector<int>> v){
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        if(i == 0) cout << "Preorder: ";
        if(i == 1) cout << "Inorder: ";
        if(i == 2) cout << "Postorder: ";
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(void){

    Node* root = NULL;
    
    // construct a tree
    root = buildTree(root);
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    printPreInPost(preInPostTraversal(root));
    return 0;
}