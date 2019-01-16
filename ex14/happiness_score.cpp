#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

/*

Напишете програма, която прочита от стандартния вход tweet и връща happiness score-а му.

Конфигурацията на програмата трябва да включва:
  - речник с думи и техния happiness score (double).
  - списък с думи, които са отрицания

Happiness Score Calculation
--- --- --- --- --- --- ---
Ако дадена дума не е част от речника, нейният happiness score е 0.

Ако преди дадена дума имаме отрицание, обръщаме знака на найния happiness score.

Happiness score-а на един tweet е сумата на happiness score-а на всяка дума в него.

Ако score-ът е положителен, изведете ":)"
Ако score-ът е отрицателен, изведете ":("
Ако score-ът е 0, изведете ":|"


Test Data
---
happy
bad
happy bad
ala bala

goodness
notgood
notbadd
the good, the bad, the happy and unhappy
not good
not bad
That's not bad at all. It's pretty good actually
*/

const char* words[] = {
  "good",
  "bad",
  "happy",
  "unhappy",
  "sad"
};

double wordsHappinessScore[] = {
  1,
  -1,
  1.1,
  -0.9,
  -1.5
};

const int SCORED_WORDS_COUNT = 5;

const char* negations[] = {
  "no",
  "not"
};

const int NEGATIONS_COUNT = 2;


bool isEndOfWordChar(char x) {
  return x == ' ' || x == '!' || x == ',' || x == '?' || x == '.';
}

/*
  returns pointer to the word end if there are more words or
          NULL if no more words
*/
const char * findNextWord(const char * text, char * word) {
  int i = 0;

  while (*(text) != '\0' && isEndOfWordChar(*(text))) {
    text++;
  }

  if (*text == '\0') {
    word[0] = '\0';
    return NULL;
  }

  for (; *(text + i) != '\0' && !isEndOfWordChar(*(text + i)); i++) {
    word[i] = *(text + i);
  }

  word[i] = '\0';
  return text + i;
}

double calculateWordHappinessScore(const char * word) {
  for (int i = 0; i < SCORED_WORDS_COUNT; i++) {
    if (strcmp(words[i], word) == 0) {
      return wordsHappinessScore[i];
    }
  }
  return 0;
}

bool isNegation(const char * word) {
  for (int i = 0; i < NEGATIONS_COUNT; i++) {
    if (strcmp(negations[i], word) == 0) {
      return true;
    }
  }
  return false;
}

// Steps:
// for each word of the text
//    if the word is negation, raise a flag
//    find/calculate the word score
//    if the flag is true -> invert the score
//    add it to the total score
double calculateHappinessScore(const char * text) {
  char word[141];
  double happinessScore = 0.0;

  bool isLastWordNegation = false;
  for (const char * wordEnd = text; NULL != (wordEnd = findNextWord(wordEnd, word)); ) {
    if (isNegation(word)) {
      isLastWordNegation = true;
    } else {
      double wordHappinessScore = calculateWordHappinessScore(word);
      if (isLastWordNegation) {
        wordHappinessScore *= -1;
      }
      happinessScore += wordHappinessScore;
      isLastWordNegation = false;
    }
  }

  return happinessScore;
}

void coutWithNull(const char * str) {
  if (str == NULL) {
    cout << "NULL";
  } else {
    cout << str;
  }
}

void assertHappinessScore(double expectedScore, const char * text) {
  double actualScore = calculateHappinessScore(text);
  if (fabs(expectedScore - actualScore) < 0.00000001) {
    cout << "[ OK] ";
  } else {
    cout << "[ERR] ";
  }
  cout << expectedScore << " == [" << text << "][" << actualScore << "]" << endl;
}

void assertEquals(const char * expected, const char * actual) {
  bool areEqual = false;
  if (expected == NULL) {
    areEqual = (actual == NULL);
  } else {
    areEqual = (strcmp(expected, actual) == 0);
  }

  if (areEqual) {
    cout << "[ OK] ";
  } else {
    cout << "[ERR] ";
  }

  coutWithNull(expected);
  cout << " == ";
  coutWithNull(actual);
  cout << endl;
}

int main() {
  cout << endl;
  cout << endl;
  cout << "findNextWord Tests" << endl;
  cout << "---------------------" << endl;

  char word[100];

  const char * wordEnd = findNextWord("ala   bala, nitsa!  ", word);
  assertEquals("ala", word);

  wordEnd = findNextWord(wordEnd, word);
  assertEquals("bala", word);

  wordEnd = findNextWord(wordEnd, word);
  assertEquals("nitsa", word);

  wordEnd = findNextWord(wordEnd, word);
  assertEquals(NULL, wordEnd);


  cout << endl;
  cout << endl;
  cout << "Happiness Score Tests" << endl;
  cout << "---------------------" << endl;

  assertHappinessScore(0.0, "");
  assertHappinessScore(0.0, "ala");
  assertHappinessScore(1, "good");
  assertHappinessScore(-0.9, "unhappy");
  assertHappinessScore(2.1, "good happy");
  assertHappinessScore(-2.5, "bad sad");
  assertHappinessScore(-0.4, "happy sad");
  assertHappinessScore(-1.5, "the good the bad and the sad");
  assertHappinessScore(-1.5, "the  good, the bad, and the sad!");
  assertHappinessScore(-1, "not good!");
  assertHappinessScore(1, "not bad...");
  assertHappinessScore(3.5, "the  good, the not bad, and the no sad!");
}
