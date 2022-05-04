#include <stdio.h>
int main(){
    int a , b , c;
    scanf("%d %d %d",&a ,&b, &c);
    int n = (a+b+c)/3;

    (n>=75)?printf("*"):(n>=60 && n<75)?printf("1st"):(n>=45 && n<60)?printf("2nd"):(n>=34 && n<45)?printf("3rd"):printf("fail");
   
    return 0;
}