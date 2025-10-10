#include<stdio.h>
void f(int a[],int n);
int main()
{
	int marks[5]={90,56,88,76,91};
	for(int l=0;l<5;++l)
	{
		printf("%d ",marks[l]);
	}
	printf("\n");
	f(marks,5);
	for(int k=0;k<5;++k)
	{
		printf("%d ",marks[k]);
	}
	return 0;
}

void f(int a[],int n)
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
}