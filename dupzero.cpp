#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int ans[] = {1,0,2,3,0,4,5,0};
    vector<int> v1;
    int len = sizeof(ans)/sizeof(ans[0]);
    v1.assign(ans,ans+len);

    vector<int> s;
    for(int i =0;i<v1.size();i++)
    {
        if(v1.at(i) == 0)
        {
            s.push_back(v1.at(i));
            s.push_back(0);
        }
        else
            s.push_back(v1.at(i));
    }
    for(int i =0 ;i< len;i++)
    {
        v1[i]=s[i];
    }

    
    for(int i =0 ;i<v1.size();i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}