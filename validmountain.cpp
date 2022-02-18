#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int a[]={0,1,2,3,4,5,6,7,8,9};
    int len = sizeof(a)/sizeof(a[0]);
    vector<int> arr;
    arr.assign(a,a+len);

    if (arr.size() < 3) 
        return false;
    int i =0;
    while(i<arr.size() && arr[i]<arr[i+1])
        i++;
    
    if(i == 0 || i == arr.size()-1)
        cout<<"False";

    while (i< (arr.size()-1) && arr[i]>arr[i+1])
    {
        i++;
    }
    
    if(i == arr.size()-1)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}