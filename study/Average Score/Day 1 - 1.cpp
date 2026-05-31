#include <iostream>

using namespace std;

void Day1_1()
{
	int kor, eng, math;

	cout << "국어 점수를 입력하시오 : ";

	cin >> kor;

	cout << "영어 점수를 입력하시오 : ";

	cin >> eng;

	cout << "수학 점수를 입력하시오. : ";

	cin >> math;

	cout <<"총점은" << kor + eng + math << "이고 평균은 " << (kor + eng + math) / 3.0 << "입니다.";
}