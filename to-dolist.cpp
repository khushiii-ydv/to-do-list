#include <iostream>
#include <windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout<<"Taska To Do :" <<endl;
    cout<<"-------------------------------------------"<< endl;
    for(int i=0;i<task_count;i++)
    {
        cout<<" Tasks "<<i<< " : "<<tasks[i]<<endl;
    }
    cout<<"-------------------------------------------"<< endl;
}

int main()
{
    system("color a");
    string tasks[10] = {""};

    //counter var-> know how many taske we have

    int task_count = 0;

    int option = -1;
    while (option != 0)
    {
        //we will make menu
        cout<<"--- To Do List ---"<<endl;
        cout<<"1 - To add new Tasks "<<endl;
        cout<<"2 - To view Tasks"<<endl;
        cout<<"3 - Delete the Tasks"<<endl;
        cout<<"0 - Terminate the program"<<endl;
        cin>> option;

        switch(option)
        {
            case 1:
            {
                if (task_count > 9)
                {
                    cout<<" ``` TASK LISE IS FULL"<< endl;
                }
                else{
                    cout<< " Enter A new Task "<< endl;
                    cin.ignore();
                    getline(cin,tasks[task_count]); //get line is a funcion in string which is used to get new line or paragraph
                    task_count++;
                }
                break;
            } 
            case 2:
            {
                system("cls");
                print_tasks(tasks,task_count);
                break;
            }
            case 3:
            {
                system("cls");
                print_tasks(tasks,task_count);
                int del_task = 0;
                cout<<" Enter A task to delete :  ";
                cin>>del_task;

                if(del_task<0 || del_task>9)
                {
                    cout<< " You Entered Invalid Task No. "<<endl;
                    break;
                }
                for(int i = del_task ; i< task_count ; i++)
                {
                    tasks[i] = tasks[i+1];
                }
                task_count = task_count -1;
                break;
            }
            case 0:
            cout<<"Terminating the Program ---  -----   --------"<<endl;
            break;

            default:
            cout<<" You Entered INVALID VALUE " <<endl;
        }
    }
}