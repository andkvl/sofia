#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,a1,a2,a3,a4,c=0;
cin >>a;
a1=a/1000;
a2=(a/100)%10;
a3=(a/10)%10;
a4=a%10;
if(a1==1)c=c+1;
if(a2==1)c=c+1;
if(a3==1)c=c+1;
if(a4==1)c=c+1;
if(a1<=5&&a2<=5&&a3<=5&&a4<=5)cout<<c;
else{if(a1>5)cout<<1<<" ";
if(a2>5)cout<<2<<" ";
if(a3>5)cout<<3<<" ";
if(a4>5)cout<<4<<" ";}
return 0;
}
