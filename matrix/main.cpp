#include <iostream>
int num = 1;
int main() {

const int stolb_1 = 3;
const int strok_1 = 3;
int multip1[strok_1][stolb_1];

for (int i = 0; i < strok_1; i++) {
for (int j = 0; j < stolb_1; j++) {
    multip1[i][j] = i+2 ;
}
}

const int stolb_2 = 3;
const int strok_2 = 3;
int multip2[strok_2][stolb_2];

for (int i = 0; i < strok_2; i++) {
for (int j = 0; j < stolb_2; j++) {
    multip2[i][j] = i+j ;
}
}

const int stolb_it = stolb_2;
const int strok_it = strok_1;
int itog[strok_it][stolb_it];


for (int i = 0; i < strok_it; i++) {
for (int j = 0; j < stolb_it; j++) {
    itog[i][j] = 0;
}
}

for (int i = 0; i < strok_1; i++) {
for (int j = 0; j < stolb_2; j++) {
for (int k = 0; k < stolb_1; k++) {
    itog[i][j] = itog[i][j] + multip1[i][k] * multip2[k][j];
}
}
}


for (int i = 0; i < strok_it; i++) {
for (int j = 0; j < stolb_it; j++) {
std::cout << itog[i][j] << ' ';
}
std::cout << std::endl;
}
std::cout << std::endl;
}