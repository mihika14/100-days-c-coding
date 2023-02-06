// We call a number a winter number in two cases:if it's a palindrome (reads the same backward or forward)is divisible by all of its digitsFor ex. 
// 505 and 1331 are winter numbers. They are both palindromes.
// 12 is a winter number because it's divided by both 1 and 2.
// *notice that a non-palindromic number containing zero cannot be winter number because division with zero is not allowed*\
// In the first line you're given a number N. In the next row N you're given N natural numbers. For every number output if it's a winter number. Output "YES" if it's a winter number, and "NO", otherwise.


#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string str) {
  int left = 0;
  int right = str.length() - 1;
  while (left < right) {
    if (str[left] != str[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

bool is_divisible(int num) {
  int temp = num;
  while (temp > 0) {
    int digit = temp % 10;
    if (digit == 0 || num % digit != 0) {
      return false;
    }
    temp /= 10;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    int num;
    cin >> num;
    string str = to_string(num);
    if (is_palindrome(str) && is_divisible(num)) {
      cout << "YES"<<" ";
    } else {
      cout << "NO"<<" ";
    }
  }
  return 0;
}