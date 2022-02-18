#include<iostream>
using namespace std;

int main()
{
    int n ,even=0,odd=0;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2 == 0)
            even+=1;
        else    
            odd+=1;
    }
    if(even>odd)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";

    return 0;
}