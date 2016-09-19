
#include "wrapperDll.h"


std::string __stdcall executeCompress(/*std::string &pathFile*/) {
		
	Compressor *compressor;

	try {

		std::string p = "abra.txt";
		compressor = new HufSemiAdaptive(p);

		compressor->executeCompress();

		// DataBaseGenerator dg("teste.txt");
		// dg.generate(5000, 'b', 20);
		
	}
	catch (std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	//return information
	std::string info;

	info.push_back(compressor->meanLength());

	info.push_back(' ');

	info.push_back(compressor->entropy());

	info.push_back(' ');

	info.push_back(compressor->redundancy());

	delete compressor;

	return info;
}