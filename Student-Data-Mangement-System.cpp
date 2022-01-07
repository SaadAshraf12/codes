#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
void update_student();
long long cell[100];
int student_number, j = 0, sa;
int  roll[100], phys[100], cal[100], ict[100], eng[100], pf[100];
string name[100], check;
void  create_data() //Function to create students data
{
    system("cls");
    int max, min = 0, in;
    cout << "How Many Students Data You Want To Create:" << endl;
    cin >> student_number;
    for (int i = 0; i < student_number; i++)
    {
        cout << "Enter Roll Number:" << endl;
        cin >> roll[i];
        in = i;
        for (int j = 0; j < in; j++) {
            while (roll[in] == roll[j]) {         // This is done so no student has same roll number
                cout << "Roll NO already exists." << endl;
                cin >> roll[i];
            }
        }
        cout << "Enter Name: " << endl;
        cin >> name[i];
        cout << "Enter Cell Number:" << endl;
        cin >> cell[i];
        cout << "Enter Physics Marks:" << endl;
        cin >> phys[i];
        while (phys[i] > 50 || phys[i] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
            cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
            cin >> phys[i];
        }
        cout << "Enter Calculus Marks:" << endl;
        cin >> cal[i];
        while (cal[i] > 50 || cal[i] < 0)
        {
            cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
            cin >> cal[i];
        }
        cout << "Enter English Marks:" << endl;
        cin >> eng[i];
        while (eng[i] > 50 || eng[i] < 0) {
            cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
            cin >> eng[i];
        }
        cout << "Enter PF Marks:" << endl;
        cin >> pf[i];
        while (pf[i] > 50 || pf[i] < 0) {
            cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
            cin >> pf[i];
        }
        cout << "Enter ICT Marks:" << endl;
        cin >> ict[i];
        while (ict[i] > 50 || ict[i] < 0) {
            cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
            cin >> ict[i];
        }
        system("cls");
    }
    cout << endl;
    cout << "Student Data Has Been Created successfully :-)" << endl;
    system("pause");
}

void delete_data(int p) {        //Function to delete students data it works by roll number
    system("cls");
    int c = 0, i = 0;
    ifstream dels;
    dels.open("Total_Data_Of_Students.txt");
    ofstream send;
    send.open("Deleted_Students_Data.txt");
    string array[50];
    int index = 0;
    string str;
    while (!dels.eof())
    {
        dels >> str;
        array[index] = str;
        index++;
    }
    for (int i = 0; i < 50; i++)
    {
        if (array[i] != "")
            cout << array[i] << endl;
    }
    int temp = 0;
    for (int i = 0; i < 50; i++)
    {
        if (to_string(p) == array[i])
        {
            temp = i;
            break;
        }
    }
    for (int i = temp; i < temp + 8; i++)
    {
        array[i] = "";
    }

    for (int i = 0; i < 50; i++)
    {
        send << array[i] << endl;
    }
    cout << endl;
    cout << "Data deleted successfully :-)" << endl;
    system("pause");
}

void search_data(int del) {       //This Function is used to search student data
    system("cls");                //This Function operates by asking roll number of student you want to search 
    int c = 0, i = 0;
    ifstream dels;
    dels.open("Total_Data_Of_Students.txt"); //opens the text file in which the studnets data is saved
    while (!dels.eof()) {
        dels >> roll[i];
        dels >> name[i];
        dels >> cell[i];
        dels >> phys[i];
        dels >> cal[i];
        dels >> eng[i];
        dels >> pf[i];
        dels >> ict[i];
        if (roll[i] == del) {
            cout << "Roll NO: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Cell Number: " << cell[i] << endl;
            cout << "Physics Marks: " << phys[i] << endl;
            cout << "Calculs Marks: " << cal[i] << endl;
            cout << "Englsih Marks: " << eng[i] << endl;
            cout << "PF Marks: " << pf[i] << endl;
            cout << "ICT Marks: " << ict[i] << endl;
            cout << "The student you requested to search for is displayed above :-)" << endl;
            i++;
            break;
        }
        else {
            cout << "Student of that roll number does not exist    :-(";
        }
    }
    system("pause");
}

