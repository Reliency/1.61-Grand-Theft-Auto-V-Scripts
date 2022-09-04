#region Local Var
	bool bLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	bool bLocal_63 = 0;
	struct<3> Local_64[3];
	float fLocal_65[3] = { 0f, 0f, 0f };
	struct<3> Local_66[7];
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	bLocal_72 = joaat("feltzer2");
	iLocal_75 = 1;
	Local_83 = { 0f, 0f, 0f };
	Local_84 = { 1f, 1f, 1f };
	Local_85 = { 0f, 0f, 0f };
	Local_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0x6F2135B6129620C1(true);
	Local_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(83))
	{
		func_217(0);
	}
	func_214();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!func_213(0, 8))
			{
				func_217(0);
			}
			if (!func_212(Local_43.f_0))
			{
				func_217(0);
			}
			break;
		
		case 3:
			if (!func_213(0, 7))
			{
				func_217(0);
			}
			break;
		
		case 0:
			func_217(0);
			break;
	}
	func_206();
	if (!func_182())
	{
		func_217(0);
	}
	func_176();
	while (true)
	{
		func_173(&uLocal_90);
		if (func_182())
		{
			if (unk_0xC5042CC6F5E3D450())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					
					case 1:
						func_164();
						func_133();
						break;
					
					case 2:
						func_66();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_217(0);
			}
		}
		else
		{
			func_217(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_53)
	{
		func_11();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_10(-1);
	func_9(0);
	func_8(Local_44);
	func_7();
	Global_1574510 = 1;
	Global_1574510.f_1 = Local_43.f_0;
	StringCopy(&(Global_1574510.f_2), func_6(), 24);
	StringCopy(&(Global_1574510.f_8), func_3(Local_43.f_0), 32);
	Global_1574510.f_16 = { Local_44 };
	Global_1575061 = 1;
	func_217(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xCCA1072C29D096C2())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xF6201B4DAF662A9D())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (func_5())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (func_4())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x48AF36444B965238())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

bool func_4()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

bool func_5()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

char* func_6()
{
	char* sVar0;
	
	if (unk_0xCCA1072C29D096C2())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xF6201B4DAF662A9D())
	{
		sVar0 = "2535285330962926";
	}
	else if (func_5())
	{
		sVar0 = "SPRACE";
	}
	else if (func_4())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x48AF36444B965238())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_7()
{
	unk_0x933D6A9EEC1BACD0(&Global_1574589, false);
}

void func_8(struct<3> Param0)
{
	Global_1574589.f_6 = { Param0 };
}

void func_9(int iParam0)
{
	Global_1574589.f_2 = iParam0;
}

void func_10(int iParam0)
{
	Global_1574589.f_1 = iParam0;
}

