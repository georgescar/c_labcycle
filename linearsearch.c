#include<stdio.h>
int main(){
int a[100],search,i,n;

printf("Enter the number of elements:\n");
scanf("%d",&n);


printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
printf("Enter the element to search: \n");

scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		if(a[i]==search)
	{
printf("%d is found at %d  location",search,i+1);
	break;
	}
	}
	if(i==n){
	printf("element not found!!\n");
	}

}

