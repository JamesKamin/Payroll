#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long int emp_id;
          
          double gross_pay = 0,
          state_tax = 0,
          fed_tax = 0,
          fica = 0,
          total_gross_pay = 0,
          total_state_tax = 0,
          total_fed_tax = 0,
          total_fica = 0,
          net_pay = 0,
          sum = 0;
    

while(true)
{
    cout << "Enter the Employee Number or Enter 0 to quit: ";
    cin >> emp_id;
    if (emp_id == 0)
        break;
    
    else if (emp_id < 0)
    {
        cout << "Employee Numbers cannot be negative numbers\n"
             << "Enter a number > 0 \n"
             << "Exit and run the program again."
             << endl;
        return 0;
    }
    else
    {
     while(true)
     {
        cout << "Enter gross pay: ";
        cin >> gross_pay;
    
        if (gross_pay < 0)
        {
          cout << "Gross Pay cannot be a negative number\n"
          << "Enter a number > 0 \n"
          << "Enter the data again."
          << endl;
            gross_pay = 0;
            break;
        }

        total_gross_pay += gross_pay;

       cout << "Enter the state tax (%): ";
       cin >> state_tax;
    
       if (state_tax < 0)
       {
         cout << "State Tax cannot be a negative number\n"
           << "Enter a number > 0 \n"
           << "Exit the program and try again\n"
           << endl;
           return 0;
       }

        total_state_tax += (gross_pay * (state_tax / 100));

        cout << "Enter federal tax (%): ";
        cin >> fed_tax;
        
        if (fed_tax < 0)
        {
          cout << "Federal Tax cannot be a negative number\n"
          << "Enter a number > 0 \n"
          << "Enter a number > 0 \n"
          << "Exit the program and try again\n"
          << endl;
          return 0;
        }

            total_fed_tax += (gross_pay * (fed_tax / 100));


          cout << "Enter FICA withholdings: ";
          cin >> fica;
         
          if (fica < 0)
          {
             cout << "FICA Withholdings cannot be a negative number\n"
             << "Enter a number > 0 \n"
             << "Enter a number > 0 \n"
             << "Exit the program and try again\n"
             << endl;
             return 0;
          }

        
           total_fica += fica;

           sum = (gross_pay * (state_tax / 100))   +
                    (gross_pay * (fed_tax / 100)) +
                    fica;

          if (sum > gross_pay)
          {
            
            cout << "The sum of state tax, "
                 << "federal tax , and FICA withholdings "
                 << "cannot be greater than gross pay. Re-enter "
                 << "the data again: \n";
              continue;
          }
          else
          {
              break;
          }
       }
     }
         //go back to top of outer while and start again with new emp id.
}
    net_pay = total_gross_pay - total_state_tax - total_fed_tax - total_fica;
    
    
        cout << "\nTotal gross pay for all employees = $" << left << setw(20) << total_gross_pay << endl

        << "\nTotal state tax for all employees = $" << left << setw(20) << total_state_tax << endl

         << "\nTotal federal tax for all employees = $" << left << setw(20)
         << total_fed_tax << endl

         << "\nTotal FICA withholdings for all employees = $" << left << setw(20)
         << total_fica << endl

         << endl;
        cout << "Net Pay = $" << net_pay << left << setw(20) << endl <<endl;

    return 0;
}

