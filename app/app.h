#pragma once
#include <string>

namespace vsite::oop::v3
{
	class student {
	public:
		std::string name;
		int grade;

	};

	class results {
	private:
		int counter = 0;
		int length = 0;
		student* results_array = nullptr;

	public:
		results(const int length);
		~results();
		void add(const student& student);
		unsigned int has_grade(const int grade) const;
		unsigned int starts_with_letter(const char character) const;

	};

	class array {
	private:
		int length;
		double value;
		double* theArray = nullptr;

	public:
		array(uint32_t length = 0, double value = 0.0);
		~array();
		double at(int i = 0);
		uint32_t size();
		void push_back(double num);
		array(array&& other);
		array(const array& other);
	};
}
