#include <cctype>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;


int compute_calibration(string filename) {
  int sum{0};
  int num{0};
  string line{""};
  string digits{""};
  ifstream calibration_file(filename);

  getline(calibration_file, line, '\n');
  while (!line.empty()) {
    for (auto it = line.begin(); it != line.end(); ++it) {
      if (isdigit(*it)) {
	digits.push_back(*it);
      }
    }

    // cast num_string from character array into string (c-style)
    char num_string[] = {digits.front(), digits.back()};
    num = stoi(string(num_string), nullptr, 10);
    cout << num << endl;
    sum += num;

    digits = "";
    getline(calibration_file, line, '\n');
  }

  return sum;
}


int main(int argc, char** argv) {
  string filename{argv[1]};
  int calibration = compute_calibration(filename);
  cout << "Sum of calibrations is: " << calibration << endl;
}
