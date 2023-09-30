#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,j=0,x=0;
   printf("enter a row and column size");
   scanf("%d",&x);
   printf("---------***-------\n");
   for(i=1;i<=x;i++)
  {
    for(j=1;j<=x;j++)
    {
      if( j==1|| i==(x+1)/2 || i==x || i==1)
     {
      printf(" * ");
     }
     else
     {
      printf("   ");
     }
    }
    printf("\n");
  }
  printf("---------***--------");
  getch();
  return 0;
}