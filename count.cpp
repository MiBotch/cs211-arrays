#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size];
	i = nwhite = nother = 0;
              for (i = 0; i < 10; i++)
                    ndigit[i] = 0;
	char c;
	while ((c = src[i++]) != '\n')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;

	for (i = 0; i < size; ++i) {
	     cout << i << ": ";
	             for (int j = 1; j <= ndigit[i]; ++j)
		    cout << '*';
	     cout << endl;
	};
	cout << "white space: ";
	for (int i = 1; i <= nwhite; ++i)
	cout << '*';
	cout << endl;
	cout << "other: ";
	for (int i = 1; i <= nother; ++i)
	cout << '*';
}