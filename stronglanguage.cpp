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




void solution()
{

	ll n, k ;

	cin >> n >> k ;

	string s  ;
	cin >> s ;

	ll ticker = 0 ;

	for (int iter = n - 1 ; iter >= 0 ; iter--)
	{
		if (ticker >= k)
		{
			cout << "yes" ;
			return ;
		}
		if (s[iter] == '*' and (s[iter - 1] == '*'))
		{
			ticker ++ ;
		}

		{
			if (s[iter] == '*' and iter == 0)
			{
				ticker++ ;
			}
			else
			{
				if (s[iter] == '*' and s[iter - 1] != '*')
				{
					ticker = 0 ;
				}
			}
		}
	}

	if (ticker >= k)
	{
		cout << "yes" ;
		return ;
	}

	cout << "no" ;
	return ;

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