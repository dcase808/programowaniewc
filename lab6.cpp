#include <iostream>

//zadanie nr 2 z instrukcji laboratoryjnej nr 6

using namespace std;

class figura
{
public:
    virtual void pole(float a, float b)
    {
        cout << "nie zdefiniowana klasa figury\n";
    }
};

class prostokat : public figura
{
public:
    void pole(float a, float b)
    {
        cout << "pole prostokata to " << a*b << endl;
    }
};
class kwadrat : public figura
{
public:
    void pole(float a, float b)
    {
        cout << "pole kwadratu o boku a to " << a*a << endl;
    }
};

class kolo : public figura
{
public:
    void pole(float a, float b)
    {
        cout << "pole kola o obwodzie a to " << a*a*3.14 << endl;
    }
};


int main()
{
    figura **tablica = new figura*[4];
    tablica[0] = new prostokat();
    tablica[1] = new kwadrat();
    tablica[2] = new kolo();
    tablica[3] = new figura();
    float a, b;
    cout << "podaj a";
    cin >> a;
    cout << "podaj b";
    cin >> b;
    for (int i = 0; i<4; i++) {
        tablica[i]->pole(a, b);
        delete tablica[i];
    }
    delete tablica;
    return 0;
}
