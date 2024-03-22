#include <iostream>
int
main()
{
  setlocale(LC_ALL, "RU");
  std::cout << "введите свое имя: " << std::endl;
  std::string name;
  std::cin >> name;
  std::cout << "hello world," << name << "!" << std::endl;
  return 0;
}
