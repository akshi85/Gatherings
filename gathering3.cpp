#include<stdio.h>
void len(int arr[], int total_size){
	int length = total_size/sizeof arr[0];
	printf("length of array is %d\n",length);
	
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	len(arr, sizeof(arr));
	return 0;
}
