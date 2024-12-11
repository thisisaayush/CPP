#include <iostream>
#include <string>
using namespace std;

class StudentInfo
{
    protected:
        string fname;
        string lname;
        string major;
        string department;
        string year;

    public:
        Student(string fn, string ln, string m, string d, string y): fname(fn), lname(ln), major(m), department(d), year(y) {}

        // virtual function to be overridden by derived class
        virtual void displayInfo()
        {
            cout << "First Name: " << fname << endl;
            cout << "Last Name: " << lname << endl;
            cout << "Major: " << major << endl;
            cout << "Year: " << year << endl;
        }
};

// derived class: Student inherits from StudentInfo

class Student : public StudentInfo
{
    protected:
        string advisor;
    
    public:
        Student(string fn, string ln, string m, string d, string y, string a): StudentInfo(fn, ln, m, d, y), advisor(a) {}

    void displayInfo override 
    {
        StudentInfo::displayInfo();
        cout << "Advisor: " << advisor << endl;
    }
};

class GraduatedStudent : public Student
{
    private:
        string thesisTitle;

    public:
        GraduatedStudent(string fn, string ln, string m, string d, string y, string a, string t) : Student (fn, ln, m, d, y, a), thesisTitle(t) {}

    void displayInfo() override
    {
        Student::displayInfo();
        cout << "Thesis Title: '" << thesisTitle << "'" << endl;
    }
};

void showStudentInfo(StudentInfo* s)
{
    s -> displayInfo();
}

int main()
{
    Student s1("John", "Doe", "Computer Science", "CSET", "2");
    GraduatedStudent g1("Sam", "Smith", "Artifical Intelligence", "CSET", "4", "Thoughts and Consciousness");

    cout << "Student Info" << endl;
    showStudentInfo(&s1);
    cout << "Graduate Info" << endl;
    showStudentInfo(&g1);

    return 0;
}