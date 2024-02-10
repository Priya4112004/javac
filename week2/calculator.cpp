# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: 1.Add\n 2.Subtract\n 3.Multiply\n 4.Division\n ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case 1:
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case 2:
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case 3:
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case 4:
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
