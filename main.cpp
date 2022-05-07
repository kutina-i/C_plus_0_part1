#include "Box.h"

using namespace std;

int main()
{
	Box box1(3, 5, 8, 2, 50);
	Box box2(8, 1, 2, 4, 100);
	Box box3(1, 8, 8, 3, 10);
	Box box4(5, 2, 5, 8, 11);
	Box box5(8, 2, 7, 7, 150);
	Box arr[5] = { box1, box2, box3, box4, box5 };


	cout << sumValue(5, arr) << " " << checkSumBox(5, arr, 20) << " " << maxWeight(5, arr, 37) << endl;



	Box box11(3, 3, 4, 2, 50);
	Box box22(5, 6, 6, 4, 100);
	Box box33(1, 1, 1, 3, 10);
	Box box44(2, 2, 3, 8, 11);
	Box box55(19, 10, 11, 7, 150);
	Box arrNew[5] = { box11, box22, box33, box44, box55 };

	cout << checkSizes(5, arrNew) << endl;

	Box box1new;

	cin >> box1new;
	cout << box1new << endl;

}