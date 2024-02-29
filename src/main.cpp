#include <conio.h>
#include <iostream>
#include <vector>

#define K_UP 72
#define K_DOWN 80
#define K_LEFT 75
#define K_RIGHT 77

#define K_QUIT 113 /* q */

int main() {
  std::vector<std::string> context = {"berke", "ali", "emre", "musa", "tulay"};
  int context_idx = 0;
  bool running = true;

  while (running) {

    for (int i = 0; i < context.size(); ++i) {
      char selected_chr = context_idx == i ? '_' : '\0';
      std::cout << selected_chr << context.at(i) << selected_chr << std::endl;
    }

    int char_idx = _getch();
    switch (char_idx) {
    case K_UP:
      context_idx--;
      break;
    case K_DOWN:
      context_idx++;
      break;
    case K_QUIT:
      running = false;
      break;
    default:
      break;
    }

    if (context_idx < 0)
      context_idx = context.size() - 1;
    else if (context_idx > context.size() - 1)
      context_idx = 0;
    else {
    }

    system("cls");
  }
  return 0;
}
