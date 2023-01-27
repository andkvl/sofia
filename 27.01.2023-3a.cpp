#include<bits/stdc++.h>
using namespace std;
int main()
{
int y=0,z=0,k=0;
double sum=0,x;
cin >>x >>y >>z;
sum=x;
while(sum<=z){k++; x=sum/100*y; sum=sum+x;}
cout<<k<<endl;
return 0;
}
