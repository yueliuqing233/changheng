#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
void quicksort(int arr[],int L,int R)
{
	int i = L;
	int j = R;
	int pivot = arr[(L+R)/2];

	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}

		if (i<=j)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	if (L<j)
	{
		quicksort(arr,L,j);
	}
	if (i<R)
	{
		quicksort(arr,i,R);
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {3,9,2,5,7,8,1,6};
	quicksort(arr,0,7);
	for (int i = 0; i <=7; ++i)
	{
		cout << " " << arr[i];
	}
	return 0;
}