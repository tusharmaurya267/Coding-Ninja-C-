#include <iostream>
using namespace std;

#include "0_linked_list.cpp"


Node *takeinput()
{
    int data;
    cin >> data;
    Node *head=NULL;
    while(data != -1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            Node *temp=head;
            while((*temp).next != NULL)
            {
                temp=(*temp).next;
            }
            (*temp).next = newnode;
        }
        cin >>data;
    }
    return head;
}


Node *takeinputmodify()
{
    Node *head=NULL;
    Node *tail=NULL;
    int data;
    cin >> data;
    while(data != -1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            (*tail).next=newnode;
            tail=(*tail).next;
        }
        cin >> data;
    }
    return head;

}


void print(Node *head)
{
    while(head!=NULL)
    {
        cout << (*head).data << " " ;
        head=(*head).next;
    }
    cout << endl;
}    

int main()
{
    //Static 
    Node n1(1);
    Node *head1=&n1;
    Node n2(2);
    n1.next=&n2;
    Node n3(3);
    n2.next=&n3;
    Node n4(4);
    n3.next=&n4;
    n4.next=NULL;


    cout << n1.data << " " << n2.data << endl;

    //Dynamic
    Node *n5=new Node(5);
    Node *head2=&(*n5);
    Node *n6=new Node(6);
    (*n5).next=&(*n6);
    Node *n7=new Node(7);
    (*n6).next=&(*n7);
    Node *n8=new Node(8);
    (*n7).next=&(*n8);
    (*n8).next=NULL;

    cout << (*n5).data << " " << (*n6).data << endl;


    cout<< "Printing Static declared nodes:" << endl;
    print(head1);
    cout<< "Printing dynamic declared nodes:" << endl;
    print(head2);

    cout << "input procedure:" << endl;
    Node *head3=takeinput();
    print(head3);

    cout << "Modified input procedure:" << endl;
    Node *head4=takeinputmodify();
    print(head4);
}