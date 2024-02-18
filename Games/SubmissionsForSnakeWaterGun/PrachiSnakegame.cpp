#include <iostream>
#include <time.h>
using namespace std;

// Done ✅
int snakeWaterGun(char you, char comp)
{
  if (you == comp)
    return 0;

  if (you == 's' && comp == 'g')
    return -1;
  else if (you == 'g' && comp == 's')
    return 1;

  if (you == 's' && comp == 'w')
    return 1;
  else if (you == 'w' && comp == 's')
    return -1;

  if (you == 'g' && comp == 'w')
    return -1;
  else if (you == 'w' && comp == 'g')
    return 1;

  return 0;
}
int main()
{
  char you, comp;
  srand(time(0));
  int number = rand() % 100 + 1;

  if (number < 33)
    comp = 's';
  else if (number > 33 && number < 66)
    comp = 'w';
  else
    comp = 'g';

  cout << "Enter 's' for snake , 'w' for water and 'g' for gun" << endl;
  cin >> you;
  int result = snakeWaterGun(you, comp);

  cout << "You choose " << you << " and computer choose " << comp << endl;
  if (result == 0)
    cout << "Game draw !" << endl;

  else if (result == 1)
    cout << "You win !" << endl;
  else
    cout << "You lose !" << endl;

  return 0;
}