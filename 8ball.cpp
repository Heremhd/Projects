#include <iostream>
#include <random>
#include <time.h>
#include <cstdlib>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
//magic 8ball program

class Magic {
public:
	string result;
	string name;
	void roll() {
		srand(time(NULL));
		int rng;
		rng = (rand() % 20 + 1);
		if (rng == 1) {  //setting up a switch to give different options for the 8 ball to choose from
			this->result = "it is certain";
		}
		else if (rng == 2) {
			this->result = "It is decidedly so.";
		}
		else if (rng == 3) {
			this->result = "Without a doubt";
		}
		else if (rng == 4) {
			this->result = "Yes - definitely";
		}
		else if (rng == 5) {
			this->result = "You may rely on it.";
		}
		else if (rng == 6) {
			this->result = "As I see it, yes";
		}
		else if (rng == 7) {
			this->result = "Most likely.";
		}
		else if (rng == 8) {
			this->result = "Outlook good.";
		}
		else if (rng == 9) {
			this->result = "Yes.";
		}
		else if (rng == 10) {
			this->result = "Signs point to yes.";
		}
		else if (rng == 11) {
			this->result = "Reply hazy, try again.";
		}
		else if (rng == 12) {
			this->result = "Ask again later.";
		}
		else if (rng == 13) {
			this->result = "Better not tell you now.";
		}
		else if (rng == 14) {
			this->result = "Cannot predict now.";
		}
		else if (rng == 15) {
			this->result = "Concentrate and ask again.";
		}
		else if (rng == 16) {
			this->result = "Don't count on it";

		}
		else if (rng == 17) {
			this->result = "My reply is no.";
		}
		else if (rng == 18) {
			this->result = "My sources say no.";
		}
		else if (rng == 19) {
			this->result = "Highly skeptical.";
		}
		else if (rng == 20) {
			this->result = "Very doubtful.";
		}
	}
};
int main() {
	Magic ball;
	ball.name = "8ball";
	cout << "Hello, I am a magic ball named " << ball.name << " My prediction for you is\n";
	ball.roll();
	cout << ball.result;
	return 0;
}