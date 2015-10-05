#include <iostream>
#include <cstdlib>
void changeValue(int* i) {
	// t‰m‰ toimii viitteill‰
	//i = 5;
	// pointterissa * avulla
	*i = 5;
}

void swappaa(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
// viite &
// pointteri *
// t‰yt‰ t‰m‰ funktio siten ett‰
// resultin arvo = a + b
void add(int a, int b, int& result) {
	result = a + b;
}
void add(int a, int b, int* result) {
	*result = a + b;
}

// t‰ytt‰k‰‰ taulukon jokainen alkio
// jollain arvolla 
void initialize(int* taulukko, int koko) {
	for (int i = 0; i < koko; ++i) {
		taulukko[i] = 0;
	}
}
// funktio joka palauttaa int taulukon
// ja varaa dynaamisesti taulukon
// k‰ytt‰k‰‰ initalize(....)
// ammattijuomaraha: new
int* create(int size) {
	// 1) varaa muistia new sanalla
	int* taulukko = new int[size];
	// 2) alusta taulukon elementit initialize funktiolla
	initialize(taulukko, size);
	// 3) palauta taulukko return avainsanalla
	return taulukko;
}

struct foo {
	int a;
};
// ‰lk‰‰ koskaan tehkˆ n‰in
foo* gimmeFoo() {
	foo a;
	a.a = 10;
	return &a;
}

int main() {
	int size = 5;
	std::cout << "Anna taulukon koko: ";
	std::cin >> size;
	
	int* taulukko = create(size);
	// t‰ytet‰‰n
	for (int i = 0; i < size; ++i) {
		taulukko[i] = i * i;
	}
	// tulostetaan
	for (int i = 0; i < size; ++i) {
		std::cout << taulukko[i] << std::endl;
	}
	// vapautetaan taulukko
	delete[] taulukko;

	system("PAUSE");
	return 0;
}