#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
	double answer;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	answer = fabs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2;

	cout << answer << endl;

	system("pause");
	return 0;
}
