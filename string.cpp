#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // C style string
    char name1[] = "mahmoud ";
    char name2[] = "halawa";
    // cout<<name1 +  name2<<endl;
    cout << name1 << name2 << endl;
    // cout<<name1.append( name2)<<endl;
    cout << strcat(name1, name2) << endl;
    cout << "------------------------------\n";
    // class string
    string fname = "mahmoud ";
    string lname = "halawa";
    cout << fname + lname << endl;
    cout << fname << lname << endl;
    cout << fname.append(lname) << endl;
    // cout<<strcat(fname,lname);
}