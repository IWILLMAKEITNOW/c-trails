/*Eugene Githinji
bse-01-0056/2025
library meembership
*/
#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;

public:
    
    Person(string n = "") : name(n) {}

   
    void setName(string n) {
        name = n;
    }

   
    string getName() const {
        return name;
    }
};


class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
   
    LibraryMember(string n = "", int id = 0, int books = 0) 
        : Person(n), memberID(id), booksBorrowed(books) {}

    
    int getMemberID() const {
        return memberID;
    }

   
    int getBooksBorrowed() const {
        return booksBorrowed;
    }
};


class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    
    PremiumMember(string n = "", int id = 0, int books = 0, double fee = 0.0)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    
    double getMembershipFee() const {
        return membershipFee;
    }
};


int main() {
    
    LibraryMember member1("John Njuguna", 1001, 3);
    cout << "Regular Member:" << endl;
    cout << "Name: " << member1.getName() << endl;
    cout << "ID: " << member1.getMemberID() << endl;
    cout << "Books Borrowed: " << member1.getBooksBorrowed() << endl;
    cout << endl;

   
    PremiumMember member2("Jane Chelangat", 2001, 5, 200.50);
    cout << "Premium Member:" << endl;
    cout << "Name: " << member2.getName() << endl;
    cout << "ID: " << member2.getMemberID() << endl;
    cout << "Books Borrowed: " << member2.getBooksBorrowed() << endl;
    cout << "Membership Fee: ksh" << member2.getMembershipFee() << endl;
    
    return 0;

}
