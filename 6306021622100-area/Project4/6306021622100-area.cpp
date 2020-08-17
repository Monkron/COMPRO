#include<iostream>
using namespace std;
int arearect();
double areacircle();
int menu;
int width, length;
double radius;
double total;
int main()
{




	do
	{
		cout << "1. retangle" << endl;
		cout << "2. Circle" << endl;
		cout << "0. exit" << endl;
		cout << "enter menu : ";
		cin >> menu;
		if (menu == 1) {
			cout << "=================================" << endl;
			cout << "area of retangle" << endl;
			arearect();
			cout << "=================================" << endl;
		}
		else if (menu == 2) {
			cout << "=================================" << endl;
			cout << "area of circle" << endl;
			areacircle();
			cout << "=================================" << endl;
		}
	} while (menu != 0);
	cout << "exit" << endl;



}
int arearect()
{
	cout << "enter width : ";
	cin >> width;
	cout << "enter length : ";
	cin >> length;
	total = width * length;
	cout << "total area : " << total << endl;
	return(total);
}
double areacircle() {
	cout << "enter radius : ";
	cin >> radius;
	total = 3.14 * (radius * radius);
	cout << "total area : " << total << endl;
	return(total);
}