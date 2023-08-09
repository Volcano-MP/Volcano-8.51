#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVectorVMOp : uint8
{
	done                           = 0,
	add                            = 1,
	sub                            = 2,
	mul                            = 3,
	div                            = 4,
	mad                            = 5,
	lerp                           = 6,
	rcp                            = 7,
	rsq                            = 8,
	sqrt                           = 9,
	neg                            = 10,
	abs                            = 11,
	exp                            = 12,
	exp2                           = 13,
	log                            = 14,
	log2                           = 15,
	sin                            = 16,
	cos                            = 17,
	tan                            = 18,
	asin                           = 19,
	acos                           = 20,
	atan                           = 21,
	atan2                          = 22,
	ceil                           = 23,
	floor                          = 24,
	fmod                           = 25,
	frac                           = 26,
	trunc                          = 27,
	clamp                          = 28,
	min                            = 29,
	max                            = 30,
	pow                            = 31,
	round                          = 32,
	sign                           = 33,
	step                           = 34,
	random                         = 35,
	noise                          = 36,
	cmplt                          = 37,
	cmple                          = 38,
	cmpgt                          = 39,
	cmpge                          = 40,
	cmpeq                          = 41,
	cmpneq                         = 42,
	select                         = 43,
	addi                           = 44,
	subi                           = 45,
	muli                           = 46,
	divi                           = 47,
	clampi                         = 48,
	mini                           = 49,
	maxi                           = 50,
	absi                           = 51,
	negi                           = 52,
	signi                          = 53,
	randomi                        = 54,
	cmplti                         = 55,
	cmplei                         = 56,
	cmpgti                         = 57,
	cmpgei                         = 58,
	cmpeqi                         = 59,
	cmpneqi                        = 60,
	bit_and                        = 61,
	bit_or                         = 62,
	bit_xor                        = 63,
	bit_not                        = 64,
	bit_lshift                     = 65,
	bit_rshift                     = 66,
	logic_and                      = 67,
	logic_or                       = 68,
	logic_xor                      = 69,
	logic_not                      = 70,
	f2i                            = 71,
	i2f                            = 72,
	f2b                            = 73,
	b2f                            = 74,
	i2b                            = 75,
	b2i                            = 76,
	inputdata_32bit                = 77,
	inputdata_noadvance_32bit      = 78,
	outputdata_32bit               = 79,
	acquireindex                   = 80,
	external_func_call             = 81,
	exec_index                     = 82,
	noise2D                        = 83,
	noise3D                        = 84,
	enter_stat_scope               = 85,
	exit_stat_scope                = 86,
	update_id                      = 87,
	acquire_id                     = 88,
	NumOpcodes                     = 89,
};

enum class EVectorVMOperandLocation : uint8
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3,
};

enum class EVectorVMBaseTypes : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
