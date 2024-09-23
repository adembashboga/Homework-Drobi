#include <iostream>
using namespace std;

class Drob
{
private:
    int x;
    int y;
public:
    void Print()
    {
        cout << "Numerator: " << x << "\tDenumerator: " << y << endl;
    }
    void Input(int a, int b)
    {
        x = a;
        y = b;
    }
    void Input()
    {
        x = rand() % 20;
        y = rand() % 20;
    }
};
int main()
{
    srand(time(0));
    Drob a;
    a.Input(1, 2);
    a.Print();

    Drob b;
    b.Input();
    b.Print();
}