//program to find Sum of n complex numbers
#include<stdio.h>
struct _complex{ float real,imaginary;};
typedef struct _complex Complex;
int get_n()
{ 
  int n;
  printf("enter the number of values to be added\n");
  scanf("%d",&n);
  return n;
}
void input_n_complex(int n,Complex c[n])
{ 
  for(int i=0;i<n;i++)
    {
      printf("enter the values\n");
      scanf("%f %f",&c[i].real,&c[i].imaginary);
    }
}
Complex add_n_complex(int n,Complex c[n])
{ 
  Complex f;
  f.real=0;f.imaginary=0;
  for(int i=0;i<n;i++)
   { 
     f.real+=c[i].real; 
     f.imaginary+=c[i].imaginary;
   }
  return f;
}
void output(int n,Complex c[n],Complex result)
{
  int i;
    for(i=0;i<n;i++)
      printf("%.0f + %.0fi +",c[i].real,c[i].imaginary);
    printf(" is %.0f + %.0fi\n",result.real,result.imaginary);
}    
int main()
{
  Complex h[15];
  int x;
  x=get_n();
 input_n_complex(x,h);
  output(x,h,add_n_complex(x,h));
  return 0;
}