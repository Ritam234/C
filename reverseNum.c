#include <stdio.h>

int main(){
    int n;
    printf("please enter a number :\n");
    scanf("%d",&n);
    // int res = n/100 ;
    // n = n%100;
    // res += (n/10)*10;
    // n = n%10;
    // res += n*100;
    // printf("%d",res);

    int res=0;
    for(int i =1;sizeof(n);i++){
        res = res *10 + n%10;
        n/=10;
    }
    printf("%d",res);
    return 0;

}