//2024.jan.16.
#include <iostream>
using namespace std;

int main()
{
        //Create a variable
        int b = 7;
	int* a = new int(b);

        //a = 7;
        cout << "The value of A variable is: " << *a << '\n';

        //Delete a variable
        delete  a;
        cout << "After deletion is the value of A variable: " << *a << '\n';

return 0;
}
