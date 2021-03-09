//#include<iostream>
//#include<string>
//#include<iomanip>
//
//const int n = 3;
//using namespace std;
//
////Базовый класс
//class Employee {
//protected:
//	string name;	//имя
//	string position;//должность
//	int salary;	//зарплата
//	int result;	//зарплата за год
//public:
//	//конструктор по умолчанию
//	Employee() :name("None"), position("None"), salary(0), result(0) {}
//	//конструктор с аргументами
//	Employee(string n, string p, int s) :name(n), position(p), salary(s) {}
//	//метод для вывода заголовка на консоль
//	void showZagolovokEmp() {
//		cout << setw(10) << left << "Имя" << setw(14) << "Должность" << setw(14) << "Зарплата" << setw(21) << "Зарплата за год";
//	}
//	//метод для вывода данных на консоль
//	void showDataEmp(Employee* obj) {
//		cout << "___________________________________________________________________________________________________________________" << endl;
//		cout << setw(10) << left << name << "" << setw(14) << position << setw(14) << salary << setw(21) << result;
//	}
//	//расчет зп за год
//	int Zarplata() {
//		result = salary * 12;
//		return result;
//	}
//	~Employee() {}
//};
//
////Производный класс
//class Manager :public Employee {
//private:
//	int annualBonus;
//	string companyCar;
//	int stockOptions;
//public:
//	Manager() :annualBonus(0), companyCar(0), stockOptions(0) {}
//	//конструктор с аргументами
//	Manager(string n, string p, int s,int aB, string cC, int sO) :Employee(n,p,s){
//		annualBonus = aB, companyCar = cC, stockOptions = sO;
//	}
//	void showZagolovokMan() {
//		cout << setw(19) << left << "Ежегодный бонус " << setw(19) << "Машина компании " << setw(19) << "Опционы на акции ";
//	}
//	//метод для вывода данных на консоль
//	void showDataMan(Employee* obj) {
//		cout << setw(19) << annualBonus << setw(19) << companyCar << setw(19) << stockOptions;
//	}
//	~Manager() {}
//};
//
////вывод всех объектов класса с помощью массива
//void showAllData(Employee* obj) {
//	cout << endl;
//	obj->showZagolovokEmp();
//	for (int i = 0; i < n; i++) {
//		obj[i].Zarplata(); cout << endl;
//		obj[i].showDataEmp(obj); 
//	}
//} 
//
////вывод всех объектов производного класса с помощью массива
//void showAllData(Manager* obj) {
//	cout << endl;
//	obj->showZagolovokEmp();
//	obj->showZagolovokMan();
//	for (int i = 0; i < n; i++) {
//		obj[i].Zarplata(); cout << endl;
//		obj[i].showDataEmp(obj); 
//		obj[i].showDataMan(obj);
//	}
//	cout << "\n___________________________________________________________________________________________________________________" << endl;
//} 
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	/*	//инициализация объектов класса
//	Employee objEmp[n] = { 
//		Employee("Henry","Директор",50000),
//		Employee("Pope","Ассистент",30400),
//		Employee("Neymar","Инженер",45000) };
//	 
//	//вызов функции
//	showAllData(objEmp);
//	cout << endl << endl << endl;*/
//
//	//Производный класс
//	Manager objMan[n] = {
//		Manager("Henry","Менедер",50000,5000,"Mercedes",2500),
//		Manager("Pope","Менеджер",30400,4000,"BMW",3000),
//		Manager("Neymar","Менеджер",45000,4000,"Audi",3000)
//	};
//
//	//вывод данных класса потомка
//	showAllData(objMan);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<iomanip>
//
//using namespace std;
//
////базовый класс
//class Display {
//protected:
//	string type;	//тип монитора
//	long colors;	//кол-во цветов
//	int xResolution;//разрешение по оси х
//	int yResolution;//разрешение по оси y
//public:
//	Display() :type("None"), colors(0), xResolution(0), yResolution(0) {}
//	Display(string t, long c, int xR, int yR) :type(t), colors(c), xResolution(xR), yResolution(yR) {}
//};
//
////базовый класс
//class MotherBoard {
//protected:
//	int processor;	//тип процессора
//	int speeed;		//скорость процессора
//	int RAM;		//объем оперативной памяти
//public:
//	MotherBoard() :processor(0), speeed(0), RAM(0) {}
//	MotherBoard(int p, int s, int R) :processor(p), speeed(s), RAM(R) {}
//};
//
////производный класс
//class Сomputer :public Display, public MotherBoard {
//private:
//	string name;	//марка компьютера
//	int hardDisk;	//объем жесткого диска 
//public:
//	//конструктор производного класса
//	Сomputer(string t, long c, int xR, int yR, int p, int s, int R, string n, int hD) :Display(t, c, xR, yR), MotherBoard(p, s, R) {
//		name = n;
//		hardDisk = hD;
//	}
//	void showZagolovlk() {
//		cout << setw(15) << left << "Тип монитора" << setw(16) << "Кол-во цветов" << setw(15) << "Разрешение х" <<
//			setw(15) << "Разрешение y" << setw(17) << "Тип процессора" << setw(15) << "S процессора" <<
//			setw(6) << "RAM" << setw(8) << "Марка" << setw(14) << "Объем диска" << endl;
//	}
//	void show() {
//		cout << setw(15) << left <<type<< setw(16) <<colors<< setw(15) << xResolution <<
//			setw(15) << yResolution<< setw(17) << processor << setw(15) <<speeed <<
//			setw(6) << RAM << setw(8) << name << setw(14) << hardDisk << endl;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	//производный класс
//	Сomputer obj("OLED-монитор", 10, 720, 360, 1200, 4, 16, "Apple", 1000);
//	obj.showZagolovlk();
//	obj.show();
//
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<string>
#include<iomanip>

