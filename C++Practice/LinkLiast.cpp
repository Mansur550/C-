#include<iostream>
#include<stdlib.h>
using namespace std ;

struct node
{
    int data;
    struct node *link;

};

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data =45;
    head->link= NULL;


    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data =95;
    current->link= NULL;
    head->link=current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data =3;
    current->link= NULL;

    head->link->link=current;



    cout<< head->data<<endl;
     cout<< current->data<<endl;
    return 0;
}
