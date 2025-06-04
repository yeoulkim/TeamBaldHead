#include <iostream>

using namespace std;

//합계함수
int getsum(int arr[], int size) 
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
	}
	
	return sum;

}



//평균
double getaverage(int arr[], int size)
{
	int sum = getsum(arr, size);
	return static_cast<double>(sum) / size;
}


int main() {
	const int size = 5;
	int numbers[size];

	cout << "숫자 5개를 입력하세요: ";
	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}

	int total = getsum(numbers, size);
	double average = getaverage(numbers, size);

	cout << "합계: " << total << endl;
	cout << "평균: " << average << endl;

	return 0;

}