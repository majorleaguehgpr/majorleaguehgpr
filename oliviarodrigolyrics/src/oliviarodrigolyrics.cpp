//============================================================================
// Name        : oliviarodrigolyrics.cpp
// Author      : Hans Glennford P. Romero
// Version     : August 28, 2024
// Copyright   : Copyright Hans Glennford P. Romero - 2024
// Description : An interface to choose an Olivia Rodrigo song and view its lyrics
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int album;
	cout << "Hello!" << endl;
	cout << "Welcome to the Olivia Rodrigo album lyrics search!" << endl;
	cout << "Please press 1 for SOUR!" << endl;
	cout << "Please press 2 for GUTS (spilled)!" << endl;
	cout << "Source of all lyrics: AZLyrics" << endl;
	cin >> album;
	if(album==1){
		int song;
		cout << "Please press 1 for brutal!" << endl;
		cout << "Please press 2 for traitor!" << endl;
		cout << "Please press 3 for drivers license!" << endl;
		cout << "Please press 4 for 1 step forward, 3 steps back!" << endl;
		cout << "Please press 5 for deja vu!" << endl;
		cout << "Please press 6 for good 4 u!" << endl;
		cout << "Please press 7 for enough for you!" << endl;
		cout << "Please press 8 for happier!" << endl;
		cout << "Please press 9 for jealousy, jealousy!" << endl;
		cout << "Please press 10 for favorite crime!" << endl;
		cout << "Please press 11 for hope ur ok!" << endl;
		cin >> song;
		if(song==1){
			string line;
			  ifstream myfile ("brutal.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
		}
		if(song==2){
			string line;
			  ifstream myfile ("traitor.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==3){
			string line;
			  ifstream myfile ("driverslicense.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==4){
			string line;
			  ifstream myfile ("1sf3sb.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==5){
			string line;
			  ifstream myfile ("dejavu.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==6){
			string line;
			  ifstream myfile ("good4u.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==7){
			string line;
			  ifstream myfile ("enoughforyou.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==8){
			string line;
			  ifstream myfile ("happier.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==9){
			string line;
			  ifstream myfile ("jealousyjealousy.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==10){
			string line;
			  ifstream myfile ("favoritecrime.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
		if(song==11){
			string line;
			  ifstream myfile ("hopeurok.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
	}
	else if(album==2){
		int song;
		cout << "Please press 1 for all-american bitch!" << endl;
		cout << "Please press 2 for bad idea right?" << endl;
		cout << "Please press 3 for vampire!" << endl;
		cout << "Please press 4 for lacy!" << endl;
		cout << "Please press 5 for ballad of a homeschooled girl!" << endl;
		cout << "Please press 6 for making the bed!" << endl;
		cout << "Please press 7 for logical!" << endl;
		cout << "Please press 8 for get him back!" << endl;
		cout << "Please press 9 for love is embarrassing!" << endl;
		cout << "Please press 10 for the grudge!" << endl;
		cout << "Please press 11 for pretty isn't pretty!" << endl;
		cout << "Please press 12 for teenage dream!" << endl;
		cout << "Please press 13 for obsessed!" << endl;
		cout << "Please press 14 for girl i've always been!" << endl;
		cout << "Please press 15 for scared of my guitar!" << endl;
		cout << "Please press 16 for stranger!" << endl;
		cout << "Please press 17 for so american!" << endl;
		cin >> song;
		if(song==1){
			string line;
			  ifstream myfile ("aab.txt");
			  if (myfile.is_open())
			  {
			    while ( getline (myfile,line) )
			    {
			      cout << line << '\n';
			    }
			    myfile.close();
			  }

			  else cout << "Unable to open file";

			  return 0;
				}
				if(song==2){
					string line;
					  ifstream myfile ("badidearight.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==3){
					string line;
					  ifstream myfile ("vampire.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==4){
					string line;
					  ifstream myfile ("lacy.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==5){
					string line;
					  ifstream myfile ("boahg.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==6){
					string line;
					  ifstream myfile ("makingthebed.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==7){
					string line;
					  ifstream myfile ("logical.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==8){
					string line;
					  ifstream myfile ("gethimback.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==9){
					string line;
					  ifstream myfile ("loveisembarrassing.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==10){
					string line;
					  ifstream myfile ("thegrudge.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
						}
				if(song==11){
					string line;
					  ifstream myfile ("prettyisntpretty.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
				}
				if(song==12){
					string line;
					  ifstream myfile ("teenagedream.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
				}
				if(song==13){
					string line;
					  ifstream myfile ("obsessed.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
										}
				if(song==14){
					string line;
					  ifstream myfile ("girlivealwaysbeen.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
										}
				if(song==15){
					string line;
					  ifstream myfile ("scaredofmyguitar.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
										}
				if(song==16){
					string line;
					  ifstream myfile ("stranger.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
								}
				if(song==17){
					string line;
					  ifstream myfile ("soamerican.txt");
					  if (myfile.is_open())
					  {
					    while ( getline (myfile,line) )
					    {
					      cout << line << '\n';
					    }
					    myfile.close();
					  }

					  else cout << "Unable to open file";

					  return 0;
								}
	}
	else{
		cout << "Please choose 1 or 2 only. Please restart the program and try again!" << endl;
	}
}
