#include <bits/stdc++.h>
using namespace std;


int arr_short(int arr[],int size)
{
    int count=0;
    int i;
    int j;
    
    for(i=0;i<size-1;i++)
    {
        if (arr[i]<arr[i+1])
        {
            count++;
            
        }
        
        else
        {
            for(j=0;j<size-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
    }
    return arr[i];
    

}

int main()
{
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    arr_short(arr,size);
    cout<<"array buble short"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
        
    }
}