#include<bits/stdc++.h>
using namespace std;
int main()
{
int ft=1,x=0,y;
cin >>y;
while(ft<y){x++; ft=ft*x;}
if(ft==y){cout<<x<<endl;}
else{ cout<<"No";}
return 0;
}
