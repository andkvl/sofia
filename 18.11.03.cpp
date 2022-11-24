#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,a2,b2,c2;
cin >>a >>b >>c >>a2 >>b2 >>c2;
if(a>b)swap(a,b);
if(b>c)swap(b,c);
if(a>b)swap(a,b);
if(a2>b2)swap(a2,b2);
if(b2>c2)swap(c2,b2);
if(a2>b2)swap(a2,b2);
if(a>a2&&b>b2&&c>c2)cout<<"Yes. 2 in 1";
else{if(a2>a&&b2>b&&c2>c)cout<<"Yes. 1 in 2";
else{cout<<"No";}}
return 0;
}
