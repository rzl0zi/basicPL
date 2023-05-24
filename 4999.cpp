#include <iostream>
using namespace std;

int main() {
	string A, B;
	cin >> A;
	cin >> B;
	
	int C=0, D=0;

	for (int i = 0; i < A.length(); i++) {
		if (A[i] == 'a')
			C++;
			
	}
	for (int i = 0; i < B.length(); i++) {
		if (B[i] == 'a')
			D++;

	}
	if (C >= D)
		cout << "go";
	else
		cout << "no";


	return 0;
}
