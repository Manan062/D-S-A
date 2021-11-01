#include<bits/stdc++.h>

using namespace std;


struct node
{
	int data;
	node * next;

};

void insertion(node * &head,int key)
{
	
	if(head==NULL)
	{
		head= new node();
		head->data=key;
		head->next=NULL;
	}

	else
	{
		node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		node *temp1 =new node();
		temp1->data=key;
		temp1->next=NULL;
		temp->next=temp1;

	}
}

void length1(node *head)
{
	if(head==NULL)
	{
		cout<<"Empty linked list\n";
	}
	else
	{
		node * temp=head;
		int length=1;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			length++;
		}
		cout<<"Length of Linked list is "<<length<<"\n";

	}
}

void deletion(node *&head,int val)
{
	if(head==NULL)
	{
		cout<<"Empty linked list\n";
	}
	else if(head->data==val)
	{
		node *t1=head;
		head=head->next;
		free(t1);
		
	}
	else
	{
		node * temp=head;
		node *prev=NULL;
		while(temp->data!=val)
		{
			prev=temp;
			temp=temp->next;
		}
		node * temp1=temp;
		temp=temp->next;
		prev->next=temp;
		free(temp1);


	}
}

void print1(node *head)
{
	if(head==NULL)
	{
		cout<<"Linked list is Empty\n";
	}
	else
	{
		node * temp=head;
		while(temp->next->next!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data<<" ";
		temp=temp->next;
		cout<<temp->data<<"\n";

	}
}

int main()
{
	node * head;
	head=NULL;
	insertion(head,1);
	insertion(head,2);
	insertion(head,3);
	insertion(head,4);
	insertion(head,5);
	print1(head);
	length1(head);
	deletion(head,1);
	print1(head);
	length1(head);
	return 0;
}