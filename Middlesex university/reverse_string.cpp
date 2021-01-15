#include <iostream>
#include <cstring>

void reverse(char s[])
{
  char aux;
  int i;
  for (i = 0; i < strlen(s)/2; i++)
    {
      aux = s[i];
      s[i] = s[strlen(s)-i-1];
      s[strlen(s)-i-1] = aux;
    }
}
int main()
{
  char s[] = "Harry";
  reverse(s);
  std::cout << s << "\n";
}