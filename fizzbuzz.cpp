#include <iostream>

void fizzbuzz(int n){
  if(n % 15 == 0) std::cout << "FizzBuzz" << '\n';
  else if(n % 7 == 0) std::cout << "GitHub" << '\n';
  else if(n % 5 == 0) std::cout << "Buzz" << '\n';
  else if(n % 3 == 0) std::cout << "Fizz" << '\n';
  else std::cout << n << '\n';
}

int main(){
  const int N = 20;

  for(int i=0;i<N;i++){
    fizzbuzz(i);
  }

  return 0;
}
