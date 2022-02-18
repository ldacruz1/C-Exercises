#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand (time(0));

	string user_question = "";

	string user_continuation = "";

	bool user_exit = false;

	const int SIZE = 12;

	string responses[SIZE];

	responses[0] = "Yes, of course!";
	responses[1] = "Without a doubt, yes.";
	responses[2] = "You can count on it.";
	responses[3] = "For sure!";
	responses[4] = "Ask me later.";
	responses[5] = "I'm not sure...";
	responses[6] = "I can't tell you right now.";
	responses[7] = "I'll tell you after my nap. Zzzzzz.";
	responses[8] = "No way!";
	responses[9] = "I don't think so.";
	responses[10] = "Without a doubt... no";
	responses[11] = "The answer is very clearly NOOOOO";

    cout << "      THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";
    while(!user_exit)
    {
        cout << "\n Enter a question below, so that I might answer it:\n" ;

        getline(cin, user_question);

        if(user_continuation == "yes") user_exit = true;
        if(user_question.compare("") != 0 && user_question.compare("yes") != 0)
        {
             cout << responses[ rand() % SIZE] << "\n";
             cout << "Enter yes or no to continue: ";
        getline(cin, user_continuation);
        }
    }
    cout << "          THE MAGIC 8-BALL NOW DEPARTS!\n";
    return 0;
}
