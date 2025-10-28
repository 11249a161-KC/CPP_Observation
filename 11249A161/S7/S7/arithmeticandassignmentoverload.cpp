#include<iostream>
using namespace std;

class BankAccount 
{
    private:
    double balance;

    public:
    BankAccount(double initial = 0.0) : balance(initial) {}

    BankAccount& operator+= (double amount)
    {
        balance += amount;
        cout<<"Deposited: Rs." <<amount<<endl;
        return *this;
    }

    BankAccount& operator-= (double amount)
    {
        if (amount > balance)
        {
            cout<<"Insufficient funds. Withdrawl failed"<<endl;
        }
        else
        {
            balance -= amount;
            cout<<"Withdrawn: Rs." <<amount<<endl;  
        }
        return *this;
    }

    BankAccount& operator*= (double rate)
    {
        balance *= (1 + rate/100);
        cout<<"Interest applied:"<<rate<<"%"<<endl;
        return *this;
    }

    BankAccount& operator /= (double fee)
    {
        balance /= fee;
        cout<<"Service fee deducted: Rs."<<fee<<endl;
        return *this;
    }

    void showBalance() const
    {
        cout<<"Current Balance: Rs."<<balance<<endl;
    }
};

int main()
{
    BankAccount acc(1000);
    acc.showBalance();

    acc += 500;
    acc -= 200;
    acc *= 5;
    acc /= 50;

    acc.showBalance();

    return 0;
}