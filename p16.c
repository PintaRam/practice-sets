// program to find the area of a triangle using following function signatures.
#include<stdio.h>
float input(float *base,float *height)
{
  printf("enter the of base and height\n");
  scanf("%f%f",base,height);
}
float find_area(float base, float height, float*area)
{
 *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
  printf("area of triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base, height, area;
   input(&base, &height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0 ;
}