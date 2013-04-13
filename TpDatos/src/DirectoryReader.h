/*
 * DirectoryReader.h
 *
 *  Created on: 12/04/2013
 *      Author: lara
 */
#include <iostream>
#include <string>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>
using namespace std;

#ifndef DIRECTORYREADER_H_
#define DIRECTORYREADER_H_

class DirectoryReader {
public:
	static DirectoryReader* getInstance();
	void recorrerDirectorio(string dir);
private:
	static DirectoryReader* instance;
	DirectoryReader();

};

#endif /* DIRECTORYREADER_H_ */
