#include <iostream>
#include <stdlib.h>
#include <vector>
#include "SeePlusPlus.h"

using namespace std;

void memoryEffecientChange(int* age) {
	*age = *age + 1;
}

class Triangle {
	double height, base;
public:
	void setValues(double height, double base);
	double area() {
		return (height * base) / 2;
	}
};
void Triangle::setValues(double x, double y) {
	height = x;
	base = y;
}

struct product { int weight; double price; };
vector<product> list;
int totalAppleWeight;

void populateVector() {
	for (int i = 0; i < 10; i++) {
		product apple;
		apple.weight = rand() % 5 + 3;
		apple.price = rand() % 10 + 0.5;
		list.push_back(apple);
		totalAppleWeight = totalAppleWeight + apple.weight;
	}
}

void printResults() {
	for (int i = 0; i < list.size(); i++) {
		cout << list.at(i).weight << " lb apple costs $" << list.at(i).price << endl;
	}
	cout << "Total weight = " << totalAppleWeight << endl;
}

int main()
{
	cout << "Vectors" << endl;
	populateVector();
	printResults();
	cout << "Pointers" << endl;
	pointers();
	cout << "Classes" << endl;
	classes();

}

void classes()
{
	Triangle triangle;
	double height = 10;
	double base = 7;
	triangle.setValues(height, base);
	cout << triangle.area() << endl;
}

void pointers()
{
	int age = 28;
	memoryEffecientChange(&age);
	cout << age << endl;
}


