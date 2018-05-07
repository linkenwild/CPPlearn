//virtualinheritance
class Employee
{
private:
	uint64_t ssn;
public:
	Employee(uint64_t ssn) : ssn(ssn) {}
};

class Secretary : public virtual Employee
{
public:
	Secretary(uint64_t ssn) : Employee(ssn) {}
	void processRegistrations() {}
	void buyToys() {}
};

class Temp : public virtual Employee 
{
private:
	Date end;
public:
	Temp(uint64_t ssn, Date end): Employee(ssn), end(end) {}
};

class TempSecretary : public Temp, public Secretary
{
	
};
