#include "app.h"
#include<iostream>
#include <string>

using namespace vsite::oop::v3;

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics

int main() {
	std::string ime;
	int ocjena;
	int n_studenata;

	std::cout << "Unesite broj studenata: ";
	std::cin >> n_studenata;
	results r(n_studenata);

	for (int i = 0; i < n_studenata; i++) {
		std::cout << i + 1 << ". student, ocjena ";
		std::cin >> ime >> ocjena;
		r.add({ ime, ocjena });
	}


	int trazena_ocjena;
	std::cout << "\nOcjena koju trazite: ";
	std::cin >> trazena_ocjena;
	std::cout << "\nIma " << r.has_grade(trazena_ocjena) << " student s ocjenom " << trazena_ocjena << std::endl;


	char trazeno_slovo;
	std::cout << "\nPrvo slovo imena koje trazite: ";
	std::cin >> trazeno_slovo;
	std::cout << "\nIma " << r.starts_with_letter(trazeno_slovo) << " student s prvim slovom imena " << (char)toupper(trazeno_slovo) << std::endl;
}
