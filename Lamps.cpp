#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,l,no;
    cin>>n>>k>>x>>y;
    int red=x*k;
    no=n-k;
    if(x<y)
    {
        l=red+(no*x);
    }
    else
    {
        l=red+(no*y);
    }
    cout<<l;
}