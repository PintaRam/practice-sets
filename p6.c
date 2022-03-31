#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{ int i;  
  printf("enter the array element\n");
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0, i;
  for(i=1;i<=n;i++)
  sum=sum+a[i];
  return sum;
}
void output(int n, int a[n], int sum)
{
  printf("sum of");
   for(int i=1;i<=n;i++)
 {
  printf(" %d+ ", a[i]);
  }
printf("=%d\n",sum);
}

int main()
{
  int sum,n;
  n=input_array_size();
  int a[n];
  input_array(n, a);
  sum=sum_n_arrays( n,  a);
  output(n,  a,  sum);
  return 0;
}
  