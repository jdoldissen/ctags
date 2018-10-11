/*
 * Generated by ./misc/optlib2c from optlib/passwd.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


static void initializePasswdParser (const langType language CTAGS_ATTR_UNUSED)
{
}

extern parserDefinition* PasswdParser (void)
{
	static const char *const extensions [] = {
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		"passwd",
		NULL
	};

	static fieldDefinition PasswdFieldTable [] = {
		{
		  .enabled     = true,
		  .name        = "home",
		  .description = "home directory",
		},
		{
		  .enabled     = true,
		  .name        = "shell",
		  .description = "login shell",
		},
	};
	static tagRegexTable PasswdTagRegexTable [] = {
		{"^([^:]+):([^:]+):([^:]+):([^:]+):([^:]*):([^:]+):([^:]+)", "\\1",
		"u,username,user names", "{_field=home:\\6}{_field=shell:\\7}", NULL, false},
	};


	parserDefinition* const def = parserNew ("Passwd");

	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->fieldTable = PasswdFieldTable;
	def->fieldCount = ARRAY_SIZE(PasswdFieldTable);
	def->tagRegexTable = PasswdTagRegexTable;
	def->tagRegexCount = ARRAY_SIZE(PasswdTagRegexTable);
	def->initialize    = initializePasswdParser;

	return def;
}
