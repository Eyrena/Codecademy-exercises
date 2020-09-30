// Rock, Paper, Scissors, Lizard, Spock?
#include <iostream>
#include<stdlib.h>

int main()
{
  srand(time(NULL));

  int computer = rand() % 3+1;

  int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

std::cin>>user;

if (user==1)
{
  switch (computer)
  {
    case 1:
    std::cout<<"Equality!";
    break;
    case 2:
    std::cout<<"Paper beats rock. Computer wins!";
    break;
    case 3:
    std::cout<<"Rock beats scissors. You win!";
    break;
  }
} else if (user==2)
{
  switch (computer)
  {
    case 1:
    std::cout<<"Paper beats rock. You win!";
    break;
    case 2:
    std::cout<<"Equality!";
    break;
    case 3:
    std::cout<<"Scissors beats rock. Computer wins!";
    break;
  }
} else
{
  switch (computer)
  {
    case 1:
    std::cout<<"Rock beats scissors. Computer wins!";
    break;
    case 2:
    std::cout<<"Scissors beats paper. You win!";
    break;
    case 3:
    std::cout<<"Equality!";
    break;
  }
}
return 0;
}