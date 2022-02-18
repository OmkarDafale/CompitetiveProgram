#include<iostream>
using namespace std;
int fact(int num)
{
   if(num == 0 || num ==1)
        return 1;
    else
    {
        return num*fact(num-1);
    }
}

int main()
{
    int n = 0;
    cin>>n;
    if(n>=0 && n <=100)
    {    while(n--)
        {
           int num = 0;
            cin>>num;
            cout<<fact(num)<<endl;
        }
    }
    return 0;
}