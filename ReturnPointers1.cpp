#include <iostream>
using namespace std;

string * getAddress();
int main()
{
    string  *address = nullptr;
    address = getAddress();
    cout << "\nThe address is: " << endl;
    for ( int i =0; i < 2; i++)
    {
        cout << address[i] << endl;
    }
}
//pass by value
// this will  not work as the value addr will be gone as soon as the function is done
string * getAddress()
{
    string addr[2] ;
    cout << " Enter Address1: ";
    getline(cin, addr[0]);
    cout << " Enter Address2: ";
    getline(cin, addr[1]);
    cout << "\nThe address  inside function is: " << endl;
    for ( int i =0; i < 2; i++)
    {
        cout << addr[i] << endl;
    }
    return addr;
}

/*
 Enter Address1: Mint Street
 Enter Address2: Richardson Texas
 */
