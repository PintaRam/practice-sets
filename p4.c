/*program to find largest amongest three numbers using pass by reference*/
#include<stdio.h>

void input(int *a, int*b, int*c)
{
  printf("enter the number\n");
  scanf("%d%d%d",a,b,c);

}
void cmp(int a, int b, int c, int*largest)
{
if(a>b && a>c)
    
      *largest = a;
else
if(b>a && b>c)
   
     *largest= b;
 else
     *largest= c;
      
}
void output(int a, int b, int c,int largest)
{
 printf("largest among the %d, %d and %d is=%d\n",a,b, c,largest);

}
int main()
{
  int a,b,c, largest;
 input(&a,&b,&c);
 cmp(a, b, c, &largest);
output(a, b, c, largest);
return 0;
}