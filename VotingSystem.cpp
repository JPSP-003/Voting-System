#include <bits/stdc++.h>
#include<string>
using namespace std;
class vote
        {
        int voteid[100],i,n;
        string name[100];
        public:
        void getdetails()
        {
        cout<<"Enter The Number of Person To Participate";
        cin>>n;
        for (i=0;i<n;i++)
        {
          cout<< "Enter Your VoterID";
          cin>>voteid[i];
          cout<<"Enter Your Name";
          cin>>name[i];
        }
        }
        void printdetails()
        {
       cout<<"Election is started:\n";
      
        }
        };
int main()
{
    vote v;
    v.getdetails();
    v.printdetails();
	int choice, i, N;
	string p="p12LK90",pa="M14FR7l",pas="AS89F4h";
	cout<<"The password for voting is:\n"<<p;
	// Stores the names of candidates
	vector<string> candidates
		= { "DMK", "ADMK", "BJP", "CONGRESS", "MDMK" };
	N = candidates.size();

	// Stores the votes of candidates
	vector<int> votes(N);
	do {
		cout << "\n1. Vote for your "
			<< "favorite Candidate.\n";
		cout << "2. Check the number "
			<< "of votes of each "
				"Candidate.\n";
		cout << "3. Check the candidate "
			<< "who is leading.\n";
		cout << "0. Exit\n";

		// Take input of options
		cout << "Enter Your choice: ";
		cin >> choice;
		cout << "\n";

		// Switch Statement
		switch (choice) {

		case 1: {
			int candidatechoice;
			string password;
			e:
			{
			cout<<"enter the password for voting";
            cin>>password;
            if(password==p)
            {
			for (i = 0; i < N; i++)
				cout << i + 1 << "."
					<< candidates[i]
					<< "\n";

			cout << "Choose your candidate: ";

			// Taking user's vote
			cin >> candidatechoice;
			cout << "\n";

			// Update the vote of the
			// chosen candidate
			votes[candidatechoice - 1]++;
			break;
            }
            else
            {
                cout<<"your password is mismatch:\n";
                goto e;
            }
            }
		}
		case 2: {
            string passwd;
            b:
            cout<<"Enter your password for checking Votes:";
            cin>>passwd;
            if(passwd==pa)
            {
			for (i = 0; i < N; i++)
				cout << i + 1 << "."
					<< candidates[i] << " "
					<< votes[i] << "\n";
			break;
            }
            else
            {
                cout<<"Incorrect Details!!:\n";
                goto b;
            }
		}
case 3: {
			int mx = 0;
			string winner,pass;
			c:
			{
           	cout<<"enter the password for check winner";
            cin>>pass;
			if(pass==pas)
			{
			for (int i = 0; i < N; i++)
				if (votes[i] > mx) {
					mx = votes[i];
					winner = candidates[i];
				}
			int flag = 0;
			for (int i = 0; i < N; i++)
				{
				if (votes[i] == mx
					&& winner != candidates[i]) {
				flag = 1;
				break;
				}
				}
			if (!flag)
				cout << "The current winner is "
				<< winner << ".\n";
			else
				cout << "No clear winner\n";
			}
		else
		{
		    cout<<"incorrect password:\n";
		    goto c;
		}
			}
		}
}
		
	} while (choice != 0);

	return 0;
}

