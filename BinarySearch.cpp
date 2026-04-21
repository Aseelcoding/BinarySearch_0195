
#include <iostream>
using namespace std;


int element[10];
int length;
int x;
void input() 
{

	while (true)
	{
		
		cout << "number of elements must be between 1 and 10\n\n";

		cout << "Enter the number of elements ? "; cin >> length;
		if (length > 0 && length < 11)
			break;

	}
}
int main()
{

	input();
	
	return 0;
}