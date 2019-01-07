#include<iostream>
using namespace std;
int main()
{
  int n,k[10],i=0,j;
  cout<<"\nconversion from decimal to binary";
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
     k[i]=n%2;
     n=n/2;
     i++;
   }
   for(j=i-1;j>=0;j--)
    cout<<k[j];
}
