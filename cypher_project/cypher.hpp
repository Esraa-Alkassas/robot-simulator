#ifndef CYPHER_HPP
#define CYPHER_HPP
#include <vector>     //ليه دا هيدر يعني!!

class cypher
{
	private:
		//attributes
		string sentence;
		string encodedmessage;
		int r;     // مش كدا هما ب جاربج فاليو ؟!
		int c;
		vector <string> messageQueue;
		vector <string> messageQueueChunks;
		
		
		// methods
		void normalizeText ();
		void CalcDim (const int length);
		void split String ();
		void spaceAdd (const int noOfspaces);
		void encodeMessage ();
		
		
	public:
		cypher ();
		cypher (string sentence);
		
		void SquareCypher ();
		void printEncodedMessage ();
		void printRect ();
		void printChunks ();
};





#endif