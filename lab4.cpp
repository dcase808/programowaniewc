#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// zadanie nr 2 z instrukcji laboratoryjnej nr 4

void readLineByLine(string filename);

int main()
{
    string filename;
    cout << "enter filename";
    cin >> filename;
    readLineByLine(filename);
    return 0;
}

void readLineByLine(string filename)
{
    fstream file;
    file.open(filename);
    if(!file.is_open())
    {
        cout << "error opening file";
        return;
    }
    string line;
    while(getline(file, line)){
        cout << line << "\n";
    }
    file.close();
    return;
}
