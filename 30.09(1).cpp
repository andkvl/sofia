#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,s,a1,a2,a3;
cin >>a;
a1=a/100;
a2=(a/10)%10;
a3=a%10;
s=a+a3*100+a2*10+a1;
cout<<a1<<endl;
cout<<a2<<endl;
cout<<a3<<endl;
cout<<s;
return 0;
}

