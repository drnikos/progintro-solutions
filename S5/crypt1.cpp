#include <iostream>  
  
using namespace std;  
int main()  
{  
  const int maxlen = 10000;  
  char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  
  char caps[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};  
  char encrypted_abc[27];  
  for (int  i = 0; i < 26; i++)  
  {  
    encrypted_abc[i] = getchar();  
    if (encrypted_abc[i] == '\n')  
    {  
      cout << "error" << endl;  
      exit(0);  
    }  
  }  
  encrypted_abc[27] = getchar();  
  if (encrypted_abc[27] != '\n'){  
    cout << "error" << endl;  
    exit(0);  
  }  
  if (encrypted_abc[27] != '\n')  
    cin.ignore();  
  char included[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  
  for (int i = 0; i < 26; i++)  
  {  
    bool found = false;  
    for (int j = 0; j < 26; j++)  
    {  
      if (encrypted_abc[i] == included[j])  
      {  
        included[j] = '\n';  
        found = true;  
      }  
    }  
    if (!found)  
    {  
      cout << "error" << endl;  
      exit(0);  
    }  
  }  
  while (true)  
  {  
    char input_word[maxlen];  
    cin.getline(input_word, maxlen);  
    if (cin.eof()) {  
      break;  // Stop if we hit the end of input  
    }  
    for (int i = 0; i < maxlen; i++)  
    {  
  
      if (input_word[i] == '\0') break;  
      for (int j = 0; j < 26; j++)  
      {  
        if (input_word[i] == abc[j])  
        {  
          input_word[i] = encrypted_abc[j];  
          break;  
        }  
        else if (input_word[i] == caps[j])  
        {  
          input_word[i] = toupper(encrypted_abc[j]);  
          break;  
        }  
      }  
    }  
    cout << input_word << endl;  
  }  
}
