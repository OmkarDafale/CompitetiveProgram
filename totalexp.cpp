#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum =0.000000;
    while(n--)
    {
        double a,b;
        cin>>a>>b;
        if(a > 1000)
        {         
            double s = ((a * b)*10)/100;
            sum = (a * b) - s;
        }
        else
            sum = a*b;
        
        printf("%.6f\n",sum) ;  
    }
    return 0;
}