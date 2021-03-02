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

int hcf(int x, int y)
{
	if (y == 0)
	{
		return x ;
	}

	return hcf(y, x % y) ;
}

void juggleAlgo(int arr[], int Size, int rotateBy)
{
	/* the idea is to divide into sets of hcf of Size and RotationBY
	rotate all the elements of one set to their decided positions
	continue this process for as many number of set that the array is divided into
	*/

	rotateBy = rotateBy % Size ;
	int set = hcf(Size, rotateBy) ;

	int iter = 0 ;
	while (iter < set)
	{
		int temp = arr[iter] ; // storing 1st element of the set as it will be lost
		int iter1 = iter ; //new pointer so that iter acts a marker to the start of the set

		while (true)
		{
			int jumper = iter1 + rotateBy ; // every next index that will be replaced
			if (jumper >= Size)
			{
				jumper %= Size ;
			}

			if (jumper == iter)
			{
				break ;
			}

			arr[iter1] = arr[jumper] ;
			iter1 = jumper ;
		}

		arr[iter1] = temp ;
		iter++ ;

	}
}

void arrayRotate(int arr[], int size, int rotationBy)
{
	// left rotation by rotationBy indices

	rotationBy = rotationBy % size ;
	if (rotationBy == 0)
	{
		return ;
	}


	// using temp array
	// stores values that will be lost in left shifting by rotationBY bits

	int temp[rotationBy] = {0} ;

	for (int iter = 0 ; iter < rotationBy ; iter++)
	{
		temp[iter] = arr[iter]  ;

	}

	for (int iter = 0 ; iter < size ; iter++)
	{
		arr[iter] = arr[iter + rotationBy] ;
	}
	// refilling the array with the elements that were stored in temp array

	for (int iter = 0 ; iter < rotationBy ; iter++)
	{
		arr[size - rotationBy + iter] = temp[iter] ;
	}

	// linear time
	// linear space

}

void rotateby1(int arr[] , int size)
{

	// this function rotates  array elements by 1 place


	int temp = arr[0] ;
	for (int iter = 0 ; iter < size - 1 ; iter++)
	{
		arr[iter] = arr[iter + 1] ;
	}
	arr[size - 1] = temp ;


}

void nRotateby1(int arr[], int size, int rotationBy)
{
	// using the rotationby 1 place function n time
	// this function rotates  the array elements by n spaces

	rotationBy = rotationBy % size  ;
	for (int iter = 1 ; iter <= rotationBy ; iter++)
	{
		rotateby1(arr, size) ;
	}
}

void solution()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
	int size = sizeof(a) / sizeof(a[0]);

	for (int iter = 0 ; iter < size ; iter++)
	{
		cout << a[iter] << " " ;
	}

	cout << '\n'  ;

	arrayRotate(a, size, 3 ) ;

	for (int iter = 0 ; iter < size ; iter++)
	{
		cout << a[iter] << " " ;

	}
	cout << '\n' ;

	juggleAlgo(a, size, 1) ;
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