#include<iostream>
using namespace std;
class Node
{   
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;

    }
};
class linklist
{    
    public:

    Node* head;
    int size=0;
    linklist()
    {
        head=NULL;
        size=0;
    }
    
     void push(int d)
     {
         Node* temp= new Node(d);
         if(head==NULL)
         {
             temp=head;
             temp->next=NULL;

         }
         else
         {
             
             temp->next=head;
             temp->data=d;
             temp->next=NULL;
             size++;
    

         }
     }
         void display()
         {
             Node* ptr=head;
             while(ptr!=NULL)
             {
                 cout<<ptr->data<<endl;
                 ptr=ptr->next;
             }
         }
     
};

int main()
{
    linklist obj;
    obj.push(12);
    obj.push(13);
    obj.push(14);
    obj.push(11);
    obj.display();




}