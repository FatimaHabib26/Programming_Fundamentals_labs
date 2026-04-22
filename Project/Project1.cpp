#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bus_numbers = 100;

    // Data Structures;
    int busNo[bus_numbers] = {101, 102, 103};
    string route[bus_numbers] = {"Lahore-Islamabad", "Karachi-Lahore", "Peshawar-Islamabad"};
    string time[bus_numbers] = {"08:00AM", "02:00PM", "06:00PM"};
    int totalSeats[bus_numbers] = {40, 35, 45};
    int bookedSeats[bus_numbers] = {0};
    int currentBus = 3;

    // history
    string history[200];
    int historyIndex = 0;

    // CURD Create, Read, Update, Delete;
    while (true)
    {
        // Main Header
        system("cls");
        cout << "============================================================" << endl;
        cout << " ================ TRANSPORT MANAGEMENT SYSYTEM =============" << endl;
        cout << "============================================================" << endl;

        cout << "======User Menue=====" << endl;
        cout << "1. Admin " << endl;
        cout << "2. Passenger " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option: " << endl;
        int userOption;
        cin >> userOption;

        cout << "You choose :" << userOption << endl;
        if (userOption == 1)
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menue : Login attempt" << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter passwoard : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Successfully";

                    while (true)
                    {
                        system("cls");
                        // admin menu options
                        cout << "=======ADMIN MENUE======" << endl;
                        cout << "1. Add Bus " << endl;
                        cout << "2. View Buses " << endl;
                        cout << "3. Search Bus " << endl;
                        cout << "4. Update Bus " << endl;
                        cout << "5. Delete Bus " << endl;
                        cout << "6. Logout     " << endl;

                        cout << "Enter your choice: ";
                        int adminOption;
                        cin >> adminOption;
                        // add bus
                        if (adminOption == 1)
                        {
                            cout << "Enter Bus Number: ";
                            cin >> busNo[currentBus];

                            cout << "Enter Route: ";
                            cin >> route[currentBus];

                            cout << "Enter Departure time: ";
                            cin >> time[currentBus];

                            cout << "Enter Total Seats: ";
                            cin >> totalSeats[currentBus];

                            bookedSeats[currentBus] = 0;
                            currentBus++;

                            cout << "Bus Added Successfully" << endl;
                        }
                        // view buses
                        else if (adminOption == 2)
                        {
                            cout << "\nbusNo\tRoute\t\ttime\tSeats\tBooked " << endl;
                            for (int i = 0; i < currentBus; i++)
                            {
                                if (busNo[i] != 0)
                                {
                                    cout << busNo[i] << "\t"
                                         << route[i] << "\t"
                                         << time[i] << "\t"
                                         << totalSeats[i] << "\t"
                                         << bookedSeats[i] << endl;
                                }
                            }
                        }
                        // search bus
                        else if (adminOption == 3)
                        {
                            int num;
                            cout << "Enter bus number : ";
                            cin >> num;

                            bool found = false;
                            for (int i = 0; i < currentBus; i++)
                            {
                                if (busNo[i] == num)
                                {
                                    cout << "Bus Found";
                                    cout << "Route : " << route[i] << endl;
                                    cout << "Time : " << time[i] << endl;
                                    cout << "Available Seats: "
                                         << (totalSeats[i] - bookedSeats[i]) << endl;

                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Bus not Found" << endl;
                            }
                        }
                        // update bus
                        else if (adminOption == 4)
                        {
                            int num;
                            cout << "Enter bus number to update:";
                            cin >> num;

                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < currentBus; i++)
                            {
                                if (busNo[i] == num)
                                {
                                    foundIndex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "Enter new route:";
                                cin >> route[foundIndex];

                                cout << "Enter new time: ";
                                cin >> time[foundIndex];

                                cout << "Enter new seats: ";
                                cin >> totalSeats[foundIndex];

                                cout << "Bus Updated Successfully" << endl;
                            }
                            else
                            {
                                cout << "Bus not found" << endl;
                            }
                        }

                        // delete bus
                        else if (adminOption == 5)
                        {
                            int num;
                            cout << "Enter bus number to delete: ";
                            cin >> num;

                            bool found = false;
                            int foundIndex = -1;

                            for (int i = 0; i < currentBus; i++)
                            {
                                if (busNo[i] == num)
                                {
                                    foundIndex = i;
                                    found = true;
                                }
                            }

                            if (found == true)
                            {
                                busNo[foundIndex] = 0;
                                route[foundIndex] = "";
                                time[foundIndex] = "";
                                totalSeats[foundIndex] = 0;
                                bookedSeats[foundIndex] = 0;

                                cout << "Bus Deleted Successfully" << endl;
                            }
                            else
                            {
                                cout << "Bus not found" << endl;
                            }
                        }

                        else if (adminOption == 6)
                        {
                            break;
                        }

                        cout << "Press any key to continue...";
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Invalid username or password" << endl;
                    getch();
                }
            }
        }
        // ==== PASSENGER =====
        else if (userOption == 2)
        {
            int myBus = -1;

            while (true)
            {
                system("cls");

                cout << "=====Passenger Menu======" << endl;
                cout << "1.View Buses" << endl;
                cout << " 2.Book Seat" << endl;
                cout << "3.Cancel Booking" << endl;
                cout << "4.My Booking" << endl;
                cout << "5.History" << endl;
                cout << "6.Exit" << endl;

                cout << "Enter your choice :";
                int choice;
                cin >> choice;

                // view buses
                if (choice == 1)
                {
                    cout << "BusNo  Route  Time  Available" << endl;
                    for (int i = 0; i < currentBus; i++)
                    {
                        if (busNo[i] != 0)
                        {
                            cout << busNo[i] << "  "
                                 << route[i] << "  "
                                 << time[i] << "  "
                                 << (totalSeats[i] - bookedSeats[i]) << endl;
                        }
                    }
                }
                // booking
                else if (choice == 2)
                {
                    int num;
                    cout << "Enter bus number: ";
                    cin >> num;

                    bool found = false;

                    for (int i = 0; i < currentBus; i++)
                    {
                        if (busNo[i] == num)
                        {
                            found = true;

                            if (bookedSeats[i] < totalSeats[i])
                            {
                                bookedSeats[i]++;
                                myBus = i;

                                cout << "Seat booked! " << endl;

                                history[historyIndex++] =
                                    "Booked Bus " + to_string(busNo[i]) + " at " + time[i];
                            }
                            else
                            {
                                cout << "Bus is full" << endl;
                            }
                        }
                    }

                    if (!found)
                        cout << "Bus not found" << endl;
                }

                // cancel booking
                else if (choice == 3)
                {
                    if (myBus != -1)
                    {
                        bookedSeats[myBus]--;
                        cout << "Booking cancelled" << endl;

                        history[historyIndex++] =
                            "Cancelled Bus " + to_string(busNo[myBus]);

                        myBus = -1;
                    }
                    else
                    {
                        cout << "No booking yet" << endl;
                    }
                }

                // my booking
                else if (choice == 4)
                {
                    if (myBus != -1)
                        cout << "Your Bus: " << busNo[myBus] << " at " << time[myBus] << endl;
                    else
                        cout << "No booking" << endl;
                }

                // history
                else if (choice == 5)
                {
                    cout << " History :" << endl;
                    if (historyIndex == 0)
                        cout << "No history yet" << endl;

                    for (int i = 0; i < historyIndex; i++)
                        cout << history[i] << endl;
                }

                // exit
                else if (choice == 6)
                {
                    break;
                }
                cout << "Press any key..." << endl;
                getch();
            }
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong option" << endl;
        }
    }
    cout << "Thanks for using this software" << endl;
    return 0;
}
