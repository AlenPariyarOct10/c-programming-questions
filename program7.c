#include<stdio.h>
#include<math.h>

/*
BCA(Tribhuvan University)--2021
sum = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + .......... + (x^n/n!)
*/

void series(int,int);

int main()
{
    int term,i,x;
    printf("Enter value of 'n' term : ");
    scanf("%d",&term);
    printf("Enter value of x : ");
    scanf("%d",&x);

    series(term,x);

    return 0;
}

void series(int term,int x)
{
    float calc,sum=0.0;
    int i,fact=1,j;

    for(i=0;i<=term;i++)
    {
        if(i==0)
        {
            
            calc = 1.0;
        }else{
            
            for(j=1;j<=i;j++)
            {
                fact = fact * j;
               
            }
           
            calc = (float)pow(x,i)/(float)fact;
             fact = 1;
           

        }

        sum = sum + calc;
        printf("%f",calc);

        if(i%2==0)
        {
            printf("+");
        }

        
    }

    printf("\n\nSum = %f",sum);
}

