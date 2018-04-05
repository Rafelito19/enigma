#include <iostream>
#include <string>
#include <map>
using namespace std;

enigma(plugboard, rotor 1 2 3, reflector, message

class Rotor {
public:
	// data fields
	string name;
	int pos;
	map<int, char> notch;
	map<int, char> letter;
	// constructor, n is the rotor number
	Rotor(int n) { //(A,B,C) --> a_>B->c 
		string s;
		switch (n) {
			case (1):
			s = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
			notch[1] = 'Q';
			notch[2] = 'Q';
			break;
			case(2):
			s = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
			notch[1] = 'E';
			notch[2] = 'E';
			break;
			case(3):
			s = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
			notch[1] = 'V';
			notch[2] = 'V';
			break;
			case(4):
			s = "ESOVPZJAYQUIRHXLNFTGKDCMWB";
			notch[1] = 'J';
			notch[2] = 'J';
			break;
			case(5):
			s = "VZBRGITYUPSDNHLXAWMJQOFECK";
			notch[1] = 'Z';
			notch[2] = 'Z';
			break;
			case(6):
			s = "JPGVOUMFYQBENHZRDKASXLICTW";
			notch[1] = 'Z';
			notch[2] = 'M';
			break;
			case(7):
			s = "NZJHGRCXMYSWBOUFAIVLPEKQDT";
			notch[1] = 'Z';
			notch[2] = 'M';
			break;
			case(8):
			s = "FKQHTLXOCBJSPDZRAMEWNIUYGV";
			notch[1] = 'Z';
			notch[2] = 'M';
		}
		for (int i = 1; i < 27; i++)
				letter[i] = s[i - 1];
		name = "Rotor " + n;
	}
	
	Rotor(int a, int b, int c) {
		rotor(a);
		rotor(b);
		rotor(c);
		
	}
};

int main() {
	Rotor one(1);
	Rotor two(2);
	Rotor three(3);
}
