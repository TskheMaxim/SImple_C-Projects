#include <iostream>
using namespace std;

float sum(float a, float b){
  float ans = a + b;
  return ans;
}

float subst(float a, float b){
  float ans = a - b;
  return ans;
}

float mult(float a, float b){
  float ans = a * b;
  return ans;
}

float div(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main(){
  int choice = 0;
  float num1, num2;
  while (choice != 5){
    cout << "\nChoose the operation you want to perform: \n"
             << "1. Sum\n"
             << "2. Subtract\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "5. Exit\n"
             << "Choice: ";
    cin >> choice;
    if (choice == 5){
      break;
    }

    if (choice >= 1 && choice <= 4) {
      cout << "Enter the 1st number: ";
      cin >> num1;
      cout << "Enter the 2nd number: ";
      cin >> num2;
    }
    switch(choice){
      case 1:
        cout<<"Answer: "<<sum(num1, num2)<<endl;
      break;
      case 2:
        cout<<"Answer: "<<subst(num1, num2)<<endl;
      break;
      case 3:
        cout<<"Answer: "<<mult(num1, num2)<<endl;
      break;
      case 4:
        cout<<"Answer: "<<div(num1, num2)<<endl;
      break;
      default:
        cout << "Invalid choice! Please select 1-5." << endl;
      break;
    }
  }
  cout<<"Executing the program...";
  return 0;
}