//program to find sum of two complex numbers
#include<stdio.h>
struct _complex{
  int real,imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex k;
  printf("enter the real and imag\n");
  scanf("%d %d",&k.real,&k.imaginary);
  return k;
}
Complex add(Complex a,Complex b)
{ 
    Complex z;
    z.real=a.real+b.real;
    z.imaginary=a.imaginary+b.imaginary;
    return z;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%d + %di + %d + %di is %d + %di\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  struct _complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}
