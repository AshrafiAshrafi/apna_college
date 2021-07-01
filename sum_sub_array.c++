#include <bits/stdc++.h>
using namespace std;

void sum_of_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=i;j<size;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
}


int main()
{
    int arr[]={5,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"THis is sum array: "<<endl;
    sum_of_array(arr, size);
}