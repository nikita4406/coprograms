#include<iostream>
using namespace std;
int main()
{
  int n,k[10],a=0,b;
  cout<<"\ndecimal to binary conversion";
  cout<<"\nEnter decimal number ";
  cin>>n;
  cout<<"\nBinary number of "<<n<<" is ";
  cout<<"\nthe decimal to binary conversion has been completed ";
  if(n==0 || n==1)
   {
     cout<<n;
     return 0;
   }
  while(n!=0)
   {
     k[a]=n%2;
     n=n/2;
     a++;
   }
   for(b=a-1;b>=0;b--)
    cout<<k[b];
}
