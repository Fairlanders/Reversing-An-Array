#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <array>

using namespace std;

int main()
{
	int arr[5] = {5,4,3,2,1};
	// reversing the array
	reverse(begin(arr), end(arr));

	// printing the reversed array
	for (int i = 0; i < 5; i++)
	{
		cout << i << " line "<< arr[i] << endl;
	}
}