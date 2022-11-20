#include"еепР.h"


void paixu(int *p,int i)
{
	
	for (int j = 0; j < i-1; j++)
	{
		
		for (int k = 0; k < 10 - j - 1; k++)
		{

			if (p[k] < p[k+1])
			{
				int temp = p[k];
				p[k] = p[k + 1];
				p[k + 1] = temp;
			}
			
			


		}
	}
}