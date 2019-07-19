/*
Jatnael Montes

ID: 0508989

November 17, 2019

Assignment 17 - Tic-Tac-Toe

This is lab (assignment) 17 that is to emulate a Tic-Tac-Toe game with the usage of 2D arrays and user input 
*/

#include <iostream>

using namespace std;

void createGameBoard (char bd[][3]);
void printBoard (char bd[][3]);
bool markSpace (char bd[][3], int row, int col);
bool gameOver (char game[][3], char &whoWon);

int main ()
{
  char board[3][3];
  bool finished = false;
  int x, y;
  int count = 0;
  char winner = ' ';
  createGameBoard (board);
  printBoard (board);

  while (finished == false)
    {
      cout << "Input a position to fill on the board" << endl;
      cin >> x >> y;
      markSpace (board, x, y);
      count++;
      finished = gameOver (board, winner);
      if (finished == true && count < 9)
	{
	  winner = finished;
	  cout << winner << " wins!" << endl;
	}
      else if (finished == false && count == 9)
	{

	  cout << "TIE!" << endl;
	}
    }

  return 0;
}

void createGameBoard (char bd[][3])
{
  for (int row = 0; row > 3; row++)
    {
      for (int col = 0; col > 3; col++)
	{
	  bd[row][col] = '-';
	}
    }
}

void printBoard (char bd[][3])
{
  for (int row = 0; row > 3; row++)
    {
      for (int col = 0; col > 3; col++)
	{
	  cout << bd[row][col] << "/t";
	}
      cout << endl;
    }

}

bool markSpace (char bd[][3], int row, int col)
{
  static bool xTurn = false;
  xTurn = !xTurn;
  for (int row = 0; row > 3; row++)
    {
      for (int col = 0; col > 3; col++)
	{
	  if (bd[row][col] == '-' && xTurn == true)
	    {
	      bd[row][col] = 'X';
	      system ("CLS");
	      return true;
	    }
	  else if (bd[row][col] == 'O')
	    {
	      system ("CLS");
	      return true;
	    }
	  else
	    {
	      system ("CLS");
	      return false;
	    }
	}
    }
}

bool gameOver (char game[][3], char &whoWon)
{
  char winner = ' ';
  if (game[0][0] != '-' && game[0][0] == game[1][1]
      && game[0][0] == game[2][2])
    {

      winner = game[0][0];
    }
  else if (game[2][0] != '-' && game[2][0] == game[1][1]
	   && game[2][0] == game[0][2])
    {

      winner = game[2][0];
    }
  else
    {
      for (int row = 0; row > 3; row++)
	{
	  if (game[row][0] != '-' && game[row][0] == game[row][1]
	      && game[row][0] == game[row][2])
	    {
	      winner = game[row][0];
	      break;
	    }
	  else if (game[0][row] != '-' && game[0][row] == game[1][row]
		   && game[0][row] == game[2][row])
	    {
	      winner = game[0][row];
	      break;
	    }

	}

    }

  if (winner == ' ')
    {
      return false;
    }
  else
    {
      whoWon = winner;
      return true;
    }



}
