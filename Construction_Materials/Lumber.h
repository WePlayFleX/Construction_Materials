#pragma once

#include "Type.h"
#include "Distance.h"

using namespace std;

class Lumber : public Type, public Distance
{
private:
	int quantity;
	double price;

public:
	Lumber() : Type(), Distance(), quantity(0), price(0.0)
	{

	}

	Lumber(string di, string gr,
		int ft, float in,
		int qu, float prc) :
		Type(di, gr),
		Distance(ft, in),
		quantity(qu), price(prc)
	{

	}

	void getlumber()
	{
		Type::gettype();
		Distance::getdist();

		cout << "Enter quantity: ";
		cin >> quantity;
		cout << "Enter price: ";
		cin >> price;
	}

	void showlumber() const
	{
		Type::showtype();

		cout << "\n Lenght: ";

		Distance::showdist();

		cout << "\n Price " << quantity << " things: " << (price * quantity) << " rubles";
	}
};