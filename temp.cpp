#include<iostream>
using namespace std;

int main(){
    string bno;
    string bname;
    string aname;
    cout << "\nNEW BOOK ENTRY...\n";


    cout << "\nEnter The book no.";
    cin >> bno;
    cin.ignore();
    cout << "\n\nEnter The Name of The Book ";
    getline(cin, bname);
    

    cout << "\n\nEnter The Author's Name ";
    getline(cin, aname);

    
    
    cout << "\n\n\nBook Created..";
}