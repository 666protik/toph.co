/*
Read two integer variables, calculate their sum, and print it.

Input: The input will contain two integers A and B (−20000000<A,B<20000000−20000000<A,B<20000000).
Output: Print the sum of the two integers.

Example:
    Input: 4 5
    Output: 9
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios:: sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B;
	int sum;
	
    cin >> A >> B;
	sum = A + B;
	
    cout << sum;
	return 0;
}
