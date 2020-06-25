#include <iostream>

//zadania nr 1 oraz 2 z instrukcji laboratoryjnej nr 5

using namespace std;

class roslina{
    public:
        void fotosyntezuj()
        {
            cout << "fotosynteza przeprowadzona\n";
        }
    private:
        void wyswietlIloscGatunkow()
        {
            cout << 500000;
            return;
        }
    protected:
        void woda()
        {
            cout << "Pobrano wode";
            return;
        }
};

class drzewo : public roslina
{
    public:
        void zrzucLiscie()
        {
            cout << "zrzucono liscie\n";
        }
        void pobierzWode()
        {
            woda();
        }
};

int main() {
    drzewo dab;
    dab.fotosyntezuj();
    dab.zrzucLiscie();
    //dab.wyswietlIloscGatunkow(); - nie moze zostac przeprowadzone, w dziedziczonej klasie funkcje ta chroni operator private
    //dab.woda(); - nie moze zostac przeprowadzone, w dziedziczonej klasie funkcje ta chroni operator protected, moze zostac za to wywolana przez funkcja dab.pobierzWode();
    dab.pobierzWode();
    return 0;
}
