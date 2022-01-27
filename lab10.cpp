#include <iostream>
#include <string>
#include <vector>

typedef int id;
typedef std::string name;
typedef int year;

struct Transcript
{
    std::size_t grades[100];
    std::string classes[100];
    std::size_t num;
};

struct Student
{
    name name;
    id idNumber;
    year year;
    Transcript t;
};

void initializeStudent(Student& s); //good
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);
Student initializeStudent();
Student initializeStudent(name n);
Student initializeStudent(id i);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);
    name stuName = "xyz";
    initializeStudent(stuName);
    id newId = 1;
    initializeStudent(newId);

    return 0;
}

Student initializeStudent()
{
  Student s = {"", 0, -1};
  return s;
}

Student initializeStudent(name n){
  Student s = {n, 0, -1};
  return s;
}

Student initializeStudent(id i)
{
  Student s = {"", i, -1};
  return s;
}

void initializeStudent(Student& s) //good
{
    std::string dummy;
    std::cout << "please enter a name"<<std::endl;
    std::getline(std::cin, s.name);
    std::cout << "please enter an ID number"<<std::endl;
    std::cin >>s.idNumber;
    std::cout<<"Please enter your year as a number 1-4"<<std::endl;
    std::cin>>s.year;
    std::getline(std::cin, dummy);
    fillTranscript(s.t);
}

void fillTranscript(Transcript& t) //good
{
    std::string course;//note - class is a reserved word
    double grade = 0;
    std::string dummy;

    std::cout << "Please enter the name of the next class, done when done"<<std::endl;
    std::getline(std::cin, course);
    t.num = 0;
    while(course != "done")
    {
        std::cout<<"Please enter your grade in "<<course<<std::endl;
        std::cin >>grade;
        std::getline(std::cin, dummy);//consume


        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;
        std::cout << "Please enter the name of the next class, done when done"<<std::endl;
        std::getline(std::cin, course);
    }
}

void printStudent(const Student& s)
{
    std::cout << "Name:"<<s.name<<std::endl;
    std::cout << "ID number:"<<s.idNumber<<std::endl;
    std::cout << "year:"<<s.year<<std::endl;
    printTranscript(s.t);
}
void printTranscript(const Transcript& t){
    std::cout<<"Transcript: "<<std::endl;
    for(std::size_t i = 0; i < t.num; i++){
        std::cout<<t.classes[i]<<": "<<t.grades[i]<<std::endl;
    }
}
