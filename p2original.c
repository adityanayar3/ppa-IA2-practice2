int input_side()
{
  int a,b,c;
  printf("Enter length of first side: ");
  scanf("%d",a);
  printf("Enter length of second side: ");
  scanf("%d",b);
  printf("Enter length of third side: ");
  scanf("%d",c);
  return a,b,c;
  
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if a==b||b==c||c==a
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
  if isscalene=1
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
  check_scalene(a,b,c,isscalene);
  output(isscalene);
  return 0;
}