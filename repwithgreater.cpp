#include<iostream>
#include<vector>
using namespace std;




int findmax(int i,vector<int> arr)
{
    int m = -1;
    for(i;i<arr.size();i++)
    {
        if(arr[i]>m)
        {
            m = arr[i];
        }
    }
    return m;
}


int main()
{
        int a[]={17,18,5,4,6,1};
        int len = sizeof(a)/sizeof(a[0]);
        vector<int> arr;
        arr.assign(a,a+len);
    
        if(arr.size() == 1)
        {
            arr.clear();
            arr.push_back(-1);
        }
        else
        {
            int i =0;
            while(i<arr.size())
            {
                int m = findmax(i+1,arr);
                arr[i++] = m;
            }
        }
        for(int j = 0;j<arr.size();j++)
        {
            cout<<arr.at(j)<<" ";
        }
        return 0;
}