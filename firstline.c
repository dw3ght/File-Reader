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

    string n = "";
    int counter = 0;
    bool found = false;
    
    //int rep of '\'
    int var = 92;
    
    //creating char text to keep characters of the text
    while (file)

    {

      
      // read file character by character 
        file.read((char *)&text, sizeof(text));

	// if case '\n' is found, then we leave the loop
	if ( text == '\n')

        {
	  found = true;
	  break;

        }

        //adding text to string
	n += text;
	counter++;
	
    }

    if (found == false) {
      std::string str2 = n.substr (1, counter-1);
    }

    //adding '\n'
    n += (char)var;
    n += 'n';
    cout << n << endl;
    
    // closing the file
    file.close();

    return 0;

}

