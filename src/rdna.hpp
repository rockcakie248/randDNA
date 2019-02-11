using namespace std;

string randDNA(int seed, string bases, int n)
{
	
	int min=0;//specifies the first index
	int max=bases.size()-1;//Specifies the last index of the array
	int ind = 0;
	string dnaSeq = "";
	
	mt19937 eng1(seed);
	uniform_int_distribution<> unifrm(min,max);

	for(int i=0; i<n; i++)
	{
		ind = unifrm(eng1);
		dnaSeq += bases[ind];
	}
	return dnaSeq;
}
