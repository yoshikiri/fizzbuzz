#include <iostream>

int main(){
  const int N = 20;

  for(int i=0;i<N;i++){
    if(i % 15 == 0) std::cout << "FizzBuzz" << '\n';
    else if(i % 7 == 0) std::cout << "GitHub" << '\n';
    else if(i % 5 == 0) std::cout << "Buzz" << '\n';
    else if(i % 3 == 0) std::cout << "Fizz" << '\n';
    else std::cout << i << '\n';
  }

  return 0;
}
