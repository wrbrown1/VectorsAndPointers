#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct product { int weight; double price; };
vector<product> list;
int totalAppleWeight;

void populateVector() {
	for (int i = 0; i < 100; i++) {
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
	cout << "Total weight = " << totalAppleWeight;
}

int main()
{
	//populateVector();
	//printResults();
	int dog = 10;
	int* dogPointer = &dog;
	dog = 15;
	*dogPointer = 4;
	cout << &dog << endl;//Returns dog's address in hexadecimal
	cout << dogPointer << endl;
	cout << dog << endl;

}


