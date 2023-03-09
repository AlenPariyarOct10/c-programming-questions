#include <stdio.h>
// BCA(Tribhuvan University)--2021
//WAP to generate pascal triangle to 'n'th term

int main()
{
    int i,j,count,value=1,space;

    printf("Enter n : ");
    scanf("%d",&count);

    for(i=1;i<=count;i++)
    {
        for(space=1;space<=count-i;space++)
        {
            printf(" ");

        }

        for(j=1;j<=i;j++)
        {
            if(j==1||i==1)
            {
                value = 1;
            }else{
                value = value*(i-j+1)/(j-1);
            }
            printf("%d ",value);
        }
        printf("\n");
    }
    return 0;
}