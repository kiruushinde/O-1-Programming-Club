#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Done ✅
int snakeWaterGun(char you, char computer)
{
	/*return 1 = You are win
	  return -1 = you are lose
	  return 0 = draw

	  there are two types condition
	  draw type and non draw

	  draw condition (s = snake, w = water, g = gun)
	  ss,ww,gg
	*/

	if (you == computer)
	{
		return 0;
	}

	/*  non-draw condition
	  sw,sg,ws,wg,gs,gw
	*/

	if (you == 's' && computer == 'g')
	{
		return -1;
	}
	else if (you == 'g' && computer == 's')
	{
		return 1;
	}
	if (you == 's' && computer == 'w')
	{
		return 1;
	}
	else if (you == 'w' && computer == 's')
	{
		return -1;
	}
	if (you == 'g' && computer == 'w')
	{
		return -1;
	}
	else if (you == 'w' && computer == 'g')
	{
		return 1;
	}
}

int main()
{
	char you, computer;
	srand(time(0));
	int number = rand() % 100 + 1;

	if (number < 33)
	{
		computer = 's';
	}
	else if (number > 33 && number < 66)
	{
		computer = 'w';
	}
	else
	{
		computer = 'g';
	}
	cout << "Enter 's' for snake, 'w' for water, and 'g' for gun " << endl;
	cin >> you;
	int result = snakeWaterGun(you, computer);

	if (result == 0)
	{
		cout << "Game Draw..." << endl;
	}
	else if (result == 1)
	{
		cout << "You are Win...." << endl;
	}
	else
	{
		cout << "You are Lose......." << endl;
	}
	cout << "you Choose " << you << " & Computer Choose " << computer;
	return 0;
}