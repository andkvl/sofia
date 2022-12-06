#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
long long sum=0,ft=1;
cin >>n;
n=n*2;
for(int i=1;i<=n;i++){ft=ft*i; if(i%2==0)sum=sum+ft;}
cout<<sum;
return 0;
}
