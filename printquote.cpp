#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cout << "Enter a quote: ";
    getline(cin, input); //Läser in raden från användaren
    cout << "You entered: " << input << endl;

    cout << "Press enter to exit..";
    cin.get(); // Väntar på enter
    return 0;
}