#include <iostream>
#include <cstring>

class Person{
private:
	static constexpr int 	LIMIT = 25;
	std::string	mLastName;
	char		mFirstName[LIMIT];

public:
	Person(){
		mLastName = "";
		mFirstName[0] = '\0';
	}
	Person(const std::string &ln, const char *fn = "Heyyou"){
		if (fn == nullptr || strlen(fn) >= LIMIT )
			throw std::invalid_argument("Wrong First name.");
		strcpy(mFirstName, fn);
		mLastName = ln;
	}

	void Show()const{
		std::cout << mFirstName << " " << mLastName << std::endl;
	
	}
	void FormalShow() const{
		std::cout << mLastName << " " << mFirstName << std::endl;
	}
};

int main()
{
	Person mike(std::string("Vasovsky"), "Mike");
	mike.Show();
	mike.FormalShow();
	return (0);
}
