#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,k,n,l;
    cin>>m>>k>>n;
    l=k*n;
    if(m%l==0)
    {
    cout<<m/l;
    }
    else
    {
        cout<<(m/l)+1;
    }
    
}