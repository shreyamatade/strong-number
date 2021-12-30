#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{   int fac=1;
    for(int i=n;i>0;i--)
    {
        fac=fac*i;

    }
    return fac;
}
/* a strong no is eg: 145=1!+4!+5! */
int main()
{

   int no;
   cin>>no;

   int temp=no;

   int nd=floor(log10(no))+1; int sum=0; int fss;

   for(int i=0;i<nd;i++)
   {
       int a=no%10;
       fss=fact(a);
       sum=sum+fss;
       no=no/10;
   }

   if(temp==sum)
    cout<<"Strong"<<endl;
   else
    cout<<"Not Strong"<<endl;

}
