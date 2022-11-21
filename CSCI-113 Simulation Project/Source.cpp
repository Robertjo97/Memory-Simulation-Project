#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct cache_block {
	int valid_bit = 0;
	int tag = 0;
	int data = 0;
};

struct cache {
	vector <cache_block> block_0;
	vector <cache_block> block_1;
};

struct memory_block {
	int address = 0;
	int data = 0;
};

struct reg_block {
	int name = 0;
	int data = 0;
};

int main() {
	cache cache;
	cache.block_0.reserve(8);
	cache.block_1.reserve(8);

	vector <memory_block> memory;
	memory.reserve(128);
	for (int i = 0; i < 128; i++) {
		memory_block memblock;
		memblock.address = i;

		memory.push_back(memblock);
	}
	/*for (int i = 0; i < memory.size(); i++) {
		cout << memory.at(i).address << "    " << memory.at(i).data << endl;
	}*/

	vector <reg_block> reg_file;
	reg_file.reserve(8);
	for (int i = 0; i < 8; i++) {
		reg_block block;
		block.name = i;
		reg_file.push_back(block);
	}
	/*for (int i = 0; i < reg_file.size(); i++) {
		cout << "$S" << reg_file.at(i).name << "    " << reg_file.at(i).data << endl;
	}*/

	string line;
	ifstream file;
	vector<int> instruction;

	/*file.open("02-Input-object-code");
	while (!file.eof()) {
		getline(file, line);
		for (int i = 0; i < 32; i++) {
			instruction.push_back(line[i] - '0');
			cout << line[i];
		}
		cout << endl;
		
	}
	

	/*cout << line[0];
	int n = line[0] - '0';
	cout << n;
	while (!file.eof()) {
		
		
	}
	file.close();*/

	
	return 0;
}