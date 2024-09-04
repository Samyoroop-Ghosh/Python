#include<stdio.h>

int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=i;j<5;j++)
		{
			printf(" ");
		}
		for(int k=1;k<2*i;k++)
			{
				printf("%d",k);				
			}
		printf("\n");
	}
	
	for(int i=4; i>=1; i--)//just reverse the outermost loop to reverse the patterm
    {
        for(int j=i; j<5; j++)
        {
            printf(" ");
        }
        for(int k=1; k<(2*i); k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
	
}
