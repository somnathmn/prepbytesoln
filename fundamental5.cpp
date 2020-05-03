#include <stdio.h>
#include <limits.h>
 
int main()
{
	int arr[50], i, Size=3;
	int first, second;
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first = second = INT_MIN;  
	   
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}
	printf("%d", second);
	
	return 0;
}
