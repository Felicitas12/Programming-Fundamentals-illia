#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <thread>


using namespace std;

const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BROWN = "\033[38;5;94m";

void set_color(string color) {
 cout << color;
}

void reset_color() {
 set_color(RESET);
}

void setRandomColor() {
 const std::string colors[] = {
  "\033[31m",  // Red
  "\033[33m",  // Yellow
  "\033[34m",  // Blue
  "\033[35m",  // Purple
  "\033[36m",  // Cyan
  "\033[37m"   // White
 };

 int randomIndex = rand() % 6;

 std::cout << colors[randomIndex];
}


void draw_triangle(int rows, int additional, char** tree, int& row_index) {
 for (int i = 1, k = 0; i <= rows; ++i, k = 0, row_index++) {
  for (int space = 1; space <= (rows + additional) - i; ++space) {
   cout << "  ";
  }
  while (k != 2 * i - 1) {
   if (rand() % 10 > 8) {
    char ornament = "@$%#"[rand() % 4];

    setRandomColor();
    tree[row_index][k] = ornament;

   }
   else {
    set_color(GREEN);
    tree[row_index][k] = '*';
   }
   cout << tree[row_index][k] << ' ';
   ++k;
  }
  cout << endl;
  reset_color();
 }
}

void draw_trunk(int width, int height, int max_width) {
 for (int i = 0; i < height; i++) {
  for (int j = 0; j < (max_width - width) / 2; j++) {
   cout << "  ";
  }
  for (int j = 0; j < width; j++) {
   set_color(BROWN);
   cout << "| ";
  }
  cout << endl;
 }
 reset_color();
}


int main() {
    srand(time(0));
    int n;
    cout << "Введіть n число: ";
    cin >> n;

    while (true) {
        int rows = 5;
        int margin = rows - 1;

        int total_rows = 0;
        for (int i = 0; i <= n; i++) total_rows += rows + i;

        int max_width = 2 * (rows + n) - 1;

        ofstream file("cristmas_tree.txt");
        if (file.is_open()) {
            for (int i = 0; i < n; i++) {
                for (int k = 1, space = 0; k <= rows + i; ++k, space = 0) {
                    for (space = 1; space <= (rows + n) - k; ++space) {
                        file << "  ";
                        cout << "  ";

                    }
                    for (int j = 0; j < 2 * k - 1; ++j) {
                        if (rand() % 10 > 8) {
                            char ornament = "@$%#"[rand() % 4];
                            file << ornament << ' ';
                            setRandomColor();
                            cout << ornament << ' ';
                        }
                        else {
                            set_color(GREEN);

                            file << "* ";
                            cout << "* ";
                        }
                    }
                    file << endl;
                    cout << endl;

                }
            }

            int trunk_height = n;
            int trunk_width = max_width / 3;
            for (int i = 0; i < trunk_height; i++) {
                for (int j = 0; j < (max_width - trunk_width) / 2; j++) {
                    file << "  ";
                    cout << "  ";

                }
                for (int j = 0; j < trunk_width; j++) {
                    file << "| ";
                    cout << "| ";

                }
                file << endl;
                cout << endl;

            }

            file.close();
        }
        else {
            cout << "Не відкривається файл :(" << endl;
        }

        reset_color();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

    }
    return 0;
}
//На маці може праювати не коректно(не очищається консоль кожен тік), оскільки це мак, але в теорії повинно, тим паче якщо йому скоріще всього не 12 років. На вінді все працює як треба.
