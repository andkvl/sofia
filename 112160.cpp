#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c,k=0;
cin >>a >>b >>c;
if(a==c)k=2;
if(b==c)k=2;
if(b==a)k=2;
if(a==b&&a==c)k=3;
cout<<k;
return 0;
}

