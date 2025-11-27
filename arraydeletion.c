#include <stdio.h>
int main()
{
int n,i,pos,num;
int arr[100];
printf("enter number of element:");
scanf("%d",&n);
printf("enter %d number:",n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("you entered:");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("enter the element to delete:\n");
scanf("%d",&pos);

for(i=pos;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;
printf("array after deletion:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}

