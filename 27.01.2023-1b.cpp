#include<bits/stdc++.h>
using namespace std;
int main()
{
int i=370,sum=0,k=0;
while(i>=10){sum=sum+i; k++; i-=6;}
cout<<sum<<endl<<k<<endl;
return 0;
}
