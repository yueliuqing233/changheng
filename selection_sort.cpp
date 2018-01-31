#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int findMaxPos(int arr[],int n)
{
	int max=arr[0],pos=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]>max)
		{
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

void selection_sort(int arr[],int n)
{
	while(n>1)
	{
		int pos = findMaxPos(arr,n);
		swap(arr[pos],arr[n-1]);
		n--;
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	selection_sort(arr,9);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}
