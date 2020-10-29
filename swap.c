#include<studio.h>
int main()
{
 int a,b;
 printf("Enter the two values for swapping :\n",a,b);
 scanf("%d%d",&a,&b);
 printf("Values before swapping a=%d ,b=%d",a,b);
 a = a+b;
 b = a-b;
 a = a-b;
 printf("Values after swapping a=%d ,b=%d",a,b);
}
 
