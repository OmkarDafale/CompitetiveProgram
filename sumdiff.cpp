#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    if(x > -1000 && x < 1000 && y > -1000 && y < 1000 )
    {    if((x-y)>y)
            cout<<x-y;
        else
            cout<<x+y;
    }   
    return 0;
}