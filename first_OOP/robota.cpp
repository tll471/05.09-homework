//#include<iostream>
//using namespace std;


//1. Создать класс «Лифт», представляющий собой предельно упрощенную модель лифта.
//Класс должен
//обеспечить :
//▷ установку диапазона движения лифта(нижний
//	и верхний этаж);
//▷ включение / выключение лифта;
//▷ возвращение текущего состояния лифта(работает / не работает);
//▷ возвращение текущего положения лифта(этаж);
//▷ обработку вызова лифта(этаж).
//Написать программу, тестирующую класс «Лифт».

//class Elevator
//{
//	int max_floor;
//	int min_floor;
//	bool turn_on_off;
//	bool work;
//	int floor;
//public:
//	Elevator(int max, int min, bool turn, bool work1, int floor1) : max_floor(max), min_floor(min), turn_on_off(turn), work(work1), floor(floor1)
//	{
//		cout << "Loaded" << endl;
//	}
//	void Print()
//	{
//
//		cout << "Максимальный этаж: " << max_floor << endl;
//		cout << "Минимальный этаж: " << min_floor << endl;
//		cout << "Включен ли: " << turn_on_off << endl;
//		cout << "Работает ли вообще: " << work << endl;
//		cout << "Текущий этаж: " << floor << endl;
//	}
//	void SetFloor(int number)
//	{
//		if (floor >= min_floor && floor <= max_floor)
//		{
//			cout << "+" << endl;
//		}
//		else if(floor <= min_floor || floor >= max_floor)
//		{
//			cout << "Ошибка, текущий этаж не может быть таким, число заменено на " << number << "!" << endl;
//			floor = number;
//		}
//	}
//};
//
//int main()
//{
//	int max_floor, min_floor, current_floor;
//	cout << "Enter max floor: " << endl;
//	cin >> max_floor;
//	cout << "Enter min floor: " << endl;
//	cin >> min_floor;
//	bool is_working, is_turn_on;
//	cout << "Is elevator working? 1) yes, 0) no" << endl;
//	cin >> is_working;
//	cout << "Is elevator turnOn? 1) yes, 0) no" << endl;
//	cin >> is_turn_on;
//	cout << "Enter current floor: " << endl;
//	cin >> current_floor;
//
//	Elevator Obj1(max_floor, min_floor, is_working, is_turn_on, current_floor);
//	Obj1.SetFloor(max_floor-1);
//
//	Obj1.Print();
//}


//2. Написать программу «Стоимость обоев».
//Программа запрашивает :
//▷ количество комнат в квартире, в которых планируется клеить обои,
//▷ параметры каждой комнаты,
//▷ параметры каждого вида обоев, которые планируется использовать.
//В результате расчета программа выдает : необходимое
//количество рулонов каждого вида, общую стоимость
//закупки обоев.
//Разработать и  использовать в  программе классы :
//«Квартира», «Комната», «РулонОбоев».
//Атрибуты(поля) квартиры : список комнат.
//Атрибуты комнаты : название, размеры, клеить потолок
//или нет.Атрибуты рулона : название, размеры, цена.
//
//class Flat
//{
//	int number;
//public:
//	Flat(int number_of_rooms)
//	{
//		number = number_of_rooms;
//	}
//	int GetNumber()
//	{
//		cout << "Number of rooms: " << number << endl;
//		return number;
//	}
//	int Just_Get_Number()
//	{
//		return number;
//	}
//	void SetNumber(int number3)
//	{
//		number = number3;
//	}
//
//};
//
//class Price
//{
//	int x;
//	int y;
//	int sum;
//public:
//	Price(int x, int y, int sum)
//	{
//		this->x = x;
//		this->y = y;
//		this->sum = sum;
//	}
//	int GetPrice()
//	{
//		sum = x * y * sum;
//		cout << "Your sum is: " << sum << " hryvnia" << endl;
//		return sum;
//	}
//	int Just_Get_Price()
//	{
//		return sum;
//	}
//	void SetX_Y(int x1, int y1)
//	{
//		x = x1;
//		y = y1;
//	}
//
//
//};
//
//class WallPaper
//{
//	int number_of_rooms;
//	int x, y;
//	int wallpaper_type;
//	Price obj1;
//	Flat obj2;
//public:
//	WallPaper(int number1, int x1, int y1, int wallpaper_type1) : x(x1), y(y1), number_of_rooms(number1), wallpaper_type(wallpaper_type1), obj1(x1, y1, wallpaper_type1), obj2(number1)
//	{
//		cout << "+" << endl;
//	}
//	void SetNumber1(int number2)
//	{
//		if (number2 <= 0)
//		{
//			cout << "Комнат не может быть <= 0! Число заменено на 5!" << endl;
//			obj2.SetNumber(5);
//		}
//		else
//		{
//			obj2.SetNumber(number2);
//		}
//	}
//	void SetX_and_Y(int x, int y)
//	{
//		if (x <= 0 || y <= 0)
//		{
//			cout << "Так нельзя, все числа заменены на 3!" << endl;
//			obj1.SetX_Y(3, 3);
//		}
//	}
//	void Print()
//	{
//		cout << obj2.GetNumber() << endl;
//		cout << obj1.GetPrice() << endl;
//
//		cout << "You needs: " << obj2.Just_Get_Number() * obj1.Just_Get_Price() << " money" << endl;
//
//	}
//	
//};
//
//
//int main()
//{
//	int number_count, x, y, wallpaper_type;
//	cout << "Enter a count of rooms: " << endl;
//	cin >> number_count;
//	cout << "Enter a length of wall (in meters, x): " << endl;
//	cin >> x;
//	cout << "Enter a height of wall (in meters, y): " << endl;
//	cin >> y;
//	cout << "Enter a wallpaper type write from (3 hryvnia to 10 hryvnia)" << endl;
//	cin >> wallpaper_type;
//
//	WallPaper obj_baze(number_count, x, y, wallpaper_type);
//	obj_baze.SetNumber1(number_count);
//	obj_baze.SetX_and_Y(x, y);
//	obj_baze.Print();
//
//}