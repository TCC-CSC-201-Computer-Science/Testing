#include<iostream>
// #include<string>

using namespace std;

int main()
{
  string string1 = "miniscule";
  string string2 = "minimum";
  // string string3 = "miniature";
  string string3 = "MINIATURE";

  cout << (string1 > string2) << endl;
  cout << (string1 > string2 && string2 > string3) << endl;
  cout << (string1.substr(0, 4) == string2.substr(0,4)) << endl;
  cout << (string1 > "maximum") << endl;
  cout << (string3.substr(0, 4) == "mini" || string1 == string2) << endl;
  cout << (string3.length() > string1.length() && string1 > string3) << endl;
  cout << (!((string1.substr(8, 1) == string3.substr(8, 1)) && string1.length() == 9)) << endl;

  // Hello world!!
  // Yet again.
  // more self abuse
  return 0;
}
