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

void insert(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,val);
    s.push(temp);
    return;


}

void reverse(stack<int> &s1)
{
    if(s1.empty())
    {
        return;
    }
    int temp=s1.top();
    s1.pop();
    reverse(s1);
    insert(s1,temp);
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
    reverse(v1);
    print(v1);
    cout<<"\n";

    return 0;
}


