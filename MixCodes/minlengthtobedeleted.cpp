// C++ program for the above approach
#include<bits/stdc++.h>
using namespace std;

// Find the length of the shortest subarray
int findLengthOfShortestSubarray(int arr[], int N)
{
	
	// To store the result
	int minlength = INT_MAX;

	int left = 0;
	int right = N - 1;

	// Calculate the possible length of
	// the sorted subarray from left
	while (left < right &&
	arr[left + 1] >= arr[left])
	{
		left++;
	}

	// Array is sorted
	if (left == N - 1)
		return 0;

	// Calculate the possible length of
	// the sorted subarray from left
	while (right > left &&
	arr[right - 1] <= arr[right])
	{
		right--;
	}

	// Update the result
	minlength = min(N - left - 1, right);

	// Calculate the possible length
	// in the middle we can delete
	// and update the result
	int j = right;
	for(int i = 0; i < left + 1; i++)
	{
		if (arr[i] <= arr[j])
		{
			
			// Update the result
			minlength = min(minlength, j - i - 1);
		}
		else if (j < N - 1)
		{
			j++;
		}
		else
		{
			break;
		}
	}

	// Return the result
	return minlength;
}

// Driver Code
int main()
{
	int arr[] = { 6, 3, 10, 11, 15,
				20, 13, 3, 18, 12 };
	int N = sizeof(arr) / sizeof(arr[0]);
	
	// Function call
	cout << (findLengthOfShortestSubarray(arr, N));
}

// This code is contributed by divyeshrabadiya07
