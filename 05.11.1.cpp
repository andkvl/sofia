#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,a1,a2,a3,m,s;
cin >>a;
a1=a/100;
a2=(a/10)%10;
a3=a%10;
if(a1%2==1)m=m+1;
if(a2%2==1)m=m+1;
if(a3%2==1)m=m+1;
if(a1>=a2&&a1>=a3)s=a1;
if(a2>=a3&&a2>=a1)s=a2;
if(a3>=a1&&a3>=a2)s=a3;
else{cout<<s;}
return 0;
}
