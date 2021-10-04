#include <iostream>
#include <string>
using namespace std;

void input(string &first, string &second);
void display(int *added, const int &carry, const int &counter);

const int charLen = 20;

int main()
{
	//string first, second;
	string first;
	string second;
	int added[21];
	int carry = 0;
	int counter;
	int xLen, yLen;

	// Get the values
	input(first, second);

	// Convert digits to ints
	int x[first.length()], y[second.length()];

	// Define a counter
	xLen = first.length();
	yLen = second.length();

	if (xLen <= yLen)
	{
		counter = yLen;
	}
	else
	{
		counter = xLen;
	};

	for (int i = first.length() - 1; i >= 0; i--)
	{
		x[first.length() - 1 - i] = first[i] - 48;
	};

	for (int i = second.length() - 1; i >= 0; i--)
	{
		y[second.length() - 1 - i] = second[i] - 48;
	};

	// Add the arrays
	if (yLen >= xLen)
	{
		for (int i = 0; i < xLen; i++)
		{
			if (x[i] + y[i] + carry >= 10)
			{
				added[i] = x[i] + y[i] + carry - 10;
				carry = 1;
				//cout<<"carry loop: "<<added[i]<<" carry: "<<carry<<" x: "<<x[i]<<" y: "<<y[i]<<endl;
			}
			else
			{
				added[i] = x[i] + y[i] + carry;
				carry = 0;
				//cout<<"noncarry loop: "<<added[i]<<" carry: "<<carry<<" x: "<<x[i]<<" y: "<<y[i]<<endl;
			}
		};
		for (int i = xLen; i < yLen; i++)
		{
			added[i] = y[i] + carry;
			carry = 0;
		}
		if (carry == 1)
		{
			added[yLen + 1] = 1;
		};
	}
	else
	{
		for (int i = 0; i < yLen; i++)
		{
			if (x[i] + y[i] + carry >= 10)
			{
				added[i] = x[i] + y[i] + carry - 10;
				carry = 1;
				//cout<<"carry loop: "<<added[i]<<" carry: "<<carry<<" x: "<<x[i]<<" y: "<<y[i]<<endl;
			}
			else
			{
				added[i] = x[i] + y[i] + carry;
				carry = 0;
				//cout<<"noncarry loop: "<<added[i]<<" carry: "<<carry<<" x: "<<x[i]<<" y: "<<y[i]<<endl;
			}
		};
		for (int i = yLen; i < xLen; i++)
		{
			added[i] = x[i] + carry;
			carry = 0;
		};
		if (carry == 1)
		{
			added[yLen + 1] = 1;
		};
	};

	// Display sum
	display(added, carry, counter);

	return 0;
}

void display(int *added, const int &carry, const int &counter)
{
	if (carry == 1)
	{
		cout << "1";
	}
	for (int i = counter - 1; i >= 0; i--)
	{
		cout << added[i];
	};
	cout << endl;
};

void input(string &first, string &second)
{
	cout << "Enter the first number:";
	cin >> first;
	while (first.length() > 21)
	{
		cout << "Enter the first number, with fewer than 20 digits:";
		cin >> first;
	};
	cout << "Enter the second number:";
	cin >> second;
	while (second.length() > 21)
	{
		cout << "Enter the second number, with fewer than 20 digits:";
		cin >> second;
	};
};