void func_11()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	Local_43.f_2 = -1;
	if (func_65(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
		{
			unk_0x560A43136EB58105(unk_0xD80958FC74E988A6(), false);
		}
	}
	while (!func_59())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_43.f_1 != 3)
	{
		func_18(func_53(), 1, Local_43.f_3);
		iVar0 = unk_0x9CD27B0045628463() + 1500;
		bVar1 = unk_0xB6997A7EB3F5C8C0();
		if (func_16(bVar1))
		{
			while (!func_14(bVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x9CD27B0045628463() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bVar2 = unk_0xA5EDC40EF369B48D();
		if (unk_0x5E9564D8246B909A(bVar2))
		{
			unk_0x8D32347D6D4C40A2(bVar2, false, 0);
		}
	}
	func_12();
}

void func_12()
{
	if (!func_13(0))
	{
		unk_0x6EB5F71AA68F2E8E("mission_Race");
		while (!unk_0xE6CC9F3BA0FB9EF1("mission_Race"))
		{
			unk_0x6EB5F71AA68F2E8E("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_43, 6, 51000);
	}
	unk_0xC90D2DCACD56184C("mission_Race");
	func_217(1);
}

int func_13(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_14(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_15(bParam0);
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

void func_15(bool bParam0)
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

int func_16(bool bParam0)
{
	if (func_17(bParam0))
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

int func_17(bool bParam0)
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

int func_18(int iParam0, int iParam1, bool bParam2)
{
	if (func_52(iParam0) == 3)
	{
		return 0;
	}
	if (func_52(iParam0) == 4)
	{
		return 0;
	}
	return func_19(func_52(iParam0), 0, iParam1, bParam2, 0);
}

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_51();
	if (bParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_50(99, 1);
					func_49(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_49(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_49(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_33(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_30(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_30(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_49(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_49(joaat("sp2_money_spent_property"), bParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_30(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_49(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_49(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_29(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_50(95, bParam3);
					break;
				
				case 1:
					func_50(97, bParam3);
					break;
				
				case 2:
					func_50(96, bParam3);
					break;
			}
			func_50(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_22(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_22(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + bParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && bParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + bParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_49(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_49(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_49(joaat("sp2_total_cash_earned"), bParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - bParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - bParam3);
			if (bParam4)
			{
				bVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (bVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = bParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_21(iParam0);
	if (Global_43052 == 15)
	{
		func_20(0);
	}
	return 1;
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_21(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), bVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), bVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), bVar0, true);
			break;
	}
}

void func_22(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_28(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_28(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_28(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_28(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_25(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_25(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_25(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_25(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_25(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_25(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_24() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_24() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_23(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_23(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_24()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_25(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1574918;
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_27();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_29(int iParam0)
{
	func_50(93, iParam0);
	func_50(29, iParam0);
	func_50(30, iParam0);
}

int func_30(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_32(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_32(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_32(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_32(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_31(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_31(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_31(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_31(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_31(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_31(8277, -1, 0);
		if (iVar11 == 0 || bVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_24() /*5567*/].f_681.f_10, iParam0);
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_26(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_32(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_33(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), bVar1, true);
		func_48(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_47(14) && !func_46(iParam0))
	{
		return 0;
	}
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_45(&Global_4541529))
	{
		if (func_43(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4541528 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_47(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_48(int iParam0, bool bParam1)
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

void func_49(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_50(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_58896[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_58896[iParam0 /*7*/].f_1, bVar0, true);
	}
}

void func_51()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_52(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_53()
{
	func_54();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_54()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_57(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_56(unk_0xD80958FC74E988A6());
			if (func_55(iVar0) && (!func_47(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_55(Global_113386.f_2363.f_539.f_4321))
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_58(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_58(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_59()
{
	int iVar0;
	
	iVar0 = func_60(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_64(0))
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
		if (!func_62(iParam2))
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
			func_61(uParam0, iParam4);
		}
	}
	return 2;
}

void func_61(var uParam0, int iParam1)
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

bool func_62(int iParam0)
{
	return func_63(iParam0, Global_43052);
}

int func_63(int iParam0, int iParam1)
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

int func_64(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	bool bVar0;
	
	switch (iLocal_49)
	{
		case 0:
			if (func_131(0, -1, 0))
			{
				unk_0x8DFCED7A656F8802(true);
				func_123();
				unk_0x19F21E63AE6EAE4E(false);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (func_79())
			{
				iLocal_49 = 2;
			}
			break;
		
		case 2:
			bVar0 = unk_0xA5EDC40EF369B48D();
			unk_0x8EEDA153AD141BA4(bVar0, false);
			unk_0x8D32347D6D4C40A2(bVar0, true, 0);
			func_70(0, 1, 1, 0, 0, 0, 0);
			func_67(1, -1);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				unk_0x19F21E63AE6EAE4E(true);
				iLocal_42 = 1;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x450930E616475D0D(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_68(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_68(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_69(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	bVar1 = unk_0xD24D37CC275948CC(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == bVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = bVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_70(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_78(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_77())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_76(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_78(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_76(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_74(unk_0x4F8644AF03D0E0D6())) && !func_72(unk_0x4F8644AF03D0E0D6(), 0)) && !func_71()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_74(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_71()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_72(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_74(bool bParam0)
{
	if (func_72(bParam0, 0))
	{
		return 1;
	}
	if (func_75())
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

bool func_75()
{
	return BitTest(Global_2621446, 3);
}

int func_76(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

int func_77()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
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

int func_79()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_122(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xEDE476E5EE29EDB1(2, 201);
	unk_0xEDE476E5EE29EDB1(2, 202);
	unk_0xEDE476E5EE29EDB1(2, 188);
	unk_0xEDE476E5EE29EDB1(2, 187);
	if (iLocal_51 != 0)
	{
		if (unk_0x83666F9FB8FEBD4B() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0x580417101DDB492F(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x580417101DDB492F(2, 187));
	bVar6 = unk_0x580417101DDB492F(2, 201);
	bVar7 = unk_0x580417101DDB492F(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				unk_0xC1B1E9A034A63A62(false);
				iLocal_51 = 1;
			}
			func_121(iLocal_50, 1, 1);
		}
	}
	func_80(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_80(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	char cVar73[16];
	bool bVar74;
	bool bVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_118(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_116(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_114(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_110(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_109(29), 64);
					StringCopy(&cVar62, func_106(29, 1), 64);
					if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_105(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						unk_0xE7FFAE5EBF23D890(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					bVar1 = Global_23150.f_8774;
					bVar2 = Global_23150.f_8775;
					bVar3 = Global_23150.f_8776;
					bVar4 = Global_23150.f_8777;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				func_105(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) != 0)
				{
					func_104();
					unk_0x25FBB336DF1804CB(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x03B504CF259931BC(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0xE7DCB5B874BCD96E(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x6C188BE134E074AA(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCD015E5BB0D96A57((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_104();
					func_102((((Global_23147 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_104();
						func_102((((Global_23147 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				bVar1 = Global_23150.f_8784;
				bVar2 = Global_23150.f_8785;
				bVar3 = Global_23150.f_8786;
				bVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					bVar1 = Global_23150.f_8789;
					bVar2 = Global_23150.f_8790;
					bVar3 = Global_23150.f_8791;
					bVar4 = Global_23150.f_8792;
				}
				else
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 204;
				}
				func_105(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				Var38 = { unk_0x35736EE65BD00C11("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					bVar1 = false;
					bVar2 = false;
					bVar3 = false;
					bVar4 = 255;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(true, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_116(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_105(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_101(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_116(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_23150.f_5159, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_5159), func_106(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_116(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				unk_0x521FB041D93DD0E4(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar40, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &bVar1, &bVar2, &bVar3, &bVar4);
				func_105(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
				if (Global_23150.f_8798)
				{
					bVar1 = Global_23150.f_8794;
					bVar2 = Global_23150.f_8795;
					bVar3 = Global_23150.f_8796;
					bVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &bVar1, &bVar2, &bVar3, &bVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, bVar1, bVar2, bVar3, bVar4, false, 0);
				func_101(fVar40);
				unk_0x25FBB336DF1804CB(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x6C188BE134E074AA(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_116(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_4539885.f_67, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_109(Global_4539885.f_67), func_106(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_95(iVar58, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xB8A850F20A067EB6(76, 84);
			unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					bVar68 = 255;
					bVar69 = 255;
					bVar70 = 255;
					bVar71 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x7C9C91AB74A0360F(Global_23150.f_8799, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					else
					{
						unk_0x7C9C91AB74A0360F(true, &bVar68, &bVar69, &bVar70, &bVar71);
					}
					unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, bVar68, bVar69, bVar70, bVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											unk_0x54CE8AC98E120CAB(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x85F061DA64ED2F67(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_116(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_116(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_116(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_116(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_116(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x25FBB336DF1804CB(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC63CD5D2920ACBE7(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6C188BE134E074AA(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x03B504CF259931BC(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_116(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_116(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[(iVar22 + iVar28)]), func_106(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[(iVar22 + iVar28)]), func_106(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0xCD015E5BB0D96A57(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCD015E5BB0D96A57((fVar34 + fVar40), fVar35, 0);
											if (func_91() && unk_0x2C83A9DA6BFFC4F9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_93(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													bVar74 = 0f;
													bVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													unk_0x07C837F9A01C34C9(0f, (0.35f * 0.7f));
													unk_0xBE6B23FFA53FB442(255, 255, 255, 150);
													unk_0x3A618A217E5154F0((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar74), unk_0xF34EE736CF047844(bVar75), false);
													unk_0x25FBB336DF1804CB(&cVar73);
													unk_0x03B504CF259931BC((Global_23150.f_6129 + iVar30));
													unk_0xCD015E5BB0D96A57((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_116(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_116(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[(iVar22 + iVar14)]), func_106(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0x03B504CF259931BC(Global_23150.f_4309[iVar20]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_116(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_116(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_116(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_116(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_90((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x54CE8AC98E120CAB("NUMBER");
										unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = unk_0x85F061DA64ED2F67(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_116(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_116(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_116(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_116(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									func_93(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_89((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_116(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_116(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_116(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
											if (func_116(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_116(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_116(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_23150.f_4824[iVar22], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
												unk_0xE7FFAE5EBF23D890(func_109(Global_23150.f_4824[iVar22]), func_106(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_88(Global_23150.f_4824[iVar22])), (fVar37 * func_88(Global_23150.f_4824[iVar22])), 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_116(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = unk_0x9CD27B0045628463();
	unk_0x55598D21339CB998(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_82(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0x6806C51AD12B83B8(10);
	}
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(8);
	if (bParam0)
	{
		func_81(1);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_81(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_86(0))
		{
			func_83(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_83(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
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
	if (!func_77())
	{
		Global_20266.f_1 = 3;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0))
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

bool func_85()
{
	return BitTest(Global_1958711, 5);
}

int func_86(int iParam0)
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

bool func_87()
{
	return BitTest(Global_1958711, 19);
}

float func_88(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_89(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0xE7DCB5B874BCD96E(bParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_90(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

bool func_91()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

void func_92(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[0], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	else
	{
		unk_0x7C9C91AB74A0360F(Global_23150.f_8801[1], &bVar0, &bVar1, &bVar2, &uVar3);
	}
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
}

void func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_94(Global_23150.f_6402[iParam4], &bVar0, &bVar1, &bVar2);
			if ((bVar0 < 20 && bVar1 < 20) && bVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
				}
			}
			else if ((bVar0 > 230 && bVar1 > 230) && bVar2 > 230)
			{
				if (bParam0)
				{
					bVar0 = false;
					bVar1 = false;
					bVar2 = false;
				}
			}
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7C9C91AB74A0360F(14, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
			else
			{
				unk_0x7C9C91AB74A0360F(12, &bVar0, &bVar1, &bVar2, &bVar3);
				unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
		else
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(false, false, false, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
			unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	else
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0x4E096588B13FFECA(1);
	if (bParam5)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(4);
	}
	else if (bParam6)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(6);
	}
	else
	{
		unk_0x66E0276CC5F6B9DA(0);
	}
	unk_0x63145D9C883A1A70(0f, 1f);
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_95(int* iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_118(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_72(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0 || unk_0x5FCF4D7069B09026())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[bVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_23150.f_5417[bVar1], true), 64);
				}
				else if (Global_23150.f_5430[bVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[bVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_23150.f_5430[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_23150.f_5472 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			bVar1 = false;
			while (bVar1 < Global_23150.f_5160)
			{
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_5355[bVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(bVar1);
					func_97(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_97(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_96(&(Global_23150.f_5355[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_23150.f_5404[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(bVar3, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(bVar3);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_23150.f_5417[bVar1] != 363 && BitTest(Global_23150.f_5443, bVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_23150.f_5417[bVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(363);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				bVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_4539885.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_23150.f_5160);
				func_97(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_96(&(Global_4539885.f_16));
				}
				else
				{
					bVar4 = Global_23150.f_5404[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					unk_0x80338406F3475E55(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bVar4, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bVar4);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(false);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0xC3D0841A0CC546A6(true);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(false);
			}
			unk_0xC6796A8FFA375E53();
			Global_23150.f_5161 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(bVar1);
					unk_0x80338406F3475E55(&(Global_23150.f_5355[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(bParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(bParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			bVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(bVar1);
				unk_0x80338406F3475E55(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(bParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(bParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x450930E616475D0D(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_23150.f_5446)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_96(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_97(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

int func_98()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_99())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_99()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	unk_0x7C9C91AB74A0360F(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		
		case 54:
			*bParam5 = 100;
			break;
		
		case 62:
			*bParam5 = 100;
			break;
		
		case 55:
			unk_0x7C9C91AB74A0360F(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_101(float fParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xA50ABC31E3CDFAFF(2);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0x03B504CF259931BC(bParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		if (unk_0xD24D37CC275948CC(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_104();
	unk_0x54CE8AC98E120CAB(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_104()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	unk_0x7C9C91AB74A0360F(true, &bVar0, &bVar1, &bVar2, &bVar3);
	if (Global_23150.f_8783)
	{
		bVar0 = Global_23150.f_8779;
		bVar1 = Global_23150.f_8780;
		bVar2 = Global_23150.f_8781;
		bVar3 = Global_23150.f_8782;
	}
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xBE6B23FFA53FB442(bVar0, bVar1, bVar2, bVar3);
	unk_0x63145D9C883A1A70((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, bParam4, bParam5, bParam6, bParam7, false);
}

var func_106(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_108(unk_0x4F8644AF03D0E0D6()) };
			if (unk_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_107(&uVar1);
			}
		}
		else
		{
			return func_107(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_107(var uParam0)
{
	return uParam0;
}

struct<13> func_108(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

char* func_109(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_108(unk_0x4F8644AF03D0E0D6()) };
			unk_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), bParam1, 24);
	if (!unk_0xCA042B6957743895(bParam1) && !unk_0xAC09CA973C564252(bParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_113(Global_23150.f_5609, 1);
	}
	else
	{
		func_113(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_112(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_116(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_111(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_111(bool bParam0)
{
	if (!unk_0xAC09CA973C564252(bParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_112(bool bParam0)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		if (unk_0xD24D37CC275948CC(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_93(0, 1, 0, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(bParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_113(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bParam0) / 32f));
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_23150.f_6406[bVar0]), (bParam0 - bVar0 * 32));
	}
}

void func_114(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x888D57E407E63624(iParam1, iParam2);
		return;
	}
	unk_0x873C9F3104101DD3(iParam1, iParam2);
	bVar0 = unk_0xBBDA792448DB5A89(*iParam1);
	bVar1 = unk_0xBBDA792448DB5A89(*iParam2);
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (func_115(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = unk_0xF2DB717A73826179((bVar1 * fVar2));
		*iParam2 = unk_0xF2DB717A73826179(bVar1);
		return;
	}
	*fParam3 = ((bVar0 / bVar1) / fVar2);
	*iParam1 = unk_0xF2DB717A73826179((bVar0 / *fParam3));
	*iParam2 = unk_0xF2DB717A73826179((bVar1 / *fParam3));
}

bool func_115(bool bParam0, bool bParam1)
{
	return (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1)) > 3.5f;
}

int func_116(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar1, func_106(iParam0, bParam1), 64);
	if (unk_0xD24D37CC275948CC(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_114(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x35736EE65BD00C11(&cVar0, &cVar1) };
		fVar6 = (func_117(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x30CF4BDA4FCB1905() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_117(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_118(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_120(8, -1) && func_119() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_78579) || Global_23150.f_8807) || unk_0xE18B138FABC53103()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_119()
{
	return Global_1574991;
}

var func_120(int iParam0, int iParam1)
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

void func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_122(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xEC3C9B8D5327B563(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x11E65974A982637C(2, 221) * 127f));
		}
	}
}

void func_123()
{
	func_130(0, 0);
	func_129(1, 0, 0, 0, 0);
	func_128(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		func_127("SEA_MENU");
	}
	else
	{
		func_127("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0, 0);
	func_126(201, "ITEM_SELECT", -1);
	func_126(202, "ITEM_EXIT", -1);
	func_125(11, "ITEM_SCROLL", -1);
	func_124(0);
	func_121(0, 1, 1);
	iLocal_50 = 0;
}

void func_124(int iParam0)
{
	Global_23150.f_6129 = iParam0;
}

void func_125(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x80C2FD58D720C801(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_126(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_127(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_130(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

bool func_131(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_69(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xDFA2EF8E04127DD5("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x0145F696AAAAD2E4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_132(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_132(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_133()
{
	int iVar0;
	
	if (func_163())
	{
		if (func_146())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_144(iVar0);
			if (func_65(bLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (unk_0x1F0B79228E461EC9(bLocal_56[iVar0], bLocal_73, sLocal_74[iVar0], 3))
					{
						unk_0x97FF36A1D40EA00A(bLocal_56[iVar0], bLocal_73, sLocal_74[iVar0], -8f);
					}
					func_135(iVar0);
				}
			}
			unk_0xEDE476E5EE29EDB1(0, 51);
			if (unk_0x50F940259D3841E6(0, 51))
			{
				iLocal_76 = 1;
				unk_0x8DFCED7A656F8802(true);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			unk_0xF46C581C61718916(false);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_134();
		if (!iLocal_46)
		{
			unk_0xF46C581C61718916(false);
			iLocal_46 = 1;
		}
	}
}

void func_134()
{
	if (iLocal_45 && unk_0x9CD27B0045628463() > iLocal_48)
	{
		unk_0x8DFCED7A656F8802(true);
		iLocal_45 = 0;
	}
}

void func_135(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bLocal_56[iParam0], false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		switch (iLocal_77)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_56[iParam0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			
			case 1:
				unk_0xE8854A4326B9E12B(&iVar0);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 0, 2);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
				unk_0x39E72BC99E6360CB(iVar0);
				unk_0x5ABA3986D90D8A3B(bLocal_56[iParam0], iVar0);
				unk_0x3841422E9C488D8C(&iVar0);
				iLocal_77 = 2;
				break;
			
			case 2:
				if (unk_0x77F1BEB8863288D5(bLocal_56[iParam0], 242628503) != 1 || unk_0xD71649DB0A545AA3(bLocal_56[iParam0], unk_0xD80958FC74E988A6(), 20f))
				{
					unk_0x5AD23D40115353AC(bLocal_56[iParam0], unk_0xD80958FC74E988A6(), -1);
					if (!iLocal_79)
					{
						func_142(bLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_142(bLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x9072C8B49907BFAD(bLocal_56[iParam0]))
				{
					func_140(&bLocal_80);
					unk_0xEA47FE3719165B94(bLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, false, false, false, false);
					iLocal_77 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_56[iParam0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (func_136(&bLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (func_136(&bLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_136(bool bParam0)
{
	if (func_139(bParam0))
	{
		if (func_138(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_137(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_137(bool bParam0)
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

bool func_138(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_139(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_140(bool bParam0)
{
	func_141(bParam0, 0f);
}

void func_141(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_137(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_142(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x3523634255FC3318(bParam0, bParam1, bParam2, func_143(iParam3), false);
}

int func_143(int iParam0)
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

void func_144(int iParam0)
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !func_145())
	{
		if (func_65(bLocal_56[iParam0]))
		{
			if (iLocal_46 && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 20f)
			{
				unk_0x189E955A8313E298(bLocal_56[iParam0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_145()
{
	if (unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_162())
		{
			return 0;
		}
		if (func_161(func_53()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_158("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_158("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = unk_0x9CD27B0045628463() + 1000;
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			func_157(&bLocal_0);
			bLocal_0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (!func_152())
			{
				iLocal_45 = 1;
				iLocal_48 = unk_0x9CD27B0045628463() + 1000;
				return 0;
			}
			else if ((unk_0xEEF059FAD016D209(bLocal_0) <= 200 || unk_0x28D3FED7190D3A0B(bLocal_0)) || func_151())
			{
				func_150("RACE_VehDmg");
				iLocal_45 = 1;
				iLocal_48 = unk_0x9CD27B0045628463() + 1000;
				return 0;
			}
			else if (unk_0xBB40DD2270B65366(bLocal_0, -1, false) != unk_0xD80958FC74E988A6())
			{
				func_147();
				return 0;
			}
			else
			{
				if (func_86(0) || unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
				{
					func_134();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_158("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 2:
						func_158("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 3:
						func_150("SEA_PLAY");
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		else
		{
			func_157(&bLocal_0);
			func_147();
			return 0;
		}
	}
	return 0;
}

void func_147()
{
	bool bVar0;
	
	if (Local_43.f_1 == 3)
	{
		if (func_16(bLocal_57))
		{
			bVar0 = "SEA_NA_VEH";
		}
		else
		{
			bVar0 = "SEA_NA_VEH2";
		}
		if (!func_149(bVar0))
		{
			func_148(bVar0);
			iLocal_45 = 1;
			iLocal_48 = unk_0x9CD27B0045628463() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!func_149("STREET_NA_BIKE"))
		{
			func_148("STREET_NA_BIKE");
			iLocal_45 = 1;
			iLocal_48 = unk_0x9CD27B0045628463() + 1000;
		}
	}
	else if (!func_149("STREET_NA_CAR"))
	{
		func_148("STREET_NA_CAR");
		iLocal_45 = 1;
		iLocal_48 = unk_0x9CD27B0045628463() + 1000;
	}
}

void func_148(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_149(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_150(bool bParam0)
{
	if (!func_149(bParam0))
	{
		func_148(bParam0);
	}
}

int func_151()
{
	bool bVar0;
	
	bVar0 = unk_0x9F47B058362C84B5(bLocal_0);
	if (unk_0xB50C0B0CEDC6CE84(bVar0))
	{
		if (unk_0xBA291848A0815CA9(bLocal_0, 6, false) || unk_0xBA291848A0815CA9(bLocal_0, 7, false))
		{
			return 1;
		}
	}
	else if (unk_0x7F6DB52EEFC96DF8(bVar0))
	{
		if (((unk_0xBA291848A0815CA9(bLocal_0, false, false) || unk_0xBA291848A0815CA9(bLocal_0, true, false)) || unk_0xBA291848A0815CA9(bLocal_0, 4, false)) || unk_0xBA291848A0815CA9(bLocal_0, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	bool bVar1;
	
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_156();
			if (iVar0 == 1)
			{
				func_150("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_150("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_154();
			if (iVar0 == 1)
			{
				func_150("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_150("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_153())
			{
				if (func_16(bLocal_57))
				{
					bVar1 = "SEA_NA_VEH";
				}
				else
				{
					bVar1 = "SEA_NA_VEH2";
				}
				func_150(bVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_153()
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(bLocal_0))
		{
			bVar0 = unk_0x9F47B058362C84B5(bLocal_0);
			if (bVar0 == joaat("seashark") || bVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154()
{
	bool bVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(bLocal_0))
		{
			bVar0 = unk_0x9F47B058362C84B5(bLocal_0);
			if (func_155(bVar0))
			{
				return 1;
			}
			if ((((((((((bVar0 == joaat("police4") || bVar0 == joaat("policeold1")) || bVar0 == joaat("policeold2")) || bVar0 == joaat("fbi")) || bVar0 == joaat("fbi2")) || bVar0 == joaat("lguard")) || bVar0 == joaat("sheriff")) || bVar0 == joaat("sheriff2")) || bVar0 == joaat("pranger")) || bVar0 == joaat("ambulance")) || bVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0xB50C0B0CEDC6CE84(bVar0) || unk_0x45A9187928F4B9E3(bVar0)) || unk_0xDCE4334788AF94EA(bVar0)) || unk_0xA0948AB42D7BA0DE(bVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (bVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_155(bool bParam0)
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

int func_156()
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(bLocal_0))
		{
			bVar0 = unk_0x9F47B058362C84B5(bLocal_0);
			if (bVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0xB50C0B0CEDC6CE84(bVar0) && !unk_0xBF94DD42F63BDED2(bVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_157(bool bParam0)
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

void func_158(bool bParam0, bool bParam1)
{
	if (!func_160(bParam0, bParam1))
	{
		func_159(bParam0, bParam1);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_160(bool bParam0, bool bParam1)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	return unk_0x10BDDBFC529428DD(0);
}

int func_161(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_162()
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if (func_17(bVar0))
			{
				if (unk_0x886E37EC497200B6(bVar0))
				{
					if (Local_43.f_1 == 3 && unk_0xCFB0A0D8EDD145A3(bVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_163()
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_44, true) < IntToFloat(iVar0) && unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_169(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_166())
			{
				if (!unk_0x7239B21A38F536BA(bLocal_57))
				{
					if (unk_0x98A4EB5D89A0C952(bLocal_71) && unk_0x98A4EB5D89A0C952(bLocal_71))
					{
						bLocal_57 = unk_0xAF35D0D2583051B0(bLocal_71, Local_59, bLocal_60, true, true, false);
						if (unk_0x3E8349C08E4B82E4(true) && unk_0xB8EB95E5B4E56978())
						{
							bLocal_58 = unk_0x9B62392B474F44A0(bLocal_57, true);
							unk_0xC429DCEEB339E129(bLocal_58, bLocal_57, 1, 99999999);
							unk_0x9F8AA94D6D97DBF4(bLocal_58, true);
							unk_0x971D38760FBC02EF(bLocal_58, true);
						}
						unk_0x49733E92263139D1(bLocal_57, 5f);
						unk_0x2497C4717C8B881E(bLocal_57, true, true, false);
						unk_0x3B988190C0AA6C0B(bLocal_57, true);
						unk_0xBB6F1CAEC68B0BCE(bLocal_57, true);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(bLocal_57, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(bLocal_57, false);
						unk_0xE532F5D78798DAAB(bLocal_71);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x7239B21A38F536BA(bLocal_61))
				{
					if (unk_0x98A4EB5D89A0C952(bLocal_72))
					{
						bLocal_61 = unk_0xAF35D0D2583051B0(bLocal_72, Local_62, bLocal_63, true, true, false);
						unk_0x2497C4717C8B881E(bLocal_61, false, true, false);
						unk_0x3B988190C0AA6C0B(bLocal_61, true);
						unk_0xBB6F1CAEC68B0BCE(bLocal_61, true);
						unk_0x49733E92263139D1(bLocal_61, 5f);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(bLocal_61, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(bLocal_61, false);
						unk_0xE532F5D78798DAAB(bLocal_72);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0xD031A9162D01088C(bLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (unk_0x7239B21A38F536BA(bLocal_56[iVar0]))
							{
								if (!unk_0x5F9532F3B5CC2551(bLocal_56[iVar0], false) && !func_165(bLocal_56[iVar0], -2017877118))
								{
									unk_0xEA47FE3719165B94(bLocal_56[iVar0], bLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, false, false, false, false);
									unk_0x971D38760FBC02EF(bLocal_56[iVar0], true);
								}
							}
							else if (unk_0x98A4EB5D89A0C952(iLocal_70[iVar0]))
							{
								bLocal_56[iVar0] = unk_0xD49F9B0955C367DE(25, iLocal_70[iVar0], Local_66[iVar0 /*3*/], fLocal_67[iVar0], true, true);
								unk_0x239A3351AC1DA385(bLocal_56[iVar0], Local_66[iVar0 /*3*/], false, false, true);
								unk_0x9F8AA94D6D97DBF4(bLocal_56[iVar0], true);
								unk_0xEA47FE3719165B94(bLocal_56[iVar0], bLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, false, false, false, false);
								unk_0x971D38760FBC02EF(bLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_65(bLocal_56[0]) && func_65(bLocal_56[1])) && func_65(bLocal_56[2])) && func_65(bLocal_56[3])) && func_65(bLocal_56[4])) && func_65(bLocal_56[5])) && func_65(bLocal_56[6])) && func_16(bLocal_57)) && func_16(bLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								unk_0xE532F5D78798DAAB(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_166())
			{
				if (!unk_0x7239B21A38F536BA(bLocal_57))
				{
					if (unk_0x98A4EB5D89A0C952(bLocal_71))
					{
						bLocal_57 = unk_0xAF35D0D2583051B0(bLocal_71, Local_59, bLocal_60, true, true, false);
						if (unk_0x3E8349C08E4B82E4(false) && unk_0xEACEEDA81751915C())
						{
							bLocal_58 = unk_0x9B62392B474F44A0(bLocal_57, true);
							unk_0xC429DCEEB339E129(bLocal_58, bLocal_57, 1, 99999999);
							unk_0x9F8AA94D6D97DBF4(bLocal_58, true);
							unk_0x971D38760FBC02EF(bLocal_58, true);
						}
						unk_0x2497C4717C8B881E(bLocal_57, true, true, false);
						unk_0x3B988190C0AA6C0B(bLocal_57, true);
						unk_0xBB6F1CAEC68B0BCE(bLocal_57, true);
						unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), true);
						unk_0x1B9C0099CB942AC6(bLocal_57, unk_0xB28ECA15046CA8B9(10));
						unk_0xAB04325045427AAE(bLocal_57, false);
						unk_0xE532F5D78798DAAB(bLocal_71);
					}
				}
				if (unk_0xD031A9162D01088C(bLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (unk_0x7239B21A38F536BA(bLocal_56[iVar1]))
							{
								if (!unk_0x5F9532F3B5CC2551(bLocal_56[iVar1], false) && !func_165(bLocal_56[iVar1], -2017877118))
								{
									unk_0x239A3351AC1DA385(bLocal_56[iVar1], Local_66[iVar1 /*3*/], false, false, true);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xEA47FE3719165B94(bLocal_56[iVar1], bLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, false, false, false, false);
									}
									else
									{
										unk_0xEA47FE3719165B94(bLocal_56[iVar1], bLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0.5f, false, false, false);
									}
									unk_0x971D38760FBC02EF(bLocal_56[iVar1], true);
								}
							}
							else if (unk_0x98A4EB5D89A0C952(iLocal_70[iVar1]))
							{
								bLocal_56[iVar1] = unk_0xD49F9B0955C367DE(25, iLocal_70[iVar1], Local_66[iVar1 /*3*/], fLocal_67[iVar1], true, true);
								unk_0x9F8AA94D6D97DBF4(bLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_65(bLocal_56[0]) && func_65(bLocal_56[1])) && func_65(bLocal_56[2])) && func_65(bLocal_56[3])) && func_65(bLocal_56[4]))
						{
							unk_0x69F4BE8C8CC4796C(bLocal_56[4], unk_0xD80958FC74E988A6(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								unk_0xE532F5D78798DAAB(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_166())
			{
				if (!unk_0x7239B21A38F536BA(bLocal_57))
				{
					if (unk_0x98A4EB5D89A0C952(bLocal_71))
					{
						bLocal_57 = unk_0xAF35D0D2583051B0(bLocal_71, Local_59, bLocal_60, true, true, false);
						unk_0x49733E92263139D1(bLocal_57, 5f);
						unk_0xE842A9398079BD82(bLocal_57, 0f);
						unk_0xE3EBAAE484798530(bLocal_57, false);
						unk_0xB28B1FE5BFADD7F5(bLocal_57, false);
						if (unk_0x2467A2D807D37CA3(bLocal_57))
						{
							unk_0x75DBEC174AEEAD10(bLocal_57, true);
						}
						unk_0x2497C4717C8B881E(bLocal_57, false, true, false);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x7239B21A38F536BA(iLocal_68[iVar2]))
					{
						if (unk_0x7239B21A38F536BA(iLocal_69[iVar2]))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_69[iVar2]) && func_16(iLocal_68[iVar2]))
							{
								if (unk_0x22AC59A870E6A669(iLocal_68[iVar2], -1, false))
								{
									unk_0xF75B0D629E1C063D(iLocal_69[iVar2], iLocal_68[iVar2], -1);
								}
							}
						}
						else if (func_16(iLocal_68[iVar2]) && unk_0x98A4EB5D89A0C952(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = unk_0x7DD959874C1FD534(iLocal_68[iVar2], 25, joaat("a_m_y_jetski_01"), -1, true, true);
							unk_0x56CEF0AC79073BDE(iLocal_69[iVar2], false);
							unk_0x9F8AA94D6D97DBF4(iLocal_69[iVar2], true);
						}
					}
					else if (unk_0x98A4EB5D89A0C952(bLocal_71))
					{
						iLocal_68[iVar2] = unk_0xAF35D0D2583051B0(bLocal_71, Local_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						unk_0x49733E92263139D1(iLocal_68[iVar2], 5f);
						unk_0xE842A9398079BD82(iLocal_68[iVar2], 0f);
						unk_0xE3EBAAE484798530(iLocal_68[iVar2], true);
						unk_0xB28B1FE5BFADD7F5(iLocal_68[iVar2], true);
						if (unk_0x2467A2D807D37CA3(iLocal_68[iVar2]))
						{
							unk_0x75DBEC174AEEAD10(iLocal_68[iVar2], true);
						}
						unk_0x2497C4717C8B881E(iLocal_68[iVar2], false, true, false);
					}
					iVar2++;
				}
				if (((unk_0x7239B21A38F536BA(bLocal_57) && unk_0x7239B21A38F536BA(iLocal_68[0])) && unk_0x7239B21A38F536BA(iLocal_68[1])) && unk_0x7239B21A38F536BA(iLocal_68[2]))
				{
					unk_0xE532F5D78798DAAB(bLocal_71);
				}
				if ((unk_0x7239B21A38F536BA(iLocal_69[0]) && unk_0x7239B21A38F536BA(iLocal_69[1])) && unk_0x7239B21A38F536BA(iLocal_69[2]))
				{
					unk_0xE532F5D78798DAAB(joaat("a_m_y_jetski_01"));
				}
				unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 170, true);
			}
		}
	}
}

int func_165(bool bParam0, int iParam1)
{
	if (func_65(bParam0))
	{
		if (unk_0x77F1BEB8863288D5(bParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(bParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_166()
{
	if (!func_168())
	{
		return 0;
	}
	if (func_65(unk_0xD80958FC74E988A6()))
	{
		if (!func_167(unk_0xD80958FC74E988A6(), Local_59, 100f, 1) || unk_0xB16FCE9DDC7BA182())
		{
			return 1;
		}
	}
	return 0;
}

bool func_167(bool bParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

int func_168()
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (unk_0x25223CA6B4D20B7F() >= 20 || unk_0x25223CA6B4D20B7F() < 5)
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

int func_169(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_170(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_170(var uParam0)
{
	return func_171(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_171(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_172(bParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(bParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(bParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(bParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(bParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(bParam2, bParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(bParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(bParam1, BitTest(bParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(bParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(bParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_172(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_173(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_174(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_174(bool bParam0)
{
	func_175(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_172(*bParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(bParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(bParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(bParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(bParam1, BitTest(*bParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(bParam2, bParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(bParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(bParam1, BitTest(*bParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(bParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(bParam1, bParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(bParam0, 29);
	}
}

void func_176()
{
	int iVar0;
	
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43.f_0)
		{
			case 0:
				Local_59 = { -158.67f, -1555.16f, 34.63f };
				bLocal_60 = 187.71f;
				Local_62 = { -155.15f, -1550.83f, 34.53f };
				bLocal_63 = 213.13f;
				Local_83 = { -68.87878f, -1818.903f, 24.55311f };
				Local_84 = { -56.0098f, -1807.029f, 27.85417f };
				Local_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			
			case 1:
				Local_59 = { 368.72f, 294.06f, 102.96f };
				bLocal_60 = 25.17f;
				Local_62 = { 373.71f, 290.72f, 102.89f };
				bLocal_63 = 33.24f;
				Local_83 = { -523.5497f, 262.2986f, 80.01991f };
				Local_84 = { -509.1013f, 272.478f, 86.17713f };
				Local_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			
			case 2:
				Local_59 = { -807.98f, -2555.14f, 13.34f };
				bLocal_60 = 3.35f;
				Local_62 = { -810.1f, -2560.85f, 13.38f };
				bLocal_63 = 43.57f;
				Local_83 = { -1000.759f, -2436.092f, 17.16946f };
				Local_84 = { -986.7399f, -2424.87f, 22.16946f };
				Local_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			
			case 3:
				Local_59 = { 778.59f, -1160.2f, 28.35f };
				bLocal_60 = 302.47f;
				Local_62 = { 778.47f, -1164.01f, 28.25f };
				bLocal_63 = 287.97f;
				Local_83 = { -1000.759f, -2436.092f, 17.16946f };
				Local_84 = { -986.7399f, -2424.87f, 22.16946f };
				Local_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			
			case 4:
				Local_59 = { -1066.59f, -1151.04f, 1.71f };
				bLocal_60 = 258.32f;
				Local_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				Local_83 = { -1265.744f, -1057.199f, 5.410841f };
				Local_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_181(Local_43.f_0, &Local_85, &Local_86, &fLocal_87);
		iLocal_70[0] = joaat("a_f_y_hipster_02");
		iLocal_70[1] = joaat("a_m_y_hipster_02");
		iLocal_70[2] = joaat("a_m_y_hipster_02");
		iLocal_70[3] = joaat("a_f_y_hipster_02");
		iLocal_70[4] = joaat("a_m_y_hipster_02");
		iLocal_70[5] = joaat("a_m_y_hipster_02");
		iLocal_70[6] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 1)
		{
			bLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			bLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			func_180(&uLocal_90, bLocal_72);
		}
		bLocal_71 = func_179(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			func_180(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_180(&uLocal_90, bLocal_71);
		func_177(&uLocal_90, bLocal_73);
		unk_0x34F060F4BF92E018(Local_83, Local_84, false, 0);
		unk_0x1A5AA1208AF5DB59(Local_85, Local_86, fLocal_87, false, false, true);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43.f_0)
		{
			case 5:
				Local_59 = { 3066.63f, 650.9f, 0.17f };
				bLocal_60 = 351.81f;
				Local_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				Local_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				Local_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			
			case 6:
				Local_59 = { 3462.11f, 5192.15f, -0.04f };
				bLocal_60 = 222.9f;
				Local_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				Local_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				Local_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			
			case 7:
				Local_59 = { 194.64f, 3621.27f, 29.91f };
				bLocal_60 = 163.95f;
				Local_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				Local_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				Local_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			
			case 8:
				Local_59 = { 627.58f, -2138.06f, -0.07f };
				bLocal_60 = 180.09f;
				Local_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				Local_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				Local_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		bLocal_71 = joaat("seashark");
		func_180(&uLocal_90, bLocal_71);
		func_180(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_177(var uParam0, char* sParam1)
{
	func_178(uParam0, 1, -1, sParam1, 0);
}

void func_178(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x0C515FAB3FF9EA92(sParam3, "NULL"))
					{
						if (unk_0x0C515FAB3FF9EA92(&((uParam0[iVar0 /*18*/])->f_2), bParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), bParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], bParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_179(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_180(var uParam0, int iParam1)
{
	func_178(uParam0, 0, iParam1, "NULL", 0);
}

void func_181(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_182()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_64(9))
	{
		return 0;
	}
	if (func_47(6) || func_47(7))
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && func_53() != 1)
	{
		return 0;
	}
	if (unk_0x7A3F19700A4D0525())
	{
		return 0;
	}
	if (func_65(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (((func_16(bVar0) && unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bVar0)) && !func_204(unk_0xD80958FC74E988A6(), bVar0, -1)) && unk_0x9F47B058362C84B5(bVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_43.f_0)
	{
		case 0:
			if (Global_113360[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_113360[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_113360[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_113360[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_113360[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_113350[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_113350[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_113350[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_113350[3])
			{
				return 0;
			}
			break;
	}
	if (!func_168())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (func_65(bLocal_56[iVar1]))
			{
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0xE73A266DB0CA9042(false, iVar1 * 100);
				unk_0xBB9CE077274F6A1B(false, 40000f, 0);
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(bLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_65(iLocal_69[iVar1]))
			{
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0xE73A266DB0CA9042(false, iVar1 * 110);
				if (func_16(iLocal_68[iVar1]) && unk_0xA3EE4A07279BB9DB(iLocal_69[iVar1], iLocal_68[iVar1], false))
				{
					unk_0x480142959D337D00(false, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					unk_0xBB9CE077274F6A1B(false, 40000f, 0);
				}
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_65(bLocal_58))
		{
			if (func_16(bLocal_57) && unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_57, false))
			{
				unk_0x480142959D337D00(bLocal_58, bLocal_57, 30f, 786597);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(bLocal_58, 40000f, 0);
			}
		}
		return 0;
	}
	if (func_184())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (func_65(bLocal_56[iVar4]))
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0xE73A266DB0CA9042(false, iVar4 * 50);
				unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
				unk_0x39E72BC99E6360CB(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_183(bLocal_56[iVar4], 1);
				}
				unk_0x5ABA3986D90D8A3B(bLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_16(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				unk_0x75DBEC174AEEAD10(iLocal_68[iVar4], false);
			}
			if (func_65(iLocal_69[iVar4]))
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0xE73A266DB0CA9042(false, iVar4 * 60);
				if (func_16(iLocal_68[iVar4]) && unk_0xA3EE4A07279BB9DB(iLocal_69[iVar4], iLocal_68[iVar4], false))
				{
					unk_0x480142959D337D00(false, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
				}
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_183(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_16(bLocal_57) && Local_43.f_1 == 3)
		{
			unk_0x75DBEC174AEEAD10(bLocal_57, false);
		}
		if (func_65(bLocal_58))
		{
			if (func_16(bLocal_57) && unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_57, false))
			{
				unk_0x480142959D337D00(bLocal_58, bLocal_57, 50f, 786468);
			}
			else
			{
				unk_0x22B0D0E37CCB840D(bLocal_58, unk_0xD80958FC74E988A6(), 500f, -1, false, false);
			}
		}
		switch (Local_43.f_0)
		{
			case 0:
				Global_113360[0] = 1;
				Global_113366[0] = unk_0x9CD27B0045628463();
				break;
			
			case 1:
				Global_113360[1] = 1;
				Global_113366[1] = unk_0x9CD27B0045628463();
				break;
			
			case 2:
				Global_113360[2] = 1;
				Global_113366[2] = unk_0x9CD27B0045628463();
				break;
			
			case 3:
				Global_113360[3] = 1;
				Global_113366[3] = unk_0x9CD27B0045628463();
				break;
			
			case 4:
				Global_113360[4] = 1;
				Global_113366[4] = unk_0x9CD27B0045628463();
				break;
			
			case 5:
				Global_113350[0] = 1;
				Global_113355[0] = unk_0x9CD27B0045628463();
				break;
			
			case 6:
				Global_113350[1] = 1;
				Global_113355[1] = unk_0x9CD27B0045628463();
				break;
			
			case 7:
				Global_113350[2] = 1;
				Global_113355[2] = unk_0x9CD27B0045628463();
				break;
			
			case 8:
				Global_113350[3] = 1;
				Global_113355[3] = unk_0x9CD27B0045628463();
				break;
		}
		return 0;
	}
	return 1;
}

void func_183(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_65(bParam0))
	{
		bVar1 = 2;
		if (bParam1)
		{
			bVar1 = 3;
		}
		bVar2 = unk_0xD53343AA4FB7DD28(false, bVar1);
		if (bVar2 == 0)
		{
			bVar0 = "SCREAM_PANIC";
		}
		else if (bVar2 == 1)
		{
			bVar0 = "SCREAM_TERROR";
		}
		else
		{
			bVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0x6D9F5FAA7488BA46(bParam0))
		{
			func_142(bParam0, bVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_142(bParam0, bVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_184()
{
	int iVar0;
	
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (unk_0x7239B21A38F536BA(iLocal_69[iVar0]))
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_185(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x9A497FE2DF198913(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x7239B21A38F536BA(iLocal_68[iVar0]))
			{
				if (unk_0x5F9532F3B5CC2551(iLocal_68[iVar0], false))
				{
					return 1;
				}
				else if (unk_0xC86D67D52A707CF8(iLocal_68[iVar0], unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x7239B21A38F536BA(bLocal_57))
		{
			if (unk_0x5F9532F3B5CC2551(bLocal_57, false))
			{
				return 1;
			}
			else if (unk_0xC86D67D52A707CF8(bLocal_57, unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(bLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_167(unk_0xD80958FC74E988A6(), Local_44, 50f, 1) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_58))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_58))
		{
			return 1;
		}
		else if (func_185(bLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x9A497FE2DF198913(bLocal_58))
		{
			unk_0x9F8AA94D6D97DBF4(bLocal_58, false);
			return 1;
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_57))
	{
		if (unk_0x5F9532F3B5CC2551(bLocal_57, false))
		{
			return 1;
		}
		else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_57, true) || unk_0xC86D67D52A707CF8(bLocal_57, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_61))
	{
		if (unk_0x5F9532F3B5CC2551(bLocal_61, false))
		{
			return 1;
		}
		else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_61, true) || unk_0xC86D67D52A707CF8(bLocal_61, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (unk_0x7239B21A38F536BA(bLocal_56[iVar0]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_185(bLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_185(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_17(unk_0xD80958FC74E988A6()) && func_17(bParam0))
	{
		if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
		if (func_199(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(bParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_198(unk_0xD80958FC74E988A6(), bParam0, bParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_186(bParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(bool bParam0, float fParam1)
{
	float fVar0;
	
	if (func_17(unk_0xD80958FC74E988A6()) && func_17(bParam0))
	{
		if (func_197(bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
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
				if (func_187(bParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_187(bool bParam0, float fParam1)
{
	return func_188(bParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

bool func_188(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_196(bParam0, bParam1);
	if (!func_17(bParam0) || !func_17(bParam1))
	{
		if (iVar2 != -1)
		{
			func_195(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_192(bParam0, bParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_191();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = bParam0;
		Local_40[iVar2 /*4*/].f_2 = bParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_189(&(Local_40[iVar2 /*4*/]), Var1, bParam1, &(Local_40[iVar2 /*4*/].f_3), bParam0, bParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_189(var uParam0, struct<3> Param1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_17(bParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_190(bParam2, bParam5) };
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
		func_17(bVar3);
		if (unk_0x04A2A40C73395041(bVar3) == bParam2)
		{
			if (bLocal_41)
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
		func_17(bVar3);
		if (unk_0x997ABD671D25CA0B(bParam2, false))
		{
			if (unk_0x4B53F92932ADFAC0(bVar3) == unk_0x9A9112A0FE9A4713(bParam2, false))
			{
				if (bLocal_41)
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

Vector3 func_190(bool bParam0, bool bParam1)
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

int func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_192(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_194(unk_0x3FEF770D40960D5A(bParam1, true) - unk_0x3FEF770D40960D5A(bParam0, true)) };
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
		Var1 = { func_194(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_193(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_193(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_194(struct<3> Param0)
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

void func_195(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40.f_0)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_197(bool bParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_198(bool bParam0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x0A794A5A57F8DF91(bParam0) };
	Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) - unk_0x3FEF770D40960D5A(bParam0, true) };
	return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / unk_0x2A488C176D52CCA5(Var1, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(bParam2);
}

int func_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_17(unk_0xD80958FC74E988A6()) && func_17(bParam0))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar2, true);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_203(bParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_200(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x65F0C5AE05943EC7(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
					if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_203(bParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_200(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
	Var1 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.f_0 = (Var1.f_0 + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_grenade"), fParam1, true) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_molotov"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bParam0, true), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_201(bParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_201(bParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x5270A8FBC098C3F8(Var0, Var1, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(bool bParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_202(bParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(bool bParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_194(Param1 - unk_0x3FEF770D40960D5A(bParam0, true)) };
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
		Var1 = { func_194(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_193(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_203(bool bParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_204(bool bParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		if (unk_0xA808AA1D79230FC2(bParam0, bParam1))
		{
			if (unk_0xBB40DD2270B65366(bParam1, bParam2, false) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_205()
{
	switch (Local_43.f_0)
	{
		case 5:
			return BitTest(Global_113386.f_24976.f_2, 0);
			break;
		
		case 6:
			return BitTest(Global_113386.f_24976.f_2, 1);
			break;
		
		case 7:
			return BitTest(Global_113386.f_24976.f_2, 2);
			break;
		
		case 8:
			return BitTest(Global_113386.f_24976.f_2, 3);
			break;
		
		case 0:
			return BitTest(Global_113386.f_24979.f_3, 0);
			break;
		
		case 1:
			return BitTest(Global_113386.f_24979.f_3, 1);
			break;
		
		case 2:
			return BitTest(Global_113386.f_24979.f_3, 2);
			break;
		
		case 3:
			return BitTest(Global_113386.f_24979.f_3, 3);
			break;
		
		case 4:
			return BitTest(Global_113386.f_24979.f_3, 4);
			break;
	}
	return 0;
}

void func_206()
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_208(1);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PARALLEL", false);
	if (Local_43.f_0 == 1)
	{
		iLocal_89 = func_207(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x01C7B9B38428AEB6(374.0083f, 279.5919f, 102.3306f, 25f, false, false, false, false, false, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = func_207(Local_44, 60f);
	}
}

int func_207(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x1B5C85C612E5256E(Param0 - Var0, Param0 + Var0, false, true, true, true);
}

void func_208(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_43.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_180(&uLocal_90, joaat("banshee"));
				func_180(&uLocal_90, joaat("feltzer2"));
				func_180(&uLocal_90, joaat("sentinel"));
				break;
			
			case 4:
				func_180(&uLocal_90, joaat("bati"));
				func_180(&uLocal_90, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_180(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_209(&uLocal_90);
	}
}

void func_209(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_210(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_210(var uParam0)
{
	func_211(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		switch (func_172(bParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(bParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(bParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(bParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(bParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(bParam2, bParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(bParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(bParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(bParam2, BitTest(bParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
				break;
			
			default:
				break;
		}
	}
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_113386.f_24979.f_1, 0);
			break;
		
		case 1:
			return BitTest(Global_113386.f_24979.f_1, 1);
			break;
		
		case 2:
			return BitTest(Global_113386.f_24979.f_1, 2);
			break;
		
		case 3:
			return BitTest(Global_113386.f_24979.f_1, 3);
			break;
		
		case 4:
			return BitTest(Global_113386.f_24979.f_1, 4);
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_214()
{
	if (func_215(func_216(86, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (func_215(func_216(87, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (func_215(func_216(88, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (func_215(func_216(89, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (func_215(func_216(90, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (func_215(func_216(82, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (func_215(func_216(83, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (func_215(func_216(84, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (func_215(func_216(85, 0), Local_44, 1f, 0))
	{
		Local_43.f_0 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_217(0);
	}
}

int func_215(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_32338[iVar0 /*23*/][iParam1 /*3*/];
}

void func_217(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (!iLocal_46)
	{
		unk_0xF46C581C61718916(false);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_17(bLocal_56[iVar0]))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_56[iVar0]);
			unk_0xBB9CE077274F6A1B(bLocal_56[iVar0], 40000f, 0);
			unk_0x9F8AA94D6D97DBF4(bLocal_56[iVar0], false);
			unk_0x2595DD4236549CE3(&(bLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_17(iLocal_69[iVar0]))
		{
			if (func_17(iLocal_68[iVar0]))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_69[iVar0]);
				if (unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iLocal_68[iVar0])))
				{
					unk_0x75DBEC174AEEAD10(iLocal_68[iVar0], false);
				}
				unk_0x480142959D337D00(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				unk_0x971D38760FBC02EF(iLocal_69[iVar0], true);
				unk_0x9F8AA94D6D97DBF4(iLocal_69[iVar0], false);
				unk_0x2595DD4236549CE3(&(iLocal_69[iVar0]));
				unk_0x629BFA74418D6239(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_17(bLocal_58))
	{
		if (func_17(bLocal_57))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_58);
			unk_0x9F7794730795E019(bLocal_58, 1, true);
			unk_0x480142959D337D00(bLocal_58, bLocal_57, 15f, 786599);
			unk_0x971D38760FBC02EF(bLocal_58, true);
			unk_0x9F8AA94D6D97DBF4(bLocal_58, false);
			unk_0x2595DD4236549CE3(&bLocal_58);
			unk_0x629BFA74418D6239(&bLocal_57);
		}
	}
	if (func_17(bLocal_61))
	{
		unk_0x629BFA74418D6239(&bLocal_61);
	}
	switch (Local_43.f_0)
	{
		case 5:
			func_220(82, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24976.f_2), false);
			break;
		
		case 6:
			func_220(83, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24976.f_2), true);
			break;
		
		case 7:
			func_220(84, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24976.f_2), 2);
			break;
		
		case 8:
			func_220(85, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24976.f_2), 3);
			break;
		
		case 0:
			func_220(86, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24979.f_3), false);
			break;
		
		case 1:
			func_220(87, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24979.f_3), true);
			break;
		
		case 2:
			func_220(88, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24979.f_3), 2);
			break;
		
		case 3:
			func_220(89, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24979.f_3), 3);
			break;
		
		case 4:
			func_220(90, 0, 0);
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24979.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		unk_0x8DFCED7A656F8802(true);
	}
	unk_0x774BD811F656A122(unk_0xB28ECA15046CA8B9(10), false);
	if (iLocal_54)
	{
		unk_0x19F21E63AE6EAE4E(true);
	}
	if (iLocal_76 && !bParam0)
	{
		bVar1 = unk_0xA5EDC40EF369B48D();
		if (unk_0x5E9564D8246B909A(bVar1))
		{
			if (!unk_0x49C32D60007AFA47(bVar1))
			{
				unk_0x8D32347D6D4C40A2(bVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_208(0);
	}
	if (iLocal_47)
	{
		unk_0xE04B48F2CC926253(Local_83, Local_84, 1);
		unk_0x0027501B9F3B407E(Local_85, Local_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PARALLEL", true);
	if (Local_43.f_0 == 1)
	{
		unk_0x31D16B74C6E29D66(iLocal_89, false);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		unk_0x31D16B74C6E29D66(iLocal_88, false);
	}
	else
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 170, false);
	}
	func_218(&uLocal_90, 0);
	unk_0x1090044AD1DA76FA();
}

void func_218(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_209(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_219(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_219(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_220(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), false);
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), false);
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_32338[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_32338[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

