#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,a1,a2,a3,a4,a5,b,c,d,e,f,k=0;
cin >>a;
a1=a/10000;
a2=(a/1000)%10;
a3=(a/100)%10;
a4=(a/10)%10;
a5=a%10;
b=a1; c=a2; d=a3; e=a4; f=a5;
if(a1<a2)swap(a1,a2);
if(a2<a3)swap(a2,a3);
if(a3<a4)swap(a3,a4);
if(a4<a5)swap(a4,a5);
if(a1<a2)swap(a1,a2);
if(a2<a3)swap(a2,a3);
if(a3<a4)swap(a3,a4);
if(a1<a2)swap(a1,a2);
if(a2<a3)swap(a2,a3);
if(a1<a2)swap(a1,a2);
if(b%2==0&&a1!=0)k++;
if(c%2==0&&a2!=0)k++;
if(d%2==0&&a3!=0)k++;
if(e%2==0&&a4!=0)k++;
if(f%2==0&&a5!=0)k++;
cout<<a5*a4*a3<<endl<<k<<endl;
if(b%2!=0)cout<<1;
else {if(c%2!=0){cout<<"2";}
     else {if(d%2!=0){cout<<"3";}
          else {if(e%2!=0){cout<<"4";}
               else {if(f%2!=0){cout<<"5";}
                     else{cout<<"No";}}}}}
return 0;
}
