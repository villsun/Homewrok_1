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


int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	int* p = Create_Array(10);
	Fill_Random_Number(p, 10);
	Show(p, 10);
	Delete_Array(p);

	return 0;
}