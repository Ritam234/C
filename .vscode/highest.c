#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter the value of a \n");
    scanf("%d",&a);
     printf("Enter the value of b \n");
    scanf("%d",&b);
     printf("Enter the value of n \n");
    scanf("%d",&n);
//
    if(a>b && a>n)
    printf("%d is the highest number \n",a);
    else if (n>b && n>a)
    printf("%d is the highest number \n",n);
    else if(b>a && b>n)
    printf("%d is the highest number \n",b);
    else if(b==a &&a==n)
    printf("All the values are same \n");
    else if(b==a && a>n)
    printf("The first two values are equal and highest and the value is %d \n",b);
    else if(b==a && b<n)
    printf("%d is the highest value \n",n);
    else if(b==n && n>a)
    printf("The last two values are equal and highest and the value is %d \n",n);
    else if(b==n && n<a)
    printf("%d is the highest value \n",a);
    else if(a==n && a>b)
    printf("The first & third values are equal and highest and the value is %d \n",a);
    else if(a==n && a<b)
    printf("%d is the highest value \n",b);
    
return 0;
}
