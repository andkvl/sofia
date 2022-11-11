#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c;
cin >>a;
cout<<endl;
cin >>b;
cout<<endl;
cin >>c;
if(a>=b&&a>=c)cout<<a;
else{if(b>=a&&b>=c)cout<<b;
else{if(c>=a&&c>=b)cout<<c;}}
return 0;
}
