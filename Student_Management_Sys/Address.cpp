#include "Address.h"
using namespace std;

        Address::Address()
        {

        }
        Address::~Address()
        {

        }
void Address::makeAddress(stringstream& ss){


	string address1,address2,addressCity,addrstate,zipcode;

	getline(ss,address1,',');
	Address::setAddressOne(address1);

	getline(ss,address2,',');
	Address::setAddressTwo(address2);

	getline(ss,addressCity,',');
	Address::setAddressCity(addressCity);

	getline(ss,addrstate,',');
	Address::setState(addrstate);

	getline(ss,zipcode,',');
	Address::setZipCode(zipcode);


}

        void Address::setAddressOne(string address1)
        {
                Address::addressLine1=address1;
        }
        string Address::getAddressOne()
        {
                return(Address::addressLine1);
        }

	 void Address::setAddressTwo(string address2)
        {
                Address::addressLine2=address2;
        }
        string Address::getAddressTwo()
        {
                return(Address::addressLine2);
        }

        void Address::setAddressCity(string addressCity)
        {
                Address::city=addressCity;

        }
        string Address::getAddressCity()
        {
                return(Address::city);
        }

        void Address::setState(string addrstate)
        {
                Address::state=addrstate;
        }
        string Address::getState()
        {
                return(Address::state);
        }
        void Address::setZipCode(string zipcode)
        {
		stringstream ssZipCode;
		ssZipCode << zipcode;
		ssZipCode >> Address::zipCode;

        }
        int Address::getZipCode()
        {
                return(Address::zipCode);
        }

string Address::makeAddressReport()
{
	stringstream ss;
	string zzip;
	ss<< Address::getZipCode();
	ss >> zzip;

return("Address: \t" + Address::getAddressOne() + ", " + Address::getAddressTwo () + "\n\t\t" + Address::getAddressCity() + ", " + Address::getState() + " " + zzip + "\n");
}
