#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,n,st=1,sum=0,d=0;
cin >>a >>n;
for(int i=1;i<=n;i++){st=st*a; sum=st+d; d=sum;}
cout<<sum;
return 0;
}
