#include <iostream>

using namespace std;

int* Create_Array(int size)
{
	int* p_temp = new int[size];
	return p_temp;
}

void Delete_Array(int* p)
{
	delete[] p;
}


int main()
{


	return 0;
}