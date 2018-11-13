#include <iostream>
#include <stdio.h>
using namespace std;

class Fraction{
int a,b;
double d;
public:
    Fraction(){
    a=0;
    b=0;
    d=0.0;
    }
  Fraction(int a1,int b1){
        a=a1;
    if (b1==0){
        cout << "ERROR: Denominator Can't be zero" << endl;
           }
    else
        b=b1;
    }
friend istream &operator>>(istream &in,Fraction &f);
friend ostream &operator<<(ostream &out,Fraction &ff);

//Array Operator
Fraction operator[](int p){
    Fraction f;
return f[p];
}

//UNARY Operator
Fraction operator++(){
++a;
++b;
return *this;
}
Fraction operator++(int t){
a++;
b++;
return *this;
}
Fraction operator--(){
--a;
--b;
return *this;
}
Fraction operator--(int t){
a--;
b--;
return *this;
}
bool operator==(Fraction f){
return d=f.d;
}
bool operator<(Fraction f){
return d<f.d;
}
bool operator>(Fraction f){
return d>f.d;
}
bool operator>=(Fraction f){
return d>=f.d;
}
bool operator<=(Fraction f){
return d<f.d;
}
bool operator!=(Fraction f){
return d!=f.d;
}

//Assignment Operators
void operator+=(Fraction f){
a+=f.a;
b+=f.b;
}
void operator-=(Fraction f){
a-=f.a;
b-=f.b;
}
void operator*=(Fraction f){
a*=f.a;
b*=f.b;
}
void operator/=(Fraction f){
a/=f.a;
b/=f.b;
}
void operator%=(Fraction f){
a%=f.a;
b%=f.b;
}

//ARITHMATIC OPERATORS
Fraction operator+(Fraction f){
    Fraction c;
c.a=a+f.a;
c.b=b+f.b;
return c;
}
Fraction operator-(Fraction f){
    Fraction c;
c.a=a-f.a;
c.b=b-f.b;
return c;
}
Fraction operator*(Fraction f){
    Fraction c;
c.a=a*f.a;
c.b=b*f.b;
return c;
}
Fraction operator/(Fraction f){
    Fraction c;
c.a=a/f.a;
c.b=b/f.b;
return c;
}
Fraction operator%(Fraction f){
    Fraction c;
c.a=a%f.a;
c.b=b%f.b;
return c;
}
void Menu()
{
    cout << "**********************************************" << endl;
	cout << "MENU" << endl;
	cout << "1: Unary " << endl;
	cout << "2: Binary" << endl;
	cout << "3: Relational " << endl;
	cout << "4: Assignment " << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :"<<endl;
    cout << "**********************************************" << endl;

}

};
void Menu1();
void Menu2();
void Menu3();
void Menu4();
istream &operator>>(istream &in,Fraction &f){
    scanf("%d/%d", &f.a, &f.b);
    f.d=f.a/f.b;
}

ostream &operator<<(ostream &out,Fraction &ff){
  out<<ff.a<<"/"<<ff.b<<endl;
}

//MAIN

int main()
{
Fraction f1,f2,f3[5],f4;
int choice;
	do
	{
		f1.Menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
                        Menu1();
			break;
		case 2:
                        Menu2();
			break;
		case 3:
                        Menu3();
			break;
		case 4:
                        Menu4();
			break;
		case 5:
			break;
		default:
			cout << "Invalid input" << endl;
		}
	}while (choice != 5);
}















