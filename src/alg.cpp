// Copyright 2021 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value == 1) {
 return false;
 }
 else if (value != 2 && value % 2 == 0) {
  return false;
  }
   else if (value != 3 && value % 3 == 0) {
    return false;
    }
     else if (value != 5 && value % 5 == 0) {
      return false;
      }
       else if (value != 7 && value % 7 == 0) {
	return false;
	}
return true;
}

uint64_t nPrime(uint64_t n) {
int i = 0;
int num = 2;
while (n >= i) {
 if (checkPrime(num)) {
  i++;
  }
 if (n == i) {
  return num;
  }
 num++;
}
}

uint64_t nextPrime(uint64_t value) {
while (true) {
 value++;
 if (checkPrime(value)) {
  return value;
  }
}
}

uint64_t sumPrime(uint64_t hbound) {
int num = 0;
int sum = 0;
while (num < hbound) {
 if (checkPrime(num)) {
  sum += num;
  }
num++;
}
return sum;
}
