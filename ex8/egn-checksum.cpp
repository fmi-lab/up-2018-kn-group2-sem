#include <iostream>

using namespace std;

bool hasValidBirthDate(long long egnAsNumber) {
  return true;
}

bool hasValidMunicipality(long long egnAsNumber) {
  return true;
}

// if has
// if isValid
bool hasValidChecksum(long long egnAsNumber) {
  int egn[10];
  for (int i = 9; i >= 0; i--) {
    egn[i] = egnAsNumber % 10;
    egnAsNumber /= 10;
  }

  // configuration
  int weights[9] = {
    2, 4, 8, 5, 10, 9, 7, 3, 6
  };

  // Всяка цифра се умножава със съответното ѝ тегло
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    sum += egn[i] * weights[i];
  }

  // 239/11= _21_.72
  // 21 * 11 = 231
  // 239 - 231 = 8
  // 8 % 11

  // Сумата се дели на 11 с остатък, като от получената сума от коефициенти се изважда произведението на 11, умножено по цялата част на полученото при деление число.
  int newSum = sum - (sum / 11) * 11;

  // Сумата се дели на 11 с остатък.
  newSum = newSum % 11;

  // Ако остатъкът от делението е по-малък от 10, тогава той се взема като контролна цифра, иначе за контрол се взима цифрата 0
  int expectedDigit = newSum < 10 ? newSum : 0;

  return egn[9] == expectedDigit;
}

int main() {
  long long egn;
  cout << "Enter your EGN: ";
  cin >> egn;

  bool isEGNValid = hasValidBirthDate(egn) &&
                    hasValidMunicipality(egn) &&
                    hasValidChecksum(egn);

  if (isEGNValid) {
    cout << "The EGN is valid" << endl;
  } else {
    cout << "The EGN is NOT valid" << endl;
  }

  return 0;
}
