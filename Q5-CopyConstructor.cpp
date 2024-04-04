#include<iostream>

using namespace std;

class COMPLEX
{
private:
	double real;
	double img;

public:
	//No argument constructor
	COMPLEX()
	{
		real = 0.0;
		img = 0.0;

	}

	//parameterized constructor
	COMPLEX(const double r, const double i)
	{
		real = r;
		img = i;

	}

	//Copy Constructor
	COMPLEX(COMPLEX& C)
	{
		real = C.real;
		img = C.img;

	}

	void displayComplex() const
	{
		cout << "\t Real : " << real << "\t Img : " << img;
		cout << endl << endl;
	}

	friend COMPLEX add(const COMPLEX&, const COMPLEX&);
};

int main()
{
	cout << endl << endl;
	cout << "\t\t **Complex Numbers**" << endl << endl;
	COMPLEX C1(1.2, 2.2);
	COMPLEX C2(C1); //using copy constructor

	COMPLEX Sum;
	Sum = add(C1, C2);

	cout << "\t Complex 1 --> ";
	C1.displayComplex();
	cout << "\t Complex 2 --> ";
	C2.displayComplex();
	cout << endl;

	cout << "\t Sum --> ";
	Sum.displayComplex();

	return 0;
}


COMPLEX add(const COMPLEX& C1, const COMPLEX& C2)
{
	double r, i;
	r = C1.real + C2.real;
	i = C1.img + C2.img;

    COMPLEX C3(r, i);
	return C3;
}