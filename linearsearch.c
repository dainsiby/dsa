#include<stdio.h>
void main()
{
int n,i,x,count=0 , a[50],c=0;
c=c+2;
printf("enter the number of elements");
c++;
scanf("%d",&n);
c++;
printf("enter the elements");
c++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c++;
}
c++;
printf("enter the number to be searched");
c++;
scanf("%d",&x);
c++;
for(i=0;i<n;i++)
{
c++;
c++;
if (a[i]==x)
{
count++;
printf("\nelement is found at %d\n",i+1);
}
}
if( count>0)
printf("\n the element is found %d times\n",count);
else
printf("element is not found");
c++;
printf("\nspace complexity is%d\n",(5*4)+(n*4));
c++;
printf("\ntime complexity is %d\n",c++);


}
