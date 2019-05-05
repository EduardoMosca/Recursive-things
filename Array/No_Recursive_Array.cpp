#include <iostream>

using namespace std;

int *v = new int[10000];

int main() {
	int i;
	for(i = 0; i < 10000; i++) {
		v[i] = i + 1;
	}
	for(i = 0; i < 10000; i++) {
		cout << v[i] << endl;
	}
	return 0;
}
