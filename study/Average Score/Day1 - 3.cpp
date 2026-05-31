#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	cout << "사용자로부터 숫자를 입력받고 0을 입력하면 합계를 출력하고 종료한다." << endl;

	int number, total = 0;

	while (true)
	{
		cout << "숫자 입력 : ";

		cin >> number;

		if (number == 0)
		{
			break;
		}

		total = total + number;
	}

	cout << "합계 : " << total;
}