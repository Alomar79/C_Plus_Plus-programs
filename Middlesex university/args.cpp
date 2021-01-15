#include<iostream>

int main(int argc, char *argv[])
{
  
  std::cout << "Program name: " << argv[0] << "\n";
  std::cout << "called with " << argc -1 << " arguments: ";
  for(int i=1 ; i < argc ; i++)
    {
      std::cout<< "'" << argv[i]<< "' ";
    }
  std::cout << "\n";
}
