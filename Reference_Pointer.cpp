#include <iostream>
using namespace std;


// 참조
void swap(int& a, int& b)
{
	int temp = a;  // temp 임시 저장소 : 기존 값 보관
	a = b;
	b = temp;
}

/* 포인터
void swap(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
*/

int main()
{
	int num1 = 1;
	int num2 = 500;

	swap(num1, num2);   // 참조 -> 변수 이름만
	
	// swap(&num1, &num2);  포인터 -> 주소값 전달

	cout << "num1: " << num1 << ", num2: " << num2 << endl;

	return 0;
}