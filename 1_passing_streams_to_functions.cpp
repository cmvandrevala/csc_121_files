#include <iostream>
#include <fstream>

using namespace std;

inline void create_grocery_list(ofstream &file, string grocery_items[])
{
  file << "This is my grocery list!" << endl;

  if (file.is_open())
  {
    for (int i = 0; i < 5; i++)
    {
      file << grocery_items[i] << endl;
    }
  }
  else
  {
    cout << "Sorry, the file could not be openend." << endl;
  }
}

inline void close_file(ofstream &file)
{
  file.close();
  file.clear();
}

int main()
{
  ofstream f;
  f.open("grocery_list.txt");

  string grocery_list[] = {"Eggs",
                           "Milk",
                           "Bacon",
                           "Spinach",
                           "Ice Cream"};

  create_grocery_list(f, grocery_list);
  close_file(f);

  return 0;
}
