#include <bits/stdc++.h>
using namespace std;

// Bank Management
// - Open a Account
// - Deposit Money in the account
// - Withdraw money from the account
// - Account Details
// - Seach Account by name
// - check Balance of an account
// - Close the account

struct account
{
    int accNo;
    string name;
    int age;
    float balance;
    char accType;
    string status;
};

class bankManagement
{
private:
    string name;
    string loc;
    vector<account> accDetails;
    int pin;
    int totalAcc;

public:
    bankManagement(string n, string l)
    {
        name = n;
        loc = l;
        totalAcc = 0;
        pin = 2020;
    }

    bool isPin(int pi)
    {
        return pi == pin;
    }

    string getName()
    {
        return name;
    }

    string getLoc()
    {
        return loc;
    }

    void openAccount(string name, int age, char type)
    {
        if (age < 18)
        {
            cout << "Sorry! You are not eligible to open an account." << endl;
            return;
        }

        if (type != 'A' && type != 'B')
        {
            cout << "We offer only two type of account either A or B" << endl;
            return;
        }

        account newacc;
        newacc.name = name;
        newacc.age = age;
        newacc.accType = type;
        newacc.accNo = totalAcc + 1;
        newacc.balance = 0.0;
        newacc.status = "Active";
        accDetails.push_back(newacc);
        totalAcc++;
        cout << "Congratulations! Your Account has been opened successfully!" << endl;
    }

    void deposit(int accno, float amount)
    {
        if (accno < 1 || accno > totalAcc)
        {
            cout << "Invalid Account Number!" << endl;
            return;
        }

        if (amount < 1)
        {
            cout << "Deposit Amount should be greater than zero!" << endl;
            return;
        }

        accDetails[accno - 1].balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw(int accno, float amount)
    {
        if (accno < 1 || accno > totalAcc)
        {
            cout << "Invalid Account Number!" << endl;
            return;
        }

        if (amount < 1)
        {
            cout << "Withdraw Amount should be greater than zero!" << endl;
            return;
        }

        if (accDetails[accno - 1].balance < amount)
        {
            cout << "Not enough balance" << endl;
            return;
        }

        accDetails[accno - 1].balance -= amount;
        cout << "Amount Withdrawn Successfully!" << endl;
    }

    void getAccountDetails(int accno)
    {
        if (accno < 1 || accno > totalAcc)
        {
            cout << "Invalid Account Number!" << endl;
            return;
        }

        account temp = accDetails[accno - 1];

        cout << "Account no. : " << temp.accNo << endl;
        cout << "Account Name : " << temp.name << endl;
        cout << "Age : " << temp.age << endl;
        cout << "Account Balance : " << temp.balance << endl;
        cout << "Account Type : " << temp.accType << endl;
        cout << "Status : " << temp.status << endl;
    }

    float getBalance(int accno)
    {
        if (accno < 1 || accno > totalAcc)
        {
            cout << "Invalid Account Number!" << endl;
            return -1;
        }

        return accDetails[accno - 1].balance;
    }

    void closeAcc(int accno)
    {
        if (accno < 1 || accno > totalAcc)
        {
            cout << "Invalid Account Number!" << endl;
            return;
        }

        accDetails[accno - 1].status = "Deleted";
        cout << "Your Account has been Deleted successfully!" << endl;
    }
};

void menu()
{
    cout << "Banking Management Menu :" << endl;
    cout << "1. Create New Account." << endl;
    cout << "2. Deposit the money." << endl;
    cout << "3. Withdraw the Money." << endl;
    cout << "4. Display account details." << endl;
    cout << "5. Get Account balance." << endl;
    cout << "6. Close an existing account." << endl;
    cout << "7. Exit from Banking System." << endl;
}

int main()
{
    bankManagement bm("XYZ", "ABC");
    cout << "Welcome to " << bm.getName() << "  Bank! \n\n";

    int pin;
    cout << "Before Accessing the data! Please Enter the Pin : ";
    cin >> pin;

    if (bm.isPin(pin))
    {
        int ch;
        bool flag = true;
        menu();

        while (flag)
        {
            cout << "Enter Your option : ";
            cin >> ch;
            switch (ch)
            {
            case 1:
            {
                string name;
                int age;
                char type;
                cout << "Enter your Details :" << endl;
                cout << "Name : ";
                cin >> name;
                cout << "Age : ";
                cin >> age;
                cout << "Type :";
                cin >> type;
                bm.openAccount(name, age, type);
                break;
            }
            case 2:
            {
                int accno;
                float amount;
                cout << "\nEnter the Account Number and Amount for Deposit :" << endl;
                cout << "Acc No : ";
                cin >> accno;
                cout << "Amount : ";
                cin >> amount;
                bm.deposit(accno, amount);
                break;
            }
            case 3:
            {
                int accno;
                float amount;
                cout << "\nEnter the Account Number and Amount for Withdraw :" << endl;
                cout << "Acc No : ";
                cin >> accno;
                cout << "Amount : ";
                cin >> amount;
                bm.withdraw(accno, amount);
                break;
            }
            case 4:
            {
                int accno;
                cout << "\nEnter the Account Number to Check Details : ";
                cin >> accno;
                bm.getAccountDetails(accno);
                break;
            }
            case 5:
            {
                int accno;
                cout << "\nEnter the Account Number to Check Balance : ";
                cin >> accno;
                cout << "Account Balance is : " << bm.getBalance(accno);
                break;
            }
            case 6:
            {
                int accno;
                cout << "\nEnter the Account Number to Close Account : ";
                cin >> accno;
                bm.closeAcc(accno);
                break;
            }
            case 7:
            {
                cout << "Exiting ..." << endl;
                flag = false;
                break;
            }
            default:
            {
                cout << "Invalid Option! Try another option" << endl;
            }
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Sorry! You are not allowed to access the data." << endl;
    }
    cout << "Thank you for using our service!";
}