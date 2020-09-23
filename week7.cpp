#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const double based, const double  high);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1'){
			float Radius;
			cout <<"\nEnter radius : ";
			cin >> Radius;
			cout <<"Area of Circle = "<<fixed;
			cout << setprecision(2) << Area(Radius);

		}
		else if (Choice == '2') {
			float Length,Widht;
			cout<<"Enter lendth and width : ";
			cin >> Length >> Widht;
			cout <<"Area of Circle = "<<fixed;
			cout << setprecision(2) << Area(Length);
			cout << endl;
		}
		else if (Choice == '3') {
			float  based , high;
			cout<<"Enter based and high : ";
			cin >> based >> high;
			cout <<"Area of Circle = "<<fixed;
			cout << setprecision(2) << Area(based);
			cout << endl;

		}
		else if(Choice == '4') Flag = false;
			
		else {
			cout<<"\nYou choose out or range is";
			cout << "not process,\n";
		}
	}	while (Flag);
	cout << "\n. . . Exit Program . . .\n";
	return 0;
}
float Area(const float Radius)
{
	return(3.14153F * Radius * Radius);
}

float Area(const float Length, const float Widht)
{
	return(Length * Widht);
}
float Area(const double based, const double  high)
{
	return(0.5*based*high);
}
void DisplayMenu()
{
	cout << endl;
	cout << " program Calculate Area "<< endl;
	cout <<"1. Clrcle"<<endl;
	cout <<"2. Rectangle"<<endl;
	cout <<"3. Triangle"<<endl;
	cout <<"4. Exit"<<endl;
	cout << "Rnter your choose number : ";

}