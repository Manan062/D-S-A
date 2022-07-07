#include <bits/stdc++.h>

using namespace std;

void print(stack<int> v1)
{
    if(v1.empty())
        return;
    int temp=v1.top();
    // cout<<v1.top()<<" ";
    v1.pop();
    print(v1);
    cout<<temp<<" ";
}

void del_middle_elem(stack<int> &s1,int middle)
{
    if(middle==1)
    {
        s1.pop();
        return;
    }
    int temp=s1.top();
    s1.pop();
    del_middle_elem(s1,middle-1);
    s1.push(temp);
    return;
}

int main()
{
    stack<int> v1;
    v1.push(1);
    v1.push(2);
    v1.push(3);
    v1.push(4);
    v1.push(5);
    v1.push(6);
    int mid=v1.size()/2 +1;  //middle is defined as size/2 +1
    del_middle_elem(v1,mid);
    print(v1);
    cout<<"\n";

    return 0;
}


