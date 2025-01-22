#pragma once
#include <string>

namespace vsite::oop::v3
{
	class student {
	public:
		std::string name;
		int grade = 0; 
	};

	class results {
	private:
		unsigned int counter = 0;
		unsigned int length = 0;
		student* results_array = nullptr;

	public:
		results(const unsigned int length);
		~results() noexcept;
		void add(const student& student);
		unsigned int has_grade(const int grade) const;
		unsigned int starts_with_letter(const char character) const;
	};

	class array {
	private:
		unsigned int length;
		double* theArray = nullptr;

	public:
		array(uint32_t length = 0, double value = 0.0);
		~array() noexcept;
		double at(unsigned int i = 0) noexcept;
		uint32_t size() const noexcept;
		void push_back(double num);
		array(array&& other) noexcept;
		array(const array& other);
	};
}
