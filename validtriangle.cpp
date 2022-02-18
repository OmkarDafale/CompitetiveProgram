#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int sum = 0,data;
        for(int i =0 ; i < 3 ;i++)
        {
            cin>>data;
            sum += data;
        }
        
        if(sum == 180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        n--;
    }
    return 0;
}