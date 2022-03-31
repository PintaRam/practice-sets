p4.c
  /*program to find largest amongest three numbers using pass by value*/
#include<stdio.h>

int input()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;

}
int cmp(int a, int b, int c)
{
int largest;
if(a>b&&a>c)
    return 1;
else if(b>a&&b>c)
    return -1;
}
void output(int a, int b, int c,int max)
{
  if(max==1)
        printf("largest among the %d, %d and %d is=%d\n",a,b, c,a);
  else if(max==0)
       printf("largest among the %d, %d and %d is=%d\n",a,b, c,b);
    else
        printf("largest among the %d, %d and %d is=%d\n",a,b, c,c);

}
int main()
{
  int a,b,c, max;
  a = input();
  b = input();
  c = input();
 max=cmp(a, b, c);
output(a, b, c, max);
return 0;
}