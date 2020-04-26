//#include <iostream>
//#include<vector>
//
//int get_fibonacci_last_digit_naive(int n) {
//    if (n <= 1)
//        return n;
//
//    int previous = 0;
//    int current = 1;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int tmp_previous = previous;
//        previous = current;
//        current = tmp_previous + current;
//    }
//
//    return current % 10;
//}
//
//
//int get_fibonacci_last_digit_fast(int n) {
//        std::vector<int> vec;
//        vec.reserve(n + 1);
//        vec.emplace_back(0);
//        vec.emplace_back(1);
//        for (int i = 2; i < n + 1; i++) {
//            vec.emplace_back(vec[i - 1] % 10 + vec[i - 2] % 10); 
//        }
//        return vec.back() % 10;
//}
//
//
//
//int main() {
//    int n;
//    std::cin >> n;
//    int c = get_fibonacci_last_digit_fast(n);
//    std::cout << c << '\n';
//}
