#include<iostream>
using namespace std;

int main()
{
int n , t , i , j, a[100] , inter_no;

cout<<"enter the no of array :";
cin>>n;
t=n-1;

cout<<"enter the numbers :";
for(i=0 ; i<n ; i++)
{
cin>>a[i];
}

for(j=0 ; j<n ; j++)
{
if(a[j]==0)
{
    inter_no=a[j];
    a[j]=a[t];
    a[t]=inter_no;
    t--;
}
}

cout<<"Output is  :";
for(i=0 ; i<n ; i++)
{
cout<<a[i];
}
return 0;
}