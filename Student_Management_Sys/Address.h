#ifndef ADDRESS_H
#define ADDRESS_H
#include <sstream>
using namespace std;

class Address
    {

    private:
        string addressLine1;
        string addressLine2;
        string city;
        string state;
        int zipCode;

    public:
        Address();
        ~Address();
	void makeAddress(stringstream&);

        void setAddressOne(string addr1);
        string getAddressOne();

        //cout << step1<< endl;

        void setAddressTwo(string addr2);
        string getAddressTwo();

        void setAddressCity(string addrcity);
        string getAddressCity();

        //cout<< step3 << endl;

        void setState(string addrstate);
        string getState();

        void setZipCode(string zipcode);
        int getZipCode();

        string makeAddressReport();




    };
#endif //Address_H
