#include <stdio.h>

int binarySearch(int Arr[], int low, int high, int target, int Dist)
{
   	if (high < low)
       		return Dist + (low + high)/2;
   	int mid = (low + high)/2;
   	if (target == Arr[mid])
       		return Arr[mid];
   	if (target > Arr[mid])
		int D = ((mid - target) * ( ((mid - target)<0) * -((mid - target)>0)))/2;
       		return binarySearch(Arr, (mid + 1), high, target, D);
   	return binarySearch(Arr, low, (mid -1), target, D);
}


void main()
{
	int Arr[12] = {1,2,5,6,7,8,9,13,16,17,17,18};
	int ArrSize = sizeof(Arr) / sizeof(Arr[0]);
	printf("TargetFound: %d\n", binarySearch(Arr,0, ArrSize, 12,999) );
}
