#include<iostream>
#include<vector>
using namespace std;
int main()
{
        int heights[]={2,1,2,1,1,2,2,1};
        int len = sizeof(heights)/sizeof(heights[0]);
        int i = 0;
        int count =0;
        
        vector<int> arr;
        arr.assign(heights,heights+len);
        int j = arr.size()-1;
        //1,1,4,2,1,3
        while(i<=j)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j--]=temp;
            }
            else
                i++;
        }
        for(int k = 0;k<arr.size();k++)
        {
            cout<<arr[k]<< " ";
            if(arr[k] != heights[k])
                count++;
        }
        cout<<endl;
        cout<<count;

    return 0;
}