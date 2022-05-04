#include<stdio.h>
int main()
{
    int a[10][10],b[10],c=0,r,k=0;
    for(int i = 0; i< 10; i++) //input matrix:10x10
    {
        for(int j=0;j<10;j++)
        {
            printf("Enter a[%d][%d] \n",i,j);  
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0;i<10; i++)//count and store the highest no of consecutive 1's in each row
    {
        c=0;
        r=0;

        for(int j=0; j<10;j++)
        {
            if(a[i][j]==0)
            {

                    
                c=0;
        
            }
            else
            {
                c++;
                if(c>r)
                {
                    r=c;
                }
            }
        }
        b[k]=r;
        k++;
    }
    int max=b[0]; // finding which row has max consecutive 1's
    for(int i=0; i<10; i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("The row(s) with max no. of consecutive 1's is: \n");
    for (int i = 0;i< 10 ;i++) //printing the row no.
    {
        if(b[i]==max)
        {
            printf("%d \n",i+1);
        }
    }
    return 0;
}

