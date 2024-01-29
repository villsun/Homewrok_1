#include <iostream>
#include <iostream>

using namespace std;

int* Create_Array(int size)
{
	int* p_temp = new int[size];
	return p_temp;
}

void Fill_Random_Number(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		p[i] = rand() % 11;
	}
}

void Show(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< p[i]<< ' ';
	}
	cout << endl;
}

void Delete_Array(int* p)
{
	delete[] p;
}

int Min_Index(int* p, int size)
{
	int min = p[0];
	int min_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (p[i] < min)
		{
			min = p[i];
			min_index = i;
		}
	}

	return min_index;
}


int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	const int SIZE = 10;

	int* p = Create_Array(SIZE);
	Fill_Random_Number(p, SIZE);
	Show(p, SIZE);
	
	int min_index = Min_Index(p, SIZE);

	cout << "Min Index = " << min_index << endl;

	Delete_Array(p);

	return 0;
}