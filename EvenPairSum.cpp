ou are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B.
Output
For each test case, print a single line containing one integer ― the number of valid pairs.

Constraints
1≤T≤1,000
1≤A,B≤109


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
	    long int a, b;
	    cin >> a >> b;
	    long int odd1 = 0, odd2 = 0, even1 = 0, even2 = 0;
	    even1 = a / 2;
	    odd1 = a / 2;
	    if(a % 2 == 1)
	        odd1++;
	    even2 = b / 2;
	    odd2 = b / 2;
	    if(b % 2 == 1)
	        odd2++;
	    long int result = odd1 * odd2 + even1 * even2;
	    cout<<result<<endl;
	}
	return 0;
}
