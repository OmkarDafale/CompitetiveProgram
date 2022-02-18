#include<iostream>
using namespace std;
int main()
{
    int x ;
    cin>>x;
    if (x==1) cout<<"True";
        int num1=x;
        int num2=0;
        while(x!=0)
        {
            int temp = x%10;
            num2 = (num2*10)+temp;
            x = x/10;
        }
        if(num2 == num1) return True;
        else return False
    return 0;
}