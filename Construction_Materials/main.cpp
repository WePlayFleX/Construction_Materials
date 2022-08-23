#include <iostream>
#include <string>
#include "Type.h"
#include "Distance.h"
#include "Lumber.h"

using namespace std;

int main()
{
	Lumber siding;

	cout << "\n Cladding Information:\n";
	siding.getlumber();

	Lumber studs("2x4", "const", 8, 0.0, 200, 4.45F);

	cout << "\nSheathing";
	siding.showlumber();

	cout << "\nTimber";
	siding.showlumber();

	cout << endl;

	system("pause");
	return 0;
}