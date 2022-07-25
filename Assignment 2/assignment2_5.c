#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the three digit numbers:");
    scanf("%d",&n);
    while(n>0){
    sum=sum+n%10;
    n=n/10;
    }
    printf("sum of three digit numbers is %d",sum);
return 0;
}