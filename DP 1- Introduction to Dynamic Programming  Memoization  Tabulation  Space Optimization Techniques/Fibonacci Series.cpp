/*Fibonacci Series:

1.By memoization
2.By Tabulation
3.By reducing Space complexity
*/


//1. By MEMOIZATION
//Time Complexity = O(n)
//Space Complexity= O(n) + O(n) Recursion stack space & Array 

#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp) {
	if(n<=1)
	return n;

	if(dp[n] != -1) return dp[n];

	//return dp[n] = f(n-1) + f(n-2);
	return dp[n] = f(n-1, dp) + f(n-2, dp);
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	//int dp[n+1];
	vector<int>dp(n+1 ,-1);
	
	//memset(dp, -1, sizeof dp);
	cout<<f(n,dp);

	return 0;
}

//2. By Tabulation Without using Array
//Time Complexity = O(n)
//Space Complexity= O(1)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int prev=0;
    int prev2=1;
    
    for (int i=0;i<n;i++)
    {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
        
    }
    cout<<prev<<endl;
    return 0;
}
