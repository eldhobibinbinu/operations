#include<stdio.h>
int x,y,z;
float k;
int main()
{
printf("enter the value of x: ");
scanf("%d",&x);
printf("enter the value of y: ");
scanf("%d",&y);
printf("enter the value of z: ");
scanf("%d",&z);
k=x+y*z/4%2-1;
printf("%f",k);

}


