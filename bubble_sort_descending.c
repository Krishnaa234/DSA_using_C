#include <stdio.h>

int main()
{
	float number[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9}, aux;
	int i, swapped;
	do{
	    swapped=0;
	    for(i=0; i<9; i++)
	    {
	        if(number[i]<number[i+1])
	        {
	            swapped=1;
	            aux = number[i];
	            number[i] = number[i+1];
	            number[i+1] = aux;
	        }
	    }
	}while(swapped);
	    
	    printf("Sorted array: \n");
	    for(i=0; i<10; i++)
	    {
	        printf("%.2f\t",number[i]);
	    }
	return 0;
}