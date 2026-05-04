#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string website, string domain, bool www_conatin = true)
{
  cout << protocol << "://";
  if (www_conatin == true)
  {
    cout << "www.";
  }
  cout << website << "." << domain;
  return "";
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
  return 0;
}