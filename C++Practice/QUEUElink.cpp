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

 Node* enque(Node** node,int data)
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
 Node* deque_(Node* node)
 {
     if(node == NULL)
     {

     return node;

     }

     else
     {
         Node* current_node = node;
         node = current_node->next_Node;
         delete current_node;
         return node;

     }
 }
 void top(Node* node)
 {
     cout<<"Top element : "<<node->data<<endl;
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
     Node* node=NULL;
     enque(&node,1);
     enque(&node,2);
     enque(&node,3);
     enque(&node,4);
     enque(&node,5);
     enque(&node,6);
     node=deque_(node);
     node=deque_(node);
     top(node);
     display(node);



 }