void save_data(int sa) {      //This  Function is used to save students data in a file by the name pf.txt
    system("cls");
    int temp;
    if (sa == 5)        //This conditon is used because user cannot save data unless he presses 5
    {
        ofstream send;
        send.open("Total_Data_Of_Students.txt");       //File name pf.txt
        string str;
        for (int i = 0; i < student_number; i++)
        {
            for (int j = 0; j < student_number; j++)
            {
                if (roll[i] < roll[j])
                {
                    int temp;
                    temp = roll[j];
                    roll[j] = roll[i];
                    roll[i] = temp;

                    str = name[j];
                    name[j] = name[i];
                    name[i] = str;

                    temp = cell[j];
                    cell[j] = cell[i];
                    cell[i] = temp;

                    temp = phys[j];
                    phys[j] = phys[i];
                    phys[i] = temp;

                    temp = cal[j];
                    cal[j] = cal[i];
                    cal[i] = temp;

                    temp = eng[j];
                    eng[j] = eng[i];
                    eng[i] = temp;

                    temp = pf[j];
                    pf[j] = pf[i];
                    pf[i] = temp;

                    temp = ict[j];
                    ict[j] = ict[i];
                    ict[i] = temp;
                }
            }
        }
        for (int i = 0; i < student_number; i++)
        {
            send << roll[i] << endl;
            send << name[i] << endl;
            send << cell[i] << endl;
            send << phys[i] << endl;
            send << cal[i] << endl;
            send << eng[i] << endl;
            send << pf[i] << endl;
            send << ict[i] << endl << endl;
        }
    }
}

void Menu()      //Function to display menu 
{
    system("cls");
    cout << setw(78) << "---------------<MENU>--------------" << endl;
    cout << endl;
    cout << endl;
    cout << setw(78) << "Press 1 To Create Student Data" << endl;
    cout << setw(78) << "Press 2 To Delete Student Data" << endl;
    cout << setw(78) << "Press 3 To Search Student Data" << endl;
    cout << setw(78) << "Press 4 To Update Student Data" << endl;
    cout << setw(78) << "Press 5 To Save   Student Data" << endl;
    cout << setw(78) << "Press 6 To Print  Student Data" << endl;
    cout << setw(64) << "Press 7 For Help" << endl;
    cout << setw(63) << "Press 8 To Exit" << endl;
}

void update_student()
{
    int i = 0, j = 0;
    cout << "Update the Student" << endl;
    ifstream input_data;
    ofstream output_data;
    output_data.open("Updated_Studnets_Data.txt");
    input_data.open("Total_Data_Of_Students.txt");
    string fname = "";
    if (!input_data.is_open())
    {
        cout << "Error in opening handling" << endl;
        return;
    }
    int froll;
    cout << "Enter the roll number of student you want to update :  ";
    cin >> froll;
    cout << "Reading data from file " << endl;
    input_data >> roll[i];
    input_data >> name[i];
    input_data >> cell[i];
    input_data >> phys[i];
    input_data >> cal[i];
    input_data >> eng[i];
    input_data >> pf[i];
    input_data >> ict[i];
    while (!input_data.eof())
    {
        if (froll == roll[i])
        {
            cout << "Enter New Roll Number: " << endl;
            cin >> roll[j];
            cout << endl;
            output_data << roll[i] << endl;
            cout << "Enter New Name: " << endl;
            cin >> name[j];
            cout << endl;
            output_data << name[i] << endl;
            cout << "Enter New Cellphone Number: " << endl;
            cin >> cell[j];
            cout << endl;
            output_data << cell[j] << endl;
            cout << "Enter New Physics Marks: " << endl;
            cin >> phys[j];
            while (phys[j] > 50 || phys[j] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
                cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
                cin >> phys[i];
            }
            cout << endl;
            output_data << phys[i] << endl;
            cout << "Enter New Caluclus Marks: " << endl;
            cout << endl;
            cin >> cal[j];
            while (cal[j] > 50 || cal[j] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
                cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
                cin >> cal[j];
            }
            output_data << cal[i] << endl;
            cout << "Enter New English Marks: " << endl;
            cin >> eng[j];
            while (eng[j] > 50 || eng[j] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
                cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
                cin >> eng[j];
            }
            cout << endl;
            output_data << eng[i] << endl;
            cout << "Enter New PF Marks: " << endl;
            cin >> pf[j];
            while (pf[j] > 50 || pf[j] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
                cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
                cin >> pf[j];
            }
            cout << endl;
            output_data << pf[i] << endl;
            cout << "Enter New ICT Marks: " << endl;
            cin >> ict[j];
            while (ict[j] > 50 || ict[j] < 0) {    //This is done bcause the marks of any subject cannot be greater than 50 or less than 0
                cout << "Invalid marks cannot be greater than 50 or less than 0." << endl;
                cin >> ict[j];
            }
            cout << endl;
            output_data << ict[i] << endl;
        }
        else
        {
            j++;
            output_data << roll[j];
            output_data << endl;
            output_data << name[j];
            output_data << endl;
            output_data << cell[j];
            output_data << endl;
            output_data << phys[j];
            output_data << endl;
            output_data << cal[j];
            output_data << endl;
            output_data << eng[j];
            output_data << endl;
            output_data << pf[j];
            output_data << endl;
            output_data << ict[j];
        }
        i++;
        input_data >> roll[i];
        input_data >> name[i];
        input_data >> cell[i];
        input_data >> phys[i];
        input_data >> cal[i];
        input_data >> eng[i];
        input_data >> pf[i];
        input_data >> ict[i];
    }
    cout << "File Closeed";
    input_data.close();
    output_data.close();
}

