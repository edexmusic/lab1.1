#pragma once
class intRAnge
{  
	int first,
		second;
public: 
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(int value) { first = value; }
	void SetSecond(int value) { second = value; }

	bool Init(int L, int R);
	void Display() const;
	void Read();

	bool rangeCheck(int number);
	void rangeCheckResult(bool result);
};

