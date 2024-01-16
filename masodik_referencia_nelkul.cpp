//2024.jan.16.
//This is a function without reference
#include <iostream>
using namespace std;

int f(int i){
return i+2;
}

int main()
{
	int a = 5;
	cout << "Jelenleg a értéke: " << a << "\n";

	f(a);
	cout << "Függvényhívás után a értéke: " << a << endl;

return 0;
}
