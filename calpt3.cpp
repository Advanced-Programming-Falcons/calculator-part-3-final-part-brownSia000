#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int num1;
int num2;
char equation;
string calculation;
char option;

int main(void){
  do {
   cout << "Select one of the options\n (a)Calculations\n (b)History\n";
    cin >> option;
    if(option == 'b'){
      cout << calculation;
      continue;
    }
    else if (option == 'a'){
      string displayawnser;
      cout << "Input first number: ";
      cin >> num1;

      cout << "Input second number: ";
      cin >> num2;
    
      cout << "Input letter connected to the equation:\n(a) Addition\n(b) Subtraction\n(c) Multiplication\n(d) Division\n "<< endl;
      cin >> equation;  
      int awnser;


      if (equation == 'a'){
          awnser = num1 + num2;
          displayawnser = displayawnser + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser);
          calculation= calculation + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser) + '\n';
          cout << displayawnser << endl;
          continue;
        }
      else if (equation == 'b'){
          awnser = num1 - num2;
          displayawnser = displayawnser + to_string(num1) + '-' + to_string(num2) + '=' + to_string(awnser);
          calculation= calculation + to_string(num1) + '-' + to_string(num2) + '=' + to_string(awnser) + '\n';
          cout << displayawnser << endl;
          continue;
        }
      else if (equation == 'c'){
          awnser = num1 * num2;
          displayawnser = displayawnser + to_string(num1) + '*' + to_string(num2) + '=' + to_string(awnser);
          calculation= calculation + to_string(num1) + '*' + to_string(num2) + '=' + to_string(awnser) + '\n';
          cout << displayawnser << endl;
          continue;
        }
      else if (equation == 'd'){
          awnser = num1 / num2;
          displayawnser = displayawnser + to_string(num1) + '/' + to_string(num2) + '=' + to_string(awnser);
          calculation= calculation + to_string(num1) + '/' + to_string(num2) + '=' + to_string(awnser) + '\n';
          cout << displayawnser << endl;
          continue;
        }
      else{
          cout << "Invalid Input" << endl;
          continue;
        }
    }
    else{
      cout << "Invalid Input\n";
      continue;
    }
  }
  while (option != 'a'||option != 'b');
}
