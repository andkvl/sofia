#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c,d,e,f,Min,Nim;
cin <<a <<b <<c <<d <<e <<f;
Min=min(min(a,b),c);
Nim=min(min(d,e),f);
cout<<Nim<<Min;
return 0;
}
