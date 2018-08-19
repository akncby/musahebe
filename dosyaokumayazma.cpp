#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

// int argc, char const *argv[]

int main()
{
    
    // ------------------------
    // -------- YAZMA ---------
    // ------------------------

    ofstream yazmaDosyasi;
    yazmaDosyasi.open("dosya1.txt");
    
    yazmaDosyasi << "yaz yaz yaz ...1111111111111 11" << endl;
    yazmaDosyasi << "bir kenara yazz..";

    yazmaDosyasi.close();

    // ofstream yazmaDosyasi2("dosya2.txt");
    // yazmaDosyasi2 << "yansın istanbul" << endl;
    // yazmaDosyasi2.close();
    
    ofstream yazmaDosyasi3("deneme \\ dosya3.txt");
    yazmaDosyasi3 << "külleri kaybolsun.." << endl;
    yazmaDosyasi3.close();

    // --------------------------------------------

    // --------------------------------------------
    // ---------- OKUMA ---------------------------
    // --------------------------------------------

    ifstream okumaDosyasi;
    okumaDosyasi.open("dosya1.txt");
    string satir;

    while ( getline(okumaDosyasi, satir) )
    {
        cout << satir <<endl;
    }
    okumaDosyasi.close();

    string kelime;    
    ifstream okumaDosyasi2;
    okumaDosyasi2.open("dosya2.txt");
    
    while( okumaDosyasi2 >> kelime )
    {
        cout << kelime << endl;
    }


    okumaDosyasi2.close();


    return 0;
}
