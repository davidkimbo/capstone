/* ------------------------------------------------------------
author: "JOS"
license: "STK-4.3"
name: "DNN"
Code generated with Faust 2.79.2 (https://faust.grame.fr)
Compilation options: -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <chrono>

#include "faust/dsp/dsp.h"
#include "faust/gui/UI.h"
#include "faust/gui/meta.h"

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif


class mydsp : public dsp {
	
 private:
	
	float fVec0[5];
	float fVec1[5];
	float fVec2[5];
	float fVec3[5];
	float fVec4[5];
	float fVec5[5];
	float fVec6[5];
	float fVec7[5];
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	float fRec4[2];
	float fRec5[2];
	float fRec6[2];
	float fRec7[2];
	int fSampleRate;
	
 public:
	mydsp() {
	}
	
	void metadata(Meta* m) { 
		m->declare("author", "JOS");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("filename", "test.dsp");
		m->declare("license", "STK-4.3");
		m->declare("name", "DNN");
	}

	virtual int getNumInputs() {
		return 1;
	}
	virtual int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
	}
	
	virtual void instanceResetUserInterface() {
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 5; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 5; l1 = l1 + 1) {
			fVec1[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 5; l2 = l2 + 1) {
			fVec2[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 5; l3 = l3 + 1) {
			fVec3[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 5; l4 = l4 + 1) {
			fVec4[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 5; l5 = l5 + 1) {
			fVec5[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 5; l6 = l6 + 1) {
			fVec6[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 5; l7 = l7 + 1) {
			fVec7[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec0[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec1[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec2[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec3[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec5[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec6[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec7[l15] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("DNN");
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			float fTemp1 = 0.03031456f - 0.024105763f * fTemp0;
			float fTemp2 = std::exp(-fTemp1);
			float fTemp3 = std::exp(fTemp1);
			float fTemp4 = (fTemp3 - fTemp2) / (fTemp3 + fTemp2);
			fVec0[0] = fTemp4;
			float fTemp5 = 0.049258366f * fTemp0 + -0.018192723f;
			float fTemp6 = std::exp(-fTemp5);
			float fTemp7 = std::exp(fTemp5);
			float fTemp8 = (fTemp7 - fTemp6) / (fTemp7 + fTemp6);
			fVec1[0] = fTemp8;
			float fTemp9 = 0.0957546f - 0.0016478345f * fTemp0;
			float fTemp10 = std::exp(-fTemp9);
			float fTemp11 = std::exp(fTemp9);
			float fTemp12 = (fTemp11 - fTemp10) / (fTemp11 + fTemp10);
			fVec2[0] = fTemp12;
			float fTemp13 = 0.089864925f * fTemp0 + 0.0037179217f;
			float fTemp14 = std::exp(-fTemp13);
			float fTemp15 = std::exp(fTemp13);
			float fTemp16 = (fTemp15 - fTemp14) / (fTemp15 + fTemp14);
			fVec3[0] = fTemp16;
			float fTemp17 = 0.009470826f * fTemp0 + -0.088351496f;
			float fTemp18 = std::exp(-fTemp17);
			float fTemp19 = std::exp(fTemp17);
			float fTemp20 = (fTemp19 - fTemp18) / (fTemp19 + fTemp18);
			fVec4[0] = fTemp20;
			float fTemp21 = 0.04084895f * fTemp0 + 0.023380509f;
			float fTemp22 = std::exp(-fTemp21);
			float fTemp23 = std::exp(fTemp21);
			float fTemp24 = (fTemp23 - fTemp22) / (fTemp23 + fTemp22);
			fVec5[0] = fTemp24;
			float fTemp25 = 0.04037497f - 0.09796125f * fTemp0;
			float fTemp26 = std::exp(-fTemp25);
			float fTemp27 = std::exp(fTemp25);
			float fTemp28 = (fTemp27 - fTemp26) / (fTemp27 + fTemp26);
			fVec6[0] = fTemp28;
			float fTemp29 = 0.04745716f * fTemp0 + -0.01659432f;
			float fTemp30 = std::exp(-fTemp29);
			float fTemp31 = std::exp(fTemp29);
			float fTemp32 = (fTemp31 - fTemp30) / (fTemp31 + fTemp30);
			fVec7[0] = fTemp32;
			float fTemp33 = 0.16337663f * fVec6[4] + 0.05875078f * fVec6[2] + 0.123514175f * fVec0[4] + 0.34700185f * fVec1[4] + 0.3400051f * fVec2[4] + 0.2736292f * fVec7[4] + 0.15346134f * fVec7[2] + 0.2884329f * fTemp24 + 0.13638008f * fVec4[2] + 0.22826004f * fTemp32 + 0.32066923f * fVec3[2] + 0.18049562f * fTemp12 + 0.34640485f * fVec1[2] + 0.34411603f * fVec0[2] + 0.34478325f * fTemp28 + (-0.06919427f - (0.3700207f * fVec3[4] + 0.24022911f * fVec4[4] + 0.35036242f * fVec5[2] + 0.11541057f * fVec5[4] + 0.08075139f * fTemp20 + 0.13988617f * fTemp16 + 0.19713391f * fVec2[2] + 0.12008813f * fTemp8 + 0.27640924f * fTemp4));
			float fTemp34 = std::exp(-fTemp33);
			float fTemp35 = std::exp(fTemp33);
			float fTemp36 = (fTemp35 - fTemp34) / (fTemp35 + fTemp34);
			float fTemp37 = 0.3539803f * fVec6[4] + 0.06170574f * fVec6[2] + 0.20766234f * fVec0[2] + 0.14953583f * fVec1[4] + 0.19008195f * fVec2[4] + 0.24478173f * fVec5[2] + 0.14536214f * fVec5[4] + 0.33901095f * fVec4[4] + 0.113990545f * fVec7[2] + 0.23315704f * fTemp16 + 0.13555259f * fVec2[2] + 0.35828793f * fTemp8 + 0.0068202913f * fTemp4 + 0.044308662f * fTemp28 + (-0.09067609f - (0.03802246f * fVec3[4] + 0.16734251f * fVec7[4] + 0.08403057f * fVec4[2] + 0.32207492f * fTemp24 + 0.35184452f * fTemp20 + 0.34240615f * fTemp32 + 0.3050558f * fVec3[2] + 0.31455356f * fTemp12 + 0.13651198f * fVec1[2] + 0.37690714f * fVec0[4]));
			float fTemp38 = std::exp(-fTemp37);
			float fTemp39 = std::exp(fTemp37);
			float fTemp40 = (fTemp39 - fTemp38) / (fTemp39 + fTemp38);
			float fTemp41 = 0.003354311f * fVec0[2] + 0.18735558f * fVec1[2] + 0.097709596f * fVec3[4] + 0.35303426f * fVec7[4] + 0.23656654f * fTemp20 + 0.25712866f * fVec4[2] + 0.10503495f * fTemp32 + 0.11996287f * fTemp16 + 0.21160269f * fVec2[4] + 0.19183415f * fTemp8 + 0.10957003f * fTemp4 + 0.3097257f * fVec6[2] + (0.09896043f - (0.3774466f * fVec6[4] + 0.091398954f * fVec2[2] + 0.0029540956f * fTemp24 + 0.28353447f * fVec5[2] + 0.38665906f * fVec5[4] + 0.03150311f * fVec4[4] + 0.08921301f * fVec7[2] + 0.024722159f * fVec3[2] + 0.07528901f * fTemp12 + 0.40068683f * fVec1[4] + 0.0048389733f * fVec0[4] + 0.31355402f * fTemp28));
			float fTemp42 = std::exp(-fTemp41);
			float fTemp43 = std::exp(fTemp41);
			float fTemp44 = (fTemp43 - fTemp42) / (fTemp43 + fTemp42);
			float fTemp45 = 0.07792762f * fVec1[2] + 0.14443576f * fVec7[4] + 0.24480325f * fVec7[2] + 0.24742979f * fVec5[2] + 0.22214144f * fVec5[4] + 0.09443283f * fTemp20 + 0.35624784f * fTemp32 + 0.22863108f * fVec3[4] + 0.057792038f * fTemp12 + 0.023114204f * fTemp8 + 0.13858742f * fVec6[2] + (0.06687769f - (0.17989704f * fVec6[4] + 0.18174094f * fTemp28 + 0.15927908f * fVec0[4] + 0.40477163f * fVec0[2] + 0.20597564f * fVec2[4] + 0.28378785f * fVec3[2] + 0.1858386f * fVec4[4] + 0.020430118f * fTemp24 + 0.2917482f * fVec4[2] + 0.014237434f * fTemp16 + 0.3659124f * fVec2[2] + 0.3129701f * fVec1[4] + 0.03912437f * fTemp4));
			float fTemp46 = std::exp(-fTemp45);
			float fTemp47 = std::exp(fTemp45);
			float fTemp48 = (fTemp47 - fTemp46) / (fTemp47 + fTemp46);
			float fTemp49 = std::exp(-(0.02955454f * fRec4[1] + 0.120515764f * fRec3[1] + 0.14210433f * fRec2[1] + 0.43078315f * fTemp48 + 0.29744738f * fTemp44 + 0.20698518f * fTemp40 + 0.10695386f * fRec0[1] + (0.05408807f - (0.42100325f * fRec7[1] + 0.13293384f * fRec6[1] + 0.28347367f * fRec5[1] + 0.17177409f * fTemp36 + 0.14562261f * fRec1[1])))) + 1.0f;
			float fTemp50 = 0.15996951f * fTemp48 + 0.2472713f * fTemp44 + 0.23018259f * fTemp36 + 0.18389761f * fTemp40 + (0.34013966f * fRec1[1] + 0.1347879f * fRec6[1] + 0.0723465f * fRec7[1] + (-0.015805801f - (0.12863788f * fRec0[1] + 0.35234836f * fRec2[1] + 0.059595622f * fRec3[1] + 0.29692256f * fRec4[1] + 0.2845357f * fRec5[1]))) / (std::exp(-(0.17260279f * fRec7[1] + 0.0797287f * fRec5[1] + 0.081347704f * fRec1[1] + 0.3234316f * fTemp48 + 0.29270846f * fTemp36 + 0.3418044f * fRec0[1] + (0.0674113f - (0.018334014f * fRec6[1] + 0.03797427f * fRec4[1] + 0.40347868f * fRec3[1] + 0.36802137f * fTemp44 + 0.2837838f * fTemp40 + 0.01315042f * fRec2[1])))) + 1.0f) + 0.02680613f;
			float fTemp51 = std::exp(-fTemp50);
			float fTemp52 = std::exp(fTemp50);
			fRec0[0] = (1.0f - 1.0f / fTemp49) * (fTemp52 - fTemp51) / (fTemp52 + fTemp51) + fRec0[1] / fTemp49;
			float fTemp53 = std::exp(-(0.29081845f * fTemp48 + 0.16404802f * fTemp44 + 0.2297023f * fTemp36 + 0.19196126f * fRec1[1] + (0.0072333487f - (0.28347084f * fRec7[1] + 0.1875968f * fRec6[1] + 0.084485754f * fRec5[1] + 0.14517286f * fRec4[1] + 0.11627469f * fRec3[1] + 0.21425138f * fRec2[1] + 0.05111608f * fTemp40 + 0.21576117f * fRec0[1])))) + 1.0f;
			float fTemp54 = 0.04068601f * fTemp44 + 0.29297954f * fTemp36 + 0.15456885f * fTemp40 + (0.025729038f * fRec1[1] + 0.055390406f * fRec2[1] + 0.077823624f * fRec3[1] + 0.110354125f * fRec5[1] + 0.1750277f * fRec6[1] + (-0.01569822f - (0.47559342f * fRec0[1] + 0.16421567f * fRec4[1] + 0.18602975f * fRec7[1]))) / (std::exp(-(0.23856181f * fRec7[1] + 0.08192696f * fRec6[1] + 0.36280388f * fRec5[1] + 0.19794975f * fRec4[1] + 0.24821371f * fRec3[1] + 0.2750702f * fRec2[1] + 0.4452992f * fTemp44 + 0.25604254f * fTemp40 + 0.34027016f * fRec1[1] + (-0.059377406f - (0.38963044f * fTemp48 + 0.0100316405f * fTemp36 + 0.1277291f * fRec0[1])))) + 1.0f) + (0.021890437f - 0.1585842f * fTemp48);
			float fTemp55 = std::exp(-fTemp54);
			float fTemp56 = std::exp(fTemp54);
			fRec1[0] = (1.0f - 1.0f / fTemp53) * (fTemp56 - fTemp55) / (fTemp56 + fTemp55) + fRec1[1] / fTemp53;
			float fTemp57 = std::exp(-(0.32456252f * fRec6[1] + 0.24118616f * fRec5[1] + 0.13971388f * fTemp40 + 0.03448102f * fRec2[1] + (0.015146837f - (0.19630185f * fRec7[1] + 0.07561112f * fRec4[1] + 0.040361173f * fRec3[1] + 0.27463105f * fRec1[1] + 0.29414278f * fTemp48 + 0.024635434f * fTemp44 + 0.26993072f * fTemp36 + 0.17417897f * fRec0[1])))) + 1.0f;
			float fTemp58 = 0.34198493f * fTemp48 + 0.13594621f * fTemp44 + 0.2035541f * fTemp36 + (0.2298823f * fRec0[1] + 0.17889747f * fRec6[1] + 0.27877802f * fRec7[1] + (-0.010588176f - (0.2492309f * fRec1[1] + 0.008622473f * fRec2[1] + 0.1021227f * fRec3[1] + 0.03538148f * fRec4[1] + 0.18941167f * fRec5[1]))) / (std::exp(-(0.1613701f * fRec7[1] + 0.03773026f * fRec6[1] + 0.06693108f * fRec5[1] + 0.14967698f * fRec4[1] + 0.16644722f * fRec3[1] + 0.3627913f * fTemp44 + 0.11352217f * fTemp36 + 0.09413028f * fTemp40 + 0.029928144f * fRec0[1] + (-0.034518234f - (0.09421458f * fRec2[1] + 0.13148859f * fTemp48 + 0.023391359f * fRec1[1])))) + 1.0f) + (-0.0351323f - 0.43151933f * fTemp40);
			float fTemp59 = std::exp(-fTemp58);
			float fTemp60 = std::exp(fTemp58);
			fRec2[0] = (1.0f - 1.0f / fTemp57) * (fTemp60 - fTemp59) / (fTemp60 + fTemp59) + fRec2[1] / fTemp57;
			float fTemp61 = std::exp(-(0.12358344f * fRec6[1] + 0.1702935f * fRec2[1] + 0.40284163f * fRec1[1] + 0.24463826f * fTemp44 + 0.38045216f * fTemp40 + 0.25439593f * fRec0[1] + (0.039327398f - (0.17876408f * fRec7[1] + 0.02806852f * fRec5[1] + 0.00735188f * fRec4[1] + 0.22802792f * fTemp48 + 0.07938829f * fTemp36 + 0.093681745f * fRec3[1])))) + 1.0f;
			float fTemp62 = 0.11842775f * fTemp48 + 0.31003034f * fTemp36 + 0.17092448f * fTemp40 + (0.3041942f * fRec2[1] + 0.13377954f * fRec7[1] + (0.07363066f - (0.15041894f * fRec0[1] + 0.17774704f * fRec1[1] + 0.4869764f * fRec3[1] + 0.32894984f * fRec4[1] + 0.008048665f * fRec5[1] + 0.28504232f * fRec6[1]))) / (std::exp(-(0.1635132f * fRec7[1] + 0.44339028f * fRec4[1] + 0.12217277f * fTemp48 + 0.15919346f * fTemp36 + 0.015778095f * fTemp40 + 0.08561185f * fRec2[1] + (0.04152964f - (0.21459135f * fRec6[1] + 0.20549689f * fRec5[1] + 0.107324995f * fRec3[1] + 0.042605948f * fRec1[1] + 0.0024449527f * fTemp44 + 0.36521742f * fRec0[1])))) + 1.0f) + (-0.05370086f - 0.27920172f * fTemp44);
			float fTemp63 = std::exp(-fTemp62);
			float fTemp64 = std::exp(fTemp62);
			fRec3[0] = (1.0f - 1.0f / fTemp61) * (fTemp64 - fTemp63) / (fTemp64 + fTemp63) + fRec3[1] / fTemp61;
			float fTemp65 = std::exp(-(0.09411694f * fRec7[1] + 0.024849087f * fTemp44 + 0.4120984f * fTemp36 + 0.16759494f * fRec4[1] + (-0.07097515f - (0.18010518f * fRec6[1] + 0.10120114f * fRec5[1] + 0.011088064f * fRec3[1] + 0.37959036f * fRec2[1] + 0.10555537f * fRec1[1] + 0.34120864f * fTemp48 + 0.2824296f * fTemp40 + 0.049753137f * fRec0[1])))) + 1.0f;
			float fTemp66 = 0.29942292f * fTemp48 + 0.42062283f * fTemp44 + 0.12444335f * fTemp36 + (0.007975368f * fRec0[1] + 0.38324964f * fRec1[1] + 0.40289292f * fRec2[1] + 0.018281955f * fRec4[1] + 0.060456377f * fRec6[1] + 0.021378104f * fRec7[1] + (-0.018921066f - (0.15743692f * fRec3[1] + 0.32107228f * fRec5[1]))) / (std::exp(-(0.15927199f * fRec6[1] + 0.022590457f * fRec3[1] + 0.003498733f * fTemp44 + 0.43082082f * fTemp36 + 0.2697174f * fTemp40 + 0.19593588f * fRec2[1] + (-0.07546359f - (0.20368102f * fRec7[1] + 0.10052203f * fRec5[1] + 0.069925874f * fRec4[1] + 0.085729174f * fRec1[1] + 0.2133714f * fTemp48 + 0.112537816f * fRec0[1])))) + 1.0f) + (-0.116495125f - 0.16306695f * fTemp40);
			float fTemp67 = std::exp(-fTemp66);
			float fTemp68 = std::exp(fTemp66);
			fRec4[0] = (1.0f - 1.0f / fTemp65) * (fTemp68 - fTemp67) / (fTemp68 + fTemp67) + fRec4[1] / fTemp65;
			float fTemp69 = std::exp(-(0.14991602f * fRec5[1] + 0.10202651f * fRec4[1] + 0.14572714f * fRec3[1] + 0.020130208f * fRec2[1] + 0.2842923f * fRec1[1] + 0.46150774f * fTemp48 + 0.28033465f * fTemp36 + 0.1575966f * fRec0[1] + (-0.033213675f - (0.311588f * fRec7[1] + 0.15926728f * fTemp44 + 0.28238457f * fTemp40 + 0.27727306f * fRec6[1])))) + 1.0f;
			float fTemp70 = 0.27060175f * fTemp44 + 0.0316343f * fTemp36 + 0.17980093f * fTemp40 + (0.06496766f * fRec1[1] + 0.16576247f * fRec4[1] + 0.0373326f * fRec5[1] + 0.3287274f * fRec6[1] + (-0.06204033f - (0.06178335f * fRec0[1] + 0.31380472f * fRec2[1] + 0.38253766f * fRec3[1] + 0.23726784f * fRec7[1]))) / (std::exp(-(0.062331986f * fRec7[1] + 0.26975676f * fRec6[1] + 0.050277025f * fRec5[1] + 0.02788309f * fRec3[1] + 0.11665905f * fRec2[1] + 0.026501715f * fRec1[1] + 0.21617723f * fTemp48 + 0.43418014f * fTemp40 + 0.1519735f * fRec0[1] + (0.009834856f - (0.3425072f * fTemp44 + 0.32094902f * fTemp36 + 0.35317597f * fRec4[1])))) + 1.0f) + (-0.0060015027f - 0.41922617f * fTemp48);
			float fTemp71 = std::exp(-fTemp70);
			float fTemp72 = std::exp(fTemp70);
			fRec5[0] = (1.0f - 1.0f / fTemp69) * (fTemp72 - fTemp71) / (fTemp72 + fTemp71) + fRec5[1] / fTemp69;
			float fTemp73 = std::exp(-(0.09511767f * fRec1[1] + 0.09452135f * fRec2[1] + 0.26017344f * fRec5[1] + 0.12737341f * fRec7[1] + (0.019052029f - (0.14485717f * fRec6[1] + 0.16487281f * fRec4[1] + 0.1730182f * fRec3[1] + 0.44806248f * fTemp48 + 0.36332726f * fTemp44 + 0.12761506f * fTemp36 + 0.124691576f * fTemp40 + 0.37097725f * fRec0[1])))) + 1.0f;
			float fTemp74 = (0.11748273f * fRec0[1] + 0.18048388f * fRec1[1] + 0.41778204f * fRec5[1] + (0.024335416f - (0.26978725f * fRec2[1] + 0.21738924f * fRec3[1] + 0.031764526f * fRec4[1] + 0.24967608f * fRec6[1] + 0.048669416f * fRec7[1]))) / (std::exp(-(0.119223684f * fRec7[1] + 0.34652844f * fRec6[1] + 0.25145513f * fRec4[1] + 0.46039182f * fTemp44 + 0.29480356f * fTemp36 + 0.4393229f * fTemp40 + 0.21827956f * fRec1[1] + (-0.1033214f - (0.20791414f * fRec5[1] + 0.12918805f * fRec3[1] + 0.104062475f * fRec2[1] + 0.24005234f * fTemp48 + 0.18476854f * fRec0[1])))) + 1.0f) + (0.007153086f - (0.16118908f * fTemp48 + 0.35985866f * fTemp44 + 0.23504734f * fTemp36 + 0.21666086f * fTemp40));
			float fTemp75 = std::exp(-fTemp74);
			float fTemp76 = std::exp(fTemp74);
			fRec6[0] = (1.0f - 1.0f / fTemp73) * (fTemp76 - fTemp75) / (fTemp76 + fTemp75) + fRec6[1] / fTemp73;
			float fTemp77 = std::exp(-(0.16589026f * fRec6[1] + 0.21714215f * fRec5[1] + 0.4110971f * fRec4[1] + 0.15933394f * fRec2[1] + 0.4437073f * fTemp44 + 0.0678595f * fRec0[1] + (-0.0462227f - (0.062194414f * fRec7[1] + 0.3317218f * fRec3[1] + 0.2780239f * fTemp48 + 0.2954098f * fTemp36 + 0.032058895f * fTemp40 + 0.08319456f * fRec1[1])))) + 1.0f;
			float fTemp78 = 0.02578336f * fTemp48 + 0.46186078f * fTemp36 + 0.07815695f * fTemp40 + (0.14347766f * fRec1[1] + 0.17393489f * fRec3[1] + 0.38362312f * fRec7[1] + (0.016746659f - (0.04910714f * fRec0[1] + 0.085379355f * fRec2[1] + 0.13355339f * fRec4[1] + 0.06773756f * fRec5[1] + 0.048294015f * fRec6[1]))) / (std::exp(-(0.07115414f * fRec7[1] + 0.23982985f * fRec6[1] + 0.22966227f * fRec5[1] + 0.113115236f * fRec3[1] + 0.19954461f * fTemp48 + 0.40753472f * fTemp44 + 0.38470966f * fTemp40 + 0.04223321f * fRec0[1] + (0.048571564f - (0.11779472f * fRec4[1] + 0.09659259f * fRec2[1] + 0.21490361f * fTemp36 + 0.038968634f * fRec1[1])))) + 1.0f) + (0.09528215f - 0.3737633f * fTemp44);
			float fTemp79 = std::exp(-fTemp78);
			float fTemp80 = std::exp(fTemp78);
			fRec7[0] = (1.0f - 1.0f / fTemp77) * (fTemp80 - fTemp79) / (fTemp80 + fTemp79) + fRec7[1] / fTemp77;
			output0[i0] = FAUSTFLOAT(0.1726783f * fRec1[0] + 0.13115591f * fRec2[0] + 0.20857282f * fRec3[0] + 0.3370584f * fRec4[0] + 0.20711091f * fRec7[0] + (-0.0016857999f - (0.01720345f * fRec0[0] + 0.15350164f * fRec5[0] + 0.8538828f * fRec6[0])));
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec0[j0] = fVec0[j0 - 1];
			}
			for (int j1 = 4; j1 > 0; j1 = j1 - 1) {
				fVec1[j1] = fVec1[j1 - 1];
			}
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec2[j2] = fVec2[j2 - 1];
			}
			for (int j3 = 4; j3 > 0; j3 = j3 - 1) {
				fVec3[j3] = fVec3[j3 - 1];
			}
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec4[j4] = fVec4[j4 - 1];
			}
			for (int j5 = 4; j5 > 0; j5 = j5 - 1) {
				fVec5[j5] = fVec5[j5 - 1];
			}
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec6[j6] = fVec6[j6 - 1];
			}
			for (int j7 = 4; j7 > 0; j7 = j7 - 1) {
				fVec7[j7] = fVec7[j7 - 1];
			}
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec5[1] = fRec5[0];
			fRec6[1] = fRec6[0];
			fRec7[1] = fRec7[0];
		}
	}

};

int main(){
	mydsp dsp;
	dsp.init(44100);
	

	const int blockSize = 128;
	float input[blockSize] = {0.5f};
	float output[blockSize] = {0};
	
	FAUSTFLOAT* in[] = {input}; 
	FAUSTFLOAT* out[] = { output };
	
	auto start = std::chrono::high_resolution_clock::now();
	dsp.compute(blockSize, in, out);
	
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
	
	std::cout << "Processed " << blockSize << "samples in " << duration << " microseconds" << std::endl;
}

#endif
