
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
void bubblesortArray()
{
    // Procedure to sort the array using bubble sort method
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j <= length - 1 - pass; j++)
        {
            // step 2: compare adjacent elements
            if (element[j] > element[j + 1])
            {
                // step 3: swap if out of order
                int temp;
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }

        pass += 1; // step 4: increment pass counter

        // Display the array after each pass
        cout << "Pass " << pass - 1 << ": "; // Number of pass
        for (int k = 0; k < length; k++)
        {
            cout << element[k] << " "; // Display data for this pass
        }
        cout << endl;

    } while (pass <= length - 1); // step 5: continue until all passes are done
}
void display() 
{
    cout << "\n================================\n";
    cout << "Sorted Array Elements (Asc) : \n";
    cout << "\n================================\n";

    for (int j=0;j<length;j++)
    {
        cout << element[j] << "  ";
    }
    cout << endl;
}
void binarySearch() 
{
    char repeat;

    do
    {
        int low = 0;
        int high = length - 1;
        int mid;
        bool found = false;

        cout << "\n Binary Search  \n";
        cout << "================================\n";
        cout << "Enter the element to search : ";
        cin >> x;

        do {

            mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << " Element  " << x << " found at index " << mid << endl;
                return;
            }

            if (x < element[mid])
            {
                high = mid - 1;
            }

            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
            cout << "\n [x] Eelement " << x << " not found in array.\n";


        cout << "Search again (y/n) : ";
        cin >> repeat;

    
    } while (repeat == 'y' || repeat == 'Y');

}
int main()
{

	input();
    bubblesortArray();

	return 0;
}