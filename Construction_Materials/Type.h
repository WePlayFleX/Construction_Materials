#pragma once
class Type
{
private:
	string dimensions;
	string grade;

public:
	Type() : dimensions("N/A"), grade("N/A")
	{

	}

	Type(string di, string gr) : dimensions(di), grade(gr)
	{

	}

	void gettype()
	{
		cout << "Enter nominal dimensions (2 x 4 and so on): ";
		cin >> dimensions;
		cout << "Enter grade (raw, timber and so on): ";
		cin >> grade;
	}

	void showtype()
	{
		cout << "\nDimensions: " << dimensions;
		cout << "\nVariety: " << grade;
	}
};

//V1