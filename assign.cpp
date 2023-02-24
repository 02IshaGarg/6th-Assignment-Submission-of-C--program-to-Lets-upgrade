#include <bits/stdc++.h>
using namespace std;
void printEvenNumbers(int N)
{
	cout << "Even: ";
	for (int i = 0; i < N+1; i++) {
		if (i % 2 == 0)
			cout << i << " ";
	}
}
int main()
{
  int N;
  cout << "Enter a number: ";
  cin >> N;
  printEvenNumbers(N);
  return 0;
}
