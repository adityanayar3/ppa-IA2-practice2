#include <stdio.h>
void input(float *base, float *height)
{
  printf("Enter the height of the triangle: ");
  scanf("%f",height);
  printf("Enter the base length of the triangle: ");
  scanf("%f",base);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*height*base;

}
void output(float base, float height, float area){
  printf("The area of triangle with base %.1f and height %.1f is %.1f",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}