//MENUS
void Menu1()
{
    Fraction f1;
    int choice;
    cout << "**********************************************" << endl;
	cout << "MENU" << endl;
	cout << "Unary Operators " << endl;
	cout << "1: Pre Increment" << endl;
	cout << "2: Post Increment" << endl;
	cout << "3: Pre Decrement" << endl;
	cout << "4: Post Decrement" << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :"<<endl;
    cout << "**********************************************" << endl;
       cin >> choice;
                        do{
                            switch (choice)
                              {
                            case 1:
                            cout << "Enter a Fractions: ";
                            cin >> f1;
                            ++f1;
                            cout << "Pre Increment " << f1 <<endl;
                            break;
                        case 2:
                            cout << "Enter a Fractions: ";
                            cin >> f1;
                            f1++;
                            cout << "Post Increment " << f1 <<endl;
                            break;
                        case 3:
                            cout << "Enter a Fractions: ";
                            cin >> f1;
                            --f1;
                            cout << "Pre Decrement " << f1 <<endl;
                            break;
                        case 4:
                            cout << "Enter a Fractions: ";
                            cin >> f1;
                            f1--;
                            cout << "Post Increment " << f1 <<endl;
                            break;
                        case 5:
                            break;
                        default:
                            cout << "Invalid input" << endl;
                        }
                                }while (choice != 5);

}

void Menu2(){
    Fraction f1,f2,f3;
    int choice;
    cout << "**********************************************" << endl;
	cout << "MENU" << endl;
	cout << "Binary Operators " << endl;
	cout << "1: Addition" << endl;
	cout << "2: Multiplication" << endl;
	cout << "3: Subtraction" << endl;
	cout << "4: Division" << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :"<<endl;
    cout << "**********************************************" << endl;
       cin >> choice;
                        do{
                            switch (choice)
                              {
                            case 1:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f3=f1+f2;
                            cout << "Addition " << f3 <<endl;
                            break;
                        case 2:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f3= f1*f2;
                            cout << "Multiplication " <<f3 <<endl;
                            break;
                        case 3:
                             cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f3=f1-f2;
                            cout << "Subtraction " << f3 <<endl;
                            break;
                        case 4:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f3=f1/f2;
                            cout << "Addition " << f3 <<endl;
                            break;
                        case 5:
                            break;
                        default:
                            cout << "Invalid input" << endl;
                        }
                                }while (choice != 5);

}

void Menu3(){
    Fraction f1,f2;
    int choice,g;
    cout << "**********************************************" << endl;
	cout << "MENU" << endl;
	cout << "Binary Operators " << endl;
	cout << "1: Not Equal to" << endl;
	cout << "2: >=" << endl;
	cout << "3: <=" << endl;
	cout << "4: >" << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :"<<endl;
    cout << "**********************************************" << endl;
       cin >> choice;
                        do{
                            switch (choice)
                              {
                            case 1:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            g=f1!=f2;
                            cout << "!= " << g <<endl;
                            break;
                        case 2:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            g=f1>=f2;
                            cout << ">= " << g <<endl;
                            break;
                        case 3:
                             cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            g=f1<=f2 ;
                            cout << "<= " << g<<endl;
                            break;
                        case 4:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            g= f1<f2;
                            cout << "< " <<g <<endl;
                            break;
                        case 5:
                            break;
                        default:
                            cout << "Invalid input" << endl;
                        }
                                }while (choice != 5);

}
void Menu4(){
    Fraction f1,f2;
    int choice,g;
    cout << "**********************************************" << endl;
	cout << "MENU" << endl;
	cout << "Binary Operators " << endl;
	cout << "1: +=" << endl;
	cout << "2: -=" << endl;
	cout << "3: *=" << endl;
	cout << "4: /=" << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :"<<endl;
    cout << "**********************************************" << endl;
       cin >> choice;
                        do{
                            switch (choice)
                              {
                            case 1:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f1+=f2;
                            cout << "+=  " << f1 <<endl;
                            break;
                        case 2:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                            f1-=f2;
                            cout << "-=  " << f1 <<endl;
                            break;
                        case 3:
                             cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                           f1*=f2; ;
                            cout << "*=  " << f1<<endl;
                            break;
                        case 4:
                            cout << "Enter two Fractions: ";
                            cin >> f1>>f2;
                           f1/=f2;;
                            cout << "/=  " <<f1 <<endl;
                            break;
                        case 5:
                            break;
                        default:
                            cout << "Invalid input" << endl;
                        }
                                }while (choice != 5);

}
