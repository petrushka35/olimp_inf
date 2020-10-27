#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int counter = 0, max, min;
    double x1, y1, x2, y2, shortest, first_s, second_s;
    cin >> x1 >> y1 >> x2 >> y2;
    
    shortest = unsigned((y2 * x1 - x2 * y1) / sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
    
    first_s = sqrt(x1 * x1 + y1 * y1);
    
    second_s = sqrt(x2 * x2 + y2 * y2);
    
    max = first_s;
    min = second_s;
    if (max < min)
    {
        max = second_s;
        min = first_s;
    }

    if ((2 * x1 * x1 - 2 * x1 * x2 + 2 * y1 * y1 - 2 * y1 * y2 < 0) || (2 * x2 * x2 - 2 * x1 * x2 + 2 * y2 * y2 - 2 * y1 * y2 < 0))
        counter = max - min;
    else {
        counter = first_s - shortest;
        counter += second_s - shortest;
        if (int(shortest) == shortest)
            counter--;
    }
    cout << counter;
    return 0;
}