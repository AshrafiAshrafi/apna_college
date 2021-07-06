#include <bits/stdc++.h>
using namespace std;

void missing_pos_num(int arr[],int size)
{
    //create cheak array
    int cheak[size];
    int ans=-1;

    for(int i=0;i<size;i++)
    {
        cheak[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            cheak[arr[i]]=-1;
        }
        else
        {
            cheak[arr[i]]=1;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(cheak[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<"This is missing number"<<ans<<endl;
}

int main()
{
    int arr[]={0,-9,1,3,-4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    missing_pos_num(arr,size);
}