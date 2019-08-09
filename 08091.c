#include <stdio.h>
#include <stdlib.h>

int Search(int arr[], int n)
{
	int i;
	int num[256] = { 0 };
	for (i = 0; i<n; i++)
	{
		num[arr[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		if (num[arr[i]] == 1)
			printf("%d\n", arr[i]);
	}
	return 0;
}

int main1(){
	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	Search(arr, 9);
	system("pause");
	return 0;
}