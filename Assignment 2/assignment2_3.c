#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter the two number a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Values of integer after swapping is %d and %d",a,b);
return 0;
}
