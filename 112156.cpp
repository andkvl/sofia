#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c,n=0,x=0;
cin >>a >>b >>c;
if(a>=b&&a>=c)x=a;
if(b>a&&b>=c)x=b;
if(c>b&&c>a)x=c;
if(a<=b&&a<c)n=a;
if(b<=a&&b<c)n=b;
if(c<=b&&c<a)n=c;
if(a==b==c){n=a;}{x=c;}
cout<<n<<endl<<x;
return 0;
}
