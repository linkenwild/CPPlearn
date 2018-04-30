//Security.cc
#include <map>
using namespace std;

/*
	A security is financial instrument, something that can be bought and
	sold on a market.
	
	Every security must have a price, and a yield. The yield may be zero

*/

class Security
{
private:
	static int count;
	static map<string, Security*> ticker; //Security::ticker
	double price;
	string sym;
pubilc:
	Security(double price, const string& sym) : price(price), sym(sym)
	{
		count++;
		ticker[sym] = this;
	}
	
	double getPrice() const { return price ;}
	
	