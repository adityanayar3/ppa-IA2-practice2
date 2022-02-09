#include <stdio.h>
int input_side(int a,int b,int c)
{
  printf("Enter length of first side: ");
  scanf("%d",&a);
  return a;
  printf("Enter length of first side: ");
  scanf("%d",&b);
  return b;
  printf("Enter length of first side: ");
  scanf("%d",&c);
  return c;
  
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if (a==b||b==c||c==a)
  {
    isscalene=1;
  }
  else
  {
    isscalene=0;
  }
}

void output(int a, int b, int c, int isscalene)
{
  if (isscalene=1)
  {
    printf("The given triangle is not scalene");
  }
  else
  {
    printf("The given triangle is scalene");
  }
}
int main()
{
  int a,b,c,isscalene;
  input_side(a,b,c);
  check_scalene(a,b,isscalene);
  output(a,b,c,isscalene);
  return 0;
}