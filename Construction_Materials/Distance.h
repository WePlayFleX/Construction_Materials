#pragma once

using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	Distance() : feet(0), inches(0.0)
	{

	}

	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "Enter feet: ";
		cin >> feet;
		cout << "Enter inches: ";
		cin >> inches;
	}

	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};