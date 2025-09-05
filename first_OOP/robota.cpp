//#include <iostream>
//using namespace std;
//
//class Drob
//{
//private:
//	int number1;
//	int number2;
//	int number3;
//	int number4;
//public:
//	void Init(int n1, int n2, int n3, int n4)
//	{
//		number1 = n1;
//		number2 = n2;
//		number3 = n3;
//		number4 = n4;
//	}
//	void Print()
//	{
//		cout << number1 << "   " << number3 << "\n- + -\n" << number2 << "   " << number4 << endl;;
//	}
//	void Print_Plus()
//	{
//		cout << "Your answer is: " << endl;
//		cout << number1 * number4 + number3 * number2 << endl;
//		cout << "-" << endl;
//		cout << number2 * number4 << endl;
//	}
//	void Print_Minus()
//	{
//		cout << "Your answer is: " << endl;
//		cout << number1 * number4 - number3 * number2 << endl;
//		cout << "-" << endl;
//		cout << number2 * number4 << endl;
//	}
//	void Print_Multiplication()
//	{
//		cout << "Your answer is: " << endl;
//		cout << number1 * number3 << endl;
//		cout << "-" << endl;
//		cout << number2 * number4 << endl;
//	}
//	void Print_Division()
//	{
//		cout << "Your answer is: " << endl;
//		cout << number1 * number4 << endl;
//		cout << "-" << endl;
//		cout << number2 * number3 << endl;
//	}
//	int GetN1() // инспекторы
//	{
//		return number1;
//	}
//	int GetN2() // инспекторы
//	{
//		return number2;
//	}
//	int GetN3() // инспекторы
//	{
//		return number3;
//	}
//	int GetN4() // инспекторы
//	{
//		return number4;
//	}
//	void SetN1(int n1) // модификаторы
//	{
//		number1 = n1;
//	}
//	void SetN2(int n2) // модификаторы
//	{
//		if (n2 > 0 || n2 < 0) 
//		{ 
//			number2 = n2;
//		}
//	}
//	void SetN3(int n3) // модификаторы
//	{
//		number3 = n3;
//	}
//	void SetN4(int n4) // модификаторы
//	{
//		if (n4 > 0 || n4 < 0)
//		{
//			number4 = n4;
//		}
//	}
//};
//
//int main()
//{
//	Drob obj1;
//	int num1, num2, num3, num4;
//	cout << "Enter first drob: " << endl;
//	cout << "Enter first number: " << endl;
//	cin >> num1;
//
//	cout << "Enter second number: " << endl;
//	cin >> num2;
//
//	cout << "Enter second drob: " << endl;
//	cout << "Enter first number: " << endl;
//	cin >> num3;
//
//	cout << "Enter second number: " << endl;
//	cin >> num4;
//
//	obj1.Init(num1, num2, num3, num4);
//
//	if (num2 == 0)
//	{
//		obj1.SetN2(1);
//	}
//
//	if (num4 == 0)
//	{
//		obj1.SetN4(1);
//	}
//	cout << obj1.GetN2() << endl;
//
//	int choise;
//	cout << "What do you want to do? write (1-4)" << endl;
//	cout << "(1) +" << endl;
//	cout << "(2) -" << endl;
//	cout << "(3) *" << endl;
//	cout << "(4) /" << endl;
//	cin >> choise;
//	cout << endl;
//	switch (choise)
//	{
//
//	case 1:
//		obj1.Print();
//		obj1.Print_Plus();
//		break;
//	case 2:
//		obj1.Print();
//		obj1.Print_Minus();
//		break;
//	case 3:
//		obj1.Print();
//		obj1.Print_Multiplication();
//		break;
//	case 4:
//		obj1.Print();
//		obj1.Print_Division();
//		break;
//
//	default:
//		cout << "Please Try again!" << endl;
//		break;
//	}
//
//}