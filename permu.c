#include<stdio.h>
int next_permutation(int n)
{
    for(int i=0;i<n;i++)
    {
        //printf("i:%d",i);
        for(int j=i;j<n;j++)
        {

            printf("j:%d ",j);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    next_permutation(3);
    return 0;
}