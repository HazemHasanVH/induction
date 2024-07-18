#include <stdio.h>
int main ()
{
	int arr[5] = {1, 2, 3};
	int sum = 0;
	for(int i = 0; i < 3; i++)
	{
		sum += arr[i];
	}

	printf("sum is: %d\n", sum);



  return 0;
}
