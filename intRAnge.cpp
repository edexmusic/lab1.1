#include "intRange.h"
#include <iostream>

using namespace std;

bool intRAnge::Init(int L, int R)
{
	bool tmp;
	if (L < R)
	{
		first = L;
		second = R;
		tmp = true;
	}
	else
		tmp = false;
	return tmp;
}
void intRAnge::Read()
{
	int first, second;

	do
	{
		cout << "First = "; cin >> first;
		cout << "Second = "; cin >> second;
	} while (!Init(first, second));
}
void intRAnge::Display() const
{
	cout << "\nFirst = " << GetFirst() << endl;
	cout << "Second = " << GetSecond() << endl;
}
bool intRAnge::rangeCheck(int number)
{
	if (number >= GetFirst() && number < GetSecond())
		return 1;
	else
		return 0;
}
void intRAnge::rangeCheckResult(bool result)
{
	if (result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}