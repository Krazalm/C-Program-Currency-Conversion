#include <iostream>
using namespace std;

int main() {
    double peso, dollar, euro, yuan, koruna, krone, sheqel, dinar;

    cout << "Enter Philippine peso: ";
    cin >> peso;

    dollar = peso / 43.33089;
    euro = peso / 58.03247;
    yuan = peso / 6.81250;
    koruna = peso / 1.88051;
    krone = peso / 7.96510;
    sheqel = peso / 11.01960;
    dinar = peso / 141.732;

    cout << "The amount's equivalent to:" << endl;
    cout << "US Dollar is: " << dollar << endl;
    cout << "Euro is: " << euro << endl;
    cout << "Yuan is: " << yuan << endl;
    cout << "Koruna is: " << koruna << endl;
    cout << "Krone is: " << krone << endl;
    cout << "Sheqel is: " << sheqel << endl;
    cout << "Dinar is: " << dinar << endl;

    return 0;
}
