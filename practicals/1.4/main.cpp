/**
* Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
*/

#include <iostream>

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    int Fib1 = 1;
    int Fib2 = 1;
    for (int i = 2; i <= N; i++) {
        int FibN = Fib1 + Fib2;
        Fib1 = Fib2;
        Fib2 = FibN;
    }
    return Fib2;
}

int main() {
    {
        int N;
        std::cout << "Введіть число: ";
        std::cin >> N;
        int result = fibonacci(N);
        std::cout << "Fibonacci number " << N << ": " << result << std::endl;
    }
    {
        int N;
        std::cout << "Введіть число: ";
        std::cin >> N;
        int sum = 0;
        int count = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 2 != 0) {
                sum += i;
                count++;
            }
        }
        double average = (double)sum / count;
        std::cout << "Середнє арифметичне непарних чисел: " << average << std::endl;
    }
    {
        double b1, q;
        int n;
        std::cout << "Введіть перший член прогресії b1: ";
        std::cin >> b1;
        std::cout << "Введіть знаменник прогресії q: ";
        std::cin >> q;
        std::cout << "Введіть кількість елементів n: ";
        std::cin >> n;
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += b1 * pow(q, i);
        }
        double average = sum / n;
        std::cout << "Середнє арифметичне перших " << n << " елементів прогресії: " << average << std::endl;
    }
    return 0;
}