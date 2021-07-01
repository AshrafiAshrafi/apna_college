#include <bits/stdc++.h>
using namespace std;


int arithmatic(int arr[],int size)
{
    int ans=2;
    int curr=2;
    int pd=arr[1]-arr[0];
    int j=2;
    while (j<size)
    {
        if (pd==arr[j]-arr[j-1])
        {
            curr++;
            
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    return ans;
}

int main()
{
    int arr[]={10,7,4,6,8,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=arithmatic(arr, size);
    cout<<"This is arithmatic logic :"<<result;
}