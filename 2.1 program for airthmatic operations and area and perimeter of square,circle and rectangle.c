#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mult;
    printf("enter the first number:-" );
    scanf("%d" ,&a);
    printf("enter the second number:-");
    scanf("%d" ,&b);
    sum=(a+b);
    sub=(a-b);
    div=a/b;
    mult=a*b;
    printf("\nThe sum  is :%d" ,sum);
    printf("\nThe sub  is :%d",sub);
    printf("\nThe div  is :%d",div);
    printf("\nThe mult  is :%d" ,mult);
    return 0;
}


