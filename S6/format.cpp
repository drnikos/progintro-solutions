#include <iostream>  
#include <vector>  
#include <string>  
#include <sstream>  
  
using namespace std;  
  
string justify_line(const vector<string>& words, int line_length) {  
  int num_words = words.size();  
  if (num_words == 1) {  
    return words[0] + string(line_length - words[0].size(), ' ');  
  }  
  
  int total_length = 0;  
  for (const auto& word : words) {  
    total_length += word.length();  
  }  
  
  int total_spaces = line_length - total_length;  
  int min_spaces = total_spaces / (num_words - 1);  
  int extra_spaces = total_spaces % (num_words - 1);  
  
  string result;  
  vector<int> spaces(num_words - 1, min_spaces);  
  
  for (int i = num_words - 2; i >= 0 && extra_spaces > 0; --i) {  
    spaces[i] += 1;  
    extra_spaces--;  
  }  
  
  for (int i = 0; i < num_words - 1; ++i) {  
    result += words[i];  
    result += string(spaces[i], ' ');  
  }  
  result += words.back();  
  
  return result;  
}  
  
int main() {  
  string line;  
  stringstream input_text;  
  
  while (getline(cin, line)) {  
    input_text << line << " ";  
  }  
  
  vector<string> words;  
  string word;  
  while (input_text >> word) {  
    words.push_back(word);  
  }  
  
  int max_width = 60;  
  vector<string> current_line;  
  int current_length = 0;  
  int total_used = 0;  
  
  while (total_used < words.size()) {  
    current_line.clear();  
    current_length = 0;  
  
    while (total_used < words.size() && current_length + words[total_used].length() + current_line.size() <= max_width) {  
      current_line.push_back(words[total_used]);  
      current_length += words[total_used].length();  
      total_used++;  
    }  
  
    if (total_used == words.size()) {  
      string last_line;  
      for (const auto& word : current_line) {  
        last_line += word + " ";  
      }  
      last_line.pop_back();  
      cout << last_line << endl;  
    } else {  
      cout << justify_line(current_line, max_width) << endl;  
    }  
  }  
  
  return 0;  
}
