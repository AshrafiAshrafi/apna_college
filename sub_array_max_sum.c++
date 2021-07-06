// #include <bits/stdc++.h>
// using namespace std;


// void max_sub_array(int arr[],int size)
// {
//     int max_value=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         int sum=0;
//         for (int j = i; j <size; j++)
//         {
//             sum+=arr[j];
//             if (sum>max_value)
//             {
//                 max_value=sum;
                
//             }
            
//         }
        
//     }
//     cout<<"THis is your maximum subarray :"<<max_value<<"\n";

// }

// int main()
// {
//     int arr[]={-1,4,7,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     max_sub_array(arr, n);
// }




//maxium sub array its a kadane's algo
//time complexity o(n)


#include <bits/stdc++.h>
using namespace std;


void max_sub_array(int arr[],int size)
{
    int max_value=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<size;i++)
    {
        curr_sum+=arr[i];
        if (curr_sum<0)
        {
            curr_sum=0;
            
        }
        max_value=max(max_value,curr_sum);
    }
    cout<<"THis is your maximum subarray :"<<max_value<<"\n";
}


int main()
{
    int arr[]={-1,4,-6,7,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_sub_array(arr,n);

}