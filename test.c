#include<stdio.h>
int main()
{
    // int sub1,sub2,sub3,sub4;
    // printf ("enter the marks");
    // scanf ("%d %d %d %d" ,&sub1,&sub2,&sub3,&sub4);
    // float avg=(sub1+sub2+sub3+sub4)/4;
    // if(avg>=50)
    // printf("PASS");
    // else
    // printf("FAIL");


    int x ,y , res;
    char c;
    printf("enter opp(+,-,*,/) : ");
    scanf("%c",&c);
    printf("enter first number:");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    
    if(c=='+'){
        res=x+y;
    }else if(c=='-'){
         res=x-y;    
    }else if(c=='*'){
        res=x*y;
    }else if(c=='/'){
        res=x/y;
    }else{
        printf("SYNTAX ERROR");
        return 0;
    }
    printf("ans is : %d",res);




    return 0;


}