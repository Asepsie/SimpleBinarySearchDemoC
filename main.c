/* Demonstrate binary search */

#include <stdio.h>

int main(void)
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int searchedNum = 1;

	int lenght = (sizeof(array)/sizeof(int) -1);

	int low = 0;
	int high = lenght;
	int index = (int) ((high-low)/2);
  
  int iteration = 0;

  printf("index : %d\n", index);
	while ((high != low) && (iteration < 10))
	{
		if (array[index] == searchedNum) {printf("index in test == : %d num: %d \n", index, array[index]); break;}
		if (array[index] > searchedNum)  {printf("index in test > : %d num: %d \n", index, array[index]); high = index;}
		if (array[index] < searchedNum)  {printf("index in test < : %d num: %d \n", index, array[index]); low = index;}
    
		index = (int)(high-low)/2;
		printf("index in loop: %d\n", index);
		iteration++;
	}
	
	printf("index %d iteration %d \n", index, iteration);
	return 0;
}
