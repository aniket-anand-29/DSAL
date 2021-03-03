#include<iostream>
using namespace std;
int main()
{

int i,n,a[100];

int num,ctr=0;

cin>>n;

for(i=0;i<n;i++)
{
  cin>>a[i];
}

for(i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}
cout<<endl;
cin>>num;
for(i=0;i<n;i++)
{
if (num == a[i])
{ctr++;
break;}
}
if(ctr == 0)
{
  cout<<"Element doesn't exist";
}
else{
  cout<<"Element found at Index "<<i+1;
}



  return 0;
}
