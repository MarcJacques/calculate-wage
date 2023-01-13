#include <iostream>
using namespace std;
int main() 
{
  double rate = 7.5;
  double hours = 10;
  double wage = hours * rate;

  cout << wage << endl;
  cout << "You made $" << wage << " this week." << endl; 
}