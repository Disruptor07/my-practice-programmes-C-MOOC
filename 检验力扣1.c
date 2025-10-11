#include<stdio.h>
int main()
{
	int n=8;
	while(n%2==0)
    {
        n/=2;
    }
    if(n/2==0&&n%2==1)
    {
        printf( "ture" );
    }
    else
    {
        printf( "false" );
    }
	return 0;
}