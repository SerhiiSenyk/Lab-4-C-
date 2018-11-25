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
	const uint yearFoundationPark = 1970;
	const float lenghtCycleTracks = 1200.8;
	const float areaOfPark = 40.2;
	const string adressOfPark = "Lviv, V. Velykoho street";
	const string typeOfPark = "land";
	const float priceOfEntranceTicket = 50;
	Park firstPark;
	Park secondPark;
	Park thirdPark(adressOfPark,lenghtCycleTracks, priceOfEntranceTicket, typeOfPark, yearFoundationPark);
	thirdPark.area = areaOfPark;
	thirdPark.name = "Horihovii hai";
	secondPark.setAddress("Lviv,Stusa street");
	secondPark.setLengthCycleTracks(234.8);
	secondPark.setPriceTicket(43.4);
	secondPark.setYearFoundation(1984);
	secondPark.setType("Recreation");
	secondPark.name = "Zalizna voda";
	secondPark.area = 19.5;
	cout << "\t\tFirst park :\n";
	firstPark.outputOnDisplayInformation();
	cout << "\t\tSecond park : \n";
	secondPark.outputOnDisplayInformation();
	cout << "\t\tThird Park : \n";
	cout << "Address : " << thirdPark.getAddress() << endl;
	cout << "LengthCycleTracks : " << thirdPark.getLengthCycleTracks() << " m" << endl;
	cout << "PriceTicket : " << thirdPark.getPriceTicket() << " UAH" << endl;
	cout << "Year fundation : " << thirdPark.getYearFoundation() << endl;
	cout << "Type : " << thirdPark.getType() << endl;
	cout << "Name : " << thirdPark.name << endl;
	cout << "Area : " << thirdPark.area << " Ha" << endl;
	thirdPark.~Park();
	secondPark.~Park();
	firstPark.~Park();
	system("pause");
	return 0;
}
