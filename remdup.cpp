#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    int a[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(a)/sizeof(a[0]);
   
    v1.assign(a, a + size);
        vector<int>::iterator start,end;
        start = v1.begin();
        end = v1.begin();
        if(start==end)
        {
            end++;
        }
        else
        {
            start++;
        }
        v1.erase(start+1,end);


    // for(int i = 0;i<v1.size()-1;i++)
    // {
    //     if(v1.at(i) == v1.at(i+1))
    //     {
    //         v1.erase(v1.begin()+i);
    //     }
    //     for(int i = 0;i<v1.size();i++)
    // {
    //     cout<<v1.at(i);
    // }
    // cout<<endl;
    // }
    return 0;
}