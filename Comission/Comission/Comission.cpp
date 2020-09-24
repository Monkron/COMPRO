#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int price,menu,mounth;
	string name;
	float interest;

A:
cout<<"+++++++T SHOP+++++++"<<endl;
cout<<"++++++++++++++++++++"<<endl;
cout<<"1.Select product"<<endl;
cout<<"2.Select installment"<<endl;
cout<<"3.Payment"<<endl;
cout<<"4.Exit Program"<<endl;
cout<<"Select Menu{1-4} :";
cin>>menu;

if (menu == 1)
		{
			cout<<"++++++++++++++++++++"<<endl;
			cout << "Product" << endl;
			cout << "Enter product name : ";
			cin >> name;
			cout << "Enter price "<<name<< " : ";
			cin >> price;
			cout <<"                                   "<<endl;
				goto A;
		}
		else if (menu == 2)
		{
			cout<<"++++++++++++++++++++"<<endl;
			cout << "Installment" << endl;
			cout << "Mounth :";
			cin >> mounth;
			cout <<"Interest :";
			cin >>interest;
			cout <<"                                   "<<endl;
			goto A;
			}
		else if (menu == 3)
		{
		cout<<"++++++++++++++++++++"<<endl;
		cout <<"Payment :"<<(price/mounth)+(mounth*interest)<<" Bath/Mounth "<<endl;
		cout <<"                                   "<<endl;
		goto A;
		}
		else if (menu == 4)
		{
			cout<<"++++++++++++++++++++"<<endl;
			cout<<"Exit Program"<<endl;
			cout <<"                                   "<<endl;
		}
return 0;
}