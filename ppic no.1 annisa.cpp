#include <stdio.h>

int main() {
	int number;
	
	// Input bilangan bulat positif
	printf("Maukan sebuah bilangan bulat positif: ");
	scanf("%d", &number);
	
	// Memeriksa apakah bilangan positif
	if (number > 0) {
		// Memeriksa apakah bilangan ganjil atau genap
		if (number % 2 == 0) {
			printf("GENAP\n");
		}else {
			printf("GANJIL\n");
		}
}else {
	printf("Harapan masukan bilangan bulat positif.\n");
	}
	
	return 0;
}

