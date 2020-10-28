#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1, x2, y1, y2, answer;

	cin >> x1 >> y1 >> x2 >> y2;

	answer = sqrt(unsigned(x2 - x1) * unsigned(x2 - x1) + unsigned(y2 - y1) * unsigned(y2 - y1));
	cout << answer << endl;

	system("pause");
	return 0;
}
