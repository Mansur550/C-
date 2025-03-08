#include <iostream>
using namespace std;

struct Node
{
    int item;
    struct Node* next_node;

};

struct Node* head = NULL;


void insertatFront(int data)
{
    struct Node* new_node = new Node();

    new_node->item = data;
    new_node->next_node = head;
    head = new_node;
}



void insertAfter(struct Node* previous_node, int data)
{
    if (previous_node == NULL)
    {
        cout << "\nThe given previous_nodeious node cannot be NULL..";
    }

    else
    {
        struct Node* new_node = new Node();

        new_node->item = data;
        new_node->next_node = previous_node->next_node;
        previous_node->next_node = new_node;
    }
}

void remove_front(struct Node* node)
{
    if(head != NULL)
    {
        Node* temp = head;

        head = head -> next_node;

        free(temp);
    }
}


void remove_back(struct Node* node)
{
    if(head != NULL)
    {
        if(head -> next_node == NULL)
        {
            head = NULL;
        }

        else
        {
            Node* temp = head;

            while(temp -> next_node -> next_node != NULL)
            {
                temp = temp -> next_node;
            }

            Node* last_node = temp -> next_node;

            temp -> next_node = NULL;

            free(last_node);
        }
    }
}

void remove_specific(int key)
{
    struct Node *temp = head, *previous_node;

    if (temp != NULL && temp -> item == key)
    {
        head = temp -> next_node;

        free(temp);

        return;
    }

    while (temp != NULL && temp -> item != key)
  {
    previous_node = temp;
    temp = temp -> next_node;
  }

  if (temp == NULL)
  {
      return;
  }

  previous_node ->next_node = temp->next_node;
  free(temp);
}


void search_element(int val)
{
    Node* temp = head;

    int found = 0;
    int i = 0;

    if(temp != NULL)
    {
        while(temp != NULL)
        {
            i++;

            if(temp -> item == val)
            {
                found++;
                break;
            }

            temp = temp -> next_node;
        }

        if(found == 1)
        {

            cout<<val<<" Is Found In The List."<<endl;
        }

        else
        {
            cout<<"\n";

            cout<<val<<" Is Not Found In The List."<<endl;
        }
    }
}

void print_list(struct Node* node)
{
    while (node != NULL)
    {
        cout<<node -> item<<"     ";
        node = node -> next_node;
    }
    cout<<"\n";
}

int main()
{
    int search_value,val;
    cout<<"Inserting The Elements 1, 2, 3, 4, 5 In Front."<<endl;
    cout<<"Enter data: ";
    cin>>val;
    insertatFront(val);
     cout<<"Enter data: ";
    cin>>val;
    insertatFront(val);
     cout<<"Enter data: ";
    cin>>val;
    insertatFront(val);
     cout<<"Enter data: ";
    cin>>val;
    insertatFront(val);
     cout<<"Enter data: ";
    cin>>val;
    insertatFront(val);

    cout<<endl;

    print_list(head);


    int next_node,data;
    cout <<"Inserting Specific Position ";
    cout<<"Enter Position: ";
    cin>>next_node;
    cout<<"Enter Data: ";
    cin>>data;
   insertAfter(head -> next_node, data);
    print_list(head);

    cout<<"\n";

    cout<<"After Removing The Front Element Of The Linked List: ";
    remove_front(head);
    print_list(head);

    cout<<"\n";

    cout<<"After Removing The Back Element Of The Linked List: ";
    remove_back(head);
    print_list(head);

    cout<<"\n";


    cout<<"Search an element: ";
    cin>>val;
    search_element(val);

//    return 0;
}
