#pragma once
class VRNetwork
{
public:
	VRNetwork();

	void DownloadConfig();
private:
	static const char* update_url;
};

