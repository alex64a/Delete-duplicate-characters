//-----------------------------------------------------------
//         Delete duplicate characters in a string
//-----------------------------------------------------------
// User enters a string in which duplicate characters will be
// removed. Example:
//                 - User input: aleksa
//                 - Output :    aleks
//
// This solution uses a hash map to store characters that have
// already appeared in a given string. If they are already in
// the hash map, they won't be added to the final string "ans"
// Time complexity of this hash map is O(1).

#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

string deleteDuplicates(string s) {
  unordered_map<char, int> umap;
  string ans = "";
  for (size_t i = 0; i < s.length(); i++) {
    if (umap.find(s[i]) == umap.end()) {
      ans.push_back(s[i]);
      umap[s[i]]++;
    }
  }
  return ans;
}
int main() {

  string input;
  int choice;
  while (true) {
    cout << "Choose one of the following : " << endl << endl;
    cout << "1. Enter a string" << endl;
    cout << "2. Exit program" << endl << endl;
    cin >> choice;
    cout << endl;

    switch (choice) {

    case (1):
      cout
          << "Enter a string in which you wish to remove duplicate characters: "
          << endl
          << endl;
      cin.ignore(); // ignore the newline character left in the buffer
      getline(cin, input);
      cout << endl;
      cout << "Input: " << input << endl;
      cout << "Output: " << deleteDuplicates(input) << endl << endl;
      break;
    case (2):

      return 0;

    default:
      cout << "Invalid choice, please enter 1 or 2" << endl << endl;
    }
  }
}
