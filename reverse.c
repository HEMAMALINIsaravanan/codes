#include<stdio.h>
int main()
{
int a,i,temp,count=0,num,b[1000];
scanf("%d",&num);
a=num;
while(a!=0)
{a=a/10;
count++;
}
for(i=0;i<count;i++)
{b[i]=num%10;
num=num/10;
}
for(i=0;i<count;i++)
{
printf("%d",b[i]);
}
return 0;
}

