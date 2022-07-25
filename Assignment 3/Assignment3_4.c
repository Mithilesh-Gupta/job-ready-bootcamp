#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int result=n&1;
    if(result==1){
        printf("Odd number");
    }
    else{
        printf("Even number");
    }
return 0;
}