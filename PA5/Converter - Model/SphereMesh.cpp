//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "SphereMesh.h"
#include "meshData.h"
#include "GLTF.h"
#include "File.h"
#include "Mesh.h"

using namespace tinygltf;

namespace Azul
{
	VertexPos g_SphereVertices_pos[] =
	{
		Vec3f(-0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.000000f, 0.154509f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.090818f, 0.125000f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.146946f, 0.047746f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, -0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.146946f, -0.047746f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, -0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.090818f, -0.125000f, 0.475528f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, 0.500000f) * 2.0f,
		Vec3f(0.000000f, -0.154509f, 0.475528f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, 0.500000f) * 2.0f,
		Vec3f(0.090818f, -0.125000f, 0.475528f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, 0.500000f) * 2.0f,
		Vec3f(0.146946f, -0.047746f, 0.475528f) * 2.0f,
		Vec3f(0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(0.146946f, 0.047746f, 0.475528f) * 2.0f,
		Vec3f(0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(0.090818f, 0.125000f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, 0.500000f) * 2.0f,
		Vec3f(-0.000000f, 0.154509f, 0.475528f) * 2.0f,
		Vec3f(-0.000000f, 0.293893f, 0.404509f) * 2.0f,
		Vec3f(-0.172746f, 0.237764f, 0.404509f) * 2.0f,
		Vec3f(-0.279509f, 0.090818f, 0.404509f) * 2.0f,
		Vec3f(-0.279508f, -0.090818f, 0.404509f) * 2.0f,
		Vec3f(-0.172746f, -0.237764f, 0.404509f) * 2.0f,
		Vec3f(0.000000f, -0.293893f, 0.404509f) * 2.0f,
		Vec3f(0.172746f, -0.237764f, 0.404509f) * 2.0f,
		Vec3f(0.279508f, -0.090818f, 0.404509f) * 2.0f,
		Vec3f(0.279508f, 0.090818f, 0.404509f) * 2.0f,
		Vec3f(0.172746f, 0.237764f, 0.404509f) * 2.0f,
		Vec3f(-0.000000f, 0.293893f, 0.404509f) * 2.0f,
		Vec3f(-0.000000f, 0.404509f, 0.293893f) * 2.0f,
		Vec3f(-0.237764f, 0.327254f, 0.293893f) * 2.0f,
		Vec3f(-0.384710f, 0.125000f, 0.293893f) * 2.0f,
		Vec3f(-0.384710f, -0.125000f, 0.293893f) * 2.0f,
		Vec3f(-0.237764f, -0.327254f, 0.293893f) * 2.0f,
		Vec3f(0.000000f, -0.404509f, 0.293893f) * 2.0f,
		Vec3f(0.237764f, -0.327254f, 0.293893f) * 2.0f,
		Vec3f(0.384710f, -0.125000f, 0.293893f) * 2.0f,
		Vec3f(0.384710f, 0.125000f, 0.293893f) * 2.0f,
		Vec3f(0.237764f, 0.327254f, 0.293893f) * 2.0f,
		Vec3f(-0.000000f, 0.404509f, 0.293893f) * 2.0f,
		Vec3f(-0.000000f, 0.475528f, 0.154508f) * 2.0f,
		Vec3f(-0.279509f, 0.384710f, 0.154508f) * 2.0f,
		Vec3f(-0.452254f, 0.146946f, 0.154508f) * 2.0f,
		Vec3f(-0.452254f, -0.146946f, 0.154508f) * 2.0f,
		Vec3f(-0.279508f, -0.384710f, 0.154508f) * 2.0f,
		Vec3f(0.000000f, -0.475528f, 0.154508f) * 2.0f,
		Vec3f(0.279509f, -0.384710f, 0.154508f) * 2.0f,
		Vec3f(0.452254f, -0.146946f, 0.154508f) * 2.0f,
		Vec3f(0.452254f, 0.146946f, 0.154508f) * 2.0f,
		Vec3f(0.279508f, 0.384711f, 0.154508f) * 2.0f,
		Vec3f(-0.000000f, 0.475528f, 0.154508f) * 2.0f,
		Vec3f(-0.000000f, 0.500000f, -0.000000f) * 2.0f,
		Vec3f(-0.293893f, 0.404509f, -0.000000f) * 2.0f,
		Vec3f(-0.475528f, 0.154508f, -0.000000f) * 2.0f,
		Vec3f(-0.475528f, -0.154509f, -0.000000f) * 2.0f,
		Vec3f(-0.293893f, -0.404509f, -0.000000f) * 2.0f,
		Vec3f(0.000000f, -0.500000f, -0.000000f) * 2.0f,
		Vec3f(0.293893f, -0.404508f, -0.000000f) * 2.0f,
		Vec3f(0.475528f, -0.154509f, -0.000000f) * 2.0f,
		Vec3f(0.475528f, 0.154509f, -0.000000f) * 2.0f,
		Vec3f(0.293892f, 0.404509f, -0.000000f) * 2.0f,
		Vec3f(-0.000000f, 0.500000f, -0.000000f) * 2.0f,
		Vec3f(-0.000000f, 0.475528f, -0.154509f) * 2.0f,
		Vec3f(-0.279508f, 0.384710f, -0.154509f) * 2.0f,
		Vec3f(-0.452254f, 0.146946f, -0.154509f) * 2.0f,
		Vec3f(-0.452254f, -0.146946f, -0.154509f) * 2.0f,
		Vec3f(-0.279508f, -0.384710f, -0.154509f) * 2.0f,
		Vec3f(0.000000f, -0.475528f, -0.154509f) * 2.0f,
		Vec3f(0.279509f, -0.384710f, -0.154509f) * 2.0f,
		Vec3f(0.452254f, -0.146946f, -0.154509f) * 2.0f,
		Vec3f(0.452254f, 0.146946f, -0.154509f) * 2.0f,
		Vec3f(0.279508f, 0.384711f, -0.154509f) * 2.0f,
		Vec3f(-0.000000f, 0.475528f, -0.154509f) * 2.0f,
		Vec3f(-0.000000f, 0.404509f, -0.293893f) * 2.0f,
		Vec3f(-0.237764f, 0.327254f, -0.293893f) * 2.0f,
		Vec3f(-0.384710f, 0.125000f, -0.293893f) * 2.0f,
		Vec3f(-0.384710f, -0.125000f, -0.293893f) * 2.0f,
		Vec3f(-0.237764f, -0.327254f, -0.293893f) * 2.0f,
		Vec3f(0.000000f, -0.404509f, -0.293893f) * 2.0f,
		Vec3f(0.237764f, -0.327254f, -0.293893f) * 2.0f,
		Vec3f(0.384710f, -0.125000f, -0.293893f) * 2.0f,
		Vec3f(0.384710f, 0.125000f, -0.293893f) * 2.0f,
		Vec3f(0.237764f, 0.327254f, -0.293893f) * 2.0f,
		Vec3f(-0.000000f, 0.404509f, -0.293893f) * 2.0f,
		Vec3f(-0.000000f, 0.293893f, -0.404509f) * 2.0f,
		Vec3f(-0.172746f, 0.237764f, -0.404509f) * 2.0f,
		Vec3f(-0.279508f, 0.090818f, -0.404509f) * 2.0f,
		Vec3f(-0.279508f, -0.090818f, -0.404509f) * 2.0f,
		Vec3f(-0.172746f, -0.237764f, -0.404509f) * 2.0f,
		Vec3f(0.000000f, -0.293893f, -0.404509f) * 2.0f,
		Vec3f(0.172746f, -0.237764f, -0.404509f) * 2.0f,
		Vec3f(0.279508f, -0.090818f, -0.404509f) * 2.0f,
		Vec3f(0.279508f, 0.090818f, -0.404509f) * 2.0f,
		Vec3f(0.172746f, 0.237764f, -0.404509f) * 2.0f,
		Vec3f(-0.000000f, 0.293893f, -0.404509f) * 2.0f,
		Vec3f(-0.000000f, 0.154508f, -0.475528f) * 2.0f,
		Vec3f(-0.090818f, 0.125000f, -0.475528f) * 2.0f,
		Vec3f(-0.146946f, 0.047746f, -0.475528f) * 2.0f,
		Vec3f(-0.146946f, -0.047746f, -0.475528f) * 2.0f,
		Vec3f(-0.090818f, -0.125000f, -0.475528f) * 2.0f,
		Vec3f(0.000000f, -0.154508f, -0.475528f) * 2.0f,
		Vec3f(0.090818f, -0.125000f, -0.475528f) * 2.0f,
		Vec3f(0.146946f, -0.047746f, -0.475528f) * 2.0f,
		Vec3f(0.146946f, 0.047746f, -0.475528f) * 2.0f,
		Vec3f(0.090818f, 0.125000f, -0.475528f) * 2.0f,
		Vec3f(-0.000000f, 0.154508f, -0.475528f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, -0.500000f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, -0.500000f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, -0.500000f) * 2.0f,
		Vec3f(0.000000f, 0.000000f, -0.500000f) * 2.0f,
		Vec3f(0.000000f, 0.000000f, -0.500000f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, -0.500000f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, -0.500000f) * 2.0f,
		Vec3f(-0.000000f, 0.000000f, -0.500000f) * 2.0f,
		Vec3f(-0.000000f, -0.000000f, -0.500000f) * 2.0f,
		Vec3f(-0.000000f, -0.000000f, -0.500000f) * 2.0f,
		Vec3f(0.000000f, -0.000000f, -0.500000f) * 2.0f

	};

	uint32_t g_SphereIndices[] =
	{
		0, 1, 2,
		1, 3, 2,
		2, 3, 4,
		3, 5, 4,
		4, 5, 6,
		5, 7, 6,
		6, 7, 8,
		7, 9, 8,
		8, 9, 10,
		9, 11, 10,
		10, 11, 12,
		11, 13, 12,
		12, 13, 14,
		13, 15, 14,
		14, 15, 16,
		15, 17, 16,
		16, 17, 18,
		17, 19, 18,
		18, 19, 20,
		19, 21, 20,
		1, 22, 3,
		22, 23, 3,
		3, 23, 5,
		23, 24, 5,
		5, 24, 7,
		24, 25, 7,
		7, 25, 9,
		25, 26, 9,
		9, 26, 11,
		26, 27, 11,
		11, 27, 13,
		27, 28, 13,
		13, 28, 15,
		28, 29, 15,
		15, 29, 17,
		29, 30, 17,
		17, 30, 19,
		30, 31, 19,
		19, 31, 21,
		31, 32, 21,
		22, 33, 23,
		33, 34, 23,
		23, 34, 24,
		34, 35, 24,
		24, 35, 25,
		35, 36, 25,
		25, 36, 26,
		36, 37, 26,
		26, 37, 27,
		37, 38, 27,
		27, 38, 28,
		38, 39, 28,
		28, 39, 29,
		39, 40, 29,
		29, 40, 30,
		40, 41, 30,
		30, 41, 31,
		41, 42, 31,
		31, 42, 32,
		42, 43, 32,
		33, 44, 34,
		44, 45, 34,
		34, 45, 35,
		45, 46, 35,
		35, 46, 36,
		46, 47, 36,
		36, 47, 37,
		47, 48, 37,
		37, 48, 38,
		48, 49, 38,
		38, 49, 39,
		49, 50, 39,
		39, 50, 40,
		50, 51, 40,
		40, 51, 41,
		51, 52, 41,
		41, 52, 42,
		52, 53, 42,
		42, 53, 43,
		53, 54, 43,
		44, 55, 45,
		55, 56, 45,
		45, 56, 46,
		56, 57, 46,
		46, 57, 47,
		57, 58, 47,
		47,58, 48,
		58, 59, 48,
		48, 59, 49,
		59, 60, 49,
		49, 60, 50,
		60, 61, 50,
		50, 61, 51,
		61, 62, 51,
		51, 62, 52,
		62, 63, 52,
		52, 63, 53,
		63, 64, 53,
		53, 64, 54,
		64, 65, 54,
		55,66,56,
		66,67,56,
		56,67,57,
		67,68,57,
		57,68,58,
		68,69,58,
		58,69,59,
		69,70,59,
		59,70,60,
		70,71,60,
		60,71,61,
		71,72,61,
		61,72,62,
		72,73,62,
		62,73,63,
		73,74,63,
		63,74,64,
		74,75,64,
		64,75,65,
		75,76,65,
		66,77,67,
		77,78,67,
		67,78,68,
		78,79,68,
		68,79,69,
		79,80,69,
		69,80,70,
		80,81,70,
		70,81,71,
		81,82,71,
		71,82,72,
		82,83,72,
		72,83,73,
		83,84,73,
		73,84,74,
		84,85,74,
		74,85,75,
		85,86,75,
		75,86,76,
		86,87,76,
		77,88,78,
		88,89,78,
		78,89,79,
		89,90,79,
		79,90,80,
		90,91,80,
		80,91,81,
		91,92,81,
		81,92,82,
		92,93,82,
		82,93,83,
		93,94,83,
		83,94,84,
		94,95,84,
		84,95,85,
		95,96,85,
		85,96,86,
		96,97,86,
		86,97,87,
		97,98,87,
		88,99,89,
		99,100,89,
		89,100,90,
		100,101,90,
		90,101,91,
		101,102,91,
		91,102,92,
		102,103,92,
		92,103,93,
		103,104,93,
		93,104,94,
		104,105,94,
		94,105,95,
		105,106,95,
		95,106,96,
		106,107,96,
		96,107,97,
		107,108,97,
		97,108,98,
		108,109,98,
		99,110,100,
		110,111,100,
		100,111,101,
		111,112,101,
		101,112,102,
		112,113,102,
		102,113,103,
		113,114,103,
		103,114,104,
		114,115,104,
		104,115,105,
		115,116,105,
		105,116,106,
		116,117,106,
		106,117,107,
		117,118,107,
		107,118,108,
		118,119,108,
		108,119,109,
		119,120,109
	};

	VertexNorm g_SphereVertices_norm[] =
	{
		Vec3f(-0.000000f, 0.000000f, 1.000000f),
		Vec3f(-0.000000f, 0.309017f, 0.951057f),
		Vec3f(-0.000000f, 0.000000f, 1.000000f),
		Vec3f(-0.181636f, 0.250000f, 0.951057f),
		Vec3f(-0.000000f, 0.000000f, 1.000000f),
		Vec3f(-0.293893f, 0.095491f, 0.951057f),
		Vec3f(-0.000000f, -0.000000f, 1.000000f),
		Vec3f(-0.293893f, -0.095492f, 0.951057f),
		Vec3f(-0.000000f, -0.000000f, 1.000000f),
		Vec3f(-0.181636f, -0.250000f, 0.951057f),
		Vec3f(0.000000f, -0.000000f, 1.000000f),
		Vec3f(0.000000f, -0.309017f, 0.951057f),
		Vec3f(0.000000f, -0.000000f, 1.000000f),
		Vec3f(0.181636f, -0.250000f, 0.951057f),
		Vec3f(0.000000f, -0.000000f, 1.000000f),
		Vec3f(0.293893f, -0.095492f, 0.951057f),
		Vec3f(0.000000f, 0.000000f, 1.000000f),
		Vec3f(0.293893f, 0.095492f, 0.951057f),
		Vec3f(0.000000f, 0.000000f, 1.000000f),
		Vec3f(0.181636f, 0.250000f, 0.951057f),
		Vec3f(-0.000000f, 0.000000f, 1.000000f),
		Vec3f(-0.000000f, 0.309017f, 0.951057f),
		Vec3f(-0.000000f, 0.587785f, 0.809017f),
		Vec3f(-0.345491f, 0.475528f, 0.809017f),
		Vec3f(-0.559017f, 0.181636f, 0.809017f),
		Vec3f(-0.559017f, -0.181636f, 0.809017f),
		Vec3f(-0.345491f, -0.475528f, 0.809017f),
		Vec3f(0.000000f, -0.587785f, 0.809017f),
		Vec3f(0.345492f, -0.475528f, 0.809017f),
		Vec3f(0.559017f, -0.181636f, 0.809017f),
		Vec3f(0.559017f, 0.181636f, 0.809017f),
		Vec3f(0.345491f, 0.475528f, 0.809017f),
		Vec3f(-0.000000f, 0.587785f, 0.809017f),
		Vec3f(-0.000000f, 0.809017f, 0.587785f),
		Vec3f(-0.475528f, 0.654509f, 0.587785f),
		Vec3f(-0.769421f, 0.250000f, 0.587785f),
		Vec3f(-0.769421f, -0.250000f, 0.587785f),
		Vec3f(-0.475528f, -0.654509f, 0.587785f),
		Vec3f(0.000000f, -0.809017f, 0.587785f),
		Vec3f(0.475528f, -0.654508f, 0.587785f),
		Vec3f(0.769421f, -0.250000f, 0.587785f),
		Vec3f(0.769421f, 0.250000f, 0.587785f),
		Vec3f(0.475528f, 0.654509f, 0.587785f),
		Vec3f(-0.000000f, 0.809017f, 0.587785f),
		Vec3f(-0.000000f, 0.951057f, 0.309017f),
		Vec3f(-0.559017f, 0.769421f, 0.309017f),
		Vec3f(-0.904509f, 0.293893f, 0.309017f),
		Vec3f(-0.904508f, -0.293893f, 0.309017f),
		Vec3f(-0.559017f, -0.769421f, 0.309017f),
		Vec3f(0.000000f, -0.951057f, 0.309017f),
		Vec3f(0.559017f, -0.769421f, 0.309017f),
		Vec3f(0.904508f, -0.293893f, 0.309017f),
		Vec3f(0.904508f, 0.293893f, 0.309017f),
		Vec3f(0.559017f, 0.769421f, 0.309017f),
		Vec3f(-0.000000f, 0.951057f, 0.309017f),
		Vec3f(-0.000000f, 1.000000f, -0.000000f),
		Vec3f(-0.587785f, 0.809017f, -0.000000f),
		Vec3f(-0.951057f, 0.309017f, -0.000000f),
		Vec3f(-0.951057f, -0.309017f, -0.000000f),
		Vec3f(-0.587785f, -0.809017f, -0.000000f),
		Vec3f(0.000000f, -1.000000f, -0.000000f),
		Vec3f(0.587785f, -0.809017f, -0.000000f),
		Vec3f(0.951056f, -0.309017f, -0.000000f),
		Vec3f(0.951056f, 0.309017f, -0.000000f),
		Vec3f(0.587785f, 0.809017f, -0.000000f),
		Vec3f(-0.000000f, 1.000000f, -0.000000f),
		Vec3f(-0.000000f, 0.951057f, -0.309017f),
		Vec3f(-0.559017f, 0.769421f, -0.309017f),
		Vec3f(-0.904509f, 0.293893f, -0.309017f),
		Vec3f(-0.904509f, -0.293893f, -0.309017f),
		Vec3f(-0.559017f, -0.769421f, -0.309017f),
		Vec3f(0.000000f, -0.951057f, -0.309017f),
		Vec3f(0.559017f, -0.769421f, -0.309017f),
		Vec3f(0.904509f, -0.293893f, -0.309017f),
		Vec3f(0.904509f, 0.293893f, -0.309017f),
		Vec3f(0.559017f, 0.769421f, -0.309017f),
		Vec3f(-0.000000f, 0.951057f, -0.309017f),
		Vec3f(-0.000000f, 0.809017f, -0.587785f),
		Vec3f(-0.475528f, 0.654509f, -0.587785f),
		Vec3f(-0.769421f, 0.250000f, -0.587785f),
		Vec3f(-0.769421f, -0.250000f, -0.587785f),
		Vec3f(-0.475528f, -0.654509f, -0.587785f),
		Vec3f(0.000000f, -0.809017f, -0.587785f),
		Vec3f(0.475528f, -0.654508f, -0.587785f),
		Vec3f(0.769421f, -0.250000f, -0.587785f),
		Vec3f(0.769421f, 0.250000f, -0.587785f),
		Vec3f(0.475528f, 0.654509f, -0.587785f),
		Vec3f(-0.000000f, 0.809017f, -0.587785f),
		Vec3f(-0.000000f, 0.587785f, -0.809017f),
		Vec3f(-0.345491f, 0.475528f, -0.809017f),
		Vec3f(-0.559017f, 0.181636f, -0.809017f),
		Vec3f(-0.559017f, -0.181636f, -0.809017f),
		Vec3f(-0.345491f, -0.475528f, -0.809017f),
		Vec3f(0.000000f, -0.587785f, -0.809017f),
		Vec3f(0.345492f, -0.475528f, -0.809017f),
		Vec3f(0.559017f, -0.181636f, -0.809017f),
		Vec3f(0.559017f, 0.181636f, -0.809017f),
		Vec3f(0.345491f, 0.475528f, -0.809017f),
		Vec3f(-0.000000f, 0.587785f, -0.809017f),
		Vec3f(-0.000000f, 0.309017f, -0.951057f),
		Vec3f(-0.181636f, 0.250000f, -0.951057f),
		Vec3f(-0.293892f, 0.095491f, -0.951057f),
		Vec3f(-0.293892f, -0.095491f, -0.951057f),
		Vec3f(-0.181635f, -0.250000f, -0.951057f),
		Vec3f(0.000000f, -0.309017f, -0.951057f),
		Vec3f(0.181636f, -0.250000f, -0.951057f),
		Vec3f(0.293892f, -0.095491f, -0.951057f),
		Vec3f(0.293892f, 0.095491f, -0.951057f),
		Vec3f(0.181635f, 0.250000f, -0.951057f),
		Vec3f(-0.000000f, 0.309017f, -0.951057f),
		Vec3f(0.000000f, -0.000000f, -1.000000f),
		Vec3f(0.000000f, -0.000000f, -1.000000f),
		Vec3f(0.000000f, -0.000000f, -1.000000f),
		Vec3f(0.000000f, 0.000000f, -1.000000f),
		Vec3f(0.000000f, 0.000000f, -1.000000f),
		Vec3f(-0.000000f, 0.000000f, -1.000000f),
		Vec3f(-0.000000f, 0.000000f, -1.000000f),
		Vec3f(-0.000000f, 0.000000f, -1.000000f),
		Vec3f(-0.000000f, -0.000000f, -1.000000f),
		Vec3f(-0.000000f, -0.000000f, -1.000000f),
		Vec3f(0.000000f, -0.000000f, -1.000000f)
	};

	VertexTexCoord g_SphereVertices_texCoord[] =
	{
		Vec2f(0.000000f,  1.000000f),
		Vec2f(0.000000f,  0.900000f),
		Vec2f(0.100000f,  1.000000f),
		Vec2f(0.100000f,  0.900000f),
		Vec2f(0.200000f,  1.000000f),
		Vec2f(0.200000f,  0.900000f),
		Vec2f(0.300000f,  1.000000f),
		Vec2f(0.300000f,  0.900000f),
		Vec2f(0.400000f,  1.000000f),
		Vec2f(0.400000f,  0.900000f),
		Vec2f(0.500000f, 1.000000f),
		Vec2f(0.500000f, 0.900000f),
		Vec2f(0.600000f, 1.000000f),
		Vec2f(0.600000f, 0.900000f),
		Vec2f(0.700000f, 1.000000f),
		Vec2f(0.700000f, 0.900000f),
		Vec2f(0.800000f, 1.000000f),
		Vec2f(0.800000f, 0.900000f),
		Vec2f(0.900000f, 1.000000f),
		Vec2f(0.900000f, 0.900000f),
		Vec2f(1.000000f, 1.000000f),
		Vec2f(1.000000f, 0.900000f),
		Vec2f(0.000000f, 0.800000f),
		Vec2f(0.100000f, 0.800000f),
		Vec2f(0.200000f, 0.800000f),
		Vec2f(0.300000f, 0.800000f),
		Vec2f(0.400000f, 0.800000f),
		Vec2f(0.500000f, 0.800000f),
		Vec2f(0.600000f, 0.800000f),
		Vec2f(0.700000f, 0.800000f),
		Vec2f(0.800000f, 0.800000f),
		Vec2f(0.900000f, 0.800000f),
		Vec2f(1.000000f, 0.800000f),
		Vec2f(0.000000f, 0.700000f),
		Vec2f(0.100000f, 0.700000f),
		Vec2f(0.200000f, 0.700000f),
		Vec2f(0.300000f, 0.700000f),
		Vec2f(0.400000f, 0.700000f),
		Vec2f(0.500000f, 0.700000f),
		Vec2f(0.600000f, 0.700000f),
		Vec2f(0.700000f, 0.700000f),
		Vec2f(0.800000f, 0.700000f),
		Vec2f(0.900000f, 0.700000f),
		Vec2f(1.000000f, 0.700000f),
		Vec2f(0.000000f, 0.600000f),
		Vec2f(0.100000f, 0.600000f),
		Vec2f(0.200000f, 0.600000f),
		Vec2f(0.300000f, 0.600000f),
		Vec2f(0.400000f, 0.600000f),
		Vec2f(0.500000f, 0.600000f),
		Vec2f(0.600000f, 0.600000f),
		Vec2f(0.700000f, 0.600000f),
		Vec2f(0.800000f, 0.600000f),
		Vec2f(0.900000f, 0.600000f),
		Vec2f(1.000000f, 0.600000f),
		Vec2f(0.000000f, 0.500000f),
		Vec2f(0.100000f, 0.500000f),
		Vec2f(0.200000f, 0.500000f),
		Vec2f(0.300000f, 0.500000f),
		Vec2f(0.400000f, 0.500000f),
		Vec2f(0.500000f, 0.500000f),
		Vec2f(0.600000f, 0.500000f),
		Vec2f(0.700000f, 0.500000f),
		Vec2f(0.800000f, 0.500000f),
		Vec2f(0.900000f, 0.500000f),
		Vec2f(1.000000f, 0.500000f),
		Vec2f(0.000000f, 0.400000f),
		Vec2f(0.100000f, 0.400000f),
		Vec2f(0.200000f, 0.400000f),
		Vec2f(0.300000f, 0.400000f),
		Vec2f(0.400000f, 0.400000f),
		Vec2f(0.500000f, 0.400000f),
		Vec2f(0.600000f, 0.400000f),
		Vec2f(0.700000f, 0.400000f),
		Vec2f(0.800000f, 0.400000f),
		Vec2f(0.900000f, 0.400000f),
		Vec2f(1.000000f, 0.400000f),
		Vec2f(0.000000f, 0.300000f),
		Vec2f(0.100000f, 0.300000f),
		Vec2f(0.200000f, 0.300000f),
		Vec2f(0.300000f, 0.300000f),
		Vec2f(0.400000f, 0.300000f),
		Vec2f(0.500000f, 0.300000f),
		Vec2f(0.600000f, 0.300000f),
		Vec2f(0.700000f, 0.300000f),
		Vec2f(0.800000f, 0.300000f),
		Vec2f(0.900000f, 0.300000f),
		Vec2f(1.000000f, 0.300000f),
		Vec2f(0.000000f, 0.200000f),
		Vec2f(0.100000f, 0.200000f),
		Vec2f(0.200000f, 0.200000f),
		Vec2f(0.300000f, 0.200000f),
		Vec2f(0.400000f, 0.200000f),
		Vec2f(0.500000f, 0.200000f),
		Vec2f(0.600000f, 0.200000f),
		Vec2f(0.700000f, 0.200000f),
		Vec2f(0.800000f, 0.200000f),
		Vec2f(0.900000f, 0.200000f),
		Vec2f(1.000000f, 0.200000f),
		Vec2f(0.000000f, 0.100000f),
		Vec2f(0.100000f,  0.100000f),
		Vec2f(0.200000f,  0.100000f),
		Vec2f(0.300000f,  0.100000f),
		Vec2f(0.400000f,  0.100000f),
		Vec2f(0.500000f,  0.100000f),
		Vec2f(0.600000f,  0.100000f),
		Vec2f(0.700000f,  0.100000f),
		Vec2f(0.800000f,  0.100000f),
		Vec2f(0.900000f,  0.100000f),
		Vec2f(1.000000f,  0.100000f),
		Vec2f(0.000000f,  -0.000000f),
		Vec2f(0.100000f,  -0.000000f),
		Vec2f(0.200000f,  -0.000000f),
		Vec2f(0.300000f,  -0.000000f),
		Vec2f(0.400000f,  -0.000000f),
		Vec2f(0.500000f,  -0.000000f),
		Vec2f(0.600000f,  -0.000000f),
		Vec2f(0.700000f,  -0.000000f),
		Vec2f(0.800000f,  -0.000000f),
		Vec2f(0.900000f,  -0.000000f),
		Vec2f(1.000000f,  -0.000000f)
	};



	void CreateSphereMesh()
	{
		// runtime model
		meshData  runModel;

		// Name
		std::string BaseName = "SphereMesh";

		Trace::out("%12s ", BaseName.c_str());

		unsigned int numTris = (sizeof(g_SphereIndices) / sizeof(g_SphereIndices[0])) / 3;
		unsigned int numVerts = sizeof(g_SphereVertices_pos) / sizeof(g_SphereVertices_pos[0]);

		//---------------------------------
		// Model Name
		//---------------------------------
		const char *pMeshName = "SphereMesh";
		memcpy_s(runModel.pMeshName, meshData::FILE_NAME_SIZE, pMeshName, strlen(pMeshName));

		//---------------------------------
		// Set vbo 
		//---------------------------------
		GLTF::SetCustomVBO(runModel.vbo_vert,
						   g_SphereVertices_pos,
						   sizeof(g_SphereVertices_pos),
						   numVerts,
						   vboData::VBO_COMPONENT::FLOAT,
						   vboData::VBO_TYPE::VEC3,
						   vboData::VBO_TARGET::ARRAY_BUFFER
		);
		//runModel.vbo_vert.Print("vbo_vert");

		GLTF::SetCustomVBO(runModel.vbo_norm,
						   g_SphereVertices_norm,
						   sizeof(g_SphereVertices_norm),
						   numVerts,
						   vboData::VBO_COMPONENT::FLOAT,
						   vboData::VBO_TYPE::VEC3,
						   vboData::VBO_TARGET::ARRAY_BUFFER
		);
		//runModel.vbo_norm.Print("vbo_norm");

		GLTF::SetCustomVBO(runModel.vbo_uv,
						   g_SphereVertices_texCoord,
						   sizeof(g_SphereVertices_texCoord),
						   numVerts,
						   vboData::VBO_COMPONENT::FLOAT,
						   vboData::VBO_TYPE::VEC2,
						   vboData::VBO_TARGET::ARRAY_BUFFER
		);
		//runModel.vbo_uv.Print("vbo_uv");

		GLTF::SetCustomVBO_index(runModel.vbo_index,
								 g_SphereIndices,
								 sizeof(g_SphereIndices),
								 sizeof(g_SphereIndices) / sizeof(g_SphereIndices[0]),
								 vboData::VBO_COMPONENT::UNSIGNED_INT,
								 vboData::VBO_TYPE::SCALAR,
								 vboData::VBO_TARGET::ELEMENT_ARRAY_BUFFER
		);
		//runModel.vbo_index.Print("vbo_index");

		//--------------------------------
		// PolyCount
		//--------------------------------
		runModel.triCount = numTris;
		runModel.vertCount = numVerts;

		meshData_proto mA_proto;
		runModel.Serialize(mA_proto);

		// -------------------------------
		//  Write to file
		//--------------------------------

		File::Handle fh;
		File::Error err;
		bool status;

		// Create output name
		const char *pProtoFileType = nullptr;
		status = GLTF::GetAzulProtoType(pProtoFileType, runModel);
		assert(status);

		std::string OutputFileName = BaseName + pProtoFileType + ".proto.azul";
		Trace::out(" --> %22s\n", OutputFileName.c_str());

		err = File::Open(fh, OutputFileName.c_str(), File::Mode::WRITE);
		assert(err == File::Error::SUCCESS);

		std::string strOut;
		mA_proto.SerializeToString(&strOut);

		File::Write(fh, strOut.data(), strOut.length());
		assert(err == File::Error::SUCCESS);

		err = File::Close(fh);
		assert(err == File::Error::SUCCESS);

		// -------------------------------
		// Read and recreate model data
		// -------------------------------

		err = File::Open(fh, OutputFileName.c_str(), File::Mode::READ);
		assert(err == File::Error::SUCCESS);

		err = File::Seek(fh, File::Position::END, 0);
		assert(err == File::Error::SUCCESS);

		DWORD FileLength;
		err = File::Tell(fh, FileLength);
		assert(err == File::Error::SUCCESS);

		char *poNewBuff = new char[FileLength]();
		assert(poNewBuff);

		err = File::Seek(fh, File::Position::BEGIN, 0);
		assert(err == File::Error::SUCCESS);

		err = File::Read(fh, poNewBuff, FileLength);
		assert(err == File::Error::SUCCESS);

		err = File::Close(fh);
		assert(err == File::Error::SUCCESS);

		std::string strIn(poNewBuff, FileLength);
		meshData_proto mB_proto;

		mB_proto.ParseFromString(strIn);

		meshData mB;
		mB.Deserialize(mB_proto);

		delete[] poNewBuff;

	}


}

// --- End of File ---
