/// Things to add in the future
    /// 1. Color change
    /// 2. Previous Page
    /// 3. Project Name
    /// 4. Frame Design

#include <iostream>
//#include<conio.h>
using namespace std;


/// Function for About Developers
void about_developers()
{
    cout << "About Us\n\n";
}

/// Function for Student Operations
void student_op()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Student Info\n";
    cout << "\t\t\t\t 2. Delete Student Info\n";
    cout << "\t\t\t\t 3. Modify Student Info\n";
}

/*void add_student()
{
    cout <<
}*/

/// Function for student info
void student_info()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Students' Info\n\n";
    cout << "\t\t\t\t 1. Operations\n";
    cout << "\t\t\t\t 2. Find Student Info\n\n";

    char student_info_op;
    cout << "\t\t\t  Which Operation do you want to perform?: ";
    cin >> student_info_op;

    if (student_info_op == '1') {
        /// Go to operations
        student_op();
    }
    else if (student_info_op == '2');
        /// Go to find student info

}
/// Function for Staff Operations
void staff_op()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Staff Info\n";
    cout << "\t\t\t\t 2. Delete Staff Info\n";
    cout << "\t\t\t\t 3. Modify Staff Info\n";
}

/// Function for Staff Info
void staff_info()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Staff Info\n\n";
    cout << "\t\t\t\t 1. Operations\n";
    cout << "\t\t\t\t 2. Find Staff Info\n\n";

    char staff_info_op;
    cout << "\t\t\t  Which Operation do you want to perform?: ";
    cin >> staff_info_op;

    if (staff_info_op == '1') {
        /// Go to operations
        staff_op();
    }
    else if (staff_info_op == '2');
        /// Go to find staff info
}







int main(){

    char start_page_operation;

   cout<<endl;
   cout<<"\t\t\t       "<<"%zpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzp%";
   cout<<endl<<"\t\t\t       p\t\t\t\t\t\t    z"<<endl<<"\t\t\t       z\t\t\t\t\t\t    p";
   cout<<""<<endl;//project name
   cout<<"\t\t\t       p\t"<<" Student Record Management System"<<"\t    z"<<endl;
   cout<<"\t\t\t       z\t"<<"\t\t\t\t\t    p"<<"\n";
   cout<<"\t\t\t       p\t"<<"\t\t\t\t\t    z"<<"\n";
   cout<<"\t\t\t       z\t"<<"   Developed By: Pavel && Zunaid\t    p"<<endl<<"\t\t\t       p\t\t\t\t\t\t    z"<<endl;
   cout<<"\t\t\t       z\t\t    "<<"IIT-12\t\t\t    p"<<endl<<"\t\t\t       p\t\t\t\t\t\t    z"<<endl;
   cout<<"\t\t\t       z\t     "<<"Jahangirnagar University\t\t    p"<<endl<<"\t\t\t       p\t   \t\t\t\t\t    z"<<endl;
   cout<<"\t\t\t       z\t     \t\t\t\t\t    p"<<endl<<"\t\t\t       p\t     \t\t\t\t\t    z"<<endl;
   cout<<"\t\t\t       "<<"%pzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpz%" << endl << endl;
   cout << "\t\t\t       \t\t   Press ENTER To Continue\n";

   while (cin.get() != '\n')
   {
       cin.get();
   }
   cout << "This is the next page\n";
   cout << endl<< endl<< endl<< endl<< endl;

   ///Start Page

   cout << "\t\t\t\t\t\t    Welcome!!" << endl << endl;
   /// Student Info
   cout << "\t\t\t\t1. Students' Info\n";
   /// Techer Info
   cout << "\t\t\t\t2. Teachers' Info\n";
   /// Staff Info
   cout << "\t\t\t\t3. Staff Info\n";
   /// About Us
   cout << "\t\t\t\t4. About The Developers\n\n";
   /// Call an operation
   cout << "\t\t\t  Which Operation do you want to perform or ESC to Exit?: ";
   cin >> start_page_operation;

   while (1)
   {
   if (start_page_operation == '1') {
    /// Go to student info
        student_info();
        break;
   }
    else if (start_page_operation == '2')
        /// Go to teacher info
        break;
    else if (start_page_operation == '3') {
        /// Go to staff info
        staff_info();
        break;
    }
    else if (start_page_operation == '4') {
        /// Go to About Us
        about_developers();
        break;
    }
    else if ((int)start_page_operation == 27)
        break;
   }



    //getch();
}
