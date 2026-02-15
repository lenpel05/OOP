#include <iostream>
#include <string>


using namespace std;
int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            int age;
            string  name;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Anna uuden opiskelijan nimi ja ikä:" << endl;
            cin >> name;
            cin >> age;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(name, age));
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (int i = 0; i < studentList.size(); i++)
            {
                studentList[i].printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(),[](const Student& a, const Student& b) {
                return a.getName() < b.getName();});
            for (auto& s : studentList)
                s.printStudentInfo();
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(),[](const Student& a, const Student& b) {
                return a.getAge() < b.getAge();});
            for (auto& s : studentList)
                s.printStudentInfo();
            break;

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            string name;
            cout << "Anna haettavan opiskelijan nimi:" << endl;
            cin >> name;

            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            auto it = find_if(studentList.begin(), studentList.end(), [name](const Student& x){return x.getName() == name;});

            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            if (it != studentList.end())
                it->printStudentInfo();
            else
                cout << "Opiskelijaa ei löytynyt." << endl;

            break;
        }
        default:
            cout<< "Väärä valinta, ohjelma lopetetaan..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
