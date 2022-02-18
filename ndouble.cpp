#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]



    int i=0;
        while(i<arr.size())
        {   
            int j = 0;
            while(j<arr.size())
            {
                if(arr[j] == arr[i]*2 || arr[j]*2 == arr[i])
                {   
                    return true;
                }
                else
                {
                    j++;
                }
            }
            i++;
        }
    return 0;
}