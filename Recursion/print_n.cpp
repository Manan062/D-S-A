#include<bits/stdc++.h>

using namespace std;

// #define int long long

void solve(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    
    solve(n-1);
    cout<<n<<" ";
    

}

int main()
{
    int n;
    cin>>n;
    solve(n);

    return 0;
}
