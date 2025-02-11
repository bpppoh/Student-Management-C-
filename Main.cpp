#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std ;

string recieve_string (const string& word) {
    string str ;
    cout << word ;
    getline(cin,str) ;
    return str ;
}

string recieve_string (const string& word , int length) {
    string str ;
    do
    {
        cout << word ;
        getline(cin,str) ;
        if(str.length() != length) {
            cout << "Error , Input must be " << length << " letters\n\n" ;
            continue;
        }
        break;
    } while (true);
    return str ;
}

string recieve_string (const string& word , int length , string filter) {
    string str ;
    bool check ;
    if (filter == "digit") {
        do
        {
        check = true ;
        cout << word ;
        getline(cin,str) ;
        if(str.length() != length) {
            cout << "Error , Input must be " << length << " letters\n\n" ;
            check = false ;
            continue ;
        }
        for (char ch : str) {
            if (!isdigit(ch)) {
                cout << "Error , Input must be number only\n\n" ;
                check = false ;
                break ;
            }
        }
        } while (!check);
        return str ;  
    } else if (filter == "alphabet") {
        do
        {
            check = true ;
            cout << word ;
            getline(cin,str) ;
            if(str.length() != length) {
                cout << "Error , Input must be " << length << " letters\n\n" ;
                check = false ;
                continue ;
            }
            for(char ch : str) {
                if(!isalpha(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    } else if (filter == "digit&space") {
        do
        {
            check = true ;
            cout << word ;
            getline(cin,str) ;
            if(str.length()!=length) {
                cout << "Error , Input must be " << length << " letters\n\n" ;
                check = false ;
                continue ;
            } for(char ch : str) {
                if(!isdigit(ch) && !isspace(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    } else if (filter == "alphabet&space") {
        do
        {
            check = true ;
            cout << word ;
            getline(cin,str) ;
            if(str.length()!=length) {
                cout << "Error , Input must be " << length << " letters\n\n" ;
                continue;
            } for(char ch : str) {
                if(!isalpha(ch) && !isspace(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    }
}

string recieve_string (const string& word , string filter) {
    string str ;
    bool check ;
    if (filter == "digit") {
        do
        {
        check = true ;
        cout << word ;
        getline(cin,str) ;
        for (char ch : str) {
            if (!isdigit(ch)) {
                cout << "Error , Input must be number only\n\n" ;
                check = false ;
                break ;
            }
        }
        } while (!check);
        return str ;  
    } else if (filter == "alphabet") {
        do
        {
            check = true ;
            cout << word ;
            getline(cin,str) ;
            for(char ch : str) {
                if(!isalpha(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    } else if (filter == "digit&space") {
        do
        {
            cout << word ;
            getline(cin,str) ;
            for(char ch : str) {
                if(!isdigit(ch) && !isspace(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    } else if (filter == "alphabet&space") {
        do
        {
            cout << word ;
            getline(cin,str) ;
            for(char ch : str) {
                if(!isalpha(ch) && !isspace(ch)) {
                    cout << "Error , Input must be alphabet only\n\n" ;
                    check = false ;
                    break ;
                }
            }
        } while (!check);
        return str ;
    }
}

int recieve_int (const string& word , int floor , int ceiling) {
    int num ;
    do
    {
        cout << word ;
        if(cin>>num && num >= floor && num <= ceiling) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

int recieve_int (const string& word , int floor ) {
    int num ;
    do
    {
        cout << word ;
        if(cin>>num && num >= floor) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

int recieve_int (const string& word) {
    int num ;
    do
    {
        cout << word ;
        if(cin>>num) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

float recieve_float (const string& word) {
    float num ;
    do
    {
        cout << word ;
        if(cin>>num) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

float recieve_float (const string& word , float floor) {
    float num ;
    do
    {
        cout << word ;
        if(cin>>num && num >= floor) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

float recieve_float (const string& word , float floor , float ceiling) {
    float num ;
    do
    {
        cout << word ;
        if(cin>>num && num >= floor && num <= ceiling) {
            cin.ignore() ;
            break ;
        } else {
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max() , '\n') ;
            cout << "Error occured , enter properly\n\n" ;
        }
    } while (true);
    return num ;
}

namespace Student {
    class Student {
        private :
            string studentID ;
            string name ;
            int age ;
            float gpa ;
        public :
            Student(string ID , string name , int age , float gpa) : studentID(ID) , name(name) , age(age) , gpa(gpa) {} ;

            string get_id () const {
                return studentID ;
            }

            string get_name () const {
                return name ;
            }

            int get_age () const {
                return age ;
            }

            float get_gpa() const {
                return gpa ;
            }

            void set_id(const string& id) {
                this->studentID = id ;
                cout << "===== Student's ID has been set =====\n\n" ;
            }
            
            void set_name(const string& name) {
                this->name = name ;
                cout << "===== Student's name has been set =====\n\n" ;
            }

            void set_age(const int& age) {
                this->age = age ;
                cout << "===== Student's age has been set =====\n\n" ;
            }

            void set_gpa(const float& gpa) {
                this->gpa = gpa ;
                cout << "===== Student's gpa has been set =====\n\n" ;
            }

            friend ostream& operator<< (ostream& os , Student student) {
                os << "Student name : " << student.name << endl 
                << "ID : " << student.studentID << endl 
                << "Age : " << student.age << endl 
                << "GPA : " << student.gpa << endl << endl ;
                return os ;
            }

            string check() const {
                if (studentID.length() != 8) {
                    return "ID Error , ID must long 8 digit" ;
                }
                for(char ch : studentID) {
                    if (!isdigit(ch)) {
                        return "ID Error , ID must contain only number." ;
                    }
                }
                if (age < 0 || gpa < 0 || gpa > 4) {
                    return "Age or GPA is error , Please check" ;
                }
                return "Good" ;
            }


    } ;
}

namespace StudentManagement {
    class StudentManagement {
        private :
            vector<Student::Student> StudentList ;
        public :
            void addStudent (const Student::Student& student) {
                StudentList.push_back(student) ;
                cout << "===== Student added successful ! =====\n\n" ;
            }

            void displayStudents() const {
                if (StudentList.empty()) {
                    cout << "===== Student Book is empty =====\n\n" ;
                    return ;
                }
                cout << "===== Displaying Students in Student Book =====\n\n" ;
                for (auto it = StudentList.begin() ; it != StudentList.end() ; it++) {
                    cout << *it ;
                }
                cout << "===== Student Display successful =====\n\n" ;
            }

            void search_displayStudent (const string& id) const{
                cout << endl ;
                for (auto it = StudentList.begin() ; it != StudentList.end() ; it++) {
                    if(id == it->get_id()) {
                        cout << *it ;
                        return ;
                    }
                }
                cout << "===== Cannot found =====\n\n" ;
                return ;
            }

            void deleteStudent(const string& id) {
                cout << endl ;
                for (auto it = StudentList.begin() ; it != StudentList.end() ; it++) {
                    if(id == it->get_id()) {
                        StudentList.erase(it) ;
                        return ;
                    }
                }
            }

            void updateStudent(const string& id) {
                for (auto it = StudentList.begin() ; it != StudentList.end() ; it++) {
                    if(id == it->get_id()) {
                        cout << "===== Student Found =====\n\n" ;
                        cout << *it ;
                        int choice ;
                        do
                        {
                            cout << "===== Update data of student =====\n\n" ;
                            cout << "1. ID \n" ;
                            cout << "2. Name \n" ;
                            cout << "3. Age \n" ;
                            cout << "4. GPA\n" ;
                        } while (!(choice = recieve_int("Enter your choice : ",1,4)));
                        switch (choice)
                        {
                        case 1:
                            it->set_id(recieve_string("Enter New ID : ",8)) ;
                            break;
                        case 2:
                            it->set_name(recieve_string("Enter New Name : ")) ;
                            break ;
                        case 3:
                            it->set_age(recieve_int("Enter New Age : ",0)) ;
                            break;
                        case 4:
                            it->set_gpa(recieve_float("Enter New GPA : " ,0,4)) ;
                            break ;
                        default:
                            break;
                        }
                    }
                }
            }

            void saveToFile(string filename) const {
                filename += ".txt" ;
                ofstream outFile(filename) ;

                if (!outFile) {
                    cout << "===== Cannot Create file =====\n\n" ;
                    return ;
                } 

                for (auto& node : StudentList) {
                    outFile << node.get_id() << ',' <<
                    node.get_name() << ',' << 
                    node.get_age() << ',' << 
                    node.get_gpa() << endl ;
                }

                cout << "===== Save to file successful ! =====\n\n" ;
                outFile.close () ;
                return ;
            }

            void loadFormFile(string filename) {
                filename += ".txt" ;
                ifstream inFile(filename) ;

                if (!inFile) {
                    cout << "===== Cannot open file =====\n\n" ;
                    return ;
                }

                string id , name ,age_str , gpa_str ;
                int age ;
                float gpa ;

                StudentList.clear() ;
                string line ;
                while(getline(inFile,line)){
                    if(line.empty()) {continue;}
                    stringstream ss(line) ;

                    if (getline(ss,id,',') && getline(ss,name,',') && getline(ss,age_str,',') && getline(ss,gpa_str,',') ) {
                        age = stoi(age_str) ;
                        gpa = stof(gpa_str) ;

                        StudentList.push_back(Student::Student (id,name,age,gpa)) ;
                    }
                }

                inFile.close() ;
                cout << "===== Load file successful ! =====\n\n" ;
                return ;
            }
    } ;
}

Student::Student create_return_student () {
    string id , name ;
    int age ;
    float gpa ;

    id = recieve_string("Enter ID : ","digit") ;
    name = recieve_string("Enter Name : ","alphabet" ) ;
    age = recieve_int("Enter Age : ",0) ;
    gpa = recieve_float("Enter GPA : ",0,4) ;
    cout << endl ;

    return Student::Student (id,name,age,gpa) ;
}

int main () {
    StudentManagement::StudentManagement Studentbook ;

    int end = false ,choice ;
    do
    {
        cout << "===== Student Management System =====\n" ;
        cout << "1. Add New Student \n" ;
        cout << "2. Display All Students \n" ;
        cout << "3. Search Student by ID \n" ;
        cout << "4. Delete Student by ID \n" ;
        cout << "5. Update Student Information \n" ;
        cout << "6. Save Data to File \n" ;
        cout << "7. Load Data from File \n" ;
        cout << "8. Exit \n" ;
        cout << "======================================\n" ;
        choice = recieve_int("Enter choice : ",1,8) ;
        cout << endl ;

        switch (choice)
        {
        case 1:
            Studentbook.addStudent(create_return_student()) ;
            break;
        case 2:
            Studentbook.displayStudents() ;
            break;
        case 3:
            Studentbook.search_displayStudent(recieve_string("Enter Searching ID : ",8)) ;
            break ;
        case 4:
            Studentbook.deleteStudent(recieve_string("Enter ID to Delete : ",8)) ;
            break ;
        case 5:
            Studentbook.updateStudent(recieve_string("Enter Searching ID : ",8)) ;
            break ;
        case 6 :
            Studentbook.saveToFile("Studentbook") ;
            break ;
        case 7:
            Studentbook.loadFormFile("Studentbook") ;
            break ;
        case 8:
            end = true ;
            break ;
        default:
            break;
        }
    } while (!end);
    
}
