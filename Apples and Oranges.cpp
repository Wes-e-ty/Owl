void apple_orange(int s, int t, int a, int b, vector<int> apples, vector<int> oranges){
	int count_apples=0;
	int count_oranges=0;
	for(int i{};i<apples.size();++i){
		if(a+apples[i]>=s and a+apples[i]<=t){
			count_apples++;
		}
	}
	for(int j{};j<oranges.size();++j){
		if(b+oranges[j]>=s and b+oranges[j]<=t){
			count_oranges++;
		}
	}
	cout<<count_apples<<"\n"<<count_oranges;
}
