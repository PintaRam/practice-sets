#include <stdio.h>  
#include<string.h>  
void input_two_string(char*a,char*b)
{
  printf("Enter the first string : ");  
   scanf("%s",a);  
   printf("Enter the second string : ");  
   scanf("%s",b); 
}
int str_cmp(char*a, char*b)
{ int value;
// comparing both the strings using strcmp() function  
   value=strcmp(a,b);  
   return value;
}
void output(char*a, char*b, int result)
{
  if(result==0)  
   printf("strings are same");
   else if(a>b)
   printf("%s greater than %s\n",a,b);
   else if(b>a)
   printf("%s is greater than %s\n",b,a);
}
int main()  
{  
   char a[20];  // declaration of char array  
   char b[20];  // declaration of char array  
   int result; // declaration of integer variable  
   input_two_string(a, b);
   result = str_cmp(a, b);
   output(a,b,result);
   return 0;
} 
 