void Print_Data() {        //This Function is used to print students data on console from the file you can also use this to just display the sudents data you created onto the console
    string name;
    ifstream rec;
    rec.open("Total_Data_Of_Students.txt");
    while (!rec.eof())
    {
        getline(rec, name);
        cout << name << endl;
    }
    rec.close();
}

void help() {               //This function is simply used to help a user and to expalin how this mangement system works
    system("cls");
    cout << "If you press 1 you will be creating student's data and you will add their roll number, name, marks in 5 subjects" << endl;
    cout << "If you press 2 you will delete student's data by entering their roll number" << endl;
    cout << "If you press 3 you will search students data by their roll number and it will be displayed on the console" << endl;
    cout << "If you press 4 you will update student's data by entering their roll number" << endl;
    cout << "If you press 5 you will save student's data in a file" << endl;
    cout << "If you press 6 you will print student's data from file and onto the console" << endl;
    cout << "If you press 8 your program will termiante" << endl;
    cout << endl;
    cout << endl;
    cout << "HOPE THIS HELPS   :-)" << endl;
}

int main()  //This is the main function
{
    system("color 0c");       //This is used to change color of the system or console
    int  step, sa, temp;
    string n, pass;
    for (int o = 0; o < 800; o++) {       //This is used to make the program more beautiful
        cout << "---";
    }
    cout << endl;
    cout << setw(60) << "ENT PASSWORD=";
    cin >> pass;
    while (pass != "p""r""o""j""e""c""t""n""i""k""a""l")          //This while loop is used because the user cannot enter program unless he/she enters the correct password "abcd"
    {
        cout << "Enter correct password" << endl;
        cin >> pass;
    }
    if (pass == "p""r""o""j""e""c""t""n""i""k""a""l")            //This whole managment system only works if you enter the correct password "1234"
    {
        while (true)
        {
            Menu();     //calling the menu funtion to display menu
            cout << "Enter Your Choice: " << endl;     //Asking the user what operation he/she wants to perform
            cin >> step;       //user enters what operation he wants to perform
            switch (step)
            {
            case 8:
                cout << "Your Program Has Terminated!" << endl;
                system("pause");
                return 0;
                break;
            case 1:
                system("cls");
                create_data();       //calling the create function so user can create data of student
                break;
            case 2:
                int p;
                cout << "enter the roll number which you want to delete:" << endl;
                cin >> p;       //user enters the roll number of the student he/she wants to delete
                delete_data(p);            //calling the delete function so user can delete student from the file
                break;
            case 3:
                int del;
                cout << "Enter Roll NO: " << endl;
                cin >> del;               //user enters roll number of student he/she wants to search
                search_data(del);                //calling the search function to search the student data
                break;
            case 4:
                update_student();
                break;
            case 5:
                cin >> sa;
                cout << "are you sure: " << endl;
                save_data(sa);           //calling the save function so user can save studnets data tp the file
                if (sa == 5) {
                    cout << endl;
                    cout << "Data Saved Successfully :-)" << endl;
                    system("pause");
                }
                else {
                    cout << "Please retry" << endl;
                    cin >> sa;
                }
                break;
            case 6:
                system("cls");
                Print_Data();         //calling the print function so all students data of each studnet is displayed on the console
                cout << endl;
                cout << "Student Data Is Displayed Above :-)" << endl;
                system("pause");
                break;
            case 7:
                help();       //calling the help function so user can understand how the program works.
                system("pause");
                break;
            }
        }
    }
}
