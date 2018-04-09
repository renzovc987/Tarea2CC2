#include <iostream>

using namespace std;
//2.5
int main()
{
    int size ;
	cin >> size ;
	int * nums = new int[ size ];
	for(int i = 0; i < size ; ++i)
	{
		cin >> nums [i];
	}
//El error esta en el delete, debería ser delete[];
	delete nums ;
}
