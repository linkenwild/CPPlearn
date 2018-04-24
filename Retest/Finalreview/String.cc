//String.cc
//This is a copy from 
//https://github.com/StevensDeptECE/EE553-CPP/blob/master/session09/String.cc
//I just tpye it again by myself.
#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
		int len;
		char* s;
public:
	String(): len(0), s(nullptr) {}
	String(const char* str): len(strlen(str)), s(new char[len]) {
		for (int i=0; i< len; i++)
			s[i] = *str++;
	}
	
	~String() {
		delete [] s;
	}
	
	friend ostream& operator <<(ostream& s, const String& str){
		for (int i=0; i<str.len; ++i)
			s << str.s[i];
		return s;
	}
	
	//copy constructor
	String(const String& orig) : len(orig.len), s(new char[len]){
		for (int i=0; i< len; i++)
			s[i] = orig.s[i];
	}
	
	//operator =
	String& operator =( const String& orig) {
		if (this != &orig) {
			delete [] s;
			
			len = orig.len;
			s = new char[len];
			for ( int i=0; i< len; i++)
				s[i] = orig.s[i];
		}
		return *this;
	}
	
	//operator +
	String operator +(const String& r) const{
		String ans;
		ans.len = len + r.len;
		ans.s = new char[ans.len];
		for (int i=0; i<len; i++)
			ans.s[i] = s[i];
		int j = len;
		for (int i= 0; i < r.len; i++)
			ans.s[j+1] = r.s[i];
		return ans;
	}
	
};

void f(String x) {
	cout << x << '\n';
}

int main(){
	for ( int i=0; i<5; i++) {
		String s = "abc";
		cout << s << '\n';
		String s2 = "def";
		cout << s2 << '\n';
		String s3 = s2;
		f(s3);
	}

/* 	String s3 = s + s2;
	cout << s3 << endl;
	s3 = s3;
	s3 = s;
	String s4 = s3*20;
	cout << s2.substring(2,4) << '\n';
#endif */
}
		

		
	
	
	
	
	
	
	
	
	
	
	