#include <iostream>

using namespace std;

int *v = new int[10000];

void preenche(int i, int j) {
	if (i < j) {
		v[i] = i + 1;
		i++;
		preenche(i, j);
	}

}
void mostra(int i, int j) {
	if (i < j) {
		cout << v[i] << endl;
		i++;
		mostra(i, j);
	}
}

int main() {
	preenche(0, 10000);
	mostra(0, 10000);
	return 0;
}
