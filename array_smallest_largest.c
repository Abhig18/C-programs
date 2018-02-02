#include <stdio.h> //including standard I/O header file

main() //main() function
{
	int n,i; //variable declaration
	printf("Enter array size : ");
	scanf("%d",&n); //array size
	int arr[n]; //array
	printf("\nEnter %d integers :\n",n);
	for(i=0;i<n;i++) //loop to store array elements
	{
		scanf("%d",&arr[i]);
	}
	int largest=arr[0],smallest=arr[0]; //variable declaration
	for(i=0;i<n;i++) //loop to find smallest and largest element
	{
		if(largest<arr[i])
		{
			largest=arr[i];
		}
		if(smallest>arr[i])
		{
			smallest=arr[i];
		}
	}
	printf("\nSmallest integer in the array : %d",smallest);
	printf("\nLargest integer in the array : %d",largest);
}
