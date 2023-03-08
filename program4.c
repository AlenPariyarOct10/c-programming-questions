// Write a C program to calculate sum of the natural number up to N number using recursive function
#include<stdio.h>

int add(int n)
{
    if(n==1)
    {
        return 1;
    }
        return n + add(n-1);
    
}

int main()
{

    int n;
    printf("Enter 'n'th term : ");
    scanf("%d",&n);

    printf("Sum : %d",add(n));
    
    return 0;
}