#include <bits/stdc++.h>
using namespace std ;

#define ll long long


void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}

void reverseArray(int arr[], int Size)
{	/* Two Pointer Approach -->
	Set Two Pointers : 1. Start of the array , 2. End of the array
	Keep swapping the elements and incremeneting the pointer from left and decrementing
	from right .
	Perfom until the left pointer overtakes the right pointer
	*/


	int l = 0 ;
	int r = Size - 1 ;

	while (l <= r)
	{
		int temp = arr[l] ;
		arr[l] = arr[r] ;
		arr[r] = temp ;


		l++ ;
		r-- ;


	}
}

void reverseArray1(int arr[], int Size)
{	/* Temporary array -->
		Copy all the elements backwards into the temp array
		reenter the elements from the starting index back into the array
	*/


	int temp[Size] = {0} ;

	int r = Size - 1 ;

	while (r >= 0)
	{
		temp[Size - r - 1] = arr[r] ;

		r-- ;
	}

	r = 0 ;
	while (r < Size)
	{
		arr[r] = temp[r] ;
		r++ ;
	}


}

void solution()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
	int size = sizeof(a) / sizeof(a[0]);


	reverseArray(a, size) ;
	for (int iter = 0 ; iter < size ; iter++)
	{
		cout << a[iter] << " " ;
	}

	cout << '\n' ;

	reverseArray1(a, size) ;

	for (int iter = 0 ; iter < size ; iter++)
	{
		cout << a[iter] << " " ;

	}

	cout << '\n' ;
}




int main()
{
	exec() ;



	ll test = 1  ;
	//cin >> test ;

	while (test--)
	{
		solution() ;

		cout << '\n' ;

	}

	return 0 ;


}