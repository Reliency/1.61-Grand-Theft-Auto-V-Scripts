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
	struct<4> Local_44[10];
	bool bLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	var uLocal_82 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	char* sLocal_247 = NULL;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	struct<3> Local_261 = { 0, 0, 0 } ;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	bool bLocal_267 = 0;
	bool bLocal_268 = 0;
	bool bLocal_269 = 0;
	bool bLocal_270 = 0;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1000;
	var uLocal_286 = 1000;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	struct<2> Local_291 = { 0, 5 } ;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 5;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_67 = 1;
	sLocal_250 = "REBTH_HANGAR";
	sLocal_251 = "REBTH_RUNSOF";
	sLocal_252 = "REBTH_TAUNT";
	bLocal_264 = "RANDOM@BICYCLE_THIEF@BASE";
	bLocal_265 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	bLocal_267 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	bLocal_268 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	bLocal_269 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	bLocal_270 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_54 = { ScriptParam_291.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		func_226();
	}
	if (unk_0xB7A628320EFF8E47(Local_54, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		bLocal_263 = true;
	}
	else if (unk_0xB7A628320EFF8E47(Local_54, 769.3f, -151.66f, 73.79f) < 16f)
	{
		bLocal_263 = 2;
	}
	else if (unk_0xB7A628320EFF8E47(Local_54, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		bLocal_263 = 3;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) != 0)
		{
			unk_0x1090044AD1DA76FA();
		}
		else if (func_225(unk_0xD80958FC74E988A6(), Local_54, 1) < 100f)
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	if (bLocal_263 != 3)
	{
		if (func_185(Local_54, 26, bLocal_263, 0, 0))
		{
			func_182(26);
		}
		else
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	else if (func_185(Local_54, 8, 0, 0, 0))
	{
		func_182(8);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	iLocal_262 = func_180();
	iLocal_271 = unk_0x1B5C85C612E5256E(Local_54 - Vector(20f, 20f, 20f), Local_54 + Vector(20f, 20f, 20f), false, true, true, true);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_179();
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 28);
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 13);
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 35);
		}
		if (unk_0xC5042CC6F5E3D450() || iLocal_47 > 1)
		{
			if (func_159())
			{
				func_158();
				func_226();
			}
			else
			{
				switch (iLocal_47)
				{
					case 0:
						func_155();
						break;
					
					case 1:
						if (func_154())
						{
							func_158();
							func_226();
						}
						else
						{
							func_142();
						}
						break;
					
					case 2:
						func_111();
						func_107();
						func_106();
						func_105();
						func_103();
						func_102();
						func_94();
						break;
					
					case 3:
						func_92();
						func_74();
						func_65();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()
{
	if (func_64(unk_0xD80958FC74E988A6()) && func_64(bLocal_50))
	{
		if (func_63(unk_0xD80958FC74E988A6(), bLocal_50, 1) > 50f)
		{
			func_62(8);
			func_26();
		}
		else if ((unk_0x9CD27B0045628463() - iLocal_77) > 10000)
		{
			func_62(8);
			func_26();
		}
		else if ((iLocal_275 == 0 && !func_25()) && func_2(&uLocal_82, "REBTHAU", sLocal_249, 4, 0, 0, 0))
		{
			iLocal_275 = 1;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_23();
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
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_21();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_9();
		func_4();
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
		func_23();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
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

int func_5()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_8())
	{
		return 0;
	}
	if (func_6(unk_0x4F8644AF03D0E0D6()))
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

bool func_6(bool bParam0)
{
	return func_7(bParam0, 20);
}

var func_7(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_8()
{
	return -1;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_20(14))
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
		Global_20266 = func_14();
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

int func_14()
{
	func_15();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_18(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_17(unk_0xD80958FC74E988A6());
			if (func_16(iVar0) && (!func_20(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_16(Global_113386.f_2363.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_21()
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

bool func_22(int iParam0, int iParam1)
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

void func_23()
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_25()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (bLocal_263 == 3)
	{
		func_58(func_17(unk_0xD80958FC74E988A6()), 4, 5);
	}
	else
	{
		func_58(func_17(unk_0xD80958FC74E988A6()), 1, 3);
	}
	if (bLocal_263 != 3)
	{
		func_39(26, bLocal_263);
	}
	else
	{
		func_39(8, 0);
	}
	if (bLocal_263 == 1)
	{
		iVar0 = func_14();
		switch (iVar0)
		{
			case 0:
				while (!func_30(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_30(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_30(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	func_27();
	func_226();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
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

int func_29(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_30(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_29(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_38(iParam1);
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xE80492A9AC099A93(&(Var0.f_1), false);
		Global_113386.f_7688.f_765[Global_113386.f_7688.f_866 /*10*/] = { Var0 };
		Global_113386.f_7688.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_37(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_36(&iVar2);
		iVar3 = func_35(Var1, Global_113386.f_7688.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_33(Global_113386.f_7688.f_765[iVar2 /*10*/]);
			Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
			func_32(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_31(Var1))
			{
				func_33(Global_113386.f_7688.f_765[iVar2 /*10*/]);
				Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
				func_32(&Var1);
				return 1;
			}
			else
			{
				if (!func_31(Global_113386.f_7688.f_765[iVar2 /*10*/]))
				{
					Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
					func_32(&Var1);
					return 1;
				}
				func_32(&Var1);
				return 1;
			}
		}
		else
		{
			func_33(Var1);
			func_32(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_31(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_33(struct<10> Param0)
{
	if (func_31(Param0))
	{
		func_34(Param0.f_8, 0);
	}
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
}

int func_35(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_36(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (func_35(Global_113386.f_7688.f_765[iVar0 /*10*/], Global_113386.f_7688.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_37(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_38(iParam1);
	Var0.f_4 = (unk_0x9CD27B0045628463() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xE80492A9AC099A93(&(Var0.f_1), false);
	return Var0;
}

int func_38(int iParam0)
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

void func_39(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_55(iParam0))
	{
		func_54(iParam0, bParam1);
		if (!func_53(51))
		{
			func_49("RE_REWARD", 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
		if (func_47(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_46(iParam0, bParam1) != 322)
		{
			func_40(func_46(iParam0, bParam1), Local_46.f_0, Local_46.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_62(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_62(7);
			}
			else
			{
				func_62(1);
			}
		}
	}
}

void func_40(int iParam0, var uParam1, var uParam2)
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
		func_44((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
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
		func_41();
	}
}

void func_41()
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
		func_43(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_42() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_28();
				}
			}
		}
	}
}

int func_42()
{
	return Global_31959;
}

int func_43(int iParam0, bool bParam1)
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

void func_44(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_45();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_45()
{
	return Global_1574918;
}

int func_46(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_20410.f_150[iVar1]), bVar0);
	}
}

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_50(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_113386.f_20410[iVar0 /*16*/]), bParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), bParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_51();
	}
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_52()
{
	func_15();
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

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_54(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_56()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_57(Var0);
	return uVar1;
}

int func_57(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				bVar0 = func_61(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_59(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

void func_59(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_60(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
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

int func_61(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_60(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	Global_113372 = iParam0;
}

float func_63(bool bParam0, bool bParam1, bool bParam2)
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

int func_64(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	if (func_64(bLocal_50) && func_73(bLocal_51))
	{
		if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, false))
		{
			func_72(&uLocal_288);
			func_71(&bLocal_80);
			if (iLocal_78 == 0 && !unk_0xA6DB27D19ECBB7DA(bLocal_79))
			{
				bLocal_79 = func_70(bLocal_51, 0, 0);
			}
		}
		else
		{
			func_71(&bLocal_79);
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_80))
			{
				bLocal_80 = func_67(bLocal_50, 0, 145);
				if (iLocal_289 == 0)
				{
					func_66(&uLocal_288);
					iLocal_289 = 1;
				}
			}
		}
	}
}

void func_66(var uParam0)
{
	*uParam0 = -99;
}

bool func_67(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_68(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_68(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_69(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_70(bool bParam0, bool bParam1, bool bParam2)
{
	return func_68(bParam0, !bParam1, bParam2);
}

void func_71(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*bParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*bParam0, false);
		unk_0x86A652570E5F25DD(bParam0);
	}
}

void func_72(var uParam0)
{
	*uParam0 = (unk_0x9CD27B0045628463() - 5000);
}

int func_73(bool bParam0)
{
	if (func_64(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_74()
{
	float fVar0;
	
	if (func_64(bLocal_50) && func_73(bLocal_51))
	{
		func_91(bLocal_80, &uLocal_288);
		if (fLocal_72 > 0f)
		{
			fVar0 = func_63(unk_0xD80958FC74E988A6(), bLocal_50, 1);
			if (fVar0 > (fLocal_72 + fLocal_65))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, false))
				{
					func_62(7);
					func_26();
				}
				else
				{
					func_226();
				}
			}
		}
		else
		{
			fLocal_72 = func_63(unk_0xD80958FC74E988A6(), bLocal_50, 1);
			if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
			{
				unk_0x18EB48CFC41F2EA0(bLocal_51, 0f);
				unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_256 == 0)
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50, 40f, 40f, 40f, false, true, 0))
			{
				func_90();
				if (iLocal_259 == 0)
				{
					if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50, 25f, 25f, 25f, false, true, 0))
					{
						if (((((unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, false) && unk_0xD71649DB0A545AA3(bLocal_50, unk_0xD80958FC74E988A6(), 30f)) && func_81(bLocal_50, unk_0xD80958FC74E988A6(), 1126825984, 1, 250, 7)) && !unk_0x47E4E977581C5B55(bLocal_50)) && !unk_0x2A74E1D5F2F00EEC(bLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0xEA47FE3719165B94(bLocal_50, bLocal_269, "RETURNING_FRONT_B", 8f, -8f, -1, 0, false, false, false, false);
							unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
							unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
							iLocal_259 = 1;
						}
					}
					else
					{
						iLocal_259 = 1;
					}
				}
			}
		}
		else if (((!unk_0x751B70C3D034E187(bLocal_51, bLocal_50, 35f, 35f, 35f, false, true, 0) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, false)) && !func_80()) && func_2(&uLocal_82, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_78(0);
			unk_0x9F8AA94D6D97DBF4(bLocal_50, false);
			unk_0xBF25EB89375A37AD(5, iLocal_70, joaat("player"));
			unk_0x63F58F7C80513AAD(bLocal_50, true);
			unk_0xF166E48407BAC484(bLocal_50, unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x971D38760FBC02EF(bLocal_50, true);
			unk_0x4EDE34FBADD967A6(0);
			func_62(7);
			func_26();
		}
		if (unk_0xA3EE4A07279BB9DB(bLocal_50, bLocal_51, false))
		{
			if (!func_25() && func_2(&uLocal_82, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_77 = unk_0x9CD27B0045628463();
			iLocal_47 = 4;
		}
		else if (unk_0x751B70C3D034E187(bLocal_51, bLocal_50, 20f, 20f, 20f, false, true, 0))
		{
			if (func_77())
			{
				if (!func_75(bLocal_50, 242628503))
				{
					iLocal_78 = 1;
					func_78(0);
					func_72(&uLocal_288);
					func_71(&bLocal_80);
					func_71(&bLocal_79);
					unk_0x31B927BBC44156CD(bLocal_51, false);
					unk_0xE8854A4326B9E12B(&iLocal_53);
					if (iLocal_256 == 0)
					{
						unk_0xC20E50AA46D09CA8(false, bLocal_51, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0xC20E50AA46D09CA8(false, bLocal_51, 20000, -1, 2f, 262152, 0);
					}
					unk_0x480142959D337D00(false, bLocal_51, fLocal_62, 786485);
					unk_0x39E72BC99E6360CB(iLocal_53);
					unk_0x5ABA3986D90D8A3B(bLocal_50, iLocal_53);
					unk_0x3841422E9C488D8C(&iLocal_53);
					unk_0x971D38760FBC02EF(bLocal_50, true);
				}
			}
			else
			{
				switch (iLocal_256)
				{
					case 0:
						if ((((iLocal_259 == 1 && !func_75(bLocal_50, -2017877118)) && !unk_0x47E4E977581C5B55(bLocal_50)) && !unk_0x2A74E1D5F2F00EEC(bLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(bLocal_50, unk_0xD80958FC74E988A6(), 30f) && unk_0x77F1BEB8863288D5(bLocal_50, -875674219) == 7)
							{
								unk_0xEA47FE3719165B94(bLocal_50, bLocal_269, "RETURNING_FRONT_A", 8f, -8f, -1, 0, false, false, false, false);
							}
							iLocal_257 = unk_0x9CD27B0045628463();
							iLocal_256++;
						}
						else
						{
							func_90();
						}
						break;
					
					case 1:
						if (((((unk_0x9CD27B0045628463() - iLocal_257) > 10000 && !func_75(bLocal_50, -2017877118)) && !unk_0x47E4E977581C5B55(bLocal_50)) && !unk_0x2A74E1D5F2F00EEC(bLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_253, 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(bLocal_50, unk_0xD80958FC74E988A6(), 30f))
							{
								func_78(0);
								unk_0xEA47FE3719165B94(bLocal_50, bLocal_270, "THANKS_A", 8f, -8f, -1, 0, false, false, false, false);
							}
							iLocal_257 = unk_0x9CD27B0045628463();
							iLocal_256++;
						}
						else
						{
							func_78(1);
						}
						break;
					
					case 2:
						if (((((unk_0x9CD27B0045628463() - iLocal_257) > 10000 && !func_75(bLocal_50, -2017877118)) && !unk_0x47E4E977581C5B55(bLocal_50)) && !unk_0x2A74E1D5F2F00EEC(bLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_254, 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(bLocal_50, unk_0xD80958FC74E988A6(), 30f))
							{
								func_78(0);
								unk_0xEA47FE3719165B94(bLocal_50, bLocal_268, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, false, false, false, false);
							}
							iLocal_256++;
						}
						else
						{
							func_78(1);
						}
						break;
					
					default:
						func_78(1);
						break;
					}
				}
			}
	}
}

int func_75(bool bParam0, int iParam1)
{
	if (func_76(bParam0))
	{
		if (unk_0x77F1BEB8863288D5(bParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(bParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(bool bParam0)
{
	if (func_64(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	if (iLocal_78 == 1)
	{
		return 1;
	}
	if ((unk_0x9CD27B0045628463() - iLocal_76) < 4000)
	{
		return 0;
	}
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, true))
	{
		return 0;
	}
	if (func_64(bLocal_49) && unk_0x9A497FE2DF198913(bLocal_49))
	{
		return 0;
	}
	if (!unk_0x22AC59A870E6A669(bLocal_51, -1, false))
	{
		return 0;
	}
	return 1;
}

void func_78(int iParam0)
{
	if (func_64(bLocal_50))
	{
		if (iParam0 == 1)
		{
			if (!unk_0x5891CAC5D4ACFF74(bLocal_50) && func_64(unk_0xD80958FC74E988A6()))
			{
				unk_0x9F3480FE65DB31B5(bLocal_50, unk_0xF162E133B4E7A675(unk_0xD80958FC74E988A6()));
				unk_0x3DBFC55D5C9BB447(bLocal_50, true);
				unk_0x1D9D45004C28C916(func_79(), 2f, -1f, -1f);
				unk_0x69F4BE8C8CC4796C(bLocal_50, unk_0xD80958FC74E988A6(), -1, 0, 2);
			}
		}
		else if (unk_0x5891CAC5D4ACFF74(bLocal_50))
		{
			unk_0xED74007FFB146BC2(bLocal_50);
		}
	}
}

int func_79()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_80()
{
	if (bLocal_263 == 3)
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_81(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_89(bParam0, bParam1);
	if (!func_64(bParam0) || !func_64(bParam1))
	{
		if (iVar2 != -1)
		{
			func_88(&(Local_44[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_85(bParam0, bParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_84();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_44[iVar2 /*4*/].f_1 = bParam0;
		Local_44[iVar2 /*4*/].f_2 = bParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_82(&(Local_44[iVar2 /*4*/]), Var1, bParam1, &(Local_44[iVar2 /*4*/].f_3), bParam0, bParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_44[iVar2 /*4*/].f_3) < iParam4);
}

int func_82(var uParam0, struct<3> Param1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_64(bParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_83(bParam2, bParam5) };
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam4, 7);
		return 0;
	}
	iVar4 = unk_0x3D87450E15D98694(*uParam0, &uVar0, &Var1, &uVar2, &bVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x524AC5ECEA15343E(bVar3))
	{
		func_64(bVar3);
		if (unk_0x04A2A40C73395041(bVar3) == bParam2)
		{
			if (bLocal_45)
			{
				unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(bParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x9CD27B0045628463();
			return 1;
		}
		return 0;
	}
	if (unk_0x6AC7003FA6E5575E(bVar3))
	{
		func_64(bVar3);
		if (unk_0x997ABD671D25CA0B(bParam2, false))
		{
			if (unk_0x4B53F92932ADFAC0(bVar3) == unk_0x9A9112A0FE9A4713(bParam2, false))
			{
				if (bLocal_45)
				{
					unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(bParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_83(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (bParam1 == 7)
	{
		bVar0 = unk_0xD53343AA4FB7DD28(false, 7);
		bParam1 = bVar0;
	}
	if (bParam1 == 0)
	{
		return unk_0x3FEF770D40960D5A(bParam0, true);
	}
	else if (bParam1 == 1)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (bParam1 == 2)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (bParam1 == 3)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (bParam1 == 4)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (bParam1 == 5)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (bParam1 == 6)
	{
		return unk_0x17C07FC640E86B4E(bParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x3FEF770D40960D5A(bParam0, true);
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if ((Local_44[iVar0 /*4*/] == 0 && Local_44[iVar0 /*4*/].f_1 == 0) && Local_44[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_85(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_87(unk_0x3FEF770D40960D5A(bParam1, true) - unk_0x3FEF770D40960D5A(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x0A794A5A57F8DF91(bParam0) };
	}
	else
	{
		Var1 = { func_87(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_86(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_86(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_87(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_88(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90()
{
	if (iLocal_78 == 0 && func_64(bLocal_50))
	{
		if (func_75(bLocal_50, 242628503))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_50);
		}
		if ((((!func_75(bLocal_50, -2017877118) && !unk_0xD71649DB0A545AA3(bLocal_50, unk_0xD80958FC74E988A6(), 20f)) && unk_0x77F1BEB8863288D5(bLocal_50, -875674219) == 7) && !unk_0x47E4E977581C5B55(bLocal_50)) && !unk_0x2A74E1D5F2F00EEC(bLocal_50))
		{
			unk_0x5AD23D40115353AC(bLocal_50, unk_0xD80958FC74E988A6(), false);
			unk_0x69F4BE8C8CC4796C(bLocal_50, unk_0xD80958FC74E988A6(), -1, 0, 2);
		}
	}
}

void func_91(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x9CD27B0045628463();
	}
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		bVar0 = (unk_0x9CD27B0045628463() - *uParam1);
		if (bVar0 < 5000)
		{
			bVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(bVar0) / 1000f));
			if ((bVar1 * 1000 - bVar0) < 500)
			{
				if (unk_0x970F608F0EE6C885(bParam0) != 255)
				{
					unk_0x45FF974EEE1C8734(bParam0, 255);
				}
			}
			else if (unk_0x970F608F0EE6C885(bParam0) != 0)
			{
				unk_0x45FF974EEE1C8734(bParam0, false);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x970F608F0EE6C885(bParam0) != 255)
			{
				unk_0x45FF974EEE1C8734(bParam0, 255);
			}
		}
	}
}

void func_92()
{
	if (func_64(bLocal_49))
	{
		if (iLocal_68 == 0)
		{
			unk_0x70A2D1137C8ED7C9(bLocal_49, 2, false);
			unk_0xE1EF3C1216AFF2CD(bLocal_49);
			if (func_73(bLocal_51))
			{
				if (bLocal_263 == 2)
				{
					if (unk_0x1C8A4C2C19E68EEC(bLocal_51))
					{
						unk_0x54833611C17ABDEA(bLocal_51);
					}
					unk_0xF1160ACCF98A3FC8(true, "RE_BikeThief2");
				}
				if (unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, true))
				{
					unk_0x45BBCBA77C29A841(bLocal_49);
				}
			}
			unk_0x971D38760FBC02EF(bLocal_49, true);
			unk_0x22B0D0E37CCB840D(bLocal_49, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
			iLocal_68 = 1;
		}
		else
		{
			if (((((iLocal_69 == 0 && func_63(bLocal_49, unk_0xD80958FC74E988A6(), 1) < 30f) && !unk_0x47E4E977581C5B55(bLocal_49)) && func_75(bLocal_49, 1805844857)) && !func_25()) && func_2(&uLocal_82, "REBTHAU", sLocal_251, 4, 0, 0, 0))
			{
				iLocal_69 = 1;
			}
			if (func_63(bLocal_49, unk_0xD80958FC74E988A6(), 1) > 50f)
			{
				func_93(&bLocal_49, 1, 0, 1);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*bParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*bParam0);
			}
			unk_0x971D38760FBC02EF(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*bParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(bParam0);
	}
}

void func_94()
{
	if ((func_64(bLocal_49) && func_64(bLocal_50)) && func_73(bLocal_51))
	{
		if (func_101())
		{
			func_99(&uLocal_276, 0, 0);
			func_98(&bLocal_49);
			func_97(&bLocal_51);
			if (unk_0x751B70C3D034E187(bLocal_50, unk_0xD80958FC74E988A6(), 25f, 25f, 25f, false, true, 0) && func_2(&uLocal_82, "REBTHAU", sLocal_255, 4, 0, 0, 0))
			{
			}
			unk_0x142A02425FF02BD9(bLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_96();
		}
		else
		{
			func_95(bLocal_79, bLocal_51, fLocal_65, 1061158912, 0);
		}
	}
}

void func_95(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		if ((unk_0x7239B21A38F536BA(bParam1) && unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x6AC7003FA6E5575E(bParam1))
			{
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam1), false))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						bVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (bVar0 <= 0)
						{
							bVar0 = false;
						}
						if (bVar0 >= 255)
						{
							bVar0 = 255;
						}
						unk_0xB14552383D39CE3E(bParam0, true);
						unk_0x45FF974EEE1C8734(bParam0, (255 - bVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(bParam0, false);
						unk_0x45FF974EEE1C8734(bParam0, 255);
					}
				}
			}
			else if (unk_0x524AC5ECEA15343E(bParam1))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam1)))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						bVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (bVar0 <= 0)
						{
							bVar0 = false;
						}
						if (bVar0 >= 255)
						{
							bVar0 = 255;
						}
						unk_0xB14552383D39CE3E(bParam0, true);
						unk_0x45FF974EEE1C8734(bParam0, (255 - bVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(bParam0, false);
						unk_0x45FF974EEE1C8734(bParam0, 255);
					}
				}
			}
		}
	}
}

void func_96()
{
	func_226();
}

void func_97(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x0A7B270912999B3C(*bParam0))
		{
			unk_0xAD738C3085FE7E11(*bParam0, true, false);
		}
		if (func_73(*bParam0))
		{
			if (unk_0x0A7B270912999B3C(*bParam0) && unk_0xDDE6DF5AE89981D2(*bParam0, true))
			{
				if (func_64(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *bParam0, false))
					{
						unk_0x629BFA74418D6239(bParam0);
						return;
					}
				}
				unk_0xEA386986E786A54F(bParam0);
			}
		}
		else
		{
			if (func_64(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *bParam0, false))
				{
					unk_0x629BFA74418D6239(bParam0);
					return;
				}
			}
			unk_0xEA386986E786A54F(bParam0);
		}
	}
}

void func_98(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*bParam0, false))
		{
			unk_0x0DC7CABAB1E9B67E(*bParam0, false, 1);
		}
		if (!unk_0x0A7B270912999B3C(*bParam0))
		{
			unk_0xAD738C3085FE7E11(*bParam0, true, false);
		}
		unk_0x9614299DCB53E54B(bParam0);
	}
}

void func_99(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", false, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_100(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_100(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_100(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_101()
{
	if (func_63(bLocal_51, unk_0xD80958FC74E988A6(), 1) > (fLocal_65 + 100f))
	{
		return 1;
	}
	if (func_63(bLocal_51, unk_0xD80958FC74E988A6(), 1) > fLocal_65)
	{
		if (((unk_0x1F0B79228E461EC9(bLocal_50, bLocal_267, "IDLE_A", 3) && unk_0x346D81500D088F42(bLocal_50, bLocal_267, "IDLE_A") > 0.99f) || (unk_0x1F0B79228E461EC9(bLocal_50, bLocal_267, "IDLE_B", 3) && unk_0x346D81500D088F42(bLocal_50, bLocal_267, "IDLE_B") > 0.99f)) || (unk_0x1F0B79228E461EC9(bLocal_50, bLocal_267, "IDLE_C", 3) && unk_0x346D81500D088F42(bLocal_50, bLocal_267, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_102()
{
	if ((((((((((iLocal_75 > -1 && (unk_0x9CD27B0045628463() - iLocal_75) > 5000) && !func_25()) && func_64(bLocal_49)) && func_64(bLocal_50)) && func_73(bLocal_51)) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49, 13f, 13f, 13f, false, true, 0)) && !unk_0x751B70C3D034E187(bLocal_50, bLocal_49, 13f, 13f, 13f, false, true, 0)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false)) && unk_0x751B70C3D034E187(bLocal_50, unk_0xD80958FC74E988A6(), 8f, 8f, 8f, false, true, 0)) && func_2(&uLocal_82, "REBTHAU", sLocal_250, 4, 0, 0, 0))
	{
		iLocal_75 = -1;
	}
}

void func_103()
{
	if (func_104())
	{
		iLocal_76 = unk_0x9CD27B0045628463();
		func_71(&bLocal_79);
		func_99(&uLocal_276, 0, 0);
		unk_0xC5F0A8EBD3F361CE(0);
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			bLocal_52 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true);
			unk_0xAD738C3085FE7E11(bLocal_52, true, true);
		}
		if (func_64(bLocal_50))
		{
			unk_0x0F804F1DB19B9689(bLocal_50);
		}
		if ((func_64(bLocal_49) && !func_25()) && func_2(&uLocal_82, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_47 = 3;
	}
	else
	{
		if (((bLocal_272 == 0 && unk_0xA6DB27D19ECBB7DA(bLocal_79)) && func_64(unk_0xD80958FC74E988A6())) && func_64(bLocal_49))
		{
			if (func_63(unk_0xD80958FC74E988A6(), bLocal_49, 1) < 30f || unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bLocal_49, true), 10f, true))
			{
				bLocal_272 = true;
				unk_0x75A16C3DA34F1245(bLocal_79, bLocal_272);
			}
		}
		if (((bLocal_263 == 2 && func_64(bLocal_49)) && func_73(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
		{
			if (iLocal_260 == 0)
			{
				unk_0x29DE5FA52D00428C(bLocal_51, true, "RE_BikeThief2", 30f, 786468);
				iLocal_260 = 1;
				Local_261 = { unk_0x92523B76657A517D(unk_0x21543C612379DB3C(true, "RE_BikeThief2"), unk_0x0E48D1C262390950(true, "RE_BikeThief2")) };
			}
			else if (!unk_0x1C8A4C2C19E68EEC(bLocal_51) || func_225(bLocal_51, Local_261, 1) < 5f)
			{
				if (unk_0x1C8A4C2C19E68EEC(bLocal_51))
				{
					unk_0x54833611C17ABDEA(bLocal_51);
				}
				unk_0x9454528DF15D657A(bLocal_49, bLocal_51, unk_0xD80958FC74E988A6(), 8, fLocal_62, 786468, 10f, 1f, false);
			}
		}
	}
}

int func_104()
{
	if (!func_64(bLocal_49))
	{
		return 1;
	}
	else if (func_64(bLocal_51))
	{
		if (iLocal_290 == 0)
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
			{
				iLocal_290 = 1;
			}
		}
		else if (!unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
		{
			return 1;
		}
		if (unk_0xC86D67D52A707CF8(bLocal_49, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()
{
	if ((func_64(bLocal_49) && func_73(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
	{
		if (iLocal_67)
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_62 = fLocal_64;
				unk_0x5C9B84BD7D31D908(bLocal_49, fLocal_62);
				unk_0x69F4BE8C8CC4796C(bLocal_49, unk_0xD80958FC74E988A6(), 20000, 16, 2);
				iLocal_67 = 0;
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_62 = fLocal_63;
			unk_0x5C9B84BD7D31D908(bLocal_49, fLocal_62);
			unk_0x69F4BE8C8CC4796C(bLocal_49, unk_0xD80958FC74E988A6(), 20000, 16, 2);
			iLocal_67 = 1;
		}
	}
}

void func_106()
{
	if (((((((((iLocal_73 < 5 && !func_25()) && func_64(bLocal_49)) && func_64(bLocal_50)) && func_73(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false)) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49, 13f, 13f, 13f, false, true, 0)) && !unk_0x751B70C3D034E187(bLocal_50, bLocal_49, 13f, 13f, 13f, false, true, 0)) && (unk_0x9CD27B0045628463() - iLocal_74) > 15000) && func_2(&uLocal_82, "REBTHAU", sLocal_252, 4, 0, 0, 0))
	{
		if (unk_0x77F1BEB8863288D5(bLocal_49, -1273030092) == 1 && !unk_0x8785E6E40C7A8818(bLocal_49))
		{
			unk_0x2F8AF0E82773A171(bLocal_49, unk_0xD80958FC74E988A6(), false, 0f, 0f, 0f, 15f, 50, true, -753768974);
		}
		iLocal_74 = unk_0x9CD27B0045628463();
		iLocal_73++;
	}
}

void func_107()
{
	if ((((iLocal_258 == 0 && func_64(bLocal_50)) && func_64(bLocal_49)) && func_73(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
	{
		if (iLocal_273 == 0)
		{
			if (func_2(&uLocal_82, "REBTHAU", sLocal_247, 4, func_110(), 0, 0))
			{
				unk_0xAAA34F8A7CB32098(bLocal_50);
				unk_0xE8854A4326B9E12B(&iLocal_53);
				unk_0x69F4BE8C8CC4796C(false, bLocal_49, -1, 2048, 2);
				unk_0xD76B57B44F1E6F8B(false, Local_57, 2f, 20000, 1193033728, 0.5f);
				unk_0x5AD23D40115353AC(false, bLocal_51, 1000);
				unk_0xEA47FE3719165B94(false, bLocal_265, bLocal_266, 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_A", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_B", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_C", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_B", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_A", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_B", 8f, -8f, -1, 0, false, false, false, false);
				unk_0xEA47FE3719165B94(false, bLocal_267, "IDLE_C", 8f, -8f, -1, 1, false, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_53);
				unk_0x5ABA3986D90D8A3B(bLocal_50, iLocal_53);
				unk_0x3841422E9C488D8C(&iLocal_53);
				iLocal_74 = unk_0x9CD27B0045628463();
				iLocal_75 = unk_0x9CD27B0045628463();
				if (bLocal_263 == 3)
				{
					sLocal_248 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_248 = "REBTH_HELP2";
				}
				iLocal_273 = 1;
			}
		}
		else if (func_64(unk_0xD80958FC74E988A6()))
		{
			if (func_63(unk_0xD80958FC74E988A6(), bLocal_50, 1) < 30f)
			{
				if (!func_25())
				{
					if (func_2(&uLocal_82, "REBTHAU", sLocal_248, 4, 0, 0, 0))
					{
						iLocal_258 = 1;
					}
				}
				else if (iLocal_274 == 0)
				{
					func_108();
					iLocal_274 = 1;
				}
			}
		}
	}
}

void func_108()
{
	Global_20471 = 0;
	func_109();
}

void func_109()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_22616 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_21605 = 6;
		return;
	}
}

int func_110()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50))
	{
		if (unk_0x751B70C3D034E187(bLocal_50, unk_0xD80958FC74E988A6(), Var1, false, true, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_111()
{
	if ((func_64(bLocal_49) && func_73(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_49, bLocal_51, false))
	{
		func_112(&uLocal_276, bLocal_51, 0, 0, 1, 1, 1);
	}
}

void func_112(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_113(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_113(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_114(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_114(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_99(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_115(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_115(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam3;
	if (unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_100(bVar0))
	{
		func_141();
	}
	if (func_140(bParam1) && unk_0x47D6F43D77935C75(bParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(bParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(bParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(bParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(bParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(bParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(bParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(bParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(bParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(bParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_135(uParam0, bParam5, bParam7, 0))
			{
				func_131(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_120(bVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam6)
						{
							if (!func_100(bVar0))
							{
								func_119(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
								{
									func_118(1);
								}
							}
						}
					}
				}
			}
			else if (func_120(bVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
				{
					if (((unk_0xE659E47AF827484B(bParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam6)
					{
						if (!func_100(bVar0))
						{
							func_119(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_118(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(bParam3))
			{
				if (func_100(bParam3))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_99(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_99(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_99(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_99(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_99(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_99(uParam0, bVar0, 1);
				}
			}
			if (!func_135(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_117(uParam0))
				{
					func_116(uParam0);
				}
			}
		}
	}
	else
	{
		func_99(uParam0, bVar0, 0);
	}
}

void func_116(var uParam0)
{
	if (func_140(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", false, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_117(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_118(bool bParam0)
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_119(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_120(bool bParam0)
{
	if (!func_121(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(bParam0) && func_100(bParam0)) || func_100("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_118(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_118(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_118(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_130(0))
	{
		return 0;
	}
	if (func_129())
	{
		return 0;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	if ((func_128() || func_127(Global_4718592.f_168757)) || func_126())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_125(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_124(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_122(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_122(bool bParam0)
{
	if (bParam0 != func_8())
	{
		if (func_123(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_123(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB8DFD30D6973E135(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5E9564D8246B909A(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
		{
			switch (bParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xE38E9162A2500646(bParam0, bParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

bool func_125(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x997ABD671D25CA0B(bParam0, bParam1))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam0, bParam1);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				bVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(bVar0));
				if (bVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < bVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!unk_0x22AC59A870E6A669(bVar0, bVar3, false))
					{
						if (unk_0xBB40DD2270B65366(bVar0, bVar3, false) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

var func_126()
{
	return Global_2714762.f_19;
}

bool func_127(int iParam0)
{
	return iParam0 == 51;
}

var func_128()
{
	return Global_2714762.f_18;
}

bool func_129()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_130(int iParam0)
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

void func_131(var uParam0, bool bParam1, struct<3> Param2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		func_99(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x524AC5ECEA15343E(bParam1))
		{
			bVar0 = unk_0x04A2A40C73395041(bParam1);
			if (!unk_0x997ABD671D25CA0B(bVar0, false))
			{
				if (unk_0x12534C348C6CB68B(bVar0))
				{
					if (!func_132())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(bVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x189E955A8313E298(bParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", false, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()
{
	return func_133(unk_0x4F8644AF03D0E0D6());
}

int func_133(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_135(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_117(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_139(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_138(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_137(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_117(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_121(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_141();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_116)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_140(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x6AC7003FA6E5575E(bParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(bParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_141()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

void func_142()
{
	if (unk_0x7239B21A38F536BA(bLocal_49))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_49))
		{
			func_158();
			func_226();
		}
		else if (func_153())
		{
			if (func_14() == 0)
			{
				func_152(&uLocal_82, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
				sLocal_249 = "REBTH_RESPM";
			}
			else if (func_14() == 1)
			{
				func_152(&uLocal_82, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
				sLocal_249 = "REBTH_RESPF";
			}
			else if (func_14() == 2)
			{
				func_152(&uLocal_82, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
				sLocal_249 = "REBTH_RESPT";
			}
			if (unk_0x4C241E39B23DF959(bLocal_51, false) && !unk_0x84A2DD9AC37C35C1(bLocal_49))
			{
				if (bLocal_263 == 2)
				{
					unk_0xC20E50AA46D09CA8(bLocal_49, bLocal_51, 20000, -1, 2f, 1, 0);
				}
				else
				{
					unk_0xE8854A4326B9E12B(&iLocal_53);
					unk_0xC20E50AA46D09CA8(false, bLocal_51, 20000, -1, 2f, 1, 0);
					unk_0x9454528DF15D657A(false, bLocal_51, unk_0xD80958FC74E988A6(), 8, fLocal_62, 786468, 10f, 1f, false);
					unk_0x39E72BC99E6360CB(iLocal_53);
					unk_0x5ABA3986D90D8A3B(bLocal_49, iLocal_53);
					unk_0x3841422E9C488D8C(&iLocal_53);
					unk_0x971D38760FBC02EF(bLocal_49, true);
				}
			}
			func_71(&bLocal_81);
			bLocal_79 = func_67(bLocal_49, 1, 145);
			unk_0x75A16C3DA34F1245(bLocal_79, bLocal_272);
			unk_0xC5F0A8EBD3F361CE(2);
			if (bLocal_263 == 1)
			{
				unk_0x1A5AA1208AF5DB59(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, false, false, true);
			}
			iLocal_47 = 2;
			func_143(1);
		}
	}
}

int func_143(int iParam0)
{
	if (func_146())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_47(Global_113375))
		{
			func_144(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_47(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_119(func_145(iParam0), -1);
					Global_113386.f_24995.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_119(func_145(iParam0), -1);
					Global_113386.f_24995.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_119(func_145(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_145(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_146()
{
	switch (func_147(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_147(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_151(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_149(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_148(uParam0, iParam4);
		}
	}
	return 2;
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, Global_43052);
}

int func_150(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_149(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_152(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_153()
{
	switch (bLocal_263)
	{
		case 1:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_154()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 16f, 16f, 6f };
	Var1 = { -16f, -16f, -6f };
	if (func_64(bLocal_49))
	{
		if (unk_0xC86D67D52A707CF8(bLocal_49, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_73(bLocal_51))
	{
		if (unk_0xC86D67D52A707CF8(bLocal_51, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_64(bLocal_50))
	{
		if (unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(bLocal_50, 31086, 0f, 0f, 0f), 3f, true))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x17C07FC640E86B4E(bLocal_50, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + unk_0x17C07FC640E86B4E(bLocal_50, 31086, 0f, 0f, 0f) };
		if ((unk_0x2E0DC353342C4A6D(Var1, Var0, joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(Var1, Var0, joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(Var1, Var0, joaat("weapon_stickybomb"), true))
		{
			return 1;
		}
		if (unk_0x2F09F7976C512404(unk_0x17C07FC640E86B4E(bLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xAB0F816885B0E483(-1, unk_0x17C07FC640E86B4E(bLocal_50, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xBBCCE00B381F8482(bLocal_50))
		{
			return 1;
		}
		if (unk_0xC86D67D52A707CF8(bLocal_50, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_155()
{
	if (iLocal_66 == 0)
	{
		switch (bLocal_263)
		{
			case 1:
				Local_56 = { 433.57f, -1916.68f, 24.04f };
				bLocal_60 = 248.5f;
				Local_57 = { 439.054f, -1920.145f, 23.5581f };
				Local_58 = { 434.31f, -1908.87f, 25.92f };
				bLocal_61 = -163.17f;
				Local_55 = { 435.18f, -1915.18f, 24.68f };
				bLocal_59 = 226.13f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				bLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 2:
				Local_56 = { 774.06f, -155.63f, 73.44f };
				bLocal_60 = 144.3932f;
				Local_57 = { 769.8723f, -156.9548f, 73.5144f };
				Local_58 = { 773.632f, -150.3134f, 74.6217f };
				bLocal_61 = 151.6004f;
				Local_55 = { 771.41f, -154.29f, 74.09f };
				bLocal_59 = 150.54f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				bLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 3:
				Local_56 = { -1927.94f, 254.7125f, 84.4018f };
				bLocal_60 = 285.0046f;
				Local_57 = { -1934.785f, 253.2105f, 83.8164f };
				Local_58 = { -1931.04f, 252.19f, 84.99f };
				bLocal_61 = 42.33f;
				Local_55 = { -1932.27f, 254.5f, 84.4f };
				bLocal_59 = 96.81f;
				fLocal_63 = 10f;
				fLocal_64 = 35f;
				bLocal_48 = joaat("bati");
				fLocal_65 = 400f;
				sLocal_253 = "REBTH_THX2X";
				sLocal_254 = "REBTH_THX3X";
				sLocal_255 = "REBTH_GONEX";
				break;
		}
		unk_0xC12321827687FE4D(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), false, true);
		unk_0x46A1E1A299EC4BBA(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), 0);
		unk_0xA56F01F3765B93A0(Local_56, 20f, true, false, false, false);
		iLocal_66 = 1;
	}
	unk_0x963D27A58DF860AC(joaat("g_m_y_strpunk_01"));
	unk_0x963D27A58DF860AC(joaat("a_m_y_beachvesp_01"));
	unk_0x963D27A58DF860AC(bLocal_48);
	if ((((unk_0x98A4EB5D89A0C952(joaat("g_m_y_strpunk_01")) && unk_0x98A4EB5D89A0C952(joaat("a_m_y_beachvesp_01"))) && unk_0x98A4EB5D89A0C952(bLocal_48)) && func_157()) && func_156())
	{
		bLocal_51 = unk_0xAF35D0D2583051B0(bLocal_48, Local_55, bLocal_59, true, true, false);
		unk_0xE532F5D78798DAAB(bLocal_48);
		unk_0x0FC2D89AC25A5814(bLocal_48, true);
		unk_0x2497C4717C8B881E(bLocal_51, true, true, false);
		unk_0xEB9DC3C7D8596C46(bLocal_51, false);
		unk_0x0AD9E8F87FF7C16F(bLocal_51, false);
		unk_0x92F0CF722BC4202F(bLocal_51, true);
		unk_0x013A80FC08F6E4F2("RE_CAR_STEAL_SCENE");
		unk_0x153973AB99FE8980(bLocal_51, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		fLocal_62 = fLocal_64;
		if (bLocal_263 == 3)
		{
			unk_0x4F1D4BE3A7F24601(bLocal_51, 49, false);
			unk_0x1F2AA07F00B3217A(bLocal_51, 0);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 16, 2, false);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 11, 3, false);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 12, 2, false);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 13, 2, false);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 23, 10, false);
			unk_0x6AF0636DDEDCB6DD(bLocal_51, 24, 10, false);
			unk_0x2A1F4F37F95BAD08(bLocal_51, 22, true);
			unk_0x2A1F4F37F95BAD08(bLocal_51, 17, true);
			unk_0x2A1F4F37F95BAD08(bLocal_51, 21, true);
			unk_0x2A1F4F37F95BAD08(bLocal_51, 20, true);
			unk_0x2A1F4F37F95BAD08(bLocal_51, 19, true);
			unk_0x4F1D4BE3A7F24601(bLocal_51, 89, 89);
			unk_0x2036F561ADD12E33(bLocal_51, false, true);
			unk_0x9088EB5A43FFB0A1(bLocal_51, true);
		}
		unk_0xF372BC22FCB88606("re_bikethief_relGroupVictim", &iLocal_70);
		unk_0xF372BC22FCB88606("re_bikethief_relGroupThief", &iLocal_71);
		unk_0xBF25EB89375A37AD(5, iLocal_71, iLocal_70);
		unk_0xBF25EB89375A37AD(5, iLocal_71, joaat("player"));
		unk_0xBF25EB89375A37AD(1, iLocal_70, joaat("player"));
		bLocal_49 = unk_0xD49F9B0955C367DE(19, joaat("g_m_y_strpunk_01"), Local_58, bLocal_61, true, true);
		unk_0xE532F5D78798DAAB(joaat("g_m_y_strpunk_01"));
		unk_0x9F8AA94D6D97DBF4(bLocal_49, true);
		unk_0x79F020FF9EDC0748(bLocal_49, true);
		unk_0xC80A74AC829DDD92(bLocal_49, iLocal_71);
		unk_0x4D9CA1009AFBD057(bLocal_49, 3);
		unk_0x9F7794730795E019(bLocal_49, 17, true);
		unk_0x9F7794730795E019(bLocal_49, 13, false);
		unk_0x70A2D1137C8ED7C9(bLocal_49, 1, true);
		unk_0x560A43136EB58105(bLocal_49, false);
		unk_0x1913FE4CBF41C463(bLocal_49, 42, true);
		unk_0x1913FE4CBF41C463(bLocal_49, 281, true);
		unk_0x7A6535691B477C48(bLocal_49, 2);
		unk_0x6C8065A3B780185B(bLocal_49, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0xEA47FE3719165B94(bLocal_49, bLocal_264, "base", 8f, -8f, -1, 1, false, false, false, false);
		bLocal_50 = unk_0xD49F9B0955C367DE(19, joaat("a_m_y_beachvesp_01"), Local_56, bLocal_60, true, true);
		unk_0xE532F5D78798DAAB(joaat("a_m_y_beachvesp_01"));
		unk_0x9F8AA94D6D97DBF4(bLocal_50, true);
		unk_0x79F020FF9EDC0748(bLocal_50, true);
		unk_0x70A2D1137C8ED7C9(bLocal_50, 8, true);
		if (bLocal_263 == 3)
		{
			unk_0x560A43136EB58105(bLocal_50, true);
		}
		else
		{
			unk_0x560A43136EB58105(bLocal_50, false);
		}
		unk_0x1913FE4CBF41C463(bLocal_50, 26, true);
		unk_0x1913FE4CBF41C463(bLocal_50, 42, true);
		unk_0x1913FE4CBF41C463(bLocal_50, 167, true);
		unk_0x1913FE4CBF41C463(bLocal_50, 281, true);
		unk_0xC80A74AC829DDD92(bLocal_50, iLocal_70);
		unk_0x63F58F7C80513AAD(bLocal_50, false);
		unk_0x6C8065A3B780185B(bLocal_50, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x142A02425FF02BD9(bLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		func_152(&uLocal_82, 1, bLocal_49, "BThief", 0, 1);
		func_152(&uLocal_82, 2, bLocal_50, "BThiefVictim", 0, 1);
		if (iLocal_262 == 0)
		{
			if (bLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HELPX";
			}
			else
			{
				sLocal_247 = "REBTH_HELP";
			}
			sLocal_251 = "REBTH_RUNSOF";
			sLocal_252 = "REBTH_TAUNT";
			bLocal_266 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_262 == 1)
		{
			if (bLocal_263 == 3)
			{
				sLocal_247 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_247 = "REBTH_HLPB";
			}
			sLocal_251 = "REBTH_RUNB";
			sLocal_252 = "REBTH_TNTB";
			bLocal_266 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_247 = "REBTH_HLPC";
			sLocal_251 = "REBTH_RUNC";
			sLocal_252 = "REBTH_TNTC";
			bLocal_266 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0x102E68B2024D536D(false);
		iLocal_47 = 1;
	}
}

int func_156()
{
	if (bLocal_263 == 2)
	{
		unk_0xAF514CABE74CBF15(true, "RE_BikeThief2");
		if (!unk_0x300D614A4C785FC4(true, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_157()
{
	unk_0xD3BD40951412FEF6(bLocal_264);
	unk_0xD3BD40951412FEF6(bLocal_265);
	unk_0xD3BD40951412FEF6(bLocal_267);
	unk_0xD3BD40951412FEF6(bLocal_268);
	unk_0xD3BD40951412FEF6(bLocal_270);
	unk_0xD3BD40951412FEF6(bLocal_269);
	if (((((unk_0xD031A9162D01088C(bLocal_264) && unk_0xD031A9162D01088C(bLocal_265)) && unk_0xD031A9162D01088C(bLocal_267)) && unk_0xD031A9162D01088C(bLocal_268)) && unk_0xD031A9162D01088C(bLocal_270)) && unk_0xD031A9162D01088C(bLocal_269))
	{
		return 1;
	}
	return 0;
}

void func_158()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50))
	{
		if (func_75(bLocal_50, 993674639))
		{
			unk_0xAAA34F8A7CB32098(bLocal_50);
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_50);
		}
		unk_0x971D38760FBC02EF(bLocal_50, true);
		unk_0x22B0D0E37CCB840D(bLocal_50, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49))
	{
		unk_0x971D38760FBC02EF(bLocal_49, true);
		unk_0x22B0D0E37CCB840D(bLocal_49, unk_0xD80958FC74E988A6(), 100f, -1, false, true);
	}
}

int func_159()
{
	if (iLocal_47 == 0 && func_178())
	{
		return 1;
	}
	if (iLocal_47 == 1 && func_166())
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_50))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_50))
		{
			return 1;
		}
		else if (unk_0xC86D67D52A707CF8(bLocal_50, unk_0xD80958FC74E988A6(), true))
		{
			func_164();
			func_163(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_160(bLocal_50, 170f))
		{
			func_164();
			func_163(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0 && iLocal_259 == 1)
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_51) && !unk_0x4C241E39B23DF959(bLocal_51, false))
	{
		return 1;
	}
	return 0;
}

int func_160(bool bParam0, float fParam1)
{
	float fVar0;
	
	if (func_64(unk_0xD80958FC74E988A6()) && func_64(bParam0))
	{
		if (func_162(bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_161(bParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_161(bool bParam0, float fParam1)
{
	return func_81(bParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

int func_162(bool bParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

void func_163(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x933D6A9EEC1BACD0(&Global_20471, false);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_164()
{
	Global_20471 = 0;
	func_165();
}

void func_165()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_166()
{
	if (!func_149(5))
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_167(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_16(func_14()))
		{
			iVar5 = func_52();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_168(iVar1, &Var0);
					fVar4 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_168(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 1:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 2:
			func_169(uParam1, "Barry1", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 3:
			func_169(uParam1, "Barry2", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 4:
			func_169(uParam1, "Barry3", func_171(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 5:
			func_169(uParam1, "Barry3A", func_171(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 6:
			func_169(uParam1, "Barry3C", func_171(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 7:
			func_169(uParam1, "Barry4", func_171(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
			break;
		
		case 8:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 9:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 10:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 11:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 12:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 13:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 14:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 15:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 16:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 17:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 18:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 19:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 20:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 21:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 22:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 23:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_170(iParam0), 0, 1);
			break;
		
		case 24:
			func_169(uParam1, "Hao1", func_171(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
			break;
		
		case 25:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 26:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 27:
			func_169(uParam1, "Josh1", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 28:
			func_169(uParam1, "Josh2", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 29:
			func_169(uParam1, "Josh3", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 30:
			func_169(uParam1, "Josh4", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 31:
			func_169(uParam1, "Maude1", func_171(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 32:
			func_169(uParam1, "Minute1", func_171(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 33:
			func_169(uParam1, "Minute2", func_171(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 34:
			func_169(uParam1, "Minute3", func_171(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 35:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 36:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 37:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 38:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 39:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 40:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 41:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 42:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 43:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 44:
			func_169(uParam1, "Omega1", func_171(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 45:
			func_169(uParam1, "Omega2", func_171(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 46:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 47:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 48:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 49:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 50:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 51:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 52:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 54:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 55:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 56:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 53:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 57:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 58:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 59:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 60:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 61:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 62:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_169(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_171(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_172(iParam0) };
	if (unk_0xCA042B6957743895(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_172(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_173()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_174()
{
	if (func_177() && !func_173())
	{
		return 1;
	}
	if (func_176() && func_175())
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return Global_113104 > 0;
}

int func_176()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_178()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_174())
	{
		return 1;
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_179()
{
}

int func_180()
{
	int iVar0;
	
	if (func_181(26, 1))
	{
		iVar0++;
	}
	if (func_181(26, 2))
	{
		iVar0++;
	}
	if (func_181(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_181(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

void func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_183();
}

void func_183()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_184(int iParam0)
{
	Global_113375 = iParam0;
}

int func_185(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_56();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_167(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam1))
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_221(func_14()) == 4 || func_221(func_14()) == 5)
			{
				return 0;
			}
		}
		if (func_16(func_14()))
		{
			if (!func_220(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_218())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_209(4))
		{
			return 0;
		}
		if (!func_149(5))
		{
			return 0;
		}
		if (func_181(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_181(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_222(30) && !func_181(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_16(func_14()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_208(bVar4))
				{
					if (func_186(iVar2))
					{
						if (!func_134(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_14() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_186(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_187(bVar0);
}

int func_187(bool bParam0)
{
	return func_188(bParam0, 1);
}

int func_188(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_208(bParam0))
	{
		return 0;
	}
	func_189(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_189(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_190(func_201(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_190(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(bParam0, bParam1))
	{
		bVar0 = func_199(bParam1);
		iVar1 = func_197(bParam0);
		iVar2 = (func_197(bParam0) - func_197(bParam1));
		iVar3 = (func_199(bParam0) - func_199(bParam1));
		iVar4 = (func_196(bParam0) - func_196(bParam1));
		iVar5 = (func_195(bParam0) - func_195(bParam1));
		iVar6 = (func_194(bParam0) - func_194(bParam1));
		iVar7 = (func_193(bParam0) - func_193(bParam1));
	}
	else
	{
		bVar0 = func_199(bParam0);
		iVar1 = func_197(bParam1);
		iVar2 = (func_197(bParam1) - func_197(bParam0));
		iVar3 = (func_199(bParam1) - func_199(bParam0));
		iVar4 = (func_196(bParam1) - func_196(bParam0));
		iVar5 = (func_195(bParam1) - func_195(bParam0));
		iVar6 = (func_194(bParam1) - func_194(bParam0));
		iVar7 = (func_193(bParam1) - func_193(bParam0));
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
		iVar4 = (iVar4 + func_192(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_191(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_191(bool bParam0, float fParam1, float fParam2)
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

int func_192(int iParam0, int iParam1)
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

int func_193(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_194(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_195(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_196(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_197(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_198(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_199(bool bParam0)
{
	return (bParam0 && 15);
}

int func_200(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_208(bParam1) || !func_208(bParam0))
	{
		return 1;
	}
	iVar0 = func_197(bParam0);
	iVar1 = func_197(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(bParam0);
	iVar1 = func_199(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(bParam0);
	iVar1 = func_196(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(bParam0);
	iVar1 = func_195(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(bParam0);
	iVar1 = func_194(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(bParam0);
	iVar1 = func_193(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_201()
{
	var uVar0;
	
	func_207(&uVar0, unk_0x494E97C2EF27C470());
	func_206(&uVar0, unk_0x13D2B8ADD79640F2());
	func_205(&uVar0, unk_0x25223CA6B4D20B7F());
	func_204(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_203(&uVar0, unk_0xBBC72712E80257A1());
	func_202(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_202(var uParam0, int iParam1)
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

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_204(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_197(*uParam0);
	if (bParam1 < 1 || bParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_205(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_206(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_207(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_208(bool bParam0)
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
	iVar0 = func_193(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_194(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_195(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_197(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_199(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_196(bParam0);
	if (iVar5 < 1 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_14();
				if (!func_16(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_217()) || Global_112433) || Global_31962) || func_216()) || func_22(8, -1)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_217()) || Global_31962) || func_216()) || func_22(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_217()) || Global_112433) || Global_31962) || func_216()) || func_22(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_217()) || Global_112433) || Global_31962) || func_216()) || func_22(8, -1)) || func_215()) || func_214()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_22(8, -1)) || func_212()) || func_211()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_22(8, -1) || func_215()) || func_214()) || func_211()) || func_210())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_217()) || Global_31962) || func_216()) || func_22(8, -1)) || func_214()) || func_213()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_217()) || func_214()) || Global_112433) || Global_31962) || func_216()) || Global_44238) || func_22(8, -1)) || func_213()) || func_211()) || func_212()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_217()) || Global_112433) || Global_31962) || func_216()) || func_22(8, -1)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_210()
{
	return Global_100480.f_1;
}

int func_211()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_212()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return Global_100493.f_376 > 0;
}

bool func_215()
{
	return Global_100493.f_375 > 0;
}

var func_216()
{
	return Global_1575058;
}

int func_217()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_218()
{
	func_13();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(bool bParam0)
{
	return func_200(func_201(), bParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_14();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_221(int iParam0)
{
	if (!func_16(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_223()
{
	bool bVar0;
	
	if (Global_32110)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(bVar0, false, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()
{
	bool bVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &bVar0, -1);
				unk_0x933D6A9EEC1BACD0(&bVar0, 2);
				unk_0x933D6A9EEC1BACD0(&bVar0, 4);
				unk_0x933D6A9EEC1BACD0(&bVar0, 6);
				unk_0x933D6A9EEC1BACD0(&Global_25, 2);
				unk_0x933D6A9EEC1BACD0(&Global_25, 4);
				unk_0x933D6A9EEC1BACD0(&Global_25, 6);
				unk_0xB3271D7AB655B441(joaat("sp_unlock_exclus_content"), bVar0, true);
				if (unk_0x5AA3BEFA29F03AD4())
				{
					bVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&bVar0, false);
					unk_0xDAC073C7901F9E15(bVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (BitTest(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_225(bool bParam0, struct<3> Param1, bool bParam2)
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

void func_226()
{
	func_99(&uLocal_276, 0, 0);
	if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0x4C241E39B23DF959(bLocal_51, false))
		{
			unk_0x18EB48CFC41F2EA0(bLocal_51, 0f);
		}
		unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_263 != 3)
	{
		func_229(26);
	}
	else
	{
		func_229(8);
	}
	if (bLocal_263 == 1)
	{
		unk_0x0027501B9F3B407E(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	unk_0x31D16B74C6E29D66(iLocal_271, false);
	unk_0xC12321827687FE4D(Local_56 - Vector(20f, 20f, 20f), Local_56 + Vector(20f, 20f, 20f), true, true);
	if (unk_0x4C241E39B23DF959(bLocal_51, false))
	{
		unk_0x31B927BBC44156CD(bLocal_51, true);
		if (unk_0x1C8A4C2C19E68EEC(bLocal_51))
		{
			unk_0x54833611C17ABDEA(bLocal_51);
		}
	}
	if (bLocal_263 == 2)
	{
		unk_0xF1160ACCF98A3FC8(true, "RE_BikeThief2");
	}
	func_71(&bLocal_81);
	func_71(&bLocal_79);
	func_72(&uLocal_288);
	func_71(&bLocal_80);
	func_78(0);
	func_228(&uLocal_82, 0);
	func_228(&uLocal_82, 1);
	func_228(&uLocal_82, 2);
	if ((func_64(bLocal_50) && func_64(bLocal_51)) && unk_0xA3EE4A07279BB9DB(bLocal_50, bLocal_51, false))
	{
		unk_0x480142959D337D00(bLocal_50, bLocal_51, fLocal_62, 786485);
		unk_0x971D38760FBC02EF(bLocal_50, true);
	}
	func_93(&bLocal_49, 1, 0, 1);
	func_93(&bLocal_50, 1, 0, 1);
	func_227(&bLocal_51);
	if (func_64(bLocal_52))
	{
		unk_0xACFB2463CC22BED2(bLocal_52);
		func_227(&bLocal_52);
	}
	unk_0xE532F5D78798DAAB(joaat("g_m_y_strpunk_01"));
	unk_0xE532F5D78798DAAB(joaat("a_m_y_beachvesp_01"));
	unk_0xE532F5D78798DAAB(joaat("scorcher"));
	unk_0xE532F5D78798DAAB(joaat("bati"));
	unk_0xF66A602F829E2A06(bLocal_264);
	unk_0xF66A602F829E2A06(bLocal_265);
	unk_0xF66A602F829E2A06(bLocal_267);
	unk_0xF66A602F829E2A06(bLocal_268);
	unk_0xF66A602F829E2A06(bLocal_269);
	unk_0xF66A602F829E2A06(bLocal_270);
	unk_0xC5F0A8EBD3F361CE(0);
	unk_0x1090044AD1DA76FA();
}

void func_227(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		unk_0x5F9532F3B5CC2551(*bParam0, false);
		if (unk_0x0A7B270912999B3C(*bParam0) && unk_0xDDE6DF5AE89981D2(*bParam0, true))
		{
			unk_0x629BFA74418D6239(bParam0);
		}
	}
}

void func_228(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_229(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_240())
	{
		func_233(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_232(30000);
		StringCopy(&cVar0, func_231(Global_113375, 1), 64);
		if (func_55(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_113372, (unk_0x9CD27B0045628463() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_113382, false);
	}
	func_230(&Global_32019);
	Global_113376 = 0;
	func_184(-1);
}

void func_230(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_232(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_201();
	func_237(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_193(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_197(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_199(*uParam0);
	bVar2 = func_196(*uParam0);
	bVar3 = func_195(*uParam0);
	bVar4 = func_194(*uParam0);
	bVar5 = func_193(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
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
	bVar5 = (bVar5 + iParam1);
	while (bVar5 >= 60)
	{
		iParam2++;
		bVar5 = (bVar5 - 60);
	}
	bVar4 = (bVar4 + iParam2);
	while (bVar4 >= 60)
	{
		iParam3++;
		bVar4 = (bVar4 - 60);
	}
	bVar3 = (bVar3 + iParam3);
	while (bVar3 >= 24)
	{
		iParam4++;
		bVar3 = (bVar3 - 24);
	}
	bVar2 = (bVar2 + iParam4);
	iVar6 = func_192(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_238(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_207(uParam0, bParam1);
	func_206(uParam0, bParam2);
	func_205(uParam0, bParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, bParam4);
	func_202(uParam0, iParam6);
}

int func_239(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_240()
{
	if ((Global_113375 == func_56() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

