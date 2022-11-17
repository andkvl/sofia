#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,a1,a2,a3,a4;
cin >>a;
a1=a/1000;
a2=(a/100)%10;
a3=(a/10)%10;
a4=a%10;
if(a1<a2)swap(a1,a2);
if(a2<a3)swap(a2,a3);
if(a3<a4)swap(a3,a4);
if(a1<a2)swap(a1,a2);
if(a2<a3)swap(a2,a3);
if(a1<a2)swap(a1,a2);
cout<<a1<<a2<<a3<<a4;
return 0;
}
