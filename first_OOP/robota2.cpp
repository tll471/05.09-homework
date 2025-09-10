//#include <iostream>
//using namespace std;

//class Student
//{
//private: // реализация
//	char* name = nullptr;
//	int age;
//public: // интерфейс
//	Student()
//	{
//		name = nullptr;
//		age = 0;
//		cout << "Def bro" << endl;
//	}
//	Student(const char* name1, int age1)
//	{
//		name = new char[strlen(name1) + 1];
//		strcpy_s(name, strlen(name1) + 1, name1);
//		age = age1;
//	}
//	void Init(const char* name1, int age1)
//	{
//		if (name != nullptr)
//		{
//			delete[] name;
//		}
//		name = new char[strlen(name1) + 1];
//		strcpy_s(name, strlen(name1) + 1, name1);
//		age = age1;
//	}
//	void Print()
//	{
//		cout << "Name: " << name << "\tAge: " << age << endl;
//	}
//	~Student()
//	{
//		delete[] name;
//		cout << "e" << endl;
//	}
//};
//
//class Car
//{
//private:
//	char* model = nullptr;
//	char* country = nullptr;
//	char* color = nullptr;
//	int year;
//	double price;
//public:
//	Car()
//	{
//		model = nullptr;
//		country = nullptr;
//		color = nullptr;
//		year = 0;
//		price = 0;
//	}
//	Car(const char* model1, const char* country1, const char* color1, int year1, double price1)
//	{
//		model = new char[strlen(model1) + 1];
//		strcpy_s(model, strlen(model1) + 1, model1);
//
//		country = new char[strlen(country1) + 1];
//		strcpy_s(country, strlen(country1) + 1, country1);
//
//		color = new char[strlen(color1) + 1];
//		strcpy_s(color, strlen(color1) + 1, color1);
//
//		year = year1;
//		price = price1;
//	}
//	void Init(const char* model1, const char* country1, const char* color1, int year1, double price1)
//	{
//		if (model != nullptr)
//		{
//			delete[] model;
//		}
//		model = new char[strlen(model1) + 1];
//		strcpy_s(model, strlen(model1) + 1, model1);
//
//		if (country != nullptr)
//		{
//			delete[] country;
//		}
//		country = new char[strlen(country1) + 1];
//		strcpy_s(country, strlen(country1) + 1, country1);
//
//		if (color != nullptr)
//		{
//			delete[] color;
//		}
//		color = new char[strlen(color1) + 1];
//		strcpy_s(color, strlen(color1) + 1, color1);
//
//		year = year1;
//		price = price1;
//	}
//	char GetModel()
//	{
//		return *model;
//	}
//	char GetCountry()
//	{
//		return *country;
//	}
//	char GetColor()
//	{
//		return *color;
//	}
//	int GetYear()
//	{
//		return year;
//	}
//	double GetPrice()
//	{
//		return price;
//	}
//	void SetYear(int year1)
//	{
//		if (year1 > 0 || year1 < 0)
//		{ 
//			year = year1;
//		}
//	}
//	void SetPrice(int price1) 
//	{
//		if (price1 > 0 || price1 < 0)
//		{
//			price = price1;
//		}
//	}
//
//	void Print()
//	{
//		cout << "Information about car:" << endl;
//		cout << "Model: " << model << endl;
//		cout << "Country: " << country << endl;
//		cout << "Color: " << color << endl;
//		cout << "Year: " << year << endl;
//		cout << "Price: " << price << endl;
//		cout << endl;
//	}
//	~Car()
//	{
//		delete[] model;
//		delete[] country;
//		delete[] color;
//		cout << "Everything is deleted now!" << endl;
//	}
//};
//int main()
//{
//	//Student obj1; // візов конструктора по умолчанию
//	//obj1.Init("Oleg", 29);
//	//obj1.Print();
//
//	//Student obj2("Oleg2", 19);
//	//obj2.Print();
//
//	Car obj1;
//	obj1.Init("BMW", "Germany", "Black", 1998, 175.988);
//	obj1.Print();
//	
//	Car obj2("Mercedes", "Italy", "White", 2021, 65.123);
//	obj2.Print();
//
//	int size = 20;
//	char* model = new char[size];
//	char* country = new char[size];
//	char* color = new char[size];
//	int year;
//	double price;
//
//	cout << "Enter the next information:" << endl;
//	cout << endl;
//	cout << "Enter car model: " << endl;
//	cin.getline(model, size);
//	cout << "Enter car country: " << endl;
//	cin.getline(country, size);
//	cout << "Enter car color: " << endl;
//	cin.getline(color, size);
//	cout << "Enter car year: " << endl;
//	cin >> year;
//	cout << "Enter can price: " << endl;
//	cin >> price;
//	cout << endl;
//
//	Car obj3(model, country, color, year, price);
//	if (year == 0)
//	{
//		obj3.SetYear(2000);
//	}
//	if (price == 0)
//	{
//		obj3.SetPrice(10000);
//	}
//	obj3.Print();
//	
//}
