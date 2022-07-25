#include <stdio.h>
#include<math.h>

int main()
{
    int R;
    float A;
    printf("Enter the value of radius:");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("Area of circle is  %.2f\n",A);
    return 0;

}