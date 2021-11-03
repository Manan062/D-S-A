#include <bits/stdc++.h>

using namespace std;


void print_stack(stack<int> s)
{
	if(s.empty())
	{
		return;
	}
	int val=s.top();
	s.pop();
	print_stack(s);
	cout<<val<<" ";
	s.push(val);

}


void insert1(stack<int> &s, int val)
{
	if(s.empty() or s.top()<=val)
	{
		s.push(val);
		return;
	}
	int temp=s.top();
	s.pop();
	insert1(s,val);
	s.push(temp);

	return;

}

void sort1(stack <int> &s)
{
	if(s.empty())
	{
		return ;
	}
	int temp=s.top();
	s.pop();
	sort1(s);
	insert1(s,temp);

	return ;


}

int32_t main()
{
	stack <int> s;
	s.push(1);
	s.push(0);
	s.push(5);
	s.push(3);
	s.push(9);
	s.push(2);
	
	sort1(s);
	
	print_stack(s);

    return 0;
}