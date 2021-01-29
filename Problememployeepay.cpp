#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
  int normalHoursWorked;
  int overtimeHoursWorked;
  int totalHoursWorked;
  float normalHoursPay;
  float overtimeHoursPay;
  float totalPay;
  float ssTax;
  float fedIncTax;
  float stateIncTax;
  int medInsurance = 10;
  float netPay;

  // gets total hours worked from user
  cout << "Number of hours worked in a week: " << endl;
  cin >> totalHoursWorked;

  // calculates how many normal hours and overtime hours were worked
  if (totalHoursWorked > 40) {
    normalHoursWorked = 40;
    overtimeHoursWorked = totalHoursWorked - 40;
  }
  else {
    normalHoursWorked = totalHoursWorked;
    overtimeHoursWorked = 0;
  }

  // calculates pay for normal and overtime hours worked
  normalHoursPay = normalHoursWorked * 16.0;
  overtimeHoursPay = overtimeHoursWorked * 16.0 * 1.5;
  totalPay = normalHoursPay + overtimeHoursPay;
  netPay = totalPay;

  // calculates Social Security tax, federal income tax, and state income tax
  // using worker's gross pay
  ssTax = totalPay * 0.06;
  fedIncTax = totalPay * 0.14;
  stateIncTax = totalPay * 0.05;

  // subtracts each tax and medical insurance from worker's gross pay
  netPay -= ssTax;
  netPay -= fedIncTax;
  netPay -= stateIncTax;
  netPay -= medInsurance;

  // prints out worker's gross pay, each tax amount, and net pay for the week
  cout << "Regular Hours Pay: $" << fixed << setprecision(2) << normalHoursPay << endl;
  cout << "Overtime Hours Pay: $" << overtimeHoursPay << endl;
  cout << "Gross Pay: $" << totalPay << endl;
  cout << "Social Security Tax: $" << ssTax << endl;
  cout << "Federal Income Tax: $" << fedIncTax << endl;
  cout << "State Income Tax: $" << stateIncTax << endl;
  cout << "Medical Insurance: $" << medInsurance << endl;
  cout << "Net Take-Home Pay: $" << netPay << endl;

  return 0;
}
