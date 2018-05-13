#include <iostream>
#include <string>

int
main()
{
  const std::string welcome = R"(Hello,
world!)";
  std::cout << welcome << std::endl;
  std::clog << welcome << " (this time to std::clog)" << std::endl;
  return EXIT_SUCCESS;
}
