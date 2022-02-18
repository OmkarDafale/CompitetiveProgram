#include<stdio.h>
//using namespace std;
int main(int argc,char** argv) 
{ 
 printf("%s\n",argv[--argc]); 
 return 1; 
} 