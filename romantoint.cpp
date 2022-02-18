
#include<iostream>
#include<string.h>
using namespace std;
int main()
{

        map<char,int> m ={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        string s ='III';     
        int res = 0;
       for(int i=0;i<s.length();i++)
       {
           if(m[s[i+1]] <= m[s[i]])
               res +=m[s[i]];
            else
                res -=m[s[i]]; 
       }
    return 0;
}
