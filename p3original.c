#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int i,c=0;
  for (i=1;i<=n;i++)
  {
    if(n % i == 0)
    {
        c++;
    }
  }
  return c;
}
void output(int n, int c)
{
  if (c>2)
  {
      printf("The number is not composite");
  }
  else
  {
    printf("The number is not composite");
  }
}
int main()
{
  int a,n,c,i;
  input_number(a);
  is_composite(c);
  output(n,c);
  return 0;

}
