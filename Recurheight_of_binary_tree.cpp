#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left , * right;
};

node* CreateNode(int data)
{
    node* newnode = new node();
    if (!newnode) {
        cout << "Memory error\n";
        return NULL;
    }
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}


int height(node * root)
{
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}

int main()
{
    node * root;
    root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);
    cout<<height(root);


    return 0;
}
