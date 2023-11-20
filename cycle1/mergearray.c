#include<stdio.h>
int main()
{
int a[200],b[300],c[500],n1,n2,n3,i,temp;
printf("Enter the size of the first array:");
scanf("%d",&n1);
printf("Enter the elements of the first array:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the size of the second array:");
scanf("%d",&n2);
printf("Enter the elements of the second array:\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}

n3=n1+n2;
for(i=0;i<n1;i++){
c[i]=a[i];
}
for(i=0;i<n2;i++)
{
c[i+n1]=b[i];
}
printf("The elements of the merged array is :\n");
	for(i=0;i<n3;i++)
	{
	printf("%d",c[i]);
}
printf("Sorted array:\n");
	for(i=0;i<n3;i++){

	for(int j = i+1;j<n3;j++){

			if(c[i]>c[j])
{
temp=c[i];

c[i]=c[j];

c[j]=temp;
}
}
printf("%d\n",c[i]);
}

return 0;
}


