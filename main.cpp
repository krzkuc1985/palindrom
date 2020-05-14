#include <iostream>

bool isPalindrome(const std::string & text){
  auto itBegin = text.begin();
  auto itEnd = text.end()-1;
for(;itEnd-itBegin>=1;itBegin++,itEnd--){
  if(std::tolower(*itBegin) != std::tolower(*itEnd))
  return false;
}
return true;
}

int main() {
  std::cout << isPalindrome("Neveroddoreven") << std::endl;
  std::cout << isPalindrome("neveroddoreven") << std::endl;
  std::cout << isPalindrome("ala Ala") << std::endl;
  std::cout << isPalindrome("ala") << std::endl;
  std::cout << isPalindrome("bug") << std::endl;
  return 0;
}
