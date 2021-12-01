#include <bits/stdc++.h>
// foreground colors
void red () {
  printf("\033[0;31m");
}
void cyan() {
    printf("\033[1;36m");
}

void white() {
  printf("\033[1;37m");
}
void boldyellow() {
  printf("\033[1;33m");
}
void liteyellow(){
  printf("\033[0;33m");
}

void green() {
  printf("\033[1;32m");
}
void blue() {
  printf("\033[1;34m");
}
void purple() {
  printf("\033[1;35m");
}
void black() {
  printf("\033[1;30m");
}
void reset () {
  printf("\033[0m");
}

// background colors

void bg_ash() {
  printf("\033[1;40m");
} 

void bg_pink() {
  printf("\033[1;41m");
}

void bg_green() {
  printf("\033[1;42m");
}

void bg_yellow() {
  printf("\033[1;43m");
}

void bg_blue() {
  printf("\033[0;44m");
}

void bg_purple() {
  printf("\033[1;45m");
}

void bg_cyan() {
  printf("\033[1;46m");
}

void bg_grey() {
  printf("\033[1;47m");
}

void bg_black() {
  printf("\033[1;48m");
}

// topic separators

void topicheader1()
{
  for(int i=0;i<=78;i++)
    printf("\xFE");
}

void topicheader()
{
  for(int i=0;i<=60;i++)
    printf("\xFE");
}

int main()
{
    boldyellow();
    cout<<"Hi";
    return 0;
}