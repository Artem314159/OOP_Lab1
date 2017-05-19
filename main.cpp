#include <iostream>
#include <stdlib.h>
#include "isos_triang.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	cout << "Input num of Triangles: ";
	int n = 0;
	cin >> n;
	struct IsosTriang triangs[n];
	for (int i = 0; i < n; i++)
	{
		double side, angle;
		cout << "Input lateral face of [" << i+1 << "] triangle: ";
		cin >> side;
		cout << "Input angle of [" << i+1 << "] triangle: ";
		cin >> angle;
		triangs[i].setSide(side);
		triangs[i].setAngle(angle);
		if (angle >= 90)
		{
			cout << "Angle must be < 90 degres!\n";
			i--;
		}
	}
	int num = 0, op = 0, res = 0;
	while(op != 5)
	{
		cout << "\nInput your triangle: ";
		cin >> num;
		cout << "Input your operation\n(1 - increase/reduction size)\n(2 - find bisector)\n(3 - find height)\n(4 - find side)\n(5 - exit): ";
		cin >> op;
		switch(op)
		{
			case 1:
				{
					double k = 0;
					while (k <= 0)
					{
						cout << "Input koef: ";
						cin >> k;
					}
					triangs[num - 1].changeSize(k);
					cout << "New size: side = " << triangs[num - 1].getSide() << ", angle = " << triangs[num - 1].getAngle();
					break;
				}
			case 2:
				{
					cout << "Input angle (ABC - vertice)\n(1 - angle ABC)\n(2 - angle ACB)\n(3 - angle BAC): ";
					cin >> res;
					cout << "Bisector = ";
					if (res == 1)
					cout << triangs[num - 1].findBHM();
					else
					cout << triangs[num - 1].findBisec();
					break;
				}
			case 3:
				{
					cout << "Input angle (ABC - vertice)\n(1 - angle ABC)\n(2 - angle ACB)\n(3 - angle BAC): ";
					cin >> res;
					cout << "Height = ";
					if (res == 1)
					cout << triangs[num - 1].findBHM();
					else
					cout << triangs[num - 1].findHeight();
					break;
				}
			case 4:
				{
					cout << "Input side\n(1 - side AB)\n(2 - side BC)\n(3 - stem AC): ";
					cin >> res;
					if (res == 3)
					cout << "Stem = " << triangs[num - 1].findStem();
					else
					cout << "Side = " << triangs[num - 1].getSide();
					break;
				}
			default:
				{ break; }
		}
	}
	return 0;
}
