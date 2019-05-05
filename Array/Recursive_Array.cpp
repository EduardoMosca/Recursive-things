#include <iostream>

using namespace std;

int *v = new int[1000];

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
	preenche(0, 1000);
	mostra(0, 1000);
	return 0;
}