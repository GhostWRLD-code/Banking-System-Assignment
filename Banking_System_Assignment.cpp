#include <iostream>

using namespace std;

string user_name = "alfani";
string password = "123qwe";
int tries = 1;
int menu_option;
double balance = 5400;
double withdraw, deposit, cash_send;
int name_choice;
int account_numbers [3] = {10000, 20000, 30000};
string account_names [3] = {"Gift", "Gloire", "Malcom"};
int pin [3] = {100, 200, 300};
double recipient_balance [3] = {2500, 32400, 430};
string yes_or_no;

bool login(){
    cout<<"--------------- LOGIN PAGE ---------------\n"<<endl;
    cout<<"Enter Your User Name: ";
    cin>>user_name;

    cout<<"Enter Your Password: ";
    cin>>password;

    while ((user_name != "alfani" || password != "123qwe") && tries < 3){
        if (tries == 3) break;
    // the above line ensures a break when tries are over
        cout<<"\nPassword or name is incorrect!!"<<endl;
        cout<<"Enter Your User Name: ";
        cin>>user_name;

        cout<<"Enter Your Password: ";
        cin>>password;


        tries++;
    }
    return (user_name == "alfani" && password == "123qwe");
    //the above line returns true if the password and user name are correct, and false if they are wrong

}

void menu(){
    cout<<"\n----------------- MENU -----------------"<<endl;
    cout<<"\n1. Check Balance"<<endl;
    cout<<"2. send Cash"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter 1-5: ";
    cin>>menu_option;
}

void checkBalance(){
    cout<<"\n----------------- BALANCE -----------------"<<endl;
    cout<<"\nBalance: R"<<balance<<endl;
}


void cashSend(){
        cout<<"\n----------------- CASH SEND -----------------"<<endl;
        cout<<"\nCHOOSE RECIPIENT"<<endl;
        cout<<"1. Gift"<<endl;
        cout<<"2. Gloire"<<endl;
        cout<<"3. Malcom"<<endl;
        cout<<"Enter 1-3: ";
        cin>>name_choice;


        switch (name_choice){
        case 1:
            cout<<"\nConfirm "<<account_names[0]<<"'s Information"<<endl;
            cout<<"\nName         : "<<account_names[0]<<endl;
            cout<<"Account Number : "<<account_numbers[0]<<endl;

            cout<<"\nEnter Amount to Send (R): ";
            cin>>cash_send;

            if (cash_send > balance){
                cout<<"\nYOU CANNOT SEND MORE MONEY THAN YOU OWN!!"<<endl;
                cout<<"Cash Send Unsuccessful!"<<endl;
            }

            else{
                balance = balance - cash_send;
                cout<<"\nCash Send Successful!!"<<endl;
                cout<<"Would You Like a Receipt/Proof of Payment (yes or no): ";
                cin>>yes_or_no;

                if (yes_or_no == "yes" || yes_or_no == "YES"){
                    cout<<"\n================= PROOF OF PAYMENT ================="<<endl;
                    cout<<"\nAmount Sent:       R"<<cash_send<<endl;
                    cout<<"Recipient Name:     "<<account_names[0]<<endl;
                    cout<<"Account Number :    "<<account_numbers[0]<<endl;
                    cout<<"Remaining Balance:  "<<balance<<endl;
                    cout<<"\n====================================================\n"<<endl;
                }
                else if (yes_or_no == "no" || yes_or_no == "NO"){
                    cout<<""<<endl;
                }
                else{
                    cout<<"\nInvalid Input. We Take Your Input As a No."<<endl;
                }
            }
            break;

        case 2:
            cout<<"\nConfirm "<<account_names[1]<<"'s Information"<<endl;
            cout<<"\nName         : "<<account_names[1]<<endl;
            cout<<"Account Number : "<<account_numbers[1]<<endl;
            cout<<"PIN            : "<<pin[1]<<endl;

            cout<<"\nEnter Amount to Send (R): ";
            cin>>cash_send;

            if (cash_send > balance){
                cout<<"\nYOU CANNOT SEND MORE MONEY THAN YOU OWN!!"<<endl;
                cout<<"Cash Send Unsuccessful!"<<endl;
            }

            else{
                balance = balance - cash_send;
                cout<<"\nCash Send Successful!!"<<endl;
                cout<<"Would You Like a Receipt/Proof of Payment (yes or no): ";
                cin>>yes_or_no;

                if (yes_or_no == "yes" || yes_or_no == "YES"){
                    cout<<"\n================= PROOF OF PAYMENT ================="<<endl;
                    cout<<"\nAmount Sent:       R"<<cash_send<<endl;
                    cout<<"Recipient Name:     "<<account_names[1]<<endl;
                    cout<<"Account Number :    "<<account_numbers[1]<<endl;
                    cout<<"Remaining Balance:  "<<balance<<endl;
                    cout<<"\n====================================================\n"<<endl;
                }
                else if (yes_or_no == "no" || yes_or_no == "NO"){
                    cout<<""<<endl;
                }
                else{
                    cout<<"\nInvalid Input. We Take Your Input As a No."<<endl;
                }
            }
            break;
        case 3:
            cout<<"\nConfirm "<<account_names[2]<<"'s Information"<<endl;
            cout<<"\nName         : "<<account_names[2]<<endl;
            cout<<"Account Number : "<<account_numbers[2]<<endl;
            cout<<"PIN            : "<<pin[2]<<endl;

            cout<<"\nEnter Amount to Send (R): ";
            cin>>cash_send;

            if (cash_send > balance){
                cout<<"Cash Send Unsuccessful!"<<endl;
                cout<<"\nYou Cannot Send More Money Than You Own!"<<endl;
                cout<<"Please Check Your Balance Before You Attempt Again!"<<endl;
            }

            else{
                balance = balance - cash_send;
                cout<<"\nCash Send Successful!!"<<endl;
                cout<<"Would You Like a Receipt/Proof of Payment (yes or no): ";
                cin>>yes_or_no;

                if (yes_or_no == "yes" || yes_or_no == "YES"){
                    cout<<"\n================= PROOF OF PAYMENT ================="<<endl;
                    cout<<"\nAmount Sent:       R"<<cash_send<<endl;
                    cout<<"Recipient Name:     "<<account_names[2]<<endl;
                    cout<<"Account Number :    "<<account_numbers[2]<<endl;
                    cout<<"Remaining Balance:  "<<balance<<endl;
                    cout<<"\n====================================================\n"<<endl;
                }
                else if (yes_or_no == "no" || yes_or_no == "NO"){
                    cout<<""<<endl;
                }
                else{
                    cout<<"\nInvalid Input. We Take Your Input As a No."<<endl;
                }
            }
            break;
            default: {
                cout<<"\nWhy Are You Putting Your Own Things?"<<endl;
                cout<<"You Have To Start All Over Now."<<endl;
                break;
            }
        }

}

