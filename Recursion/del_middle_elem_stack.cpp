#include<bits/stdc++.h>

using namespace std;

//we have to write a code which will delete the middle element of stack
//middle element=(size/2)+1

void print_stack(stack<int> s)
{
	if(s.size()==0)
	{
		return;
	}
	int x=s.top();
	s.pop();
	print_stack(s);
	cout<<x<<" ";
	s.push(x);
	return;
}

void solve(stack<int> &s,int k)
{
	if(k==1)
	{
		s.pop();
		return;
	}
	int x=s.top();
	s.pop();
	solve(s,k-1);
	s.push(x);
	return;

}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	// s.push(5);
	int k=(s.size()/2)+1;
	solve(s,k);
	print_stack(s);

	return 0;
}