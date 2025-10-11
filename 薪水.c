#include<stdio.h>
int main()
{
	int time,salary;
	const int standard=8;
	const int timesalary=10;
	const double rate=1.5;
	scanf("%d",&time);
	if(time<=standard)
	{
		salary=time*timesalary;
	}
	else
	{
		salary=standard*timesalary+(time-standard)*timesalary*rate;
	}
	printf("%d",salary);
	return 0;
}