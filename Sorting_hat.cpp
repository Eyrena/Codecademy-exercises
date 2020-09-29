#include <iostream>

int main()
{
  // The magic starts here

  int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0;

  int answer1, answer2, answer3, answer4;

  std::cout<<"The Sorting Hat Quiz!\n";
  std::cout<<"\n";
  std::cout<<"Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout<<"1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";

  std::cin>>answer1;

  switch (answer1)
  {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        std::cout<<"Invalid input.";
        break;
  }

  std::cout<<"\nQ2) Dawn or Dusk?\n\n1) Dawn\n2) Dusk\n\n";
  std::cin>>answer2;

  switch (answer2)
  {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        hufflepuff++;
        slytherin++;
        break;
    default:
        std::cout<<"Invalid input.";
        break;
  }

  std::cout<<"\nQ3) Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumpet\n3) The piano\n4) The drum\n\n";
  std::cin>>answer3;

  switch (answer3)
  {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        std::cout<<"Invalid input.";
        break;
  }

std::cout<<"\nQ4) Which road tempts you most?\n\n1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";
std::cin>>answer4;

switch(answer4)
{
  case 1:
      hufflepuff++;
      break;
  case 2:
      slytherin++;
      break;
  case 3:
      gryffindor++;
      break;
  case 4:
      ravenclaw++;
      break;
  default:
      std::cout<<"Invalid input.";
      break;
}

int max=0;
std::string house;

if (gryffindor>max)
{
  max=gryffindor;
  house="Gryffindor";
}

if (hufflepuff>max)
{
  max=hufflepuff;
  house="Hufflepuff";
}

if (ravenclaw>max)
{
  max=ravenclaw;
  house="Ravenclaw";
}

if (slytherin>max)
{
  max=slytherin;
  house="Slytherin";
}

std::cout<<house<<"!\n";

  return 0;
}