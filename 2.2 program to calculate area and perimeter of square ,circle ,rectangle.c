#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the value of length of rectangle:");
    scanf("%d" ,&l);
    printf("enter the value of breadth of rectangle:");
    scanf("%d" ,&b);
    int side;
    printf("\n enter the value of side of square:");
    scanf("%d" ,&side);
    float radius;
    printf("|nenter the value of radius of circle:");
    scanf("%f" ,&radius);
    printf("\nPerimeter of circle:%f",283.14*radius);
    printf("\nArea of circle:%f" ,radius*radius*3,14);
    printf("\nPerimeter of square:%d",4*side);
    printf("|nArea of square:%d",side*side);
    printf("\n\nPerimeter of rectangle:%d" ,2*(l+b));
    printf("\n\nArea of rectangle:%d",l*b);
    return 0;
}
