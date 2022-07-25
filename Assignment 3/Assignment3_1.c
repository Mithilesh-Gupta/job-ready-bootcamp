#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0){
        printf("Number is postive");
    }
    if(n<0){
        printf("Number is negative");
    }
    if(n==0){
        printf("Number is zero");
    }
return 0;
}