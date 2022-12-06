#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a=0,x=1,c;
cin >>n;
for(int i=1;i<=n;i++){c=x; x=x+a; cout<<x<<" "; a=c;}
return 0;
}
