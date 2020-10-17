#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	double x;
	double r;
	double y;
	
	cout << "x= " ; cin >> x;
	cout << "r= " ; cin >> r;
	cout << "y= " ; cin >> y;

	if ((y <= 0 && y >= -x - r) || (y <= sqrt(r * r - x * x) && y >= 0))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;


	cin.get();
	return 0;


}
