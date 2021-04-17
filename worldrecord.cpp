/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std ;

#define ll long long

using namespace std;



void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}

void solution()
{
	float k1, k2 ,k3 , v ;
	cin >> k1 >> k2 >> k3 >> v ;

	float res = (float)100.00 / (k1 * k2 * k3 * v) ;
	res = (int)(res*100.00 + 0.5) ; 
	res = (float)res / 100.00 ; 
	
	
	if((res * 100) >= 958)
	{
	    cout << "NO" ; 
	    return ; 
	}
	
	cout << "YES" ; 
	return ; 
	 
	




}




int main()
{
	exec() ;



	ll test = 1  ;
	cin >> test ;

	while (test--)
	{
		solution() ;
		cout << '\n' ;

	}

	return 0 ;


}
