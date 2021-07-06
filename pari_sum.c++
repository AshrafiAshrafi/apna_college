#include <bits/stdc++.h>
using namespace std;


bool pair_sum_target(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        for(int i=0;i<n;i++)
        {
            if (arr[low]+arr[high]==k)
            {
                cout<<low<<" "<<high<<"\n";
                return true;
                break;

                
            }
            else if(arr[low]+arr[high]<k)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    return false;
}

int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=31;

    pair_sum_target(arr,  size, target);
}