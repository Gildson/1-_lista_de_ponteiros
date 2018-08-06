#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //mostrando os valores das variaveis.
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}
