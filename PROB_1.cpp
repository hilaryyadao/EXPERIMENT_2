#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char package;
    int time, totalAmount, extraHours;
    bool userquit = false;
    
    cout << "Subscription Packages per month:" << endl;
    cout << "A: For P995 --- 10 hours of access. Additional hours are P20/hour." << endl;
    cout << "B: For P1495 --- 20 hours access. Additional hours are P10/hour." << endl;
    cout << "C: For P1995 --- unlimited access" << endl;
    cout << ' ' << endl;
    cout << "Enter the letter of your purchased package: "; 
	cin >> package;
    cout << "Enter number of hours used: "; 
	cin >> time;
    cout << ' ' << endl;
    
    switch(package)
    {
        case 'a':
		case 'A':
            if(time<=10)
            {cout << "Total Amount Due: P995";}
           else
           {extraHours = (time - 10) * 20;
            	totalAmount = 995 + extraHours;
            	cout << "Total Amount Due: P" << totalAmount;}
            break;
        case 'b':
        case 'B':
            if(time<=20)
            {cout << "Total Amount Due: P1495";}
            else
            {extraHours = (time - 20) * 10;
                totalAmount = 1495 + extraHours;
                cout << "Total Amount Due: P" << totalAmount;}
            break;
        case 'c':
        case 'C':
            cout << "Total Amount Due: P1995";
            break;
            
        default: cout << "Invalid Input!" << endl;
    }

    cout << ' ' << endl;
    getch();
    return 0;
}

