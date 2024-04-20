#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include "GuessGameMod3API.h"

using namespace std;

int main()
{
	GuessGameMod3API game;
	game.InitializeGame();
	game.PlayGame();
}