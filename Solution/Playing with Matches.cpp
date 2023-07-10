///\/\/\/\/\/***************الله أكبر***************/\/\/\/\/\/\/
//*********** حَسبنا الله و نعم الوکیل نعم المولی و نعم النصیر *************
 
//1. بِسْمِ اللَّهِ الرَّحْمَٰنِ الرَّحِيمِ
//2. الْحَمْدُ لِلَّهِ رَبِّ الْعَالَمِينَ
//3. الرَّحْمَٰنِ الرَّحِيمِ
//4. مَالِكِ يَوْمِ الدِّينِ
//5. إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ
//6. اهْدِنَا الصِّرَاطَ الْمُسْتَقِيمَ
//7. صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلَا الضَّالِّينَ

#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b;i++)
#define cin_v(v,n) loop(i,n) cin >> v[i]
#define cout_v(v,n) loop(i,n) cout << v[i] << " "
#define full(v) v.begin(),v.end()
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	vector<int> v(10);
	v[0] = 6;
	v[1] = 2;
	v[2] = 5;
	v[3] = 5;
	v[4] = 4;
	v[5] = 5;
	v[6] = 6;
	v[7] = 3;
	v[8] = 7;
	v[9] = 6;

	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		ll c = a + b;
		string s = to_string(c);
		//cout << s << "\n";
		int ans = 0;
		for (int i = 0; i < s.size();i++){
			ans += v[s[i]-48];
		}
		cout << ans << "\n";
		s.clear();
	}
}

//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
