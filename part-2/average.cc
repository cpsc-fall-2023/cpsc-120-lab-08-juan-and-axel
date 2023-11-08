// Axel Del Rio
// axeld@csu.fullerton.edu
// @AxelD2005
// Partners:@Manny-m1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};
  double average{0.0};
  double mean{0.0};
  bool first{true};
  for (std::string const& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double number{std::stod(argument)};
      sum = sum + number;
      mean = mean + 1.0;
    }
  }
  average = sum / mean;
  std::cout << "average = " << average << "\n";
  return 0;
}