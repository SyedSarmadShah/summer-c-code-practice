#include<iostream>
using namespace std;
int main()
{
int i,j,t=1,k,n,a[100],b, num=0 , check=1;

cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter the elements: ";
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(j=0;j<n;j++)
{
    num++;
    if (check==1)
    {
          
    if(a[j]!=num)
    {
        b=num;
        check=0;
    }
    }
  
}

cout<<"The missing elements ise: ";
cout<<b;


return 0;
}