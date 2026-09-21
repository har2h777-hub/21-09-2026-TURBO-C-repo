#include<stdio.h>
int main()
{
int reading1,reading2,Sum;
clrscr();
printf("Enter reading 1");
scanf("%d",&reading1);
printf("Enter reading 2");
scanf("%d",&reading2);
Sum=reading1+reading2;
printf("SUM is: =%d",Sum);
getch();
return 0;
}