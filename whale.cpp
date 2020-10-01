#include <iostream>
#include <vector>
#include <string>

int main()
{
// Whale, whale, whale.
// What have we got here?

//std::string message="turpentine and turtles";
//std::string message="hi, human";
std::string message="a whale of a deal!";
char vowels[]={'a','e','i','o','u'};
std::string result;

for (int i=0;i<=message.length();i++)
{
  for (int j=0;j<5;j++)
  {
    if (message[i]==vowels[j])
    {
      result.push_back(message[i]);
    }
  }
  if ((message[i]=='e')||(message[i]=='u'))
  {
    result.push_back(message[i]);
  }
}

std::cout<<result<<"\n";

return 0;
}