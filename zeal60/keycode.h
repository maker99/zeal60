#pragma once

#include <stdint.h>
#include <stdio.h>
#include <string>

// We expose the internals so we can use it for dumping QMK keycodes
// for use in JavaScript

struct KeycodeStringValue
{
	uint16_t value;
	char *string;
};

struct ConfigNameToId 
{
	char *name;
	uint8_t id;
};


KeycodeStringValue *getKeycodeStringValue(size_t index);
size_t getKeycodeStringValueCount();

bool stringToValue( const char *string, uint16_t *value );
bool stringToConfigId( const char *string, uint8_t *value );

std::string valueToString( uint16_t value );
std::string valueToKeycode( uint16_t value );
