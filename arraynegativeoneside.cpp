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



void misc(int arr[], int size)
{
	// this functiong moves all negative element to the left of the array
	//i.e starting of the array . NOT NECESSARILY SORTED .

	int iter = 0 ;
	int iter1 = 0 ;

	while (iter1 < size)
	{
		if (arr[iter1] < 0 and iter != iter1)
		{
			int temp = arr[iter] ;
			arr[iter] = arr[iter1] ;
			arr[iter1] = temp ;
			iter += 1 ;
		}

		iter1++ ;
	}


}


void solution()
{
	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6} ;
	int size = sizeof(arr) / sizeof(arr[0]) ;


	misc(arr, size) ;

	for (int iter = 0 ; iter < size ; iter++)
	{
		cout << arr[iter] << " " ;

	}

	cout << '\n' ;

}

int main()
{
	exec() ;


	ll test = 1 ;
	cin >> test ;

	while (test--)
	{

		solution() ;
		cout << '\n' ;
	}

	return 0 ;

}