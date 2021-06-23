# include <iostream>
# include <algorithm>
# include <vector>
# include <stdlib.h> // menggunakan sistem ("cls")
# include <conio.h> // menggunkan getch()

# define MAX_STACK 10


using namespace std;

int top = -1, z [11];

void push(int value)
{
    if ( top == 10)
    {
        cout << "\n Stack is Full or overflow! \n";     // ini adalah push untuk menambahkan item tumpukan 
    }
    else 
    {
        top++;
        z[top] = value;
    }
}

void Pop()
{
    if (top == -1)
    {
        cout << "\n Stack is Empty or Underflow! \n";   // ini adalah pop untuk mengambil item tumpukan 
    }
    else 
    {
        top --;
    }
}

void Display()
{
    if (top == -1)
    {
        cout << "\n nothing to display! \n";
    }
    else
    {
        cout << "\n Array is : \n";
        for(int i = 0; i <= top; i++)
        {
            cout << "\t" << z[i];
        }
    }
}

int main ()
{
    int value, choice;

    do
    {
        cout << "=============================================\n" << endl;
        cout << "           1120031033 Ririn Rindii           \n" << endl;
        cout << "                PROGRAM STACK                \n" << endl;
        cout << "=============================================\n" << endl;
        cout << "\n 1. PUSH \n 2. Pop \n 3. DISPLAY \n 4. Exit \n";
        cout << "=============================================\n" << endl;
        cout << "\n input Choice : \n";
        cin >> choice;

        
        system("cls");

        if (choice == 1)
        {
            cout << "\n Enter Value: ";
            cin >> value;
            push(value);
        }

        if (choice == 2)
        {
            Pop();
        }

        if (choice == 3)
        {
            Display();
        }
        if (choice == 4)
        {
             cout << "\n Enter Value: ";
            cin >> value;
            push(value);
        }
        if (choice == 5)
        {
            Pop();
        }
        if (choice == 6)
        {
            Display();
        }
        if (choice == 7)
        {
            cout << "\n Enter Value: ";
            cin >> value;
            push(value);
        }
        if (choice == 8)
        {
            Pop();
        }
        if (choice == 9)
        {
            Display();
        }
        if (choice == 10)
        {
            cout << "\n Enter Value: ";
            cin >> value;
            push(value);
        }
    }while(choice != 11);

    cout << "\n\n\n E X I T I N G ..............\n";
    cout << "\n\n\n thank you very much from ririn happy learning friends :)";
}