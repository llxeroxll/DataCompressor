#ifndef TESTE
#define TESTE

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\semi-adaptive.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\semi-adaptive.cpp"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\huffman.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\huffman.cpp"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\node.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\node.cpp"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\bitIO.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\bitIO.cpp"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\compressor-command.h"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\huff-semiAdaptive.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\huff-semiAdaptive.cpp"

#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\generator-database.h"
#include "C:\\Users\\paulo\\Documents\\Visual Studio 2015\\Projects\\DataCompressor\\DataCompressor\\generator-database.cpp"


#ifdef __cplusplus

extern "C" {
#endif // __cplusplus

	__declspec(dllexport) std::string __stdcall executeCompress(/*std::string &pathFile*/);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif