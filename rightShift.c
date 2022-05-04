#include<stdio.h>
int main()
{
    int a=2;
    int b=6;
    int c=8;
    a=a<<3;
    b=(b<<8)+(b<<3);
    c=(c<<6)-((c<<3)+(c<<5));
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%d \n",c);
    return 0;
}

