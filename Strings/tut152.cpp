#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  const char message[]{"The sky is blue"};
  cout << "strlen(message) : " << strlen(message) << endl;
  cout << "sizeof(message) : " << sizeof(message) << endl; // with null character
  cout << "---------------------" << endl;
  const char *message2{"the sky is blue"};
  cout << "strlen(message2) : " << strlen(message2) << endl; // without null character
  cout << "sizeof(message2) : " << sizeof(message2) << endl; // gives the size of the pointer
  cout << "__________________________________" << endl;
  const char *string1{"Albama"};
  const char *string2{"Blbama"};
  cout << "strcmp (" << string1 << " , " << string2 << ") : " << strcmp(string1, string2) << endl;
  cout << "-------------------------------" << endl;
  string1 = "Albama";
  string2 = "Albamb";
  cout << "strcmp (" << string1 << " , " << string2 << ") : " << strcmp(string1, string2) << endl;
  cout << "-------------------------------" << endl;
  string1 = "Alcama";
  string2 = "Albama";
  cout << "strcmp (" << string1 << " , " << string2 << ") : " << strcmp(string1, string2) << endl;
  cout << "-------------------------------" << endl;
  size_t n{3};
  string1 = "Avbama";
  string2 = "Alcamb";
  cout << "strcmp (" << string1 << " , " << string2 << ") : " << strncmp(string1, string2, n) << endl;
  cout << "-------------------------------" << endl;
  const char *str{"the data is stored in the memory of the computer"};
  char target{'t'};
  int count{};
  const char *result = str;
  while ((result = strchr(result, target)) != nullptr)
  {
    cout << "Target : " << target << " == result : " << result << endl;
    result++;
    count++;
  }
  cout << "Number of the target letters in the string is : " << count;
  cout << "-------------------------------" << endl;
  char *output = strrchr(str, 'c');
  if (output)
    cout << output + 1 << endl; //+1 because we want to start printing past the character found

  return 0;
}