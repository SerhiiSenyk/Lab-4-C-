//Вивчити синтаксис, призначення, застосування класів у мові С++.Вивчити поняття модифікаторів видимості, конструкторів та деструкторів мови С++.
//2. Написати заголовний файл(*.h) та файл класу(*.cpp) для представлення сутності з таблиці за допомогою класу мови С++.
//3. Поля, вказані в таблиці, мають бути приватними.
//4. Для кожного приватного поля слід реалізувати методи доступу до даних(наприклад для поля name – getName())
//5. Для кожного класу слід додати 2 публічні поля, одне з яких має бути числового типу, а друге – стрічкового.
//6. Для кожного класу слід додати 2 захищених поля(protected).
//7. Для кожного класу слід створити конструктор по замовчуванню та конструктор, котрий приймає та 
//виконує ініціалізацію всіх приватних та захищених полів.
//8. Для кожного класу слід оголосити та реалізувати деструктор.
//9. Написати main метод, в якому здійснити ініціалізацію 3 об’єктів заданого класу та реалізувати
//виведення значень всіх полів(приватних, захищених та публічних) за допомогою cout в стандартний вивід.
//Створити клас “Парк” котрий містить поля :
//- адреса
//- довжина велосипедних доріжок(в метрах)
//- ціна вхідного квитка

#include"Park.h"
using namespace std;
int main()
{
	Park parkA;
	Park parkB;
	Park parkC("Lviv, V. Velykoho street", 1200.8, 50, "land", 1970);
	parkC.area = 40.2;
	parkC.name = "Horihovii hai";
	//ініціалізація
	parkB.setAddress("Lviv,Stusa street");
	parkB.setLengthCycleTracks(234.8);
	parkB.setPriceTicket(43.4);
	parkB.setYearFoundation(1984);
	parkB.setType("Recreation");
	parkB.name = "Zalizna voda";
	parkB.area = 19.5;
	cout << "\t\tPark1 :\n";
	parkA.show(parkA);

	cout << "\t\tPark2 : \n";
	cout << "Address : " << parkB.getAddress() << endl;
	cout << "LengthCycleTracks : " << parkB.getLengthCycleTracks() << " m" << endl;
	cout << "PriceTicket : " << parkB.getPriceTicket() << " UAH" << endl;
	cout << "Year fundation : " << parkB.getYearFoundation() << endl;
	cout << "Type : " << parkB.getType() << endl;
	cout << "Name : " << parkB.name << endl;
	cout << "Area : " << parkB.area << " Ha" << endl;
	parkA.~Park();

	cout << "\t\tPark3 : \n";
	cout << "Address : " << parkC.getAddress() << endl;
	cout << "LengthCycleTracks : " << parkC.getLengthCycleTracks() << " m" << endl;
	cout << "PriceTicket : " << parkC.getPriceTicket() << " UAH" << endl;
	cout << "Year fundation : " << parkC.getYearFoundation() << endl;
	cout << "Type : " << parkC.getType() << endl;
	cout << "Name : " << parkC.name << endl;
	cout << "Area : " << parkC.area << " Ha" << endl;
	system("pause");
	return 0;
}
