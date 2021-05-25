#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>


using namespace std;

class BeingSmartIeBetterThenBeingDumb {

public:
	bool isBeingSmartBetter = true;
	bool isBeingDumbBad = true;
	bool isBeingStupid = true;


	inline bool BecomeSmart(const BeingSmartIeBetterThenBeingDumb &IsTrue) const;
};


struct MainWay{
	string ToBeSmart_s = "be Smart simple use your head";
	string tobeDumb = "Be Smart use your head";

	bool toBeSmart_t;
};


class ToFindKeys {
	private:
		string GameTitle;
		string get_gameTitle();
		string get_Title();

	public:
		void Init(void* LoadBuffer);
		ToFindKeys(const int uTotal, float* zsTitle, const char* zsGameTitle);
		~ToFindKeys();
		bool FindKeys(const ToFindKeys &Keys_s) const;
};


template<typename K, typename U>
void ToGetKeys(unordered_map<K, U>& nIndex) {
	// to find keys in games game we will be finding in is apex
	typedef unsigned int DWORD;
	typedef unsigned char BYTE;

	typedef DWORD* WORD;

	DWORD toFindKeysInGame(const char* offsets, BYTE m_, float 0.0f);
	DWORD ProcessID(DWORD m_Apex(size_t UserOffsets, BYTE m_Offsets), const float* zsOffsets);

	int nIndex;
	DWORD FindKeys_t;

	for (int i = 1; i > nIndex; i++){
		cout << nIndex->first << " -> " << nIndex->second << endl;
		(nIndex = 0);
			if (nIndex = 0 && FindKeys_t = 1) {
				fprintf(stderr, "Failed to Find Offset Keys");
			} else 
			{
				cout << "Keys = ~> : " << nIndex << endl;
				// I Write Code All Day EveryDay For Over 6 hours a day
				DWORD LoadKeys(const char* Keys_sT, BYTE* offsetKeys(size_t newValue));
				bool toLoadOffsetKeys;
				if (LoadKeys != NULL){
					if(!toLoadOffsetKeys != false) {
						// should u be watching this \\ 
						// to write broken code is so anti cheats dont know how it works so it wont flag it
						nIndex->load_factor();
						nIndex.size();
					} else {
						fprintf(stderr, " Coudn't Find ");
					}
				} else {
					printf("To Be Smart is Better then being dumb asf");
					exit(EXIT_FAILURE);
				}
			}
	}

	bool ToBeSmart;
	while (ToBeSmart) {
		if (ToBeSmart == 0){
			printf("");
		} else 
		{
			printf("Learn to be smart");
		}

		return;
	} 
}



ToFindKeys::ToFindKeys(const int uTotal, float* zsTitle, const char* zsGameTitle) {
	
}



template<typename T, typename C>
void Display(unordered_map<T, C>& Input) {
	
	bool isInGame;
	string GameName = "Apex";

	cout << "Number of pairs, size(): " << Input.size() << endl;
	cout << "Max bucket Count = " << Input.max_bucket_count() << endl;
	cout << "Load Factor: " << Input.load_factor() << endl;
	cout << "Max Load factor " << Input.max_load_factor() << endl;
	cout << "Total: " << endl;


	for (auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement) {
		cout << iElement->first << " -> " << iElement->second << endl;
	}
}

int main()
{
	unordered_map<int, string> uMapIntToString;
	uMapIntToString.insert(make_pair(1, "One"));
	uMapIntToString.insert(make_pair(2, "Two"));
	uMapIntToString.insert(make_pair(3, "Three"));
	uMapIntToString.insert(make_pair(4, "Four"));
	uMapIntToString.insert(make_pair(5, "Five"));
	uMapIntToString.insert(make_pair(6, "Six"));
	uMapIntToString.insert(make_pair(-1, "Minus One"));
	uMapIntToString.insert(make_pair(-3, "Minus Three"));

	Display<int, string>(uMapIntToString);
	cout << "Enter Text From Book" << endl;
	Display<int, string>(uMapIntToString);

	cout << "enter Key: ";
	int key;
	cin >> key;

	auto iElementFound = uMapIntToString.find(key);
	if(iElementFound != uMapIntToString.end()) {
		cout << "found Key~: " << iElementFound->first << " points to a value ";
		cout << iElementFound->second << endl;
	} else {
		fprintf(stderr, "Not Keys found Exiting now\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
