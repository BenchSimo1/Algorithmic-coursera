//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//ostream& operator<< (ostream& stream, const vector<int>& vec) {
//	for (auto const& i : vec) {
//		stream << i << " ";
//	}
//	return stream;
//}

//--------------------------------------------------------------------

// WEEK 1 :

//int MaxPairwiseProduct(const vector<int>& numbers) {
//    int max_product = 0;
//    int n = numbers.size();
//
//    for (int first = 0; first < n; ++first) {
//        for (int second = first + 1; second < n; ++second) {
//            max_product = std::max(max_product,
//                numbers[first] * numbers[second]);
//        }
//    }
//
//    return max_product;
//}
//
//int max_pairwise_product_fast(const vector<int>& array) {
//	int Indexmax = 0;
//	int Indexmax2 = -1;
//	for (int i = 0; i < array.size(); i++)
//		if (array[i] > array[Indexmax]) Indexmax = i;
//	for (int i = 0; i < array.size(); i++)
//		if (i != Indexmax && (Indexmax2 == -1 || array[i] > array[Indexmax2])) Indexmax2 = i;
//
//
//	return array[Indexmax] * array[Indexmax2];
//}

//-------------------------------------------------------------

// WEEK 2 :
//
//long long fibunacci(int n) {
//	vector<int> vec;
//	vec.reserve(n + 1);
//	for (int i = 0; i < n + 1; i++) {
//		if (i < 2) vec.emplace_back(i);
//		else { 
//			vec.emplace_back(vec[i - 1] + vec[i - 2]); 
//		}
//	}		
//	return (long long)vec.back();
//}
//
//int gcd(int a, int b) {
//	for (int i = max(a, b); i >= 0; i--)
//		if (!(a % i) && !(b % i)) return i;
//}
//
//
//int Gcd(int a, int b)
//{
//	if (b == 0)
//		return a;
//	return gcd(b, a % b);
//
//}




