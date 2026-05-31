#include <iostream>

using namespace std;

void day1_2()
{
	float weight, height, bmi;
	
	cin >> weight >> height;

	bmi = weight / ((height * height) / 100);

	if (bmi < 18.5)
	{
		cout << "저체중 입니다.";
	}
	else if (18.5 <= bmi && bmi < 23)
	{
		cout << "정상체중 입니다.";
	}
	else if (23 <= bmi && bmi < 25)
	{
		cout << "과체중 입니다.";
	}
	else if (25 <= bmi && bmi < 30)
	{
		cout << "비만 입니다.";
	}
	else if (30 <= bmi && bmi < 35)
	{
		cout << "중증 비만 입니다.";
	}
	else
	{
		cout << "고도 비만 입니다.";
	}
}