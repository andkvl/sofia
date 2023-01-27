#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,k=0;
double sum=0;
cin >>x;
sum=x;
while(sum<1000){k++; x=sum/100*7; sum=sum+x;}
cout<<k<<endl;
return 0;
}
