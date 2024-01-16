//2024.jan.12.
//We deleted the value of A variable
#include <iostream>
using namespace std;

int main()
{
	//Create a variable
	int* a = new int(7);

	//a = 7;
	cout << "The value of A variable is: " << *a << '\n';

	//Delete a variable
	delete  a;
	cout << "After deletion is the value of A variable: " << *a << '\n';

return 0;
}
