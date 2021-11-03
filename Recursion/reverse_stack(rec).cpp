#include<bits/stdc++.h>

using namespace std;


void print_stack(stack<int> s)
{
	while(!s.empty())
	{
		int x=s.top();
		cout<<x<<" ";
		s.pop();
	}
	cout<<"\n";
	return;
}


void add_at_start(stack<int> &s,int val)
{
	if(s.empty())
	{
		s.push(val);
		return;
	}
	int x=s.top();
	s.pop();
	add_at_start(s,val);
	s.push(x);
	return;

}


void reverse_stack(stack<int> &s)
{
	if(s.size()==1)
	{
		return;
	}
	int x=s.top();
	s.pop();
	reverse_stack(s);
	add_at_start(s,x);
	return;

}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);

	print_stack(s);
	reverse_stack(s);
	print_stack(s);

	return 0;
}