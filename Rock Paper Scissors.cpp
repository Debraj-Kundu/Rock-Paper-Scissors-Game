#include<bits/stdc++.h>
using namespace std;

int randomfunc(int j)
{
    return rand() % j;
}

int main()
{
    srand(time(NULL));
    vector<int> skills = {0, 2, 1};
    vector<string> sets = {"ROCK", "PAPER", "SCISSOR"};
    string input;
    string check;
    while(1)
    {
        cout << "write one of the rock, paper or scissor : ";
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        random_shuffle(skills.begin(), skills.end(), randomfunc);
        string comp = sets[skills[0]];
        cout << "You played: " << input << " -> " << "Computer played: " << comp << endl;
        if(input == sets[skills[0]]){
            cout << "Draw" << endl;
            goto a;
        }
        if(input == "PAPER" && comp == "ROCK"){
            cout << "You Win!" << endl;
            goto a;
        }
        if(input == "SCISSOR" && comp == "PAPER")
        {
            cout << "You Win!" << endl;
            goto a;
        }
        if(input == "ROCK" && comp == "SCISSOR")
        {
            cout << "You Win!" << endl;
            goto a;
        }
        else{
            cout << "You Loose" << endl;
            goto a;
        }
a:
        cout << "If want another round press 'Yes' else 'No': " << endl;
        cin >> check;
        transform(check.begin(), check.end(), check.begin(), ::toupper);
        if(check == "YES")
            continue;
        exit(0);
    }

    return 0;
}
