#include<stdio.h>
int main(){
    for(int i =1 ; i<=5 ; i++){
        for(int j = 1 ;j<=5-i; j++){
            printf("_");
        }
        printf("****\n");

        
    }

    return 0;
}