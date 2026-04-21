
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


	cout << "\n================================\n";
	cout << "Enter Array Elements : \n";
	cout << "\n================================\n";

	for (int i = 0; i < length; i++) 
	{

		cout << "Index : " << i + 1 << endl;
		cin >> element[i];

	}
}
int main()
{

	input();
	
	return 0;
}