#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* right, *left;

    Node(int value) {
        left = right = NULL;
        data = value;
    }
};

Node* binarytree() {
    int x;
    cin>>x;

    if(x == -1) {
        return NULL;
    }

    Node* temp = new Node(x);

    // CREATE LEFT SIDE
    temp->left = binarytree();

    // CREATE RIGHT SIDE
    temp->right = binarytree();

    return temp;
}


void preorder(Node* root) {

    if(root == NULL ) {
        return;
    }

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

int main() {

    cout<<"ENTER THE ROOT: ";
    Node* root;
    root = binarytree();

    cout<<"PRE ORDER: ";
    preorder(root);
}
