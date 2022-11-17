#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,k,sr=0;
cin >>a >>b >>c >>d;
if(a==0||b==0||c==0||d==0){if(a==0){k++; cout<<1<<" ";}
if(b==0){k++; cout<<2<<" ";}
if(c==0){k++; cout<<3<<" ";}
if(d==0){k++; cout<<4<<" ";}
cout<<"kolichestvo nylei="<<k;}
else {sr=(a+b+c+d)/4.0;
if(a>sr)cout<<a;
else {if(b>sr)cout<<b;
else{if(c>sr)cout<<c;
else{if(d>sr)cout<<d;}}}}
return 0;
}
