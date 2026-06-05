// Week 9 - Experiment 3
// PersonData -> CustomerData -> PreferredCustomer

#include<iostream>
#include<string>
using namespace std;

class PersonData {
protected:
    string lastName, firstName, address, city, state, zip, phone;
public:
    void setLastName(string n) { lastName = n; }
    void setFirstName(string n) { firstName = n; }
    void setAddress(string a) { address = a; }
    void setCity(string c) { city = c; }
    void setState(string s) { state = s; }
    void setZip(string z) { zip = z; }
    void setPhone(string p) { phone = p; }
    string getFullName() { return firstName + " " + lastName; }
    void display() {
        cout << "Name: " << firstName << " " << lastName << " | City: " << city << endl;
    }
};

class CustomerData : public PersonData {
protected:
    int customerNumber;
    bool mailingList;
public:
    void setCustomerNumber(int n) { customerNumber = n; }
    void setMailingList(bool m) { mailingList = m; }
    int getCustomerNumber() { return customerNumber; }
    bool getMailingList() { return mailingList; }
    void display() {
        PersonData::display();
        cout << "Customer#: " << customerNumber << " | Mailing: " << (mailingList?"Yes":"No") << endl;
    }
};

class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount, discountLevel;
    void setDiscount() {
        if(purchasesAmount >= 2000) discountLevel = 10;
        else if(purchasesAmount >= 1500) discountLevel = 7;
        else if(purchasesAmount >= 1000) discountLevel = 6;
        else if(purchasesAmount >= 500) discountLevel = 5;
        else discountLevel = 0;
    }
public:
    PreferredCustomer(double amount = 0) {
        if(amount < 0) { cout << "Invalid amount!" << endl; return; }
        purchasesAmount = amount;
        setDiscount();
    }
    void setPurchases(double p) {
        if(p < 0) { cout << "Invalid!" << endl; return; }
        purchasesAmount = p; setDiscount();
    }
    void display() {
        CustomerData::display();
        cout << "Purchases: $" << purchasesAmount << " | Discount: " << discountLevel << "%" << endl;
    }
};

int main() {
    PreferredCustomer pc(1200);
    pc.setFirstName("Ahmad"); pc.setLastName("Ali");
    pc.setCity("Islamabad"); pc.setCustomerNumber(5001); pc.setMailingList(true);
    pc.display();
    return 0;
}
