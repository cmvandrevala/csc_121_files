#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  ifstream input_stream("data/data.txt");

  char c;
  while (input_stream.get(c))
  {
    cout << c;
  }

  if (input_stream.eof())
  {
    cout << "End of file reached" << endl;
  }
  else
  {
    cout << "Error reading the file" << endl;
  }

  input_stream.close();

  return 0;
}
