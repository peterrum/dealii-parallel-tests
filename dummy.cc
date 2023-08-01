#include <iostream>
#include <unistd.h>


int main()
{
  std::cout << "Started" << std::endl;
  sleep(10);
  std::cout << "Finished" << std::endl;
}
