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


int len(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp != NULL)
    {
        temp=(*temp).next;
        count++;
    }
    
    return count;
}


Node *appendLastNToFirst(Node *head, int n)
{

    if(n==0||head==NULL)
    {
        return head;
    }
    Node *initial_head=head;
	int length = len(head);
	int pos =length-n;
	Node *temp = head;
    Node *node_pos=head;
    
    for(int i=1 ; i < length ; i++)
    {
        if(i < pos)
        {
            node_pos = node_pos -> next;
        }
        temp = temp->next;                           
    }

    temp -> next = initial_head;	// making connection from head;
    
    head = node_pos -> next; 		// making the position as head
    
    node_pos -> next = NULL; 		// removing connection from position

    return head;
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