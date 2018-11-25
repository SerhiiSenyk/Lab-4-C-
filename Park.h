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
//Copyright(c) 21.10.2018 by Serhiy Senyk.All rights reserved.
#ifndef PARK_H
#define PARK_H
#include <iostream>
#include <string>
using namespace std;
typedef unsigned int uint;
class Park
{
private:
	string address_;
	float lengthCycleTracks_;
	float priceOfEntranceTicket_;
protected:
	string type;
	uint yearFoundation;
public:
	void setAddress(string address);
	string getAddress() const;
	void setLengthCycleTracks(float lengthCycleTracks);
	float getLengthCycleTracks() const;
	void setPriceTicket(float priceTicket);
	float getPriceTicket() const;
	void setType(string type);
	string getType() const;
	void setYearFoundation(uint yearFoundation);
	uint getYearFoundation() const;
    void outputOnDisplayInformation();
	string name;
	float area;
	Park();
	Park(string address,float lenghtCycleTracks,float priceOfEntranceTicket,
		string type,uint yearFundation);
	~Park();
};
#endif //!PARK_H
