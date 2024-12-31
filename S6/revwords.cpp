#include <iostream>  
#include <string>  
using namespace std;  
  
const int RANDOM_MAX = 100;  
  
int main() {  
  string words[RANDOM_MAX][RANDOM_MAX];  
  int max_words_per_line[RANDOM_MAX];  
  char c = getchar();  
  int line = 0, word_index = 0;  
  string current_word ;  
  while (int(c) != EOF) {  
    if (c == '\n')  
    {  
      if (!current_word.empty())  
      {  
        words[line][word_index] = current_word;  
        max_words_per_line[line] = word_index;  
      }  
      line++;  
      word_index = 0;  
      current_word = "";  
  
    }  
    else if(c == ' ') {  
      if (!current_word.empty())  
      {  
        words[line][word_index] = current_word;  
        word_index++;  
        current_word = "";  
      }  
    }  
    else current_word+= c;  
    c = getchar();  
  }  
  for (int i = 0; i < line; i++) {  
    for (int j = max_words_per_line[i]; j >= 0; j--)  
    {  
      if (j == 0) cout << words[i][j];  
      else cout << words[i][j] << " ";  
    }  
    cout << endl;  
  }  
} 
