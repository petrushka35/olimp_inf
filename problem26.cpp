#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1, x2, y1, y2, r1, r2, answer;
    
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;

	answer = sqrt(unsigned(x2 - x1) * unsigned(x2 - x1) + unsigned(y2 - y1) * unsigned(y2 - y1));

	if (r1 + r2 > answer)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	system("pause");
	return 0;
{
