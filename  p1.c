// add two numbers using pass by value
#include<stdio.h>

int input()
{
   int num;
  printf("enter the value =");
scanf("%d",&num);
return num;
}
int add(int a, int b)
{
float sum;
sum = a + b;
}
void output(int a, int b, float sum)
{
printf("addition of %d+%d is=%f\n",a,b,sum);

}
int main()
{
  int num1, num2 ;
  float sum;
  num1=input();
  num2=input();
  sum=add(num1, num2);
  output(num1, num2, sum);
  return 0;
}
