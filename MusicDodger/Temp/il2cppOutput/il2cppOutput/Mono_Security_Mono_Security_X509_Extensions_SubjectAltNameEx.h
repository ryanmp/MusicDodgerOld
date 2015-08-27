#pragma once
#include <stdint.h>
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t994;
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t999  : public X509Extension_t903
{
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t994 * ____names_3;
};
