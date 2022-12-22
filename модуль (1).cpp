#include <iostream>
#include <Windows.h>
#include <cmath>
#include <utility>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include <numeric>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Розрахунок суми(Початок)//
	void suma(); 
	{
		int arr[] = { 5, 3, 7, 9, 2 };
		int sum = accumulate(begin(arr), end(arr), 0, plus<int>());
		cout << "Сума елементів масива -" << sum << endl;
	}
	//Розрахунок суми(Кінець)//

	//Розрахунок добутка(Початок)//
	int i, n;
	double a[1000], S;
	cout << "Добуток елементiв масиву\n";
	cout << "Kiлькiсть чисел (<1000) = ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) {

		cout << i << "-е число:  ";

		cin >> a[i];

	}
	S = 1;
	for (int i = 1; i < n + 1; i++) { S = S * a[i]; }
	cout << "\nДобуток елементiв = " << S << std::endl;
	//Розрахунок добутка(Кінець)//

	//Впорядкування за спаданням(Початок)//
	const int length = 5;
	int array[length] = { 0,2,1,5,3 };
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[smallestIndex])
				smallestIndex = currentIndex;
		}
		swap(array[startIndex], array[smallestIndex]);
	}
	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';
	//Впорядкування за спаданням(Кінець)//
	}

