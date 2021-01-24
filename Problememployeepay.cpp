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

  cout << "Number of hours worked in a week: " << endl;
  cin >> totalHoursWorked;

  if (totalHoursWorked > 40) {
    normalHoursWorked = 40;
    overtimeHoursWorked = totalHoursWorked - 40;
  }
  else {
    normalHoursWorked = totalHoursWorked;
    overtimeHoursWorked = 0;
  }

  normalHoursPay = normalHoursWorked * 16.0;
  overtimeHoursPay = overtimeHoursWorked * 16.0 * 1.5;
  totalPay = normalHoursPay + overtimeHoursPay;
  netPay = totalPay;

  ssTax = totalPay * 0.06;
  fedIncTax = totalPay * 0.14;
  stateIncTax = totalPay * 0.05;

  netPay -= ssTax;
  netPay -= fedIncTax;
  netPay -= stateIncTax;
  netPay -= medInsurance;

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
