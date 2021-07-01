#include <bits/stdc++.h>
using namespace std;

int binnary_search(int arr[],int l,int r,int data)
{
    int mid=(l+r)/2;
    if (r>=l)
    {
        if (arr[mid]==data)
        {
            return mid;
            
        }
        else if (arr[mid]>data)
        {
            return binnary_search(arr,  l,  mid, data);
            
        }
        else
        {
            return binnary_search(arr, mid+1,  r, data);
        }
        
    }
    return -1;
}

int main()
{
    int arr[]={10,12,13,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    int data=15;
    int result=binnary_search(arr,  0,  size-1,data);
    if (result==-1)
    {
        cout<<"your data is not found!";
    }
    else
    {
        cout<<"your data is found "<<result;
    }
}