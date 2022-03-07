#include<stdio.h>
int main()
{
int a[40],pos,i,n;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
printf("enter the position to insert:");
scanf("%d",&pos);
printf("enter the value to be inserted:");
scanf("%d",&value);
for(i=n-1;i>=pos-1;i--)
a[i+1]=a[i]
a[pos-1]=value;
printf("final array\n");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
return 0;
}
