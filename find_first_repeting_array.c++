#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter your size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int N=20;//10*6 size

    int idx[N];//create index array
    //initilize array idx -1

    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if (idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    if (minidx==INT_MAX)
    {
        cout<<"-1"<<"\n";
        
    }
    else
    {
        cout<<"\n";
        cout<<"This is repting index :"<<minidx+1<<"\n";
    }


}