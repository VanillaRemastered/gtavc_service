#include "VRNetwork.h"
#include "INIReader.h"

VRNetwork::VRNetwork()
{
	update_url = "https:///www.vanilla-remastered.com/files/vc.config";
}

void VRNetwork::DownloadConfig()
{
	HRESULT downloadResult = URLDownloadToFileA(NULL, update_url,
		"vc.config", 0, NULL);

	if (SUCCEEDED(downloadResult))
	{
		ParseConfig();
	}
}

void VRNetwork::ParseConfig()
{
}

