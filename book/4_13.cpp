#include <iostream>
#include <string>
using namespace std;

class Histogram {
    string PL;
    int alpha;
public:
    Histogram(string a) { this->PL = a; }
    void put(string b) { PL.append(b); }
    void putc(char c) { PL += c; }
    void print();
};
void Histogram::print()
{
    alpha = 0;
    for(int i = 0 ; i < PL.length() ; i++)
    if(isalpha(PL[i]))
    alpha++;
    
    cout << PL << endl << endl << "총 알파벳 수 " << alpha << endl << endl;


}

int main()
{
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("elvis Presley");
    elvisHisto.print();
}