#pragma once
#include<string>
class TeachingClass
{
private:
	int teachingClassID;
	std::string semeter;
	std::string teachingNo;

public:
	int getTeanchingClassID();
	void setTeanchingClassID(int teachingClassID);
	std::string getSemeter();
	void setSemeter(std::string semeter);
	std::string getteachingNo();
	void setteachingNo(std::string teachingNo);
	void showInfo();

public:
	TeachingClass();
	TeachingClass(int t_ClassID,std::string ster,std::string tNo);
	~TeachingClass();
};

