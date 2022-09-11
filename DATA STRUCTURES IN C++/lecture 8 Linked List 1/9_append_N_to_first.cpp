#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

int len(Node*head)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
	return count;
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here

    if((n>len(head)) || (n==0)) return head;
    Node *temp=head;
    Node *fast=head;
    while(n>0 && fast){
        if(fast->next)
        	fast=fast->next;
        n--;
    }
    while(fast->next){
        temp=temp->next;
        fast=fast->next;
    }
    Node *t=temp->next;
    temp->next=nullptr;
    fast->next=head;
    head=t;
    
	return head;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}