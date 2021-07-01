#include <bits/stdc++.h>
using namespace std;


void recordbreaking_day()
{
    int n;
    cout<<"Enter your array size";
    cin>>n;

    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n]=-1;
    if (n==1)
    {
        cout<<"record breaking day is 1";
        
    }
    int ans=0;
    int pre=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>pre && arr[i]>arr[i+1] )
        {
            ans++;
        }
        pre=max(pre,arr[i]);
    }
    cout<<"record breaking day is :"<<ans;
}
int main()
{
    recordbreaking_day();
}