const int n = 3;
using namespace std;

//Базовый класс
class Employee {
protected:
	string name;	//имя
	string position;//должность
	int salary;	//зарплата
	int result;	//зарплата за год
public:
	//конструктор по умолчанию
	Employee() :name("None"), position("None"), salary(0), result(0) {}
	//конструктор с аргументами
	Employee(string n, string p, int s) :name(n), position(p), salary(s) {}
	//метод для вывода заголовка на консоль
	void showZagolovokEmp() {
		cout << setw(10) << left << "Имя" << setw(14) << "Должность" << setw(14) << "Зарплата" << setw(21) << "Зарплата за год";
	}
	//метод для вывода данных на консоль
	void showDataEmp() {
		cout << "___________________________________________________________________________________________________________________" << endl;
		cout << setw(10) << left << name << "" << setw(14) << position << setw(14) << salary << setw(21) << result;
	}
	//расчет зп за год
	int Zarplata() {
		result = salary * 12;
		return result;
	}
	~Employee() {}
};

//Производный класс 
//private наследование
class Manager :private Employee {
private:
	int annualBonus;
	string companyCar;
	int stockOptions;
public:
	//восстановление области видимости
	//1 способ  создамим метод который вызывает метод в базовом классе
	void showZagolovok() { showZagolovokEmp(); }
	void showData() { showDataEmp(); }
	void raschetZP() { Zarplata(); }

	
	//2 способ: Восстановление уровня доступа через область видимости
	//данный способ не рекомендуется т.к нарушается принцип инкапсуляции
	Employee::showZagolovokEmp;
	Employee::showDataEmp;
	Employee::Zarplata;

	Manager() :annualBonus(0), companyCar(0), stockOptions(0) {}
	//конструктор с аргументами
	Manager(string n, string p, int s,int aB, string cC, int sO) :Employee(n,p,s){
		annualBonus = aB, companyCar = cC, stockOptions = sO;
	}
	void showZagolovokMan() {
		cout << setw(19) << left << "Ежегодный бонус " << setw(19) << "Машина компании " << setw(19) << "Опционы на акции ";
	}
	//метод для вывода данных на консоль
	void showDataMan() {
		cout << setw(19) << annualBonus << setw(19) << companyCar << setw(19) << stockOptions;
	}
	~Manager() {}
};

//вывод всех объектов класса с помощью массива
void showAllData(Employee* obj) {
	cout << endl;
	obj->showZagolovokEmp();
	for (int i = 0; i < n; i++) {
		obj[i].Zarplata(); cout << endl;
		obj[i].showDataEmp(); 
	}
} 

//вывод всех объектов производного класса с помощью массива
void showAllData(Manager* obj) {

	cout << endl;
	obj->showZagolovok();
	obj->showZagolovokMan();
	for (int i = 0; i < n; i++) {
		obj[i].raschetZP(); cout << endl;
		obj[i].showData(); 
		obj[i].showDataMan();
	}
	cout << "\n___________________________________________________________________________________________________________________" << endl;
} 

int main() {
	setlocale(LC_ALL, "ru");

	/*	//инициализация объектов класса
	Employee objEmp[n] = { 
		Employee("Henry","Директор",50000),
		Employee("Pope","Ассистент",30400),
		Employee("Neymar","Инженер",45000) };
	 
	//вызов функции
	showAllData(objEmp);
	cout << endl << endl << endl;*/

	//Производный класс
	Manager objMan[n] = {
		Manager("Henry","Менедер",50000,5000,"Mercedes",2500),
		Manager("Pope","Менеджер",30400,4000,"BMW",3000),
		Manager("Neymar","Менеджер",45000,4000,"Audi",3000)
	};

	//вывод данных класса потомка
	showAllData(objMan);

	system("pause");
	return 0;
}