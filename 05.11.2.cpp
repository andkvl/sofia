#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,a1,a2,a3,Max;
cin >>a;
a1=a/100;
a2=(a/10)%10;
a3=a%10;
Max=max(max(a1,a2),a3);
if(a%a2==0)cout<<Max;
else{if(a3%2==1)cout<<3;
else{if(a2%2==1)cout<<2;
else{if(a1%2==1)cout<<1;
else{cout<<"No";}}}}
return 0;
}
