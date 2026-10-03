#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string date, employeeID, employee_name;
    double monthly_salary;
    double late_minutes;

    cout << "Enter Payroll Period: ";
    getline(cin, date);

    cout << "Enter Employee ID: ";
    getline(cin, employeeID);

    cout << "Enter Employee Name: ";
    getline(cin, employee_name);

    cout << "Enter Monthly Salary: ";
    cin >> monthly_salary;

    cout << "Enter Lates and Absences (in minutes): ";
    cin >> late_minutes;

    // Convert minutes to hours
    double late_hours = late_minutes / 60.0;

    // Compute hourly rate
    double hourly_rate = (monthly_salary / 30.0) / 8.0;

    // Compute deduction for lates and absences
    double late_deduction = late_hours * hourly_rate;

    // Fixed deductions
    double philhealth = 1000.00;
    double pagibig = 800.00;
    double sss = 1200.00;

    // Withholding tax
    double tax = monthly_salary * 0.12;

    // Compute total deductions and net pay
    double total_deductions =
        late_deduction + philhealth + pagibig + sss + tax;

    double net_pay = monthly_salary - total_deductions;

    cout << fixed << setprecision(2);

    cout << "\nFEU - Institute of Technology\n\n";

    cout << "Employee ID: " << employeeID
         << "\t\tPayroll Period: " << date << endl;

    cout << "Employee Name: " << employee_name << endl;

    cout << "\nINCOME\t\t\t\tDEDUCTIONS\n";

    cout << "Monthly Salary: Php " << monthly_salary
         << "\t\tLates and Absences: " << late_minutes << " minutes" << endl;

    cout << "\t\t\t\t\tLate Deduction: Php "
         << late_deduction << endl;

    cout << "\t\t\t\t\tPhilHealth: Php "
         << philhealth << endl;

    cout << "\t\t\t\t\tPag-IBIG: Php "
         << pagibig << endl;

    cout << "\t\t\t\t\tSSS: Php "
         << sss << endl;

    cout << "\t\t\t\t\tWithholding Tax: Php "
         << tax << endl;

    cout << "\nTotal Earnings: Php " << monthly_salary << endl;
    cout << "Total Deductions: Php " << total_deductions << endl;
    cout << "Net Pay: Php " << net_pay << endl;

    return 0;
}