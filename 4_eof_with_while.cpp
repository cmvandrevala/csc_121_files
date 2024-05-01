#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  double num;

  ifstream input_file;

  input_file.open("data/numbers.txt");

  while (!input_file.eof())
  {
    input_file >> num;
    cout << num << endl;
  }

  input_file.close();

  return 0;
}
