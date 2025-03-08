#include<iostream>
using namespace std;

struct Node
{
    int data;

    Node* next_Node;

};

Node* newnode(int data)
{
    Node* new_Node= new Node();
    new_Node-> data = data;
    new_Node-> next_Node = NULL;
    return new_Node;
}
Node* pop(Node* node)
{
    if(node == NULL)
    {

        return node;

    }

    else
    {
        Node* privious_Node;
        Node* current_Node = node;
        while(current_Node ->next_Node)
        {
            privious_Node =current_Node;
            current_Node = current_Node ->next_Node;
        }

        privious_Node -> next_Node = NULL;

        delete current_Node;
    }


}

Node* push(Node** node,int data)
{
    if((*node) == NULL)
    {
        (*node) = newnode(data);
    }
    else
    {
        Node* current_node=(*node);
        while(current_node->next_Node!=NULL)
        {
            current_node=current_node->next_Node;
        }
        current_node->next_Node=newnode(data);
    }

}
void top(Node* node)
{
    while(node->next_Node)
    {
        node=node->next_Node;
    }
    cout<<"Top value : "<<node->data<<endl;
}


void display(Node* node)
{

    if(node==NULL)
    {
        cout<<"stack is empty";
    }
    else
    {
        Node* current_node = node;
        while(current_node)
        {
            cout<< current_node ->data<<" ";
            current_node = current_node->next_Node;
        }
    }

}
int main()
{
    Node* node = NULL;

    push(&node,1);
    push(&node,2);
    push(&node,3);
    push(&node,4);
    push(&node,5);
    push(&node,6);
    pop(node);
    pop(node);
    top(node);
    display(node);
}

