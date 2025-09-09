#include <iostream>
using namespace std;

class Drob
{
private:
	int num;
	int den;
public:
	void Init(int n1, int n2)
	{
		this->num = n1;
		this->den = n2;
	}
	void Print()
	{
		cout << this->num << "/" << this->den << endl;
	}
	Drob Plus(Drob& obj2)
	{
		Drob answer1;
		answer1.num = this->num * obj2.den + obj2.num * this->den;
		answer1.den = this->den * obj2.den;
		return answer1;
	}

	Drob Minus(Drob& obj2)
	{
		Drob answer1;
		answer1.num = this->num * obj2.den - obj2.num * this->den;
		answer1.den = this->den * obj2.den;
		return answer1;
	}

	Drob Multiplication(Drob& obj2) 
	{
		Drob answer1;
		answer1.num = this->num * obj2.num;
		answer1.den = this->den * obj2.den;
		return answer1;
	}

	Drob Division(Drob& obj2)
	{
		Drob answer1;
		answer1.num = this->num * obj2.den;
		answer1.den = this->den * obj2.num;
		return answer1;
	}
	Drob& SetNum(int num) 
	{
		this->num = num;
		return *this;
	}
	Drob& SetDen(int den)
	{
		this->den = den;
		return *this;
	}
	
};

int main()
{

	Drob obj1, obj2, obj3;
	int num1, num2;
	cout << "Enter first number: " << endl;
	cin >> num1;

	cout << "Enter second number: " << endl;
	cin >> num2;

	obj1.Init(num1, num2);
	
	cout << "Enter first number: " << endl;
	cin >> num1;

	cout << "Enter second number: " << endl;
	cin >> num2;

	obj2.Init(num1, num2);



	int choise;
	cout << "What do you want to do? write (1-4)" << endl;
	cout << "(1) +" << endl;
	cout << "(2) -" << endl;
	cout << "(3) *" << endl;
	cout << "(4) /" << endl;
	cin >> choise;
	cout << endl;

	switch (choise)
	{

	case 1:
		obj3 = obj1.Plus(obj2);
		break;
	case 2:
		obj3 = obj1.Minus(obj2);
		break;
	case 3:
		obj3 = obj1.Multiplication(obj2);
		break;
	case 4:
		obj3 = obj1.Division(obj2);
		break;

	default:
		cout << "Please Try again!" << endl;
		break;
	}
	cout << "Answer: " << endl;
	obj3.Print();

}