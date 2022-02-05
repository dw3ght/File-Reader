#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()

{

    ifstream file;

    //opening specified file
    //name of file here. plz mention Complete path if file is not at root
    file.open("filename");

    //creating char text to keep characters of the text
    char text;

    // initializing variables to keep length of lines
    int prevLength = 0;

    int nextLength = 0;

    //while loop until the file reaches the end
    while (file)

    {
      
        // read file character by character
        file.read((char *)&text, sizeof(text));

	// if statement checking for '\n'
        if ( text == '\n')

        {
	  
            // up dating which line is longer	  
            if ( nextLength > prevLength )

            {
	      prevLength = nextLength;
		
            }

            // setting back to 0 to count nextlines
            nextLength = 0;
        }

        else

        {

            // increment until '\n\ is found
            nextLength++;

        }

    }

    //if the last line is longest then it will become the newest longest line    
    if ( nextLength > prevLength )

    {

        prevLength = nextLength - 1;

    }

    string a = "";
    a += '\\';
    a += 'n';

    
    cout << prevLength << a << endl;

    // closing the file
    file.close();

    return 0;

}
