#include<iostream>
using namespace std;
int main()
{
    int arr1[100],arr2[100] , i , n ,t, o;

    cout<<"Enter the no of array :";
    cin>>n;
    
    int j=n-1;

    
    cout<<"Enter the array :";
    for (t=1 ; t<=n ;t++) 
    {
        cin>>arr1[t];
    }


    for (i=n ; i>=1 ;i--) 
    {
       if(j>1)
       {
        arr2[j]=arr1[i];
        j--;
       }
       else{
        arr2[j]=arr1[i];
       }
    }

    cout<<"So the reversed array is :";
    for (o=1 ; o<=n ;o++) 
    {
        cout<<arr2[o];
    }
}