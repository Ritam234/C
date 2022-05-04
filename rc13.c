#include<stdio.h>
int main()
{
    int sub1, sub2, sub3;
    printf("Enter the mark of sub1 \n ");
    scanf("%d",&sub1);
     printf("Enter the mark of sub2 \n ");
    scanf("%d",&sub2);
     printf("Enter the mark of sub3 \n ");
    scanf("%d",&sub3);
    int avg=(int)((sub1+sub2+sub3)/3);
    if(avg<=100 && avg>=91)
    printf("O \n");
   else if(avg<=90 && avg>=81)
    printf("E \n");
      else if(avg<=80 && avg>=71)
    printf("A \n");
     else  if(avg<=70 && avg>=61)
    printf("B \n");
     else  if(avg<=60 && avg>=51)
    printf("C \n");
    else if (avg<50)
    printf("FAIL \n");
       
    return 0;
}