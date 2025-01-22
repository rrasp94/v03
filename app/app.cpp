#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	results::results(const unsigned int length) {
		this->length = length;
		results_array = new student[length];
	}

	void results::add(const student& student) {
		this->results_array[counter++] = student;
	}

	unsigned int results::has_grade(const int grade) const {
		unsigned int num_grade = 0;
		for (unsigned int i = 0; i < length; i++) {
			if (results_array[i].grade == grade) {
				num_grade++;
			}
		}
		return num_grade;
	}

	unsigned int results::starts_with_letter(const char character) const {
		unsigned int num_letter = 0;
		for (unsigned int i = 0; i < length; i++) {
			if (tolower(results_array[i].name[0]) == tolower(character)) {
				num_letter++;
			}
		}
		return num_letter;
	}

	results::~results() noexcept {
		delete[] results_array;
	}

	array::array(uint32_t length, double value) {
		theArray = new double[length];
		this->length = length;
		for (uint32_t i = 0; i < length; ++i) {
			theArray[i] = value;
		}
	}

	uint32_t array::size() const noexcept {
		return length;
	}

	double array::at(unsigned int i) noexcept {
		if (i < length) {
			return theArray[i];
		}
		return 0;
	}

	void array::push_back(double num) {
		unsigned int len2 = length + 1;
		double* new_arr = new double[len2]; 
		for (unsigned int i = 0; i < length; ++i) {
			new_arr[i] = theArray[i]; 
		}
		new_arr[length] = num; 
		delete[] theArray; 
		theArray = new_arr; 
		length = len2; 
	}

	array::array(array&& other) noexcept : length(other.length), theArray(other.theArray) {
		other.length = 0;
		other.theArray = nullptr;
	}

	array::array(const array& other) : length(other.length) {
		theArray = new double[length];
		for (uint32_t i = 0; i < length; i++) {
			theArray[i] = other.theArray[i];
		}
	}

	array::~array() noexcept {
		delete[] theArray;
	}
}
