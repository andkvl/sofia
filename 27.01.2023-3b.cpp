#include<bits/stdc++.h>
using namespace std;
int main()
{
int y=0,k=0;
double sum=0,x=0,s=0,rez;
cin >>x >>y >>s;
sum=x;
while(sum<=s){k++; x=sum/100*y; sum=sum+x; rez=rez+sum;}
cout<<k<<endl;
return 0;
}
