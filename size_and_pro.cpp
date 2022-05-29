//product of two numbers

#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Enter two numbers: ";

  cin >> num1 >> num2;
 
  product = num1 * num2;  

  cout << "Product = " << product;    
    
  return 0;
}

//a c++ program to find size of int,float, double and char in your system


#include <iostream>
using namespace std;

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;
	cout << "Size of int is: " <<
	sizeof(integerType) <<"\n";

	cout << "Size of char is: " <<
	sizeof(charType) <<"\n";
	
	cout << "Size of float is: " <<
	sizeof(floatType) <<"\n";

	cout << "Size of double is: " <<
	sizeof(doubleType) <<"\n";

	return 0;
}
