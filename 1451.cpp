#include<bits/stdc++.h>
using namespace std;
int main()
{
long long A,B,C,e=0,o=0;
cin >>A;
cout<<endl;
cin >>B;
cout<<endl;
cin >>C;
if(A%2==0||B%2==0||C%2==0)e=e+1;
if(A%2==1||B%2==1||C%2==1)o=o+1;
if(e!=0&&o!=0)cout<<"YES";
else{cout<<"NO";}
return 0;
}
