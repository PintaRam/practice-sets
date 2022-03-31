#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the value of n\n");
  return n;
  scanf("%f",&n);
}
float my_sqrt(float n)
{ float x = n/2;
  float sqrt;
  sqrt = 0.5*( x+(n/x));
  while (fabs(x-sqrt)>0.00001)
  {
    x=sqrt;
    sqrt=0.5*(x+(n/x));
  }
  return sqrt;
}
void output(float n, float sqrt_result)
{
  printf("square root of a %f is=%f\n",n, sqrt_result);

}
int main()
{float n, sqrt_result;
n= input();
sqrt_result= my_sqrt(n);
output(n,sqrt_result);
return 0;
}

  