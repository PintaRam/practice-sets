//program to find sum of n numbers
#include<stdio.h>
int input()
{
  int n;
  printf("enter the value of n=\n");
  scanf("%d",&n);
  return n;
}
int sum( int n)
{ int sum = 0;
  for(int i=1;i<=n;i++)
  {
    sum = sum+i;
  }
  return sum;
} 
 
void output(int n, int add)
{ 
    printf("sum of\t");

   for(int i=1;i<=n;i++)
  {
    printf("%d+",i);
  }
  printf("\b=%d\n",add);
}
int main()
{
  int n, add;
  n=input();
  add= sum(n);
  output( n, add);
  return 0;
}