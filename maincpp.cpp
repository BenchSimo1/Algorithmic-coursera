//#include<iostream>
//#include<vector>
//
//
//using namespace std;
//
//
//
//int main()
//{
//	/*while (true) {
//		int n = rand() % 100 + 2;
//		vector<int> a;
//		a.reserve(n);
//		for (int i = 0; i < n; i++)
//			a.emplace_back(rand() % 10000);
//		cout << a << endl ;
//		long long res2 = MaxPairwiseProduct(a),
//			res1 = max_pairwise_product_fast(a);
//			
//		cout << res1 << ' ' << res2 << endl;
//		if (res1 != res2) break;
//		cout << "OK" << endl;
//	}*/
//	int n;
//	cin >> n;
//	vector<int> a;
//	a.reserve(n);
//	for (int i = 0, e; i < n; i++) {
//		cin >> e;
//		a.emplace_back(e);
//	}
//
//	cout << (long long)max_pairwise_product_fast(a) << endl;
//}