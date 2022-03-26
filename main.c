#include <stdio.h>

int main()
{
  int a,b;
  char op;
  float result;

  printf("Enter two integers:\n");
  scanf("%d%d",&a,&b);
  printf("Enter the operator\n");
  printf("+ for addition\n");
  printf("- for subtraction\n");
  printf("* for multiplication");
  printf("/ for divsion\n");
  printf("%% for modulus");

  scanf(" %c",&op);

  if(op=='+')
  {
    result=a+b;
  }
  else if(op=='-')
  {
    result=a-b;
  }
  else if(op=='*')
  {
    result=a*b;
  }
  else if(op=='/')
  {
    if(b==0)
    {
      printf("Enter a non zero value");
    return (-1);
    }
    else
    {
      result=a/b;
    }
  }
  else if(op=='%')
  {
    if(b==0)
    {
      printf("Enter a non zero value");
      return (-1);
    }
    else
    {
      result=a%b;
    }
  }     
  else
  {
    printf("invalid operator\n");
    return 1;
  }
  printf("result=%f\n",result);          
return 0;  
}