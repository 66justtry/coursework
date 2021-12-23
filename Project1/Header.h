#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iomanip>
using namespace std;


class Objectt {
public:
	virtual void Set(string) = 0;
};

class Building : virtual public Objectt {
protected:
	string address;
public:
	void Set(string s) {
		address = s;
	}
	string GetAddress() {
		return address;
	}
};

class Warehouse : public Building {
protected:
	string number;
public:
	void Set(string s) {
		number = s;
	}
	string GetNumber() {
		return number;
	}
};

class Supplier : public Warehouse {
protected:
	string firm;
	string count_del;
public:
	void SetFirm(string s) {
		firm = s;
	}
	void SetCount_del(string s) {
		count_del = s;
	}
	void Set(string s1, string s2) {
		SetFirm(s1);
		SetCount_del(s2);
	}
	string GetFirm() {
		return firm;
	}
	string GetCount_del() {
		return count_del;
	}
};

class Product : public Supplier {
protected:
	string count;
	string password;
	string name;
public:
	void SetCount(string s) {
		count = s;
	}
	void SetPassword(string s) {
		password = s;
	}
	void SetName(string s) {
		name = s;
	}
	void Set(string s1, string s2, string s3) {
		SetCount(s1);
		SetPassword(s2);
		SetName(s3);
	}
	string GetCount() {
		return count;
	}
	string GetPassword() {
		return password;
	}
	string GetName() {
		return name;
	}
	string* GetAll() {
		string* s = new string[7]{ address, number, firm, count_del, count, password, name };
		return s;
	}
	friend ostream& operator<< (ostream& out, const Product& obj);
	friend istream& operator>> (istream& out, Product& obj);
	friend bool operator== (const Product& obj1, const Product& obj2);
	friend class Compare;
};

string tostr(System::String^ managed) {
	return msclr::interop::marshal_as<std::string>(managed);
}

bool compared(string s1, string s2) {
	for (int i = 0; i < s2.size(); i++)
		if (tolower(s1[i]) != tolower(s2[i]))
			return false;
	return true;
}

ostream& operator<< (ostream& out, const Product& obj) {
	out << obj.address << " " << obj.number << " " << obj.firm << " " << obj.count_del << " " << obj.count 
		<< " " << obj.password << " " << obj.name << endl;
	return out;
}

istream& operator>> (istream& in, Product& obj) {
	in >> obj.address;
	in >> obj.number;
	in >> obj.firm;
	in >> obj.count_del;
	in >> obj.count;
	in >> obj.password;
	in >> obj.name;
	return in;
}

bool operator== (const Product& obj1, const Product& obj2) {
	if ((obj1.address == obj2.address) && (obj1.number == obj2.number) && (obj1.firm == obj2.firm) && (obj1.count_del == obj2.count_del) && (obj1.count == obj2.count) && (obj1.password == obj2.password) && (obj1.name == obj2.name))
		return true;
	else
		return false;
}



bool CompareAddressUp(Product& left, Product& right) {
	return left.GetAddress() < right.GetAddress();
}
bool CompareNumberUp(Product& left, Product& right) {
	int l = stoi(left.GetNumber());
	int r = stoi(right.GetNumber());
	return l < r;
}
bool CompareFirmUp(Product& left, Product& right) {
	return left.GetFirm() < right.GetFirm();
}
bool CompareCount_delUp(Product& left, Product& right) {
	int l = stoi(left.GetCount_del());
	int r = stoi(right.GetCount_del());
	return l < r;
}
bool CompareCountUp(Product& left, Product& right) {
	int l = stoi(left.GetCount());
	int r = stoi(right.GetCount());
	return l < r;
}
bool ComparePasswordUp(Product& left, Product& right) {
	int l = stoi(left.GetPassword());
	int r = stoi(right.GetPassword());
	return l < r;
}
bool CompareNameUp(Product& left, Product& right) {
	return left.GetName() < right.GetName();
}




bool CompareAddressDown(Product& left, Product& right) {
	return left.GetAddress() > right.GetAddress();
}
bool CompareNumberDown(Product& left, Product& right) {
	int l = stoi(left.GetNumber());
	int r = stoi(right.GetNumber());
	return l > r;
}
bool CompareFirmDown(Product& left, Product& right) {
	return left.GetFirm() > right.GetFirm();
}
bool CompareCount_delDown(Product& left, Product& right) {
	int l = stoi(left.GetCount_del());
	int r = stoi(right.GetCount_del());
	return l > r;
}
bool CompareCountDown(Product& left, Product& right) {
	int l = stoi(left.GetCount());
	int r = stoi(right.GetCount());
	return l > r;
}
bool ComparePasswordDown(Product& left, Product& right) {
	int l = stoi(left.GetPassword());
	int r = stoi(right.GetPassword());
	return l > r;
}
bool CompareNameDown(Product& left, Product& right) {
	return left.GetName() > right.GetName();
}