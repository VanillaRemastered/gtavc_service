// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the VANILLACORE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// VANILLACORE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef VANILLACORE_EXPORTS
#define VANILLACORE_API __declspec(dllexport)
#else
#define VANILLACORE_API __declspec(dllimport)
#endif

// This class is exported from the dll
class VANILLACORE_API CVanillaCore {
public:
	CVanillaCore(void);
	// TODO: add your methods here.
};

extern VANILLACORE_API int nVanillaCore;

VANILLACORE_API int fnVanillaCore(void);
