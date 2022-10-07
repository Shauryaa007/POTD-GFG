class Solution {
  public:
    string lexicographicallySmallest(string s, int k) {
  int n = s.length();
  if (n & (n - 1)) {
    k *= 2;
  } else {
    k /= 2;
  }

  if (k >= n)
    return "-1";

  string str;
  for (int i = 0; i < n; i++) {
    while (k > 0 && !str.empty() && str[str.length() - 1] > s[i]) {
      str.pop_back();
      k--;
    }
    str += s[i];
  }

  while (k > 0 && !str.empty()) {
    str.pop_back();
    k--;
  }

  return str;
}
};