#include<stdio.h>
int main()
{
int m1,m2,m3,sum;
float avg;
printf("enter m1,m2,m3");
scanf("%d %d %d",&m1,&m2,&m3);
sum=m1+m2+m3;
printf("sum of the marks:%d\n",sum);
avg=sum/3;
printf("avg of marks:%f",avg);
return 0;
}
