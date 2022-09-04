#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	bool bLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	bool bLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	bool bLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	bool bLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	bool bLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	bool bLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	bool bLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	bool bLocal_271[1] = { 0 };
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	bool bLocal_293 = 0;
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	float fLocal_296 = 0f;
	bool bLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	bool bLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	unk_0xC90D2DCACD56184C("stripperhome");
	unk_0xC4301E5121A0ED73(true);
	unk_0xDE45D1A1EF45EE61(unk_0x4F8644AF03D0E0D6(), true);
	if (unk_0xC968670BFACE42D9(75))
	{
		func_303();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0x1CA59E306ECB80A5(32, false, -1);
		func_298(0, -1, 0);
		unk_0xB60FEBA45333D36F(1);
		unk_0xAA391C728106F7AF(false);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_112411.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	bVar2 = unk_0x25223CA6B4D20B7F();
	if (func_297() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (bVar2 > 14 && bVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_267(uLocal_300, 1024)))
	{
		func_259(0);
		unk_0x4EDE34FBADD967A6(false);
	}
	unk_0xE532F5D78798DAAB(func_258(0, 0));
	unk_0xE532F5D78798DAAB(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (iLocal_302 > 0)
		{
			func_256();
			iLocal_302 = (iLocal_302 - unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_255();
				break;
			
			case 0:
				func_215(1);
				break;
			
			case 1:
				func_108();
				break;
			
			case 2:
				func_215(0);
				break;
			
			case 3:
				func_90();
				break;
			
			case 4:
				func_38(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&bLocal_258))
				{
					func_7(&bLocal_258);
				}
				else if (func_1(&bLocal_258, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

int func_1(bool bParam0, float fParam1)
{
	if (func_3(bParam0, fParam1))
	{
		func_2(bParam0);
		return 1;
	}
	return 0;
}

void func_2(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

int func_3(bool bParam0, float fParam1)
{
	if (func_10(bParam0))
	{
		if (func_4(bParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_5(bool bParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	if (bParam0)
	{
		bVar0 = unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463());
		fVar1 = (bVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		bVar2 = unk_0x7A5487FE9FAA6B48();
		bVar3 = unk_0xBBDA792448DB5A89(bVar2);
		fVar4 = (bVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_6(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_7(bool bParam0)
{
	if (!func_10(bParam0))
	{
		func_8(bParam0);
	}
}

void func_8(bool bParam0)
{
	func_9(bParam0, 0f);
}

void func_9(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_5(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_11()
{
	if (!func_267(uLocal_300, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_267(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
	{
		return 1;
	}
	if (func_267(uLocal_300, 8192))
	{
		unk_0xC1E8A365BF3B29F2(bLocal_271[0], 60, true);
		if (unk_0x20B60995556D004F(bLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(unk_0xD80958FC74E988A6(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0xBFA48E2FF417213F(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
			{
				unk_0xF82D8F1926A02C3D(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
			}
			if (unk_0xA7A932170592B50E(iLocal_279[0]))
			{
				if (unk_0x02EC0AF5C5A49B7A(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
					unk_0x865908C81A2C22E9(iLocal_279[0], true);
				}
			}
			unk_0x9614299DCB53E54B(&(bLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0xA0EBB943C300E693(true);
		unk_0xA6294919E56FF02A(true);
	}
	func_14(23, 0);
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_32207, bParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_32207, bParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_24(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_23())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_22(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_24(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_22(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_20(unk_0x4F8644AF03D0E0D6())) && !func_17(unk_0x4F8644AF03D0E0D6(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_20(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_16()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_17(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574918;
}

int func_20(bool bParam0)
{
	if (func_17(bParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (bParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return BitTest(Global_2621446, 3);
}

int func_22(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 13);
	}
}

float func_25(bool bParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam2);
}

void func_26()
{
	int iVar0;
	
	func_29();
	if (unk_0xBFA48E2FF417213F(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
	{
		unk_0xF82D8F1926A02C3D(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, false);
	}
	func_27(&uLocal_300, 16384);
	unk_0x428CA6DBD1094446(bLocal_271[0], false);
	unk_0x1913FE4CBF41C463(bLocal_271[0], 104, true);
	unk_0xE8854A4326B9E12B(&iVar0);
	unk_0x15D3A79D4E44B913(false, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, true, 1193033728);
	unk_0x15D3A79D4E44B913(false, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, false, 1193033728);
	unk_0xEA47FE3719165B94(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, false, false, false, false);
	unk_0x39E72BC99E6360CB(iVar0);
	unk_0x5ABA3986D90D8A3B(bLocal_271[0], iVar0);
	unk_0x3841422E9C488D8C(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0xE31C2C72B8692B64(bLocal_271[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	}
}

void func_30(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 30);
	}
	if (!func_23())
	{
		Global_20266.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_20203);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_20194);
		}
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return BitTest(Global_1958711, 5);
}

bool func_35()
{
	return BitTest(Global_1958711, 19);
}

int func_36(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
	}
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0xBB40DD2270B65366(bVar0, -1, false) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x95EED5A694951F9F(bVar0) < 0.95f || unk_0x95EED5A694951F9F(bVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_37()
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(bLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)
{
	struct<3> Var0;
	var uVar1;
	bool bVar2;
	
	func_65();
	if (bParam0)
	{
		Var0 = { Local_287 };
	}
	else
	{
		func_64(&Var0, &uVar1, 0);
	}
	func_61(Var0);
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x997ABD671D25CA0B(bLocal_271[0], false))
		{
			bVar2 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(bVar2) && !unk_0x5F9532F3B5CC2551(bVar2, false))
			{
				if (iLocal_305)
				{
					if (func_59(bVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_58();
						unk_0x504D54DF3F6F2247(bLocal_271[0], false, 16777216);
						func_39();
					}
				}
				else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Var0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_47())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_45(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0x0BCA1D2C47B0D269(131, func_44(), 0f);
		unk_0x0BCA1D2C47B0D269(108, func_43(), 0f);
		unk_0x0BCA1D2C47B0D269(102, func_42(), 0f);
		unk_0x0BCA1D2C47B0D269(8, func_41(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_41()
{
	return iLocal_65;
}

int func_42()
{
	return iLocal_66;
}

int func_43()
{
	return iLocal_64;
}

int func_44()
{
	return 0;
}

int func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x1077788E268557C2())
	{
	}
	if ((!unk_0x655B91F1495A9090() && (unk_0x25CB5A9F37BFD063() || !unk_0x1353F87E89946207())) && unk_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x579CCED0265D4896())
			{
				Var2 = { func_46(unk_0x4F8644AF03D0E0D6()) };
				if (unk_0xB124B57F571D8F18(&Var2))
				{
					if (unk_0xEEE6EACBE8874FBA(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x10FAB35428CCC9D7() && Global_2723612.f_3)
			{
				unk_0xC980E62E33DF1D5C(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				unk_0xAE2206545888AE49(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x655B91F1495A9090())
	{
	}
	if (!unk_0x25CB5A9F37BFD063())
	{
	}
	if (unk_0x1353F87E89946207())
	{
	}
	if (!unk_0x422D396F80A96547())
	{
	}
	return 0;
}

struct<13> func_46(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

int func_47()
{
	if ((unk_0x1077788E268557C2() && unk_0x054354A99211EB96()) && func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_49()
{
	return Global_2725911;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_56((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_51();
	}
}

void func_51()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	bVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		bVar9 = Global_113112;
	}
	else
	{
		bVar9 = Global_113126;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_113122, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_113105, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_113123, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_113106, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_113124, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_113107, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_113125, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_113108, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), bVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_113112, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + bVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_113129, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_113130, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_113131, true);
	if (bVar8 > 0f && unk_0xF34EE736CF047844(bVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_55(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_54() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_53(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_54()
{
	return Global_31959;
}

int func_55(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (bParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, bParam1);
	}
	return 0;
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_19();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_57()
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_58()
{
	if (unk_0x7239B21A38F536BA(bLocal_271[0]) && !unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
	{
		unk_0x9D64D7405520E3D3(bLocal_271[0], true);
		if (unk_0x5891CAC5D4ACFF74(bLocal_271[0]))
		{
			unk_0xED74007FFB146BC2(bLocal_271[0]);
		}
	}
}

int func_59(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	if (!bParam6)
	{
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
	}
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 352, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	func_60(bParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(bParam0, fParam1, bParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x36D782F68B309BDA(bParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(bParam0))
			{
				unk_0x81E1552E35DC3839(bParam0, false);
			}
		}
	}
}

void func_61(struct<3> Param0)
{
	bool bVar0;
	
	if (unk_0xA6DB27D19ECBB7DA(bLocal_277))
	{
		unk_0x86A652570E5F25DD(&bLocal_277);
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x7239B21A38F536BA(bVar0) && !unk_0x5F9532F3B5CC2551(bVar0, false))
	{
		if (unk_0x997ABD671D25CA0B(bLocal_271[0], false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_271[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_276))
				{
					bLocal_276 = func_62(Param0, 1);
				}
			}
		}
	}
}

bool func_62(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_63(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, var uParam1, bool bParam2)
{
	Local_290 = { Local_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = bLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = bLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = bLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_271[0]))
	{
		if (!unk_0x7239B21A38F536BA(bLocal_271[0]))
		{
		}
		else if (unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_74[0], (func_89(uLocal_74[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_74[0]);
			func_88(uLocal_74[0], 0);
			func_72(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			unk_0xCC33FA791322B9D9();
			func_67("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(bLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	MemCopy(&bVar0, {func_71(iParam1)}, 6);
	if (!func_70(bParam0, &bVar0))
	{
		if (!bParam2)
		{
			func_69(bParam0, &bVar0, -1);
		}
		else
		{
			func_68(bParam0, &bVar0);
		}
	}
}

void func_68(bool bParam0, bool bParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_69(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam2);
}

bool func_70(bool bParam0, bool bParam1)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	return unk_0x10BDDBFC529428DD(0);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()
{
	int iVar0;
	
	iVar0 = func_77();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_77()
{
	func_78();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_78()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_82(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_81(unk_0xD80958FC74E988A6());
			if (func_80(iVar0) && (!func_79(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_80(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_79(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_84(bool bParam0, int iParam1)
{
	bool bVar0;
	
	MemCopy(&bVar0, {func_71(iParam1)}, 6);
	func_85(bParam0, &bVar0, 7500, 1);
}

void func_85(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x9D77056A530643F6(bParam2, true);
}

void func_86()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_277))
	{
		unk_0x86A652570E5F25DD(&bLocal_277);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_276))
	{
		unk_0x86A652570E5F25DD(&bLocal_276);
	}
	func_87();
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xA6DB27D19ECBB7DA(uLocal_278[iVar0]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_77)
	{
		case 0:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x997ABD671D25CA0B(bLocal_271[0], false))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) == 0f)
					{
						unk_0x8DFCED7A656F8802(true);
						unk_0xD3BD40951412FEF6(func_100(bLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_93())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), 242628503) != 1)
			{
				func_256();
				if (unk_0x25223CA6B4D20B7F() > 20 || unk_0x25223CA6B4D20B7F() < 4)
				{
					bLocal_303 = false;
				}
				unk_0x5A4F9EDF1673F704(iLocal_45);
				func_91(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(bParam1, true);
}

int func_93()
{
	if (unk_0xD031A9162D01088C(func_100(bLocal_271[0], 0, 0)))
	{
		func_94(bLocal_271[0], 0, 1, -1, 1);
		func_94(unk_0xD80958FC74E988A6(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_94(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(bParam0, true);
	if (!unk_0x4C241E39B23DF959(bVar0, false))
	{
		return;
	}
	iLocal_45 = unk_0x8D4D46230B2C353A();
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0x5A4F9EDF1673F704(4);
		}
	}
	bVar1 = func_98(bVar0);
	bVar2 = func_100(bParam0, 0, 0);
	if (!unk_0xD031A9162D01088C(bVar2))
	{
		unk_0xD3BD40951412FEF6(bVar2);
	}
	else
	{
		unk_0xE8854A4326B9E12B(&iVar3);
		unk_0xEA47FE3719165B94(false, bVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, bParam3, 1, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, false, false, false, false);
		unk_0x39E72BC99E6360CB(iVar3);
		unk_0x5ABA3986D90D8A3B(bParam0, iVar3);
		if (bParam4)
		{
			unk_0x3841422E9C488D8C(&iVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_98(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

char* func_100(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(bParam0, true);
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			if (func_98(bVar0))
			{
				if ((!func_99(0, 1) || iParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || iParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_105()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_64(&Var5, &uVar6, 0);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar2 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
		Var3 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		if (unk_0x2EABE3B06F58C1BE(Var3, &Var7, 3f, 0))
		{
			fVar8 = unk_0x2A488C176D52CCA5(Var3, Var7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_287) < 20f || unk_0x2A488C176D52CCA5(Var3, Var5) < 20f)
		{
			return 0;
		}
		if (unk_0x7EEF65D5F153E26A(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0xC33AB876A77F8164(Var3, fVar4, true, true, &bVar0, false, false, -1);
		if (!bVar0 == 0)
		{
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0xFCDFF7B72D23A1AC(bVar0, unk_0xD80958FC74E988A6(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			bVar1 = unk_0x386F6CE5BAF6091C(Var3, fVar4, false, -1);
			if (!bVar1 == 0)
			{
				if (!bVar1 == bVar2)
				{
					if (unk_0x4C241E39B23DF959(bVar1, false))
					{
						bVar0 = unk_0xBB40DD2270B65366(bVar1, -1, false);
						if (!bVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_106(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_107(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_108()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_213(3000))
		{
			unk_0x891B5B39AC6302AF(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		bVar0 = unk_0xB2D06FAEDE65B577();
		if (unk_0x4C241E39B23DF959(bVar0, false) && !unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x9F47B058362C84B5(bVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (unk_0x9F243D3919F442FE(unk_0xB2D06FAEDE65B577()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_210(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(unk_0xB2D06FAEDE65B577()))
			{
				bLocal_69 = func_210(&uLocal_68, Local_292, 1, bLocal_294);
			}
			else
			{
				bLocal_69 = func_210(&uLocal_68, Local_287, 1, bLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		unk_0x719FF505F097FD20();
	}
	switch (iLocal_73)
	{
		case 0:
			unk_0x8DFCED7A656F8802(true);
			unk_0xCC33FA791322B9D9();
			func_86();
			unk_0x2F844A8B08D76685("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_267(uLocal_300, 256))
			{
				func_208();
				func_27(&uLocal_300, 256);
			}
			if (!func_267(uLocal_300, 32768))
			{
				unk_0xD3BD40951412FEF6(func_207());
				func_27(&uLocal_300, 32768);
			}
			if (!func_267(uLocal_300, 256))
			{
				unk_0xD3BD40951412FEF6(func_206());
				func_27(&uLocal_300, 256);
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				bLocal_307 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				func_205(unk_0xD80958FC74E988A6(), bLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_58();
				func_203(unk_0xD80958FC74E988A6(), Local_285);
				func_203(bLocal_271[0], Local_286);
				iLocal_73 = 2;
			}
			func_201();
			break;
		
		case 1:
			if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_307, true), Local_287) < 2f)
				{
					func_58();
					func_203(unk_0xD80958FC74E988A6(), Local_285);
					func_203(bLocal_271[0], Local_286);
					unk_0xC197616D221FF4A4();
					iLocal_73 = 2;
				}
				else if (unk_0x9CD27B0045628463() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0x02EC0AF5C5A49B7A(iLocal_279[0]))
			{
				unk_0x026FB97D0A425F84(iLocal_279[0], true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
				{
					if (unk_0x9F47B058362C84B5(bLocal_307) == joaat("blimp2"))
					{
						unk_0xEA1C610A04DB6BBB(bLocal_307, false, false);
					}
				}
				func_8(&bLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_200(&bLocal_252) > 1f)
			{
				unk_0x9FBDA379383A52A4(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_199(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				bVar1 = unk_0x25223CA6B4D20B7F();
				bLocal_297 = bVar1 + 8;
				if (bLocal_297 > 23)
				{
					bLocal_297 = (bLocal_297 - 24);
				}
				Local_280.f_7 = bVar1;
				Local_280.f_8 = bLocal_297;
				func_2(&bLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x036F97C908C2B52C(iLocal_279[1]) && unk_0x02EC0AF5C5A49B7A(iLocal_279[1]))
			{
				if (!func_267(uLocal_298, 512))
				{
					if (unk_0x7239B21A38F536BA(bLocal_307) && !unk_0x5F9532F3B5CC2551(bLocal_307, false))
					{
						unk_0x781B3D62BB013EF5(bLocal_307, true);
					}
					func_196(unk_0xD80958FC74E988A6(), func_198());
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), func_195());
					func_172();
					func_27(&uLocal_298, 512);
				}
				else if (!func_267(uLocal_298, 2048))
				{
					if (unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
					{
					}
					if (!func_171() && !unk_0x9072C8B49907BFAD(bLocal_271[0]))
					{
						func_172();
						if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
						{
							unk_0xB8BEC0CA6F0EDB0F(unk_0xD80958FC74E988A6());
							unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
						}
						func_27(&uLocal_298, 2048);
						func_8(&bLocal_252);
						bLocal_273 = func_170();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_200(&bLocal_252) > 1f)
			{
				if (func_145(bLocal_297, 0, bLocal_273, "", &Local_280, (func_200(&bLocal_252) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (unk_0x7239B21A38F536BA(bLocal_307))
						{
							if (unk_0x9F47B058362C84B5(bLocal_307) != joaat("blimp2"))
							{
								unk_0xA56F01F3765B93A0(Local_286, 20f, true, false, false, false);
							}
						}
						else
						{
							unk_0xA56F01F3765B93A0(Local_286, 20f, true, false, false, false);
						}
						if (unk_0x7239B21A38F536BA(bLocal_271[0]))
						{
							unk_0xEA1C610A04DB6BBB(bLocal_271[0], false, false);
						}
						unk_0x4455517B28441E60(unk_0xD80958FC74E988A6(), false);
						func_8(&bLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
			if (func_200(&bLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_143(&uLocal_68);
				}
				func_8(&bLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x02EC0AF5C5A49B7A(iLocal_279[2]))
			{
				unk_0x03FC694AE06C5A20();
				unk_0x0AE73D8DF3A762B2(true);
				unk_0x80ECBC0C856D3B0B(true);
				unk_0x9FBDA379383A52A4(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&bLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_267(uLocal_300, 262144))
			{
				if (func_200(&bLocal_252) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&bLocal_252) > 6f)
			{
				unk_0x026FB97D0A425F84(iLocal_279[3], true);
				if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
				{
					if (unk_0x9F47B058362C84B5(bLocal_307) == joaat("blimp2"))
					{
						unk_0xEA1C610A04DB6BBB(bLocal_307, true, false);
					}
					unk_0xAD738C3085FE7E11(bLocal_307, true, true);
					unk_0x45F6D8EEF34ABEF1(bLocal_307, 1000f);
					unk_0x70DB57649FA8D0D8(bLocal_307, 1000f);
					unk_0x115722B1B9C14C1C(bLocal_307);
				}
				func_8(&bLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_200(&bLocal_252) > 2f)
			{
				unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
			{
				if (!func_267(uLocal_300, 262144))
				{
					unk_0xAD15F075A4DA0FDE(unk_0x4F8644AF03D0E0D6(), Local_289, bLocal_293, false, true, true);
					func_142();
				}
				if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
				{
					if (unk_0x9F47B058362C84B5(bLocal_307) == joaat("blimp2"))
					{
						unk_0xEA1C610A04DB6BBB(bLocal_307, true, false);
					}
				}
				unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
				if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
				{
					unk_0xAD738C3085FE7E11(bLocal_307, true, true);
					unk_0x45F6D8EEF34ABEF1(bLocal_307, 1000f);
					unk_0x70DB57649FA8D0D8(bLocal_307, 1000f);
					unk_0x115722B1B9C14C1C(bLocal_307);
				}
				func_8(&bLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x797AC7CB535BA28F() && func_200(&bLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), unk_0x4700A416E8324EF3(unk_0xD80958FC74E988A6()), false);
				unk_0xB7B0870EB531D08D(unk_0x4F8644AF03D0E0D6(), 30, true, 0);
				if (unk_0xC9D55B1A358A5BF7(unk_0xD80958FC74E988A6(), func_82(0)))
				{
					func_141();
				}
				unk_0x0027501B9F3B407E(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x5F9532F3B5CC2551(bLocal_307, false))
				{
					unk_0xAD738C3085FE7E11(bLocal_307, true, true);
					if (unk_0x9F47B058362C84B5(bLocal_307) != joaat("blimp2"))
					{
						unk_0x06843DA7060A026B(bLocal_307, Local_287, true, false, false, true);
						unk_0x8E2530AA8ADA980E(bLocal_307, bLocal_294);
						if (unk_0x9F243D3919F442FE(bLocal_307) && uLocal_74[0] == 5)
						{
							unk_0x06843DA7060A026B(bLocal_307, -865f, 516.3f, 90f, true, false, false, true);
							unk_0x8E2530AA8ADA980E(bLocal_307, 15f);
						}
						else if (func_209(bLocal_307))
						{
							unk_0x06843DA7060A026B(bLocal_307, Local_292, true, false, false, true);
							unk_0x8E2530AA8ADA980E(bLocal_307, bLocal_295);
						}
						unk_0x49733E92263139D1(bLocal_307, 5f);
					}
				}
				if (!unk_0xB16FCE9DDC7BA182())
				{
					func_199(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0xD716F30D8C8980E2(8, 0, 0);
					func_139(unk_0xBBDA792448DB5A89(8));
					unk_0xD4E8E24955024033(2000);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					func_199(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x7239B21A38F536BA(bLocal_271[0]))
				{
					unk_0x9614299DCB53E54B(&(bLocal_271[0]));
				}
				if (!func_138(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_119(uLocal_74[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_117(uLocal_74[0]);
				iVar2 = func_116(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_74[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_53(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xE80492A9AC099A93(&(Var0.f_1), false);
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_80(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_112(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_113()
{
	func_78();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_116(int iParam0)
{
	return Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_113386.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x10FAB35428CCC9D7())
		{
			if (!func_136(func_112(bParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(bParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113386.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(bParam0, 0);
			func_129(func_112(bParam0), func_137(iParam2), 1);
			bVar1 = unk_0xD53343AA4FB7DD28(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x933D6A9EEC1BACD0(&(Global_2359296[func_128() /*5567*/].f_681.f_1273), bParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(bVar1);
			func_123(bParam0, bVar1);
			Global_112380.f_15[bParam0] = unk_0x9CD27B0045628463();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(bParam0), func_137(iParam2));
	}
}

void func_120(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 0);
			func_121(bParam0, iVar0, 0);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam1 > -1)
	{
		Global_112380.f_4[bParam0] = (unk_0x9CD27B0045628463() + bParam1);
	}
	else
	{
		Global_112380.f_4[bParam0] = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(1200000, 2100000));
	}
}

void func_124(bool bParam0)
{
	if (bParam0 != -1)
	{
		Global_112380.f_3 = (unk_0x9CD27B0045628463() + bParam0);
	}
	else
	{
		Global_112380.f_3 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_127(iParam1, iParam2))
	{
		iVar0 = func_126();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_126()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_127(int iParam0, var uParam1)
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_128()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_129(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8822 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(bParam0, 0, 1);
			func_122(bParam0, 1, 1);
			func_122(bParam0, 2, 1);
			func_121(bParam0, 0, 1);
			func_121(bParam0, 1, 1);
			func_121(bParam0, 2, 1);
		}
		else
		{
			if (func_133(bParam0, iParam1) == 1 && func_132(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 1);
			func_121(bParam0, iVar0, 1);
			if (bParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_131(bParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_131(bParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_131(bParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_131(bParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
{
	char cVar0[64];
	char cVar1[64];
	bool bVar2;
	
	StringCopy(&cVar0, unk_0x7B5280EBA9840C72(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		unk_0x202709F4C58A0424("");
		StringCopy(&cVar1, unk_0x7B5280EBA9840C72(&(Global_8746[1 /*6*/])), 64);
		bVar2 = unk_0x7B5280EBA9840C72("CELL_253");
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, bVar2, &cVar1);
	}
	else
	{
		unk_0x202709F4C58A0424("CELL_255");
		unk_0xC63CD5D2920ACBE7(&(Global_8746[1 /*6*/]));
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, "", 0);
	}
	unk_0xE80492A9AC099A93(&Global_8136, false);
}

struct<4> func_131(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_134()
{
	if (func_79(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_77();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_135(int iParam0, int iParam1)
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_136(bool bParam0, int iParam1)
{
	if (func_133(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_113386.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5), (bParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_113386.f_18103.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_113386.f_18103.f_362[iVar1 /*3*/]), (bParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x6DDBBDD98E2E9C25();
}

void func_140(bool bParam0, float fParam1)
{
	if (func_10(bParam0))
	{
		func_9(bParam0, (func_4(bParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_96903[iVar0] = Global_96903[iVar0 + 1];
		}
		else
		{
			Global_96903[iVar0] = unk_0x9CD27B0045628463();
		}
		iVar0++;
	}
}

void func_142()
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xD031A9162D01088C(bLocal_272))
	{
	}
	else
	{
		bVar0 = unk_0xD53343AA4FB7DD28(false, 50000);
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		unk_0xE8854A4326B9E12B(&iVar1);
		unk_0x15D3A79D4E44B913(false, Local_289, 1f, -1, 0.25f, false, bLocal_293);
		if (bVar0 < 15000)
		{
			unk_0xEA47FE3719165B94(false, bLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, false, false, false, false);
		}
		else if (bVar0 >= 15000 && bVar0 < 35000)
		{
			unk_0xEA47FE3719165B94(false, bLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, false, false, false, false);
		}
		else
		{
			unk_0xEA47FE3719165B94(false, bLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, false, false, false, false);
		}
		unk_0x39E72BC99E6360CB(iVar1);
		unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iVar1);
		unk_0x3841422E9C488D8C(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_143(var uParam0)
{
	bool bVar0;
	
	bVar0 = *uParam0;
	if (unk_0x7239B21A38F536BA(bVar0))
	{
		if (!func_144(bVar0))
		{
			unk_0x1A9205C1B9EE827F(bVar0, true, false);
			unk_0xEA1C610A04DB6BBB(bVar0, true, false);
			unk_0x428CA6DBD1094446(bVar0, false);
		}
	}
}

int func_144(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(bParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			bVar4 = func_169();
			func_168(&bVar4, bParam0);
			func_167(&bVar4, bParam1);
			func_166(&bVar4, 0);
			if (func_164(*uParam4, bVar4))
			{
				func_159(&bVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, bVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			unk_0x5F0F3F56635809EF(0.6f);
			unk_0x80ECBC0C856D3B0B(false);
			unk_0x0AE73D8DF3A762B2(false);
			func_155();
			uParam4->f_10 = unk_0x430386FE9BF80B45();
			unk_0x67C540AA08E4A6F5(uParam4->f_10, "TIME_LAPSE_MASTER", false, true);
			unk_0x013A80FC08F6E4F2("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0xD24D37CC275948CC(bParam2) != 0)
					{
						unk_0xFB5045B7C42B75BF(bParam2, 1f);
					}
					if (unk_0xD24D37CC275948CC(bParam3) != 0)
					{
						unk_0x957E790EA1727B64();
						unk_0xFC4842A34657BFCB(bParam3, 0f);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				bVar4 = *uParam4;
				func_159(&bVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x47C3B5848C3E45D8(func_153(bVar4), func_152(bVar4), func_151(bVar4));
				unk_0xA3B0C41BA5CC0BB5(uParam4->f_10);
				unk_0x77ED170667F50170("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			bVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			bVar4 = *uParam4;
			func_159(&bVar4, bVar3, 0, 0, 0, 0, 0);
			unk_0x47C3B5848C3E45D8(func_153(bVar4), func_152(bVar4), func_151(bVar4));
			if (func_149(bVar4) != unk_0x3D10BC92A4DB1D35())
			{
				unk_0xB096419DF0D06CE7(func_149(bVar4), func_148(bVar4), func_146(bVar4));
			}
			func_256();
			unk_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_146(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_147(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_148(bool bParam0)
{
	return (bParam0 && 15);
}

int func_149(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_151(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_152(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_153(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xBE4390CB40B3E627(Global_113386.f_14141[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()
{
	bool bVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (!unk_0x5F9532F3B5CC2551(bVar0, false))
	{
		return 0;
	}
	unk_0x1B9C0099CB942AC6(bVar0, "OFF");
	return 1;
}

void func_156(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_164(bParam0, bParam1))
	{
		bVar0 = func_148(bParam1);
		iVar1 = func_146(bParam0);
		iVar2 = (func_146(bParam0) - func_146(bParam1));
		iVar3 = (func_148(bParam0) - func_148(bParam1));
		iVar4 = (func_149(bParam0) - func_149(bParam1));
		iVar5 = (func_153(bParam0) - func_153(bParam1));
		iVar6 = (func_152(bParam0) - func_152(bParam1));
		iVar7 = (func_151(bParam0) - func_151(bParam1));
	}
	else
	{
		bVar0 = func_148(bParam0);
		iVar1 = func_146(bParam1);
		iVar2 = (func_146(bParam1) - func_146(bParam0));
		iVar3 = (func_148(bParam1) - func_148(bParam0));
		iVar4 = (func_149(bParam1) - func_149(bParam0));
		iVar5 = (func_153(bParam1) - func_153(bParam0));
		iVar6 = (func_152(bParam1) - func_152(bParam0));
		iVar7 = (func_151(bParam1) - func_151(bParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_158(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_157(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_157(bool bParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	bParam0 = (bParam0 - (IntToFloat(unk_0xF2DB717A73826179(((bParam0 - fParam1) / fVar0))) * fVar0));
	if (bParam0 < fParam1)
	{
		bParam0 = (bParam0 + fVar0);
	}
	return bParam0;
}

int func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_159(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_146(*bParam0);
	iVar1 = func_148(*bParam0);
	bVar2 = func_149(*bParam0);
	bVar3 = func_153(*bParam0);
	bVar4 = func_152(*bParam0);
	bVar5 = func_151(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && bParam3 == 0) && iParam2 == 0) && bParam1 == 0)
	{
		return;
	}
	if (bParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (bParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	bVar5 = (bVar5 + bParam1);
	while (bVar5 >= 60)
	{
		iParam2++;
		bVar5 = (bVar5 - 60);
	}
	bVar4 = (bVar4 + iParam2);
	while (bVar4 >= 60)
	{
		bParam3++;
		bVar4 = (bVar4 - 60);
	}
	bVar3 = (bVar3 + bParam3);
	while (bVar3 >= 24)
	{
		iParam4++;
		bVar3 = (bVar3 - 24);
	}
	bVar2 = (bVar2 + iParam4);
	iVar6 = func_158(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(bParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_160(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_166(uParam0, bParam1);
	func_167(uParam0, bParam2);
	func_168(uParam0, bParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, bParam4);
	func_161(uParam0, iParam6);
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_162(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (bParam1 < 1 || bParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_164(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_165(bParam1) || !func_165(bParam0))
	{
		return 1;
	}
	iVar0 = func_146(bParam0);
	iVar1 = func_146(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(bParam0);
	iVar1 = func_148(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(bParam0);
	iVar1 = func_149(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(bParam0);
	iVar1 = func_153(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(bParam0);
	iVar1 = func_152(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(bParam0);
	iVar1 = func_151(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_165(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_151(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_153(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_149(bParam0);
	if (iVar5 < 1 || iVar5 > func_158(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

void func_167(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_168(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

bool func_169()
{
	var uVar0;
	
	func_166(&uVar0, unk_0x494E97C2EF27C470());
	func_167(&uVar0, unk_0x13D2B8ADD79640F2());
	func_168(&uVar0, unk_0x25223CA6B4D20B7F());
	func_162(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_163(&uVar0, unk_0xBBC72712E80257A1());
	func_161(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

char* func_170()
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_171()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_193(&uLocal_78, 1, 0, func_194(uLocal_74[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(bLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_174(iParam2), true);
}

int func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_176(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_188();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_186();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xE80492A9AC099A93(&Global_8136, 20);
			unk_0xE80492A9AC099A93(&Global_8137, 17);
			unk_0xE80492A9AC099A93(&Global_8138, false);
			if (bParam2)
			{
				func_134();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_185())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6(), 0))
					{
						return 0;
					}
				}
			}
			if (func_23())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_184();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_183();
		func_178();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_179()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_182())
	{
		return 0;
	}
	if (func_180(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x05095437424397FA())
	{
		return 0;
	}
	return 1;
}

bool func_180(bool bParam0)
{
	return func_181(bParam0, 20);
}

var func_181(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_182()
{
	return -1;
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_21605 = 1;
}

void func_184()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xE80492A9AC099A93(&Global_8137, 16);
}

int func_185()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_188()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

struct<6> func_190(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()
{
	if ((unk_0x7984C03AA5CC2F41() || unk_0x16754C556D2EDE3D()) || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

void func_193(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(bParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(bParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(bParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(bParam2, true);
			}
		}
	}
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_196(bool bParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xC906A7DAB05C8D2B(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_197(bParam0))
	{
		unk_0x06843DA7060A026B(bParam0, Param1, true, false, false, true);
	}
	return Param1;
}

bool func_197(bool bParam0)
{
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(bParam0, false);
}

Vector3 func_198()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	
	if (iParam4 == 1)
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()), 64);
	}
	if (!unk_0xD3C2E180A40F031E())
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
	}
	else
	{
		unk_0x07E5B515DB0636FC(bParam1, bParam2, bParam3, true, false, 0);
	}
	if (bParam1)
	{
		unk_0x8DFCED7A656F8802(true);
	}
	else
	{
		if (unk_0xA7A932170592B50E(uParam0->f_4))
		{
			if (unk_0xDFB2B516207D3534(uParam0->f_4))
			{
				unk_0x026FB97D0A425F84(uParam0->f_4, false);
			}
			unk_0x865908C81A2C22E9(uParam0->f_4, true);
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), true, false);
		}
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (unk_0x7239B21A38F536BA(bVar0))
		{
			unk_0xEA1C610A04DB6BBB(bVar0, true, false);
		}
		unk_0x77ED170667F50170("TIME_LAPSE");
		if (unk_0xB65B60556E2A9225("TOD_SHIFT_SCENE"))
		{
			unk_0xA3B0C41BA5CC0BB5(uParam0->f_10);
			unk_0x77ED170667F50170("TIME_LAPSE");
			unk_0xDFE8422B3B94E688("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0, 0);
	func_154();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_7, false, false);
		}
		else
		{
			unk_0x47C3B5848C3E45D8(uParam0->f_8, false, false);
		}
	}
	if (!bParam1)
	{
		if (unk_0xB16FCE9DDC7BA182())
		{
			unk_0xD4E8E24955024033(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = func_169();
		}
	}
}

float func_200(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2[4];
	var uVar3[4];
	
	func_202(&Var1, &Var2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xA7A932170592B50E(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0x6ABFA3E16460F22D(26379945, Var1[iVar0 /*3*/], Var2[iVar0 /*3*/], uVar3[iVar0], false, 2);
			unk_0x6A25241C340D3822(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0xC3981DCE61D9E13F("DEFAULT_SPLINE_CAMERA", false);
	unk_0x8609C75EC438FB3B(Local_280.f_4, Var1[0 /*3*/], Var2[0 /*3*/], 6000, 3, 2);
	unk_0x8609C75EC438FB3B(Local_280.f_4, Var1[1 /*3*/], Var2[1 /*3*/], 6000, 3, 2);
	unk_0xB13C14F66A00D047(Local_280.f_4, uVar3[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(bool bParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0x4455517B28441E60(bParam0, true);
		if (unk_0x77F1BEB8863288D5(bParam0, 242628503) != 1)
		{
			unk_0x3841422E9C488D8C(&iLocal_306);
			unk_0xE8854A4326B9E12B(&iLocal_306);
			if (unk_0x997ABD671D25CA0B(bParam0, false))
			{
				unk_0x504D54DF3F6F2247(false, false, 16777216);
			}
			if (bParam0 == unk_0xD80958FC74E988A6())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, true), Local_285);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, true), Local_286);
				if (fVar1 < fVar0)
				{
					unk_0x5AD23D40115353AC(false, bLocal_271[0], false);
				}
				else if (!unk_0xCA042B6957743895(func_204()))
				{
					unk_0x0759591819534F7B(false, func_204(), 0, 552, -1);
				}
				else
				{
					unk_0x15D3A79D4E44B913(false, Local_285, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (bParam0 != unk_0xD80958FC74E988A6())
			{
				if (!unk_0xCA042B6957743895(func_204()))
				{
					unk_0x0759591819534F7B(false, func_204(), 0, 546, -1);
				}
				else
				{
					unk_0x15D3A79D4E44B913(false, Param1, 1f, -1, 0.25f, true, 1193033728);
				}
				if (func_25(bParam0, Param1, 1) > 5f)
				{
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
					unk_0xEA47FE3719165B94(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, false, false, false, false);
					unk_0x919BE13EED931959(false, unk_0xD53343AA4FB7DD28(3000, 6000));
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
					unk_0xEA47FE3719165B94(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, false, false, false, false);
					unk_0x919BE13EED931959(false, unk_0xD53343AA4FB7DD28(3000, 6000));
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
					unk_0xEA47FE3719165B94(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, false, false, false, false);
					unk_0xEA47FE3719165B94(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, false, false, false, false);
				}
			}
			unk_0x39E72BC99E6360CB(iLocal_306);
			unk_0x5ABA3986D90D8A3B(bParam0, iLocal_306);
		}
	}
}

char* func_204()
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(bool bParam0, bool bParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0) && !unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		unk_0x0F3E34E968EA374E(bParam0, bParam1, Local_287, bLocal_294, 3, 10f, false);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	bLocal_272 = "move_p_m_one_idles@generic";
	unk_0xD3BD40951412FEF6(bLocal_272);
}

int func_209(bool bParam0)
{
	if (unk_0x423E8DE37D934D89(bParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x423E8DE37D934D89(bParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0, struct<3> Param1, bool bParam2, bool bParam3)
{
	if (func_212(uParam0))
	{
		unk_0xACFB2463CC22BED2(*uParam0);
		if (!func_211(Param1))
		{
			unk_0x06843DA7060A026B(*uParam0, Param1, true, false, false, true);
			if (bParam2)
			{
				unk_0x8E2530AA8ADA980E(*uParam0, bParam3);
			}
			unk_0x49733E92263139D1(*uParam0, 5f);
		}
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x7239B21A38F536BA(bVar0))
	{
		if (!func_144(bVar0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x751B70C3D034E187(bVar0, unk_0xD80958FC74E988A6(), Local_63, false, true, 0))
			{
				unk_0xACFB2463CC22BED2(bVar0);
				unk_0x1A9205C1B9EE827F(bVar0, false, false);
				unk_0xEA1C610A04DB6BBB(bVar0, false, false);
				unk_0x428CA6DBD1094446(bVar0, true);
				unk_0xAD738C3085FE7E11(bVar0, true, true);
				*uParam0 = bVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9CD27B0045628463();
		}
		Global_28 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			if (func_214())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_214()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar1;
	
	func_65();
	if (unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
	{
		return;
	}
	unk_0xC12321827687FE4D(Local_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, true);
	fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_192()) && !func_267(uLocal_300, 2)) || func_254(bLocal_271[0], 0))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_277))
			{
				unk_0x86A652570E5F25DD(&bLocal_277);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_276))
			{
				unk_0x86A652570E5F25DD(&bLocal_276);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_277))
			{
				unk_0x86A652570E5F25DD(&bLocal_277);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_276))
			{
				unk_0x86A652570E5F25DD(&bLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_240(bLocal_271[0], &uLocal_264, &bLocal_261))
	{
		func_66(4);
	}
	if (iLocal_75 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_300, 1))
				{
					unk_0x428CA6DBD1094446(bLocal_271[0], true);
					func_84("SCLUB_HOME_MEET", uLocal_74[0]);
					func_251(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_71(uLocal_74[0]) };
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				bLocal_307 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				bLocal_301 = unk_0xEEF059FAD016D209(bLocal_307);
			}
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(bLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (unk_0x4C241E39B23DF959(bLocal_307, false) && func_239(bLocal_307, bLocal_271[0], 1) <= 10f))
			{
				unk_0x428CA6DBD1094446(bLocal_271[0], false);
				if (unk_0x7239B21A38F536BA(bLocal_307) && (unk_0xA7C4F2C6E744A550(bLocal_307) < 1 || (!bParam0 && !unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bLocal_307)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_173(bLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x8DFCED7A656F8802(true);
					unk_0xE1EF3C1216AFF2CD(bLocal_271[0]);
					func_237();
					if (!func_267(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x997ABD671D25CA0B(bLocal_271[0], false))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_173(bLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					unk_0xBF1A602B5BA52FEE(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					unk_0xC12321827687FE4D(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					unk_0x01C7B9B38428AEB6(Local_287, 10f, false, false, false, false, false, false, 0);
					unk_0xBE31FD6CE464AC59(Local_287, 10f, 0);
					iLocal_284 = unk_0x1B5C85C612E5256E(Local_287 - Vector(35f, 35f, 35f), Local_287 + Vector(35f, 35f, 35f), false, true, true, true);
					func_8(&bLocal_243);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_222(fVar1, Local_288);
			func_216();
			if ((func_4(&bLocal_255) > 45f || unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_291) > (100f * 100f)) && func_25(unk_0xD80958FC74E988A6(), Local_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(bLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(bLocal_271[0], 1))
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_277))
				{
					unk_0x86A652570E5F25DD(&bLocal_277);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_276))
				{
					unk_0x86A652570E5F25DD(&bLocal_276);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_287, 3f, 3f, 2f, true, true, 2) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				func_225();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_222(fVar1, Local_287);
			func_216();
			func_237();
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					func_225();
				}
				else
				{
					func_61(Local_287);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			break;
		
		case 6:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x7239B21A38F536BA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					if (func_59(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(bLocal_271[0], Local_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				unk_0xAAA34F8A7CB32098(bLocal_271[0]);
				func_225();
				unk_0x8DFCED7A656F8802(true);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_171() && !unk_0x7984C03AA5CC2F41()) && !func_267(uLocal_300, 2048))
			{
				Var0 = { func_71(uLocal_74[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_300, 2048);
			}
			if ((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_288, 5f, 5f, 2f, false, true, 1) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_286, 5f, 5f, 2f, false, true, 1)) && unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_267(uLocal_298, 4096) && !func_171()) && !unk_0x9072C8B49907BFAD(bLocal_271[0]))
			{
				if (iLocal_76 > 1 || unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_271[0], true)) < (3f * 3f))
				{
					func_173(bLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_66(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_254(bLocal_271[0], 1))
			{
				unk_0xCC33FA791322B9D9();
				iLocal_75 = iLocal_76;
				if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_267(uLocal_300, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	bVar0 = func_100(bLocal_271[0], 0, 0);
	if (!func_267(uLocal_300, 8))
	{
		if (!func_267(uLocal_300, 4))
		{
			if (!func_267(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				unk_0xD3BD40951412FEF6(bVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (unk_0xD031A9162D01088C(bVar0))
		{
			func_94(bLocal_271[0], 1, 1, -1, 1);
			unk_0x971D38760FBC02EF(bLocal_271[0], true);
			func_7(&bLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_267(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x1F0B79228E461EC9(bLocal_271[0], bVar0, func_95(4, 1, 1, func_98(bLocal_307)), 3);
		bVar3 = unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6());
		bVar4 = unk_0x77F1BEB8863288D5(bLocal_271[0], 242628503) == 7;
		bVar5 = unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x7239B21A38F536BA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && !unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				bVar6 = (unk_0x8BAD02F0368D9E14(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > 5f);
			}
		}
		if ((((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || func_4(&bLocal_252) > 35f) || unk_0x2A488C176D52CCA5(Local_287, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0xEA47FE3719165B94(bLocal_271[0], bVar0, func_95(4, 1, 1, func_98(bLocal_307)), 8f, -8f, -1, 0, false, false, false, false);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), (unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0x4700A416E8324EF3(unk_0xD80958FC74E988A6())) * 0.1f))), false);
					func_173(unk_0xD80958FC74E988A6(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(unk_0xD80958FC74E988A6(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			unk_0xF66A602F829E2A06(bVar0);
			func_73(&uLocal_300, 4);
		}
		if (!func_267(uLocal_298, 64))
		{
			if (func_4(&bLocal_252) > 10f)
			{
				func_173(unk_0xD80958FC74E988A6(), "SEX_GENERIC", 10);
				func_173(bLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0xADFF1B2A555F5FBA();
		func_256();
	}
}

int func_217()
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_192())
	{
		return 0;
	}
	func_64(&Var0, &uVar1, 0);
	if (((unk_0x2A488C176D52CCA5(Local_287, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > (75f / 2f)) && func_116(uLocal_74[0]) > 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x4C241E39B23DF959(bVar0, false))
	{
		bVar1 = unk_0x9F47B058362C84B5(bVar0);
		if (func_220(bVar1, 0) && func_219(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[16];
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				bVar1 = iVar0;
				if (((((bVar1 != 17 && bVar1 != 18) && bVar1 != 19) && bVar1 != 20) && bVar1 != 21) && bVar1 != 22)
				{
					if (unk_0x772960298DA26FDB(bParam0, bVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x8935624F8C5592CC(bParam0, bVar1, unk_0x772960298DA26FDB(bParam0, bVar1)), 16);
						bVar2 = unk_0xD24D37CC275948CC(&cVar3);
						if (bVar2 != 0)
						{
							if (bVar2 == unk_0xD24D37CC275948CC("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x9F47B058362C84B5(bParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0xD2E6822DBFD6C8BD(bParam0, 2) && !unk_0xD2E6822DBFD6C8BD(bParam0, 3)) && !unk_0xD2E6822DBFD6C8BD(bParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0xD2E6822DBFD6C8BD(bParam0, 2) && !unk_0xD2E6822DBFD6C8BD(bParam0, 3)) && !unk_0xD2E6822DBFD6C8BD(bParam0, 4)) && !unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0x772960298DA26FDB(bParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (unk_0x772960298DA26FDB(bParam0, 10) == -1 || unk_0x772960298DA26FDB(bParam0, 10) == 3)
				{
					return 0;
				}
				break;
		}
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
				return 1;
				break;
		}
		if (unk_0x28D37D4F71AC5C58(bParam0) == 931866387 && unk_0x9F47B058362C84B5(bParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0x28D37D4F71AC5C58(bParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x9F47B058362C84B5(bParam0) == joaat("weevil")) || unk_0x9F47B058362C84B5(bParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (unk_0x28D37D4F71AC5C58(bParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x9F47B058362C84B5(bParam0) == 15214558)
		{
			return 1;
		}
	}
	return 0;
}

int func_220(bool bParam0, bool bParam1)
{
	if ((((unk_0x45A9187928F4B9E3(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)) || unk_0xDCE4334788AF94EA(bParam0)) || unk_0xAB935175B22E822B(bParam0)) || unk_0xB50C0B0CEDC6CE84(bParam0))
	{
		return 0;
	}
	if (func_221(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((bParam0 == joaat("police") || bParam0 == joaat("police2")) || bParam0 == joaat("police3")) || bParam0 == joaat("police4")) || bParam0 == joaat("fbi")) || bParam0 == joaat("fbi2")) || bParam0 == joaat("caddy")) || bParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((bParam0 == joaat("issi2") || bParam0 == joaat("hotknife")) || bParam0 == joaat("jb700")) || bParam0 == joaat("jester")) || bParam0 == joaat("jester2")) || bParam0 == joaat("stromberg")) || bParam0 == joaat("barrage")) || bParam0 == joaat("kamacho")) || bParam0 == joaat("gb200")) || bParam0 == joaat("fagaloa")) || bParam0 == joaat("tezeract")) || bParam0 == joaat("swinger")) || bParam0 == joaat("imperator")) || bParam0 == joaat("locust")) || bParam0 == joaat("schlagen")) || bParam0 == joaat("outlaw")) || bParam0 == joaat("comet7")) || bParam0 == joaat("youga4")) || bParam0 == 775514032)
	{
		return 0;
	}
	return 1;
}

int func_221(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_222(float fParam0, struct<3> Param1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	
	if (!func_267(uLocal_298, 262144))
	{
		if (func_224(bLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(bLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&bLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&bLocal_246) > 10f)
	{
		func_73(&uLocal_298, 262144);
		func_8(&bLocal_246);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_300, 4))
	{
		return;
	}
	if (!func_267(uLocal_298, 1) && !func_267(uLocal_298, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			unk_0x01C7B9B38428AEB6(Local_287, 5f, false, false, false, false, false, false, 0);
		}
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (!unk_0x4C241E39B23DF959(bVar0, false))
	{
		if (!func_267(uLocal_298, 16))
		{
			func_173(bLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&bLocal_243);
		}
		if (!func_267(uLocal_298, 4))
		{
			func_73(&uLocal_298, 4);
		}
		if (!func_267(uLocal_298, 8))
		{
			func_73(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = unk_0xD5037BA82E12416F(bVar0);
		fVar2 = unk_0x53AF99BAA671CA47(bVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&bLocal_249);
		}
		if (!func_267(uLocal_298, 4))
		{
			if (func_4(&bLocal_243) > 15f && func_4(&bLocal_249) > 5f)
			{
				func_173(bLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&bLocal_243);
			}
		}
		else if (func_4(&bLocal_243) < 5f)
		{
			func_73(&uLocal_298, 4);
			func_8(&bLocal_243);
		}
		if (!func_267(uLocal_298, 8))
		{
			if (func_4(&bLocal_243) > 15f && func_4(&bLocal_249) > 5f)
			{
				func_173(bLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&bLocal_243);
			}
		}
		else if (func_4(&bLocal_243) < 5f)
		{
			func_73(&uLocal_298, 8);
			func_8(&bLocal_243);
		}
		if (!func_267(uLocal_298, 131072))
		{
			if (func_223(bLocal_271[0], &bLocal_301))
			{
				if (func_4(&bLocal_246) > 5f)
				{
					func_173(bLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&bLocal_243);
				}
			}
		}
		else if (func_4(&bLocal_246) > 5f)
		{
			func_73(&uLocal_298, 131072);
			func_8(&bLocal_246);
		}
		if (!func_267(uLocal_298, 65536))
		{
			if (func_4(&bLocal_243) > 30f || (func_4(&bLocal_243) > 10f && !func_267(uLocal_298, 32)))
			{
				func_173(bLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&bLocal_243);
			}
			else if (func_267(uLocal_298, 524288))
			{
				if (!unk_0x9072C8B49907BFAD(bLocal_271[0]) && func_4(&bLocal_243) > 4f)
				{
					func_173(unk_0xD80958FC74E988A6(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_223(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x4C241E39B23DF959(bVar0, false))
	{
		if (unk_0xA808AA1D79230FC2(bParam0, bVar0))
		{
			if (unk_0x8BAD02F0368D9E14(bVar0))
			{
				bVar1 = unk_0xEEF059FAD016D209(bVar0);
				iVar2 = (*bParam1 - bVar1);
				*bParam1 = bVar1;
				unk_0xA72CD9CA74A5ECBA(bVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x1374ABB7C15BAB92(110, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f) && unk_0x0267D00AF114F17A(bParam0, unk_0xD80958FC74E988A6()))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()
{
	func_87();
	func_8(&bLocal_243);
	if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_276))
		{
			unk_0x86A652570E5F25DD(&bLocal_276);
		}
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_277))
		{
			bLocal_277 = func_62(Local_288, 0);
		}
		func_8(&bLocal_255);
		Local_291 = { unk_0x3FEF770D40960D5A(bLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&bLocal_246);
		func_61(Local_287);
		iLocal_75 = 5;
	}
}

void func_226()
{
	if (!func_267(uLocal_298, 1024))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (func_227(uLocal_74[0]))
			{
				if (!func_171())
				{
					func_173(bLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_227(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x4C241E39B23DF959(bVar0, false))
	{
		bVar1 = unk_0x9F47B058362C84B5(bVar0);
		if (func_228(iParam0, bVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, bool bParam1)
{
	switch (bParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_54() == 0)
		{
			bVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_231(func_233(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_231(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_76(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_234(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_54() == 0)
		{
			bVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_231(func_233(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_235(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_54() == 0)
		{
			return BitTest(func_232(func_233(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_236()
{
	if (uLocal_74[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(bLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()
{
	if (!unk_0x5891CAC5D4ACFF74(bLocal_271[0]) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_271[0], true)) < 10f)
	{
		unk_0x9F3480FE65DB31B5(bLocal_271[0], func_238());
		unk_0x0BDDB8D9EC6BCF3C(bLocal_271[0], false);
	}
}

int func_238()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

float func_239(bool bParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3FEF770D40960D5A(bParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var1, bParam2);
}

int func_240(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;
	bool bVar1;
	
	if (!func_10(bParam2))
	{
		func_7(bParam2);
	}
	if (func_4(bParam2) > 3f)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
		if (func_243(bParam0, bVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (unk_0x7239B21A38F536BA(bParam0))
			{
				if (!unk_0x5F9532F3B5CC2551(bParam0, false))
				{
					if (!unk_0xCC6E3B6BB69501F1(iLocal_70))
					{
						unk_0xF372BC22FCB88606("BootyCall", &iLocal_70);
					}
					unk_0xBF25EB89375A37AD(2, iLocal_70, joaat("player"));
					unk_0xBF25EB89375A37AD(2, joaat("player"), iLocal_70);
					unk_0xC80A74AC829DDD92(bParam0, iLocal_70);
					unk_0x22B0D0E37CCB840D(bParam0, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
				}
			}
			func_8(bParam2);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		
		case 2:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_112380 = 0;
	Global_112380.f_1 = -1;
	Global_112380.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

int func_243(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xD80958FC74E988A6();
	if (!unk_0x5F9532F3B5CC2551(bVar0, false) && !unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(bParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(bVar0, bParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(bVar0, bParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (iParam7 && unk_0xC86D67D52A707CF8(bParam0, bVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			bLocal_60 = unk_0xEEF059FAD016D209(bParam0);
			bLocal_59 = true;
		}
		bLocal_61 = unk_0xEEF059FAD016D209(bParam0);
		iLocal_62 = (bLocal_60 - bLocal_61);
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam0, bVar0, true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		bVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(bVar1, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam0, bVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (unk_0x9A497FE2DF198913(bParam0))
			{
				if (unk_0x9B128DC36C1E04CF(bParam0) == unk_0xD80958FC74E988A6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x20B60995556D004F(bParam0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFD4CCDBCC59941B7(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF9800AA1A771B000(bParam0))
		{
			return 1;
		}
	}
	if (func_246(unk_0xD80958FC74E988A6(), bParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x47E4E977581C5B55(bParam0) && func_245(bParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x997ABD671D25CA0B(bParam0, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(bParam0, false)))
			{
				return 1;
			}
		}
		else if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bParam0))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(bParam1, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_245(bool bParam0, bool bParam1)
{
	return func_239(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), bParam0, bParam1);
}

int func_246(bool bParam0, bool bParam1)
{
	int iVar0;
	
	unk_0x3A87E44BB9A01D54(bParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x34616828CD07F1A1(bParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(bParam1, true)) < 2.5f)
			{
				if (unk_0xD71649DB0A545AA3(bParam0, bParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_247(bool bParam0, bool bParam1, var uParam2)
{
	if (unk_0x475768A975D5AD17(bParam0, 4))
	{
		if (unk_0x34616828CD07F1A1(bParam0) && !unk_0x65F0C5AE05943EC7(bParam0))
		{
			if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	if (unk_0x3F2023999AD51C1F(Var0, 4f, true))
	{
		return 1;
	}
	if (unk_0x9870ACFB89A90995(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (unk_0x475768A975D5AD17(bParam0, 2))
	{
		if (unk_0x34616828CD07F1A1(bParam0))
		{
			if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(bParam1), bParam0, 120f) && unk_0xFCDFF7B72D23A1AC(bParam1, bParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0x04A2A40C73395041(bParam1), false))
			{
				bVar1 = unk_0x9A9112A0FE9A4713(unk_0x04A2A40C73395041(bParam1), false);
			}
			if (unk_0xC70B5FAE151982D8(bParam0) || func_249(bVar1))
			{
				if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(bParam1), bParam0, 120f) && unk_0xFCDFF7B72D23A1AC(bParam1, bParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5270A8FBC098C3F8((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0xBB40DD2270B65366(bParam0, -1, false) != 0)
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_239(unk_0xD80958FC74E988A6(), bParam0, 1) < 40f)
						{
							if (unk_0x2975C866E6713290(unk_0x4F8644AF03D0E0D6(), &bVar1))
							{
								if ((unk_0x6AC7003FA6E5575E(bVar1) && unk_0x4B53F92932ADFAC0(bVar1) == bParam0) || (unk_0x524AC5ECEA15343E(bVar1) && unk_0x04A2A40C73395041(bVar1) == unk_0xBB40DD2270B65366(bParam0, -1, false)))
								{
									if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0xF3A21BCD95725A4A(0, 24)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xF3A21BCD95725A4A(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_250(bool bParam0, var uParam1)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
			{
				if (unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_245(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9CD27B0045628463();
						}
						else if ((unk_0x9CD27B0045628463() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_251(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xA6DB27D19ECBB7DA(uLocal_278[iParam0]))
	{
		unk_0x86A652570E5F25DD(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_252(bLocal_271[iParam0], 0, 145);
	Var0 = { func_71(uLocal_74[iParam0]) };
	unk_0xEAA0FFE120D92784(uLocal_278[iParam0], &Var0);
}

bool func_252(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_253(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_253(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_63(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(bVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(bVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_63(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_63(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

int func_254(bool bParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	bool bVar3;
	
	Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	Var1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar2 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0xF162E133B4E7A675(bParam0) == func_238())
		{
			if (unk_0x4C241E39B23DF959(bVar2, false))
			{
				if (!unk_0xA3EE4A07279BB9DB(bParam0, bVar2, false) && unk_0x2A488C176D52CCA5(Var0, Var1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_267(uLocal_300, 2))
	{
		bVar3 = unk_0x73D57CFFDD12C355((Var0.f_2 - Var1.f_2));
		if (bVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
	{
		if (!unk_0xA41A05B6CB741B85())
		{
			func_196(bLocal_271[0], unk_0x163E252DE035A133(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_256()
{
	unk_0xEB2D525B57F42B40();
	func_257();
}

void func_257()
{
	Global_23011.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_165(bLocal_71))
	{
		bLocal_71 = func_169();
		func_159(&bLocal_71, 0, 0, unk_0xD53343AA4FB7DD28(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_300, 512))
		{
			if (func_266(bLocal_71) && unk_0xE31C2C72B8692B64(bLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_193(&uLocal_78, 1, 0, func_194(uLocal_74[0]), 0, 1);
					func_265(&uLocal_78, func_112(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(bLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_300, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

int func_260()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

void func_262(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0x4455517B28441E60(bParam0, true);
		if (unk_0x77F1BEB8863288D5(bParam0, 242628503) != 1)
		{
			unk_0x3841422E9C488D8C(&iLocal_306);
			unk_0xE8854A4326B9E12B(&iLocal_306);
			unk_0x5EE02954A14C69DB(false, 8000);
			unk_0x15D3A79D4E44B913(false, Local_286, 1.5f, -1, 0.25f, false, 1193033728);
			unk_0x39E72BC99E6360CB(iLocal_306);
			unk_0x5ABA3986D90D8A3B(bParam0, iLocal_306);
		}
	}
}

void func_263()
{
	int iVar0;
	
	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_74[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_264()
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(bool bParam0)
{
	return func_164(func_169(), bParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_296();
	func_64(&Var0, &bVar1, bParam1);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Var0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_267(uLocal_300, 32))
		{
			func_292(&uLocal_274, func_294((*uParam0)[0], 0));
			func_291(&uLocal_274);
			func_27(&uLocal_300, 32);
			unk_0xD3BD40951412FEF6("mini@strip_club@idles@stripper");
			unk_0xD3BD40951412FEF6("gestures@f@standing@casual");
			func_290();
			return 0;
		}
		else if ((!func_289(&uLocal_274) || !unk_0xD031A9162D01088C("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!unk_0xBCBF4FEF9FA5D781(1))
			{
				return 0;
			}
		}
		if (!func_267(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			bLocal_271[0] = unk_0xD49F9B0955C367DE(26, func_294((*uParam0)[0], 0), Var0, bVar1, true, true);
			func_282(bLocal_271[0], uLocal_74[0], 0);
			unk_0x9F8AA94D6D97DBF4(bLocal_271[iVar2], true);
			unk_0x971D38760FBC02EF(bLocal_271[0], true);
			unk_0x5BA7919BED300023(bLocal_271[0], true);
			func_278(bLocal_271[0]);
			unk_0xEA47FE3719165B94(bLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, false, false, false, false);
			unk_0x69F4BE8C8CC4796C(bLocal_271[iVar2], unk_0xD80958FC74E988A6(), -1, 2048, 4);
			unk_0x0BDDB8D9EC6BCF3C(bLocal_271[0], false);
			unk_0x6C8065A3B780185B(bLocal_271[0], func_194((*uParam0)[0]));
			func_193(&uLocal_78, 1, bLocal_271[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Var0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_300, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_267(uLocal_300, 64) && !func_267(uLocal_300, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_193(&uLocal_78, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var4 = { func_275() };
					func_270(&uLocal_78, func_112((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_165(bLocal_71))
				{
					if (func_266(bLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_193(&uLocal_78, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_78, func_112((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_300, 64);
				func_73(&uLocal_300, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Var0) > (fLocal_296 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Var0) < fLocal_296)
			{
				fLocal_296 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_269(int iParam0)
{
	if (Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_272(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar1, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_188();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_186();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			unk_0xE80492A9AC099A93(&Global_8136, 20);
			unk_0xE80492A9AC099A93(&Global_8137, 17);
			unk_0xE80492A9AC099A93(&Global_8138, false);
			if (bParam3)
			{
				func_134();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_185())
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
						{
							return 0;
						}
						if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
						{
							return 0;
						}
						if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
						{
							return 0;
						}
						if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_23())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_184();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_183();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_273(var uParam0)
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_274()
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

struct<16> func_275()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_276(int iParam0)
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_277(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_278(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(bParam0) == joaat("s_f_y_stripper_02"))
	{
		func_281(bParam0, 2, unk_0xD53343AA4FB7DD28(false, 3));
		func_280(bParam0, 2, unk_0xD53343AA4FB7DD28(false, 3));
		func_279(bParam0, 0, 0);
	}
}

void func_279(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 6, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 6, bParam1, bParam2, 0);
	}
}

void func_280(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 3, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 3, bParam1, bParam2, 0);
	}
}

void func_281(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 8, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 8, bParam1, bParam2, 0);
	}
}

void func_282(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0x45EEE61580806D63(bParam0);
		bVar0 = false;
		if (unk_0x9F47B058362C84B5(bParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 1);
					func_286(bParam0, 2, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_279(bParam0, 4, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 1);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 1);
					func_286(bParam0, 1, 1);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 1);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 1, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 1);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 1);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 2, 0);
					func_280(bParam0, 0, 2);
					func_285(bParam0, 1, 1);
					func_279(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 2, 1);
					func_280(bParam0, 1, 2);
					func_285(bParam0, 0, 2);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 1, 2);
					func_284(bParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 0);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 1);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 2);
					func_279(bParam0, 2, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 1, 0);
					func_285(bParam0, 1, 0);
					func_284(bParam0, 1, -1, -1);
				}
				else
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 1, 0);
					func_280(bParam0, 0, 1);
					func_285(bParam0, 0, 1);
					func_281(bParam0, 1, 0);
					func_283(bParam0, 0, 1);
					func_284(bParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_287(bParam0, 0, 0);
					func_286(bParam0, 0, 1);
					func_280(bParam0, 0, 0);
					func_285(bParam0, 0, 0);
					func_281(bParam0, 0, 0);
					func_284(bParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(bParam0, 1, 0);
					func_286(bParam0, 0, 2);
					func_280(bParam0, 1, 1);
					func_285(bParam0, 0, 1);
					func_279(bParam0, 0, 0);
					func_281(bParam0, 1, 0);
					func_284(bParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x262B14F48D29DE80(bParam0, 3, 2, false, 0);
				unk_0x262B14F48D29DE80(bParam0, 4, false, true, 0);
				break;
			
			case 9:
				unk_0x262B14F48D29DE80(bParam0, false, false, true, 0);
				unk_0x262B14F48D29DE80(bParam0, 2, false, true, 0);
				unk_0x262B14F48D29DE80(bParam0, 3, false, false, 0);
				unk_0x262B14F48D29DE80(bParam0, 4, false, true, 0);
				unk_0x262B14F48D29DE80(bParam0, 8, true, false, 0);
				unk_0x262B14F48D29DE80(bParam0, 10, false, false, 0);
				break;
			}
	}
}

void func_283(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 11, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 11, bParam1, bParam2, 0);
	}
}

void func_284(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return;
	}
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	if (bVar0 == func_258(0, 0) || bVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(bParam0, 2, 0);
			func_281(bParam0, 1, 0);
		}
	}
	else if (bVar0 == func_258(1, 0) || bVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(bParam0, 0, bParam2);
			func_279(bParam0, bParam3, 0);
			func_281(bParam0, 1, 0);
		}
	}
	else if (bVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_281(bParam0, 1, 0);
		}
	}
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 4, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 4, bParam1, bParam2, 0);
	}
}

void func_286(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 2, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, 2, bParam1, bParam2, 0);
	}
}

void func_287(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE825F6B6CEA7671D(bParam0, 0, bParam1, bParam2))
	{
		unk_0x262B14F48D29DE80(bParam0, false, bParam1, bParam2, 0);
	}
}

int func_288()
{
	if (unk_0xCA042B6957743895(func_204()))
	{
		return 1;
	}
	else if (unk_0xCB4E8BE8A0063C5D(func_204()))
	{
		return 1;
	}
	return 0;
}

int func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
			{
				if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_290()
{
	if (!unk_0xCA042B6957743895(func_204()))
	{
		unk_0x9EEFB62EB27B5792(func_204());
	}
}

void func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x963D27A58DF860AC((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 145)
	{
		return func_295(iVar0);
	}
	return func_258(0, 0);
}

int func_295(int iParam0)
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_296()
{
	switch (uLocal_74[0])
	{
		case 1:
			Local_285 = { 128.1002f, -1895.001f, 22.4811f };
			Local_286 = { 128.1059f, -1896.819f, 22.6792f };
			Local_287 = { 133.9411f, -1881.89f, 22.5257f };
			Local_288 = { 130.1663f, -1893.057f, 22.3748f };
			Local_289 = { 133.4958f, -1891.641f, 22.4252f };
			bLocal_293 = 330.5705f;
			bLocal_294 = 244f;
			Local_292 = { 146.293f, -1888.049f, 22.2193f };
			bLocal_295 = bLocal_294;
			break;
		
		case 0:
			Local_285 = { -161.9628f, -1636.501f, 33.0339f };
			Local_286 = { -159.9415f, -1637.307f, 33.0339f };
			Local_287 = { -178.6316f, -1629.522f, 32.1789f };
			Local_288 = { -166.1453f, -1633.102f, 32.6574f };
			Local_289 = { -166.6636f, -1633.229f, 32.6567f };
			bLocal_293 = 108.072f;
			bLocal_294 = 180.9811f;
			Local_292 = { Local_287 };
			bLocal_295 = bLocal_294;
			break;
		
		case 4:
			Local_285 = { -198.3824f, 87.8785f, 68.7436f };
			Local_286 = { -197.2292f, 86.3497f, 68.7561f };
			Local_287 = { -200.9078f, 113.537f, 68.5518f };
			Local_288 = { -200.1384f, 96.9809f, 68.5203f };
			Local_289 = { -199.5068f, 95.7042f, 68.5193f };
			bLocal_293 = 48.99f;
			bLocal_294 = 64.3f;
			Local_292 = { Local_287 };
			bLocal_295 = bLocal_294;
			break;
		
		case 5:
			Local_285 = { -849.0348f, 510.6906f, 89.8218f };
			Local_286 = { -849.0408f, 508.5767f, 89.8218f };
			Local_287 = { -846.1005f, 520.2202f, 89.6217f };
			Local_288 = { -851.8972f, 512.73f, 89.6217f };
			Local_289 = { -851.8746f, 513.6746f, 89.6217f };
			bLocal_293 = 92.365f;
			bLocal_294 = 293f;
			Local_292 = { -860.4819f, 514.2496f, 88.1473f };
			bLocal_295 = bLocal_294;
			break;
		
		case 8:
			Local_285 = { -28.2427f, -1555.892f, 29.6918f };
			Local_286 = { -24.8589f, -1556.846f, 29.6819f };
			Local_287 = { -41.8174f, -1575.609f, 28.2831f };
			Local_288 = { -25.3404f, -1556.341f, 29.6919f };
			Local_289 = { -27.7382f, -1570.572f, 29.3f };
			bLocal_293 = 181.352f;
			bLocal_294 = 47.9206f;
			Local_292 = { Local_287 };
			bLocal_295 = bLocal_294;
			break;
		
		case 9:
			Local_285 = { 3313.487f, 5175.831f, 18.619f };
			Local_286 = { 3310.816f, 5176.331f, 18.619f };
			Local_287 = { 3334.321f, 5161.122f, 17.2996f };
			Local_288 = { 3317.788f, 5171.707f, 17.4471f };
			Local_289 = { 3318.076f, 5171.805f, 17.4385f };
			bLocal_293 = 236.4579f;
			Local_292 = { 3322.927f, 5148.607f, 17.3141f };
			bLocal_295 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_302();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(false);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_299(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_2714762.f_693;
}

bool func_301(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_302()
{
	unk_0x1090044AD1DA76FA();
}

void func_303()
{
	unk_0x175B6BFC15CDD0C5(false);
	unk_0x34AD89078831A4BC();
	func_86();
	unk_0xCC33FA791322B9D9();
	unk_0x31D16B74C6E29D66(iLocal_284, false);
	unk_0xC12321827687FE4D(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), true, true);
	unk_0x0027501B9F3B407E(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	if (unk_0x7239B21A38F536BA(bLocal_271[0]))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_271[0], false))
		{
			if (!func_267(uLocal_300, 8192))
			{
				unk_0xBB9CE077274F6A1B(bLocal_271[0], 1193033728, 0);
			}
			unk_0x971D38760FBC02EF(bLocal_271[0], true);
			if (!unk_0xCC6E3B6BB69501F1(iLocal_70))
			{
				unk_0xF372BC22FCB88606("BootyCall", &iLocal_70);
			}
			unk_0xBF25EB89375A37AD(2, iLocal_70, joaat("player"));
			unk_0xBF25EB89375A37AD(2, joaat("player"), iLocal_70);
			unk_0xC80A74AC829DDD92(bLocal_271[0], iLocal_70);
		}
		unk_0x2595DD4236549CE3(&(bLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_305(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_143(&uLocal_68);
	}
	unk_0xDE45D1A1EF45EE61(unk_0x4F8644AF03D0E0D6(), false);
	func_123(uLocal_74[0], -1);
	Global_112380 = 0;
	func_304(0);
	unk_0x1090044AD1DA76FA();
}

void func_304(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

