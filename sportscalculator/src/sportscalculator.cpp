//============================================================================
// Name        : sportscalculator.cpp
// Author      : Hans Glennford P. Romero
// Version     : August 28, 2024
// Copyright   : Copyright Hans Glennford P. Romero - 2024
// Description : An interface of sports calculators
//============================================================================

#include <iostream>
using namespace std;

int main(){
	int choice;
	cout << "Welcome to the random sports calculator!" << endl;
	cout << "Choose one of the calculators below by picking their corresponding number!" << endl;
	cout << "1: Baseball 9-inning ERA calculator" << endl;
	cout << "2: Football passer rating calculator" << endl;
	cout << "3: Basketball field goal percentage calculator" << endl;
	cout << "4: Soccer standings calculator" << endl;
	cin >> choice;
	if(choice==1){
		double earned_runs, innings;
		cout << "Please enter the earned runs allowed: " << endl;
		cin >> earned_runs;
		cout << "Please enter the total innings pitched: " << endl;
		cin >> innings;
		cout.precision(3);
		cout << "Your ERA is " << (earned_runs/innings)*9 << endl;
	}
	else if(choice==2){
		double a, b, c, d, attempts, completions, yards, touchdowns, interceptions, rating;
		cout << "Please enter the attempts" << endl;
		cin >> attempts;
		cout << "Please enter the completions" << endl;
		cin >> completions;
		cout << "Please enter the yards" << endl;
		cin >> yards;
		cout << "Please enter the touchdowns" << endl;
		cin >> touchdowns;
		cout << "Please enter the interceptions" << endl;
		cin >> interceptions;
		a = ((completions/attempts)-0.3)*5;
		b = ((yards/attempts)-3)*0.25;
		c = (touchdowns/attempts*20);
		d = 2.375-((interceptions/attempts)*25);
		rating = ((a+b+c+d)/6)*100;
		cout.precision(5);
		cout << "Your passer rating is " << rating << endl;
	}
	else if(choice==3){
		double percentage, attempts, field_goals;
		cout << "Please enter the attempts" << endl;
		cin >> attempts;
		cout << "Please enter the field goals made" << endl;
		cin >> field_goals;
		percentage = field_goals / attempts;
		cout.precision(5);
		cout << "Your field goal percentage is " << percentage << endl;
	}
	else if(choice==4){
		int wins, losses, ties, points;
		cout << "Please enter the number of games won" << endl;
		cin >> wins;
		cout << "Please enter the number of games lost" << endl;
		cin >> losses;
		cout << "Please enter the number of games ties" << endl;
		cin >> ties;
		cout << "Your soccer team's record" << endl;
		cout << wins << " wins " << losses << " losses " << ties << " ties " <<  endl;
		points = (wins*3)+(ties*1);
		cout << "For a total of " << points << " points " << endl;
	}
	else{
		cout << "Please use only the numbers 1-4. Please restart the program and try again!" << endl;
	}
}
