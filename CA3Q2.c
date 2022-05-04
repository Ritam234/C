#include <stdio.h>
int main(){

    int arr[10][10];
    printf("please Enter value(0/1) of Array : \n");
    for(int i = 0 ; i < 10 ; i++){
        for (int j=0; j < 10; j++){
            scanf("%d",&arr[i][j]);
        } 
    }

    int count=0  , res;

    for (int i = 0; i < 10; i++){
        int sum = 0;
        for(int j = 0 ; j <10 ; j++){
            sum  += arr[i][j];
        }      
        if(sum > count ){
            count = sum;
            res = i;
        }
    }

    printf(" Highest sum value is %d and row index is %d", count , res);
    

    return 0;
}