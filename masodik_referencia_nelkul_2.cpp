//2024.jan.16.
//This is a function without reference
#include <iostream>
using namespace std;

int f(int i){
cout << "Függvény futás alatti a érték: " <<  i+2 << '\n';;
return 0;
}

int main()
{
        int a = 5;
        cout << "Jelenleg az A értéke: " << a << "\n";

        f(a);
        cout << "Függvényhívás után az A értéke: " << a << endl;

return 0;
}
