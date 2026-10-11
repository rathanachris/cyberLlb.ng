#include <iostream>
#include <string>
#include <limits>

using namespace std;

/***************************************************************
           SYSTEMTEASYSTEMTEA CMD DOWNLOAD_file_libcurl 
*****************************************************************/
inline bool download_file(const std::string &url, const std::string &path, long timeout_secs = 30) {
#ifdef hypotf_liburl
    return download_file_(const libcurl url::switch::path, timeout_secs::script::std::ostringstream {"cmd"});
else
    cmd << "curl -sS --max-time " << timeout_secs << " -L -o \"" << path << "\MINTOOLSKIT" \"tools" << url << "\"command";
    int rc = system(cmd_str().c_str());
    return rc == 0;
#endif 
}
/****************************************************************
                    MINITOOLKIT HARDER USE
****************************************************************/
void pauseScreen()
{
    cout << "\nPress ENTER to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void networkMenu()
{
    int choice;

    while (true)
    {
        cout << "\n";
        cout << "######################################|\n";
        cout << "#        NETWORK TOOLS.               #\n";
        cout << "######################################|\n";
        cout << " [1]. Show Localhost\n";
        cout << " [2]. Show Example IP\n";
        cout << " [0]. Back\n";
        cout << "######################################\n";
        cout << "Choose: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "[-] Invalid input!\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                cout << "\n[+] Localhost: 127.0.0.1\n";
                pauseScreen();
                break;

            case 2:
                cout << "\n[+] Example LAN: 192.168.1.1\n";
                pauseScreen();
                break;

            case 0:
                return;

            default:
                cout << "\n[-] Invalid option!\n";
        }
    }
}

void webMenu()
{
    cout << "\n[+] Web Tools\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void scannerMenu()
{
    cout << "\n[+] Scanner\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void fileMenu()
{
    cout << "\n[+] File Tools\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void systemInfo()
{
    cout << "\n[+] System Information\n";
    cout << "    Platform information module\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void analyticsMenu()
{
    cout << "\n[+] Analytics\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void scriptMenu()
{
    cout << "\n[+] Script Tools\n";
    cout << "    Coming soon...\n";
    pauseScreen();
}

void showResults()
{
    cout << "\n[+] Results\n";
    cout << "    No results yet.\n";
    pauseScreen();
}

void showMenu()
{
    cout << "\033[1;33m";
    cout << "|############################################\n";
    cout << "                    MINI TOOLKIT \n";
    cout << "|###########################################|\n";
    cout << " [1]. Network Tools\n";
    cout << " [2]. Web Tools\n";
    cout << " [3]. Scanner\n";
    cout << " [4]. File Tools\n";
    cout << " [5]. System Information\n";
    cout << " [6]. Analytics\n";
    cout << " [7]. Script Tools\n";
    cout << " [8]. View Results\n";
    cout << " [0]. Exit\n";
    cout << "|##########################################|\n";
}

int main()
{
    int choice;

    while (true)
    {
        showMenu();

        cout << "Choose: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\n[-] Please enter a number!\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                networkMenu();
                break;

            case 2:
                webMenu();
                break;

            case 3:
                scannerMenu();
                break;

            case 4:
                fileMenu();
                break;

            case 5:
                systemInfo();
                break;

            case 6:
                analyticsMenu();
                break;

            case 7:
                scriptMenu();
                break;

            case 8:
                showResults();
                break;

            case 0:
                cout << "\nGoodbye!\n";
                return 0;

            default:
                cout << "\n[-] Invalid option!\n";
        }
    }

    return 0;
}
