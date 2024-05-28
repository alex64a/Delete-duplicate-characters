# Delete duplicate characters in a string

## Usage
```make``` the project and run with ```./main```
User enters a string in which duplicate characters
will be removed. Example:
                          -User input: aleksa
                          -Output :    aleks

This solution uses a hash map to store characters
that have already appeared in a given string.
If they are already stored in the hash map,
they won't be added to the final string ans.
Time complexity of this hash map is O(1).
