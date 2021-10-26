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
    {
        if(isalpha(PL[i]))
        {
            PL[i] = tolower(PL[i]);
            alpha++;
        }
    }
    int cnt = 0;
    cout << PL << endl << endl << "총 알파벳 수 " << alpha << endl << endl;
    for(int i = 0 ; i < 26 ; i++)
    {
        for(int k = 0 ; k < PL.length() ; k++)
        {
            if((char)PL[k] == (char)(97 + i))
            cnt++;
        }
        cout << (unsigned char)(97 + i) << " (" << cnt << ")      :  ";
        for(int i = 0 ; i < cnt ; i++)
        cout << "*";
        cout << endl;
        
        cnt = 0;
    }

}

int main()
{
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("elvis Presley");
    elvisHisto.print();
}