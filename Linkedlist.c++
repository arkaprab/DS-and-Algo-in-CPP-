#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int d) {
        data=d;
        next=NULL;
    }
};
Node *insertathead(Node *head,int data) 
{
    Node *node=new Node(data);
    node->next=head;
    head=node;
    return node;
}
void display(Node *head) 
{
    Node *temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() 
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);

    cout<<"Enter the data you want to insert in list:"<<endl;
    int data;
    cin>>data;
    head=insertathead(head,data);
    display(head);
    return 0;
}