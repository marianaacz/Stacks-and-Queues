#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<vector>
#include <stdexcept>
#include "stack.h"
#include "Node.h"
#include "queue.h"
using namespace std;


//----------------------MAIN-------------------------
int main() {
  string filename;
    ifstream file;
    string command;
    //int i;
    int data;
    int dataNumbers;
    vector<int>vNumbers;
    vector<string>vCommands;
    Stack stack;
    Queue queue;
    
    cout << "Mariana Acosta Zermeno" << endl;
    cout << "CS2420 Section 1" << endl;
    cout << "Program 2: Linked Lists" << endl;
    
    cout << "Enter the file name you would like to use:" << endl;
    cin >> filename;
    file.open(filename);
    while (file >> command){ 
      //cout << command ;
      vCommands.push_back(command);
      if ((command != "pop") && (command != "serve")){      file >> dataNumbers;
          //vCommands.push_back(command);
          vNumbers.push_back(dataNumbers);
          //cout << " " << dataNumbers;
      }
      //cout << endl;
     //cout << vCommands.size() << endl;
    }
     cout << "Operation" << " Stack" << " Value" << " Result" << endl;
    /*for (int i=0; i<vCommands.size();i++){
    cout << vCommands[i] << endl;
    }
    for (int i=0; i<vNumbers.size();i++){
    cout << vNumbers[i] << endl;
    }*/

    int n=0;
    for (int c = 0; c < vCommands.size(); ++c){
      if (vCommands.at(c) == "push"){
        cout << "push" << " \tstack "<< "\t" <<vNumbers.at(n) << "\tsuccess" << endl;
        stack.Push(vNumbers.at(n++));
      }
      else if(vCommands.at(c) == "pop"){
        cout << "pop" << "\tstack " << "\t --" << "\tsucccess" << endl;
        stack.Pop();
      }
      else if (vCommands.at(c)== "append"){
        cout << "append" << "\tqueue " << "\t"<< vNumbers.at(n) << "\tsuccess" << endl;
        queue.append(vNumbers.at(n++));
      }
      else if (vCommands.at(c) == "serve"){
        if (queue.empty()) {
          cout << "serve" << "\tqueue " << "\t--" << "\toverflow" << endl;
        //queue.serve();
        }
        else {
        cout << "serve" << "\tqueue " << "\t--" << "\tsucccess" << endl;
        queue.serve();
        }
        
      }
    }
  }
