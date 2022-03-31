//find gcd (hcf) of two numbers.
#include<stdio.h>
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a, int b)
{ int gcd;
  if(a==0)
  {
    gcd = b;
  }
  if(b==0)
  {
   gcd = a; 
  }
  for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}
void out_put(int a, int b , int gcd)
{
  printf("hcf of %d and %d id %d \n",a,b,gcd);
}
int main()
{
  int a, b ,hcf;
  a= input();
  b= input();
  hcf= gcd(a,b);
  out_put(a,b,hcf);
  return 0;

}
