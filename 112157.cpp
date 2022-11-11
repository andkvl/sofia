#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e,Max,Min;
cin >>a >>b >>c >>d >>e;
Max=max(max(max(max(max(a,b),c),d),e));
Min=min(min(min(min(min(a,b),c),d),e));
cout<<Min<<Max;
return 0;
}