void deposit_display(){
    cout<<"\n----------------- DEPOSIT -----------------"<<endl;
    cout<<"\nEnter Deposit Amount (R): ";
    cin>>deposit;

    if (deposit > 25000){
        cout<<"\nDeposit Limit Exceeded! The Maximum Deposit Amount is R25 000."<<endl;

    }
    else if(deposit <= 0){
        cout<<"\nInvalid Input!! You Cannot Deposit a Negative Amount."<<endl;
    }
    else{
        balance = balance + deposit;
        cout<<"\nDeposit Successful!!"<<endl;
        cout<<"\nDeposit Amount:         R"<<deposit<<endl;
        cout<<"Remaining Balance:          R"<<balance<<endl;
    }
}

void withdrawal(){
    cout<<"\n----------------- WITHDRAWAL -----------------"<<endl;
    cout<<"\nEnter Withdrawal Amount (R): ";
    cin>>withdraw;

    if (withdraw <= 0){
        cout<<"\nInvalid Amount!! You Cannot withdraw a Negative Number."<<endl;
    }
    else if(withdraw > 5000){
        cout<<"\nWithdrawal Limit Exceeded! The Maximum Withdrawal is R5 000."<<endl;
    }
    else if (withdraw > balance){
        cout<<"\nInsufficient Funds!"<<endl;
        cout<<"Please Check Your Balance Before You Attempt Again!"<<endl;
    }
    else{
        balance = balance - withdraw;
        cout<<"\nWithdrawal Successful!!"<<endl;
        cout<<"\nAmount Withdrawn:         R"<<withdraw<<endl;
        cout<<"Remaining Balance:             R"<<balance<<endl;
    }

}

void exit(){
    cout<<"\nWe Wish You More Money!!"<<endl;
    cout<<"Enjoy The Rest of Your Day!"<<endl;
}


int main()
{
    cout<<"=================== M O N E Y  B A N K ===================\n\n";

    if (login()){
            //the if statement only runs if the login results was true
        do {
            menu();
            if (menu_option >= 1 && menu_option <= 4){
                switch (menu_option){
                case 1:
                    checkBalance();
                    break;

                case 2:
                   cashSend();
                   break;
                case 3:
                    deposit_display();
                    break;
                case 4:
                    withdrawal();
                    break;
                default:
                    cout<<"\nInvalid Input!"<<endl;
                    cout<<"Try Again."<<endl;
                    break;
            }
            }

        }while (menu_option != 5 && menu_option <= 5);
    }
        else{
            cout<<"\nToo Many Attempts!! Access Denied!!"<<endl;

            }
    exit();
    cout<<"=========================================================="<<endl;
    return 0;
}
