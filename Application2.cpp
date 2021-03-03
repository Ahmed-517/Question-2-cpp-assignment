#include <iostream>

using namespace std;

// The Main Function
int main() {
	// For - Rows
	for (int i = 1; i <= 4; i++) {
		// For - Spaces
		for (int j = 3; j >= i ; j--)
		{
			cout << " ";
		}
		// For - The Left Side
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		// For - The Right Side
		for (int l = i-1; l >= 1; l--)
		{
			cout << l;
		}
		cout << endl;
	}
}