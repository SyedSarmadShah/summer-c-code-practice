#include<iostream>
using namespace std;
int main()
{
int i,j,t=1,k,n,a[100],b[100], num=1;

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
    if(a[j]!=num)
    {
        b[t]=num;
        t++;
    }
}

cout<<"The missing elements are: ";
for(k=0;k<t;k++)
{
cout<<b[k]<<" ";
}

}