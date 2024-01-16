//2024.jan.16.
#include <iostream>
using namespace std;

int f(int& i){
	i += 2;
}

int main()
{
int a = 5;
cout << "Jelenleg a értéke: " << a << "\n";
f(a);
cout << "Függvény meghívása után a értéke: " << a << "\n";
cout << "Please press enter to contuine..." << endl;
return 0;
}
