//Anna  Edwards
//Swap


#include <iostream>

using namespace std;

void hackTrans(int x, int y);
void normTrans(int& x, int& y);

int main()
{
	int myBal = 1500;
	int yourBal = 200;
	cout << "Original Funds\n";
	cout << "Your Balance is: " << myBal << "\n";
	cout << "Unknown Hacker Balance: " << yourBal << "\n\n";

	cout << "Hacking in progress...()\n";
	hackTrans(yourBal, myBal);
	cout << "Your Balance is: " << yourBal << "\n";
	cout << "Unknown Hacker Balance: " << myBal << "\n\n";

	cout << "You have been hacked, place contact our 800 number for more information about your account.\n\n";

	system("pause");
	return 0;

}

void hackTrans(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
