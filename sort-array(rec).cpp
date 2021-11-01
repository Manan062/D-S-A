#include<bits/stdc++.h>

using namespace std;

void insert1(vector<int> &v, int val)
{
	if(v.size()==0 or val>=v[v.size()-1])
	{
		v.push_back(val);
		return;
	}
	int temp=v[v.size()-1];
	v.pop_back();
	insert1(v,val);
	v.push_back(temp);
	return;
	
}


void sort_arr(vector<int> &v)
{
	if(v.size()==1)
	{
		return ;
	}
	int val=v[v.size()-1];
	v.pop_back();
	sort_arr(v);
	insert1(v,val);

	

}

int main()
{
	vector<int> v1{5,4,7,3,2,0};
	sort_arr(v1);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<"\n";

	return 0;
}