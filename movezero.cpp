#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={0,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums;
    nums.assign(arr,arr+len);

        int i=0;
        //int len = nums.size();
        while(i<len)
        {
            if(nums[i] == 0 && nums.size()!=0)
            {
               nums.erase(nums.begin()+i);
            }
            else
                i++;
        }
        for(int j =nums.size();j<len;j++)
        {
            nums.push_back(0);
        }
        for(int q = 0;q<nums.size();q++)
        {
            cout<<nums.at(q);
        }
    return 0;
}
