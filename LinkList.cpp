
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertTail(node* &head, int val)
{
    node* n= new node(val);

    node* temp=head;
    while(temp-> next!=NULL )
    {
        temp= temp->next;
    }
    temp->next=n;

}



int main()
{
    struct node *head =NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data =45;
     head->link =NULL;

     cout<<head->data;

     return 0;


}
