#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
void sort(int a[], int n)
{
int i,j,gap;
for(gap=n/2;gap>=1;gap = gap/2)
{
	for(j= gap;j<n;j++)
	{
		for(i=j-gap;i>=0;i = i-gap)
		{
			if(a[i+gap]>a[i])
			break;
			else
			swap(&a[i+gap],&a[i]);
		}
	}
}
}
int main()
{
	int a[] = {7,3,6,2,7,3,5,4};
	int n = sizeof(a)/sizeof(a[0]);
	printf("Original array :\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	sort(a,n);
	printf("sorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
