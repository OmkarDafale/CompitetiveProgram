#include<stdio.h>
//using namespace std;
int main(int argc,char** argv) 
{ 
    printf("%d",argc);
    printf("%s\n",argv[--argc]); 
 return 1; 
} 
//a b c d