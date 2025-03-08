#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;

    }
};


Node* insertBSt(Node *root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insertBSt(root->left,val);

    }
    else
    {
        root->right=insertBSt(root->right, val);
    }

    return root;
}

void inorder(Node *root)
{
    if(root=NULL)
    {
        return;
    }

    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node *root=NULL;
     insertBSt(root,5);
    insertBSt(root,1);
    insertBSt(root,3);
    insertBSt(root,4);
    insertBSt(root,2);
    insertBSt(root,7);

    //inorder
    inorder(root);
    cout<<"HELLO"<<endl;
    return 0;
}

