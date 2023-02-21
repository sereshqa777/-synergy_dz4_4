#include <stdio.h>

int main() 
{
	int mas[100];
	int n;
	
	printf("Kolichestvo elementov: ");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Element[%i]: ",i+1);
		scanf("%i",&mas[i]);
	}
	printf("\nResult: ");
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas[i]);
	}
	
    int min, max;
    min=max=mas[0];
    int sum = 0;
	for (int i=0;i<n;i++)
    {
        if (mas[i]<min)
        {
            min=mas[i];
        }
        if (mas[i]>max)
        {
            max=mas[i];
        }
        sum += mas[i];       
    }
    
    float sr=(float)sum/(float)n;
    printf("\n===========================\n");
    printf("1) Maximum %i:\n",max);
    printf("2) Minimum %i:\n",min);
    printf("3) Summa %i:\n",sum);
    printf("4) Arithmetic mean: %f\n",sr);
    printf("===========================");
	return 0;
}
