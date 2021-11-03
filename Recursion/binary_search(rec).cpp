#include<bits/stdc++.h>

using namespace std;

int binary_search(vector<int> v,int val,int low,int high)
{
	int mid=low+(high-low)/2;
	if(v[mid]==val)
	{
		return mid;
	}
	if(v[mid]>val)
	{
		high=mid-1;
		int ans=0;
		ans=binary_search(v,val,low,high);
		return ans;
		
	}
	if(v[mid]<val)
	{
		low=mid+1;
		int ans=0;
		ans=binary_search(v,val,low,high);
		return ans;

	}
	else if(low==high)
	{
		return -1;
	}

}

int main()
{
	vector<int> v={1,2,3,4,5,6,7,8,9,10};
	int ans=0;
	ans=binary_search(v,7,0,v.size()-1);
	cout<<v[ans]<<"\n";

	return 0;
}