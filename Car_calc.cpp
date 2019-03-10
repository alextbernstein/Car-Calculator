#include <iostream>

int main() {

// Declaring Variables

  int wage, sum_hrs, sch_hrs, yrs;
  int perweeksch, perweeksum, permonthsum, permonthsch, total, salary;


  std::cout << R"(
________  ________  ________          ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________
|\   ____\|\   __  \|\   __  \        |\   ____\|\   __  \|\  \     |\   ____\|\  \|\  \|\  \     |\   __  \|\___   ___\\   __  \|\   __  \
\ \  \___|\ \  \|\  \ \  \|\  \       \ \  \___|\ \  \|\  \ \  \    \ \  \___|\ \  \\\  \ \  \    \ \  \|\  \|___ \  \_\ \  \|\  \ \  \|\  \
\ \  \    \ \   __  \ \   _  _\       \ \  \    \ \   __  \ \  \    \ \  \    \ \  \\\  \ \  \    \ \   __  \   \ \  \ \ \  \\\  \ \   _  _\
 \ \  \____\ \  \ \  \ \  \\  \|       \ \  \____\ \  \ \  \ \  \____\ \  \____\ \  \\\  \ \  \____\ \  \ \  \   \ \  \ \ \  \\\  \ \  \\  \|
  \ \_______\ \__\ \__\ \__\\ _\        \ \_______\ \__\ \__\ \_______\ \_______\ \_______\ \_______\ \__\ \__\   \ \__\ \ \_______\ \__\\ _\
   \|_______|\|__|\|__|\|__|\|__|        \|_______|\|__|\|__|\|_______|\|_______|\|_______|\|_______|\|__|\|__|    \|__|  \|_______|\|__|\|__|



  )" << '\n';
  std::cout << "Enter wage: " << '\n';
  std::cin >> wage ;
  std::cout << "Enter hours per week in summer: " << '\n';
  std::cin >> sum_hrs ;
  std::cout << "Enter hours per week during school: " << '\n';
  std::cin >> sch_hrs ;
  std::cout << "Enter years: " << '\n';
  std::cin >> yrs ;

//Logic

  perweeksch = wage * sch_hrs;
  perweeksum = wage * sum_hrs;
  permonthsch = perweeksch * 4.28571428571;
  permonthsum = perweeksum * 4.28571428571;
  salary = ((permonthsch * 10) + (permonthsum * 2))-(((permonthsum * 2) + (permonthsch * 10)*.25));
  total = salary * yrs;

// Output

  std::cout << "Your weekly pay (school) is $" << perweeksch << '\n';
  std::cout << "Your weekly pay (summer) is $" << perweeksum << '\n';
  std::cout << "Your monthly pay (school) is roughly $" << permonthsch << '\n';
  std::cout << "Your monthly pay (Summer) is roughly $" << permonthsum << '\n';
  std::cout << "Your salary is roughly $" << salary << '\n';
  std::cout << "Your total is roughly $" << total << '\n';

  return 0;
}
