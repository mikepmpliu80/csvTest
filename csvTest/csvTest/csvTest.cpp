#include <fstream>
#include <vector>


int main(){
	std::vector<int> first;
	std::vector<int> second;
	for(int i=0; i<100; i++){
		first.push_back(i);
	}
	for(int i=0; i<100; i++){
		int temp = rand()%100;
		second.push_back(temp);
	}

	std::ofstream outfile("test.csv");
	if(outfile.is_open()){
		for(int i=0; i<100; i++){
			outfile << first[i] << "," << second[i] << std::endl;
		}
	}
	outfile.close();

	return 0;
}
