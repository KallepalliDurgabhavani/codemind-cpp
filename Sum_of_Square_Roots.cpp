#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    float c=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        float s=sqrt(i);
        c=c+s;
    }
    printf("%0.2f",c);
}