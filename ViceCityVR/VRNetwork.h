
#pragma once
#include <Windows.h>
#include <fstream>
class VRNetwork
{
public:
	VRNetwork();

	void DownloadConfig();
	void ParseConfig();
private:
	static const char* update_url;
};

