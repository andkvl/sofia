#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,k=0,maxx;
double sum=0;
cin >>x;
sum=x;
maxx=3*x;
while(sum<maxx){k++; x=sum/100*7; sum=sum+x;}
cout<<k<<endl;
return 0;
}
