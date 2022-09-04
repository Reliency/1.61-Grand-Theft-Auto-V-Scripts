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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[3] = { 0, 0, 0 };
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	int iLocal_237 = 0;
	bool bLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	int iLocal_250 = 0;
	struct<2> Local_251 = { 0, 5 } ;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 5;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	struct<3> Var1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = unk_0x4A9923385BDB9DAD();
	iLocal_50 = unk_0x186E5D252FA50E7D();
	Local_66 = { 1180.969f, -402.381f, 67.2f };
	Local_67 = { 5f, 0f, 57.33f };
	iLocal_69 = -1;
	iLocal_239 = 77;
	iLocal_240 = -1;
	iLocal_241 = -1;
	iLocal_242 = 1;
	iLocal_243 = 1;
	iLocal_244 = 1;
	unk_0x6F2135B6129620C1(true);
	func_377();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { ScriptParam_251.f_1[0 /*3*/] };
	Global_97713 = 1;
	func_376(&Var0);
	if (unk_0xC968670BFACE42D9(83))
	{
		func_375(" Force cleanup [TERMINATING]");
		func_360(&Var0, 1);
	}
	if (!func_359(108))
	{
		func_230(&Var0, Var1);
	}
	else
	{
		func_1(&Var0, Var1);
	}
}

void func_1(int* iParam0, struct<3> Param1)
{
	while (true)
	{
		if (!unk_0xC5042CC6F5E3D450())
		{
			func_375("  Ambient - Player isn't within World Point Range");
			func_360(iParam0, 1);
		}
		if (func_229() != 2)
		{
			func_375("  Ambient - Player is not Trevor");
			func_360(iParam0, 1);
		}
		iLocal_241 = func_228(5f);
		if (iLocal_241 != -1)
		{
			if (!func_222())
			{
				*iParam0 = func_221(iLocal_241);
				StringCopy(&(iParam0->f_1), func_220(iLocal_241), 32);
				iParam0->f_16 = 3;
				iParam0->f_15 = 5f;
				if (*iParam0 == -1)
				{
					func_375("  -  Ambient Rampage Mission ID is invalid");
					func_360(iParam0, 1);
				}
				if (unk_0xCA042B6957743895(&(iParam0->f_1)))
				{
					func_375("  -  Ambient Rampage Mission ID is invalid");
					func_360(iParam0, 1);
				}
				unk_0x933D6A9EEC1BACD0(&(Global_113386.f_18574[*iParam0 /*6*/]), false);
				unk_0x933D6A9EEC1BACD0(&(Global_113386.f_18574[*iParam0 /*6*/]), 2);
				unk_0xE80492A9AC099A93(&(Global_113386.f_18574[*iParam0 /*6*/]), 3);
				Global_112473[*iParam0 /*10*/].f_1 = 0;
				if (!func_219(0))
				{
					Global_112473[*iParam0 /*10*/].f_3 = 0;
				}
				if (!func_211(*iParam0))
				{
					func_375(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_360(iParam0, 1);
				}
				else if (!func_5(iParam0))
				{
					func_375(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_360(iParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0xA56F01F3765B93A0(Param1, iParam0->f_15, true, false, false, false);
					func_375(" RC Ambient Launcher Waiting To Terminate");
					Global_112473[*iParam0 /*10*/].f_1 = 0;
					if (func_3(iParam0))
					{
						func_375(" Ambient - Ready To Terminate");
						func_360(iParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			iLocal_244 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_3(int* iParam0)
{
	while (!Global_112473[*iParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0x5A859503B0C08678())
	{
		if (!unk_0x797AC7CB535BA28F())
		{
			unk_0x891B5B39AC6302AF(iParam0);
			if (bParam1)
			{
				while (!unk_0xB16FCE9DDC7BA182())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

int func_5(int* iParam0)
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_210())
	{
		while (!func_205(*iParam0))
		{
			if (func_204(*iParam0))
			{
				func_193();
			}
			if (!func_150(iParam0, *iParam0 != 2))
			{
				func_375("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_149())
	{
		func_147();
	}
	if (!func_116(iParam0))
	{
		func_375("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_113(*iParam0, &Var0);
	MemCopy(&sVar1, {func_112(*iParam0)}, 4);
	func_111(&sVar1, Var0.f_3, 0);
	func_108(*iParam0);
	if (!func_210())
	{
		if (iParam0->f_16 == 2)
		{
			func_25(&(iParam0->f_1), 0);
		}
		else
		{
			func_25(&(iParam0->f_1), 1);
		}
	}
	func_6(*iParam0, Var0.f_0);
	return 1;
}

void func_6(int iParam0, bool bParam1)
{
	func_24(bParam1);
	unk_0xE80492A9AC099A93(&(Global_113386.f_18574[iParam0 /*6*/]), 5);
	if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) < 1)
	{
		Global_63155 = 0;
		unk_0x6EB5F71AA68F2E8E("mission_stat_watcher");
		while (!unk_0xE6CC9F3BA0FB9EF1("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0xC90D2DCACD56184C("mission_stat_watcher");
	}
	while (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 5))
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_18574[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_63152 == 1)
	{
		func_21();
		Global_63152 = 0;
		if (Global_63147)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_63155 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_63169, {func_12(iParam0)}, 4);
	Global_63157 = 0;
	Global_63156 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_63144 = 1;
			Global_63147 = 1;
			Global_63150 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_63155 = 1;
			Global_63156 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_75399;
	Global_75399 = 1;
	iVar1 = Global_75400;
	Global_75400 = iParam0;
	if (!Global_63144)
	{
		if ((Global_75400 != iVar1 || Global_75249 == 0) || iVar0 != Global_75399)
		{
			Global_32212 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_63147 = 1;
		}
	}
	Global_63182 = unk_0x9CD27B0045628463();
	func_8();
	Global_63154 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_63151)
	{
		return;
	}
	if (Global_75249 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		switch (Global_63379[Global_75250[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75250[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_63162)
				{
					Global_75250[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_75250[iVar0 /*9*/].f_1 != 0)
					{
						Global_75250[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_63151 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_63147 = 1;
	Global_63150 = 1;
	if (Global_75249 > 15)
	{
		return;
	}
	func_11(Global_75249);
	Global_75250[Global_75249 /*9*/] = iParam0;
	Global_75249++;
	if (Global_63379[iParam0 /*13*/] == 16)
	{
		Global_75401 = 1;
	}
}

void func_11(int iParam0)
{
	Global_75250[iParam0 /*9*/].f_1 = 0;
	Global_75250[iParam0 /*9*/].f_2 = 0f;
	Global_75250[iParam0 /*9*/].f_3 = 0;
	Global_75250[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_112(iParam0) };
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

void func_13()
{
	if (Global_63154)
	{
		return;
	}
	Global_63163 = 0;
	Global_75249 = 0;
	Global_63165 = 0;
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	func_20(0);
	func_19();
	Global_75401 = 0;
	Global_63153 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_63144 = 0;
	Global_63174 = 0;
	Global_63182 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75436[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75445 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75402[iVar0 /*2*/] = 0;
		Global_75402[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75435 = 0;
}

void func_16()
{
	Global_63313 = 0;
}

void func_17()
{
	Global_63173 = 0;
	Global_63177 = func_18(joaat("sp0_shots"));
	Global_63176 = func_18(joaat("sp0_hits"));
	Global_63179 = func_18(joaat("sp1_shots"));
	Global_63178 = func_18(joaat("sp1_hits"));
	Global_63181 = func_18(joaat("sp2_shots"));
	Global_63180 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_63152 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		Global_75250[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_63162)
	{
	}
	Global_63162 = 0;
}

void func_22()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_63149 && !Global_63148)
			{
				Global_63149 = 0;
				unk_0x9DC711BC69C548DF("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x9DC711BC69C548DF("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_63147)
	{
		return 0;
	}
	return Global_63159;
}

void func_24(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92(bParam0, bParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, bool bParam2)
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_28(&Global_103950, cParam0, 0, "Start", iParam1, bParam2);
		func_27();
		Global_94619 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_106934 = Global_103950;
	Global_106934.f_1 = Global_103950.f_1;
	Global_106934.f_6 = Global_103950.f_6;
	Global_106934.f_7 = Global_103950.f_7;
	Global_106934.f_8 = Global_103950.f_8;
	Global_106934.f_2 = Global_103950.f_2;
	Global_106934.f_3 = Global_103950.f_3;
	Global_106934.f_4 = Global_103950.f_4;
	Global_106934.f_5 = Global_103950.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_106934.f_9[iVar1] = Global_103950.f_9[iVar1];
		Global_106934.f_13[iVar1] = Global_103950.f_13[iVar1];
		Global_106934.f_17[iVar1] = Global_103950.f_17[iVar1];
		Global_106934.f_21[iVar1] = Global_103950.f_21[iVar1];
		Global_106934.f_25[0 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_106934.f_25[1 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_106934.f_616[iVar1 /*65*/][iVar0] = Global_103950.f_616[iVar1 /*65*/][iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_13[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_26[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_106934.f_616[iVar1 /*65*/].f_59 = Global_103950.f_616[iVar1 /*65*/].f_59;
		Global_106934.f_616[iVar1 /*65*/].f_60 = Global_103950.f_616[iVar1 /*65*/].f_60;
		Global_106934.f_616[iVar1 /*65*/].f_61 = Global_103950.f_616[iVar1 /*65*/].f_61;
		Global_106934.f_616[iVar1 /*65*/].f_62 = Global_103950.f_616[iVar1 /*65*/].f_62;
		Global_106934.f_616[iVar1 /*65*/].f_63 = Global_103950.f_616[iVar1 /*65*/].f_63;
		Global_106934.f_616[iVar1 /*65*/].f_64 = Global_103950.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_106934.f_616[iVar1 /*65*/].f_39[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_49[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_106934.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_106934.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_106934.f_2244[iVar1 /*32*/][iVar0] = Global_103950.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_106934.f_2341[iVar1] = Global_103950.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_106934.f_2838[iVar1 /*15*/][iVar0] = Global_103950.f_2838[iVar1 /*15*/][iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_106934.f_2345[iVar1 /*164*/][iVar0] = Global_103950.f_2345[iVar1 /*164*/][iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_106934.f_2884 = { Global_103950.f_2884 };
	Global_106934.f_2884.f_3 = Global_103950.f_2884.f_3;
	Global_106934.f_2890 = { Global_103950.f_2890 };
	Global_106934.f_2890.f_3 = { Global_103950.f_2890.f_3 };
	Global_106934.f_2890.f_6 = Global_103950.f_2890.f_6;
	Global_106934.f_2890.f_8 = Global_106934.f_2890.f_8;
	Global_106934.f_2890.f_7 = Global_103950.f_2890.f_7;
	Global_106934.f_2890.f_9 = Global_103950.f_2890.f_9;
	Global_106934.f_2890.f_11 = Global_103950.f_2890.f_11;
	Global_106934.f_2890.f_10 = Global_103950.f_2890.f_10;
	Global_106934.f_2890.f_12 = Global_103950.f_2890.f_12;
	Global_106934.f_2890.f_12.f_1 = { Global_103950.f_2890.f_12.f_1 };
	Global_106934.f_2890.f_12.f_5 = Global_103950.f_2890.f_12.f_5;
	Global_106934.f_2890.f_12.f_6 = Global_103950.f_2890.f_12.f_6;
	Global_106934.f_2890.f_12.f_7 = Global_103950.f_2890.f_12.f_7;
	Global_106934.f_2890.f_12.f_8 = Global_103950.f_2890.f_12.f_8;
	Global_106934.f_2890.f_12.f_9 = { Global_103950.f_2890.f_12.f_9 };
	Global_106934.f_2890.f_12.f_59 = { Global_103950.f_2890.f_12.f_59 };
	Global_106934.f_2890.f_12.f_62 = Global_103950.f_2890.f_12.f_62;
	Global_106934.f_2890.f_12.f_63 = Global_103950.f_2890.f_12.f_63;
	Global_106934.f_2890.f_12.f_64 = Global_103950.f_2890.f_12.f_64;
	Global_106934.f_2890.f_12.f_65 = Global_103950.f_2890.f_12.f_65;
	Global_106934.f_2890.f_12.f_77 = Global_103950.f_2890.f_12.f_77;
	Global_106934.f_2890.f_12.f_66 = Global_103950.f_2890.f_12.f_66;
	Global_106934.f_2890.f_12.f_67 = Global_103950.f_2890.f_12.f_67;
	Global_106934.f_2890.f_12.f_68 = Global_103950.f_2890.f_12.f_68;
	Global_106934.f_2890.f_12.f_69 = Global_103950.f_2890.f_12.f_69;
	Global_106934.f_2890.f_12.f_71 = Global_103950.f_2890.f_12.f_71;
	Global_106934.f_2890.f_12.f_72 = Global_103950.f_2890.f_12.f_72;
	Global_106934.f_2890.f_12.f_73 = Global_103950.f_2890.f_12.f_73;
	Global_106934.f_2890.f_12.f_74 = Global_103950.f_2890.f_12.f_74;
	Global_106934.f_2890.f_12.f_75 = Global_103950.f_2890.f_12.f_75;
	Global_106934.f_2890.f_12.f_76 = Global_103950.f_2890.f_12.f_76;
	Global_106934.f_2980 = Global_103950.f_2980;
	Global_106934.f_2980.f_1 = Global_103950.f_2980.f_1;
	Global_106934.f_2980.f_2 = Global_103950.f_2980.f_2;
	Global_106934.f_2980.f_3 = Global_103950.f_2980.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_229();
	uParam0->f_1 = func_97();
	unk_0xF3BBE884A14BB413(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(unk_0xD80958FC74E988A6());
		func_61(unk_0xD80958FC74E988A6(), 0);
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_58())
		{
			func_51(unk_0xD80958FC74E988A6(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	
	if (bParam2 == 0)
	{
		bParam2 = unk_0xD80958FC74E988A6();
	}
	if (unk_0x7239B21A38F536BA(bParam2))
	{
		uParam1->f_5 = func_48(bParam2);
	}
	if (func_45(bParam2, &bVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, bVar0, iParam4);
	}
	else if (unk_0x7239B21A38F536BA(bVar0))
	{
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0x423E8DE37D934D89(bVar0, joaat("skylift")) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bVar0, false))
			{
				func_31(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x4C241E39B23DF959(bParam2, false))
	{
		func_33(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_32(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, bool bParam1, int iParam2)
{
	func_40(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(bParam1, 145, 0);
	uParam0->f_11 = func_35(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
		uParam0->f_6 = unk_0xE83D4F9BA2A38914(bParam1);
		uParam0->f_3 = { unk_0x4805D2B1D8CF94A9(bParam1) };
		if (unk_0x51210CED3DA1C78A(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if (bParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || unk_0x9F47B058362C84B5(bParam0) == func_37(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_38(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_39(bool bParam0)
{
	return bParam0 < 3;
}

void func_40(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x9F47B058362C84B5(bParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(bParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(bParam0);
		unk_0xA19435F193E081AC(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x0EE21293DAD47C95(bParam0);
		uParam1->f_67 = unk_0x2BB9230590DA5E8A(bParam0);
		uParam1->f_69 = unk_0xB3ED1BFB4BE636DC(bParam0);
		uParam1->f_70 = unk_0x25BC98A59C2EA962(bParam0);
		unk_0x8389CD56CA8072DC(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7619EEE8C886757F(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8C4B92553E4766A5(bParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 28);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 29);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 30);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			uParam1->f_68 = unk_0xF8C397922FC03F41(bParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_66))
		{
			if (unk_0x4198AB0022B15F87(bParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(bParam0))
				{
					case 3:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 10);
		}
		if (unk_0xF095C0405307B21B(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 13);
			unk_0xB64CF2CCA9D95F52(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x910A32E7AAD2656C(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 12);
		}
		func_42(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 11);
		}
		if (unk_0x05661B80A8C9165F(bParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(bParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < *uParam1)
	{
		bVar1 = bVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			(*uParam1)[bVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				(*uParam1)[bVar0] = 1;
			}
		}
		else if (bVar1 == 22)
		{
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*bParam0))
				{
					case 255:
						(*uParam1)[bVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[bVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[bVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[bVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[bVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[bVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[bVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[bVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[bVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[bVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[bVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[bVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[bVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[bVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[bVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[bVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[bVar0] = unk_0x772960298DA26FDB(*bParam0, bVar0) + 1;
			if (bVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
			else if (bVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			if (bParam0 == unk_0xD80958FC74E988A6())
			{
				*uParam1 = unk_0xB6997A7EB3F5C8C0();
			}
			else
			{
				*uParam1 = unk_0x9A9112A0FE9A4713(bParam0, true);
			}
			if (unk_0x7239B21A38F536BA(*uParam1))
			{
				if (unk_0x4C241E39B23DF959(*uParam1, false))
				{
					if (iParam2 == 0 || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(*uParam1, true), unk_0x3FEF770D40960D5A(bParam0, true), true) < 100f)
					{
						if (unk_0x423E8DE37D934D89(*uParam1, joaat("taxi")))
						{
							if (unk_0xBB40DD2270B65366(*uParam1, -1, false) != bParam0 && unk_0xBB40DD2270B65366(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_46(*uParam1, func_229(), 1))
						{
							bVar0 = unk_0x442E0A7EDE4A738A();
							if (!unk_0x0C515FAB3FF9EA92(bVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x997ABD671D25CA0B(bParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x05661B80A8C9165F(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xDACE671663F2F5DB(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x423E8DE37D934D89(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(bParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_51(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		bVar0 = func_48(bParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_57(bParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_56(bParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0x10FAB35428CCC9D7() && unk_0x9F47B058362C84B5(bParam0) == unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3, 0);
			}
			uParam1->f_60 = func_52(754, iParam3, 0);
			uParam1->f_61 = func_52(755, iParam3, 0);
		}
		if (unk_0x10FAB35428CCC9D7() && bParam0 == unk_0xD80958FC74E988A6())
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3, 0);
			}
		}
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_53(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1574918;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_48(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = unk_0x898CC20EA75BACD8(bParam0, iParam1);
		*uParam3 = unk_0xE131A28626F81AB2(bParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (unk_0xF33BDFE19B309B19(bParam0) && unk_0x451294E859ECC018(bParam0) != -1)
				{
					*uParam2 = unk_0x451294E859ECC018(bParam0);
					*uParam3 = unk_0x9D728C1E12BF5518(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_57(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_48(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = unk_0x67F3780DD425D4FC(bParam0, iParam1);
		*uParam3 = unk_0x04A355E041E004E6(bParam0, iParam1);
		*uParam4 = unk_0xE3DD5F2A84B42281(bParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_59()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_49(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_48(unk_0xD80958FC74E988A6());
			if (func_39(iVar0) && (!func_60(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_39(Global_113386.f_2363.f_539.f_4321))
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

bool func_60(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_61(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = func_48(bParam0);
	if (func_39(bVar0) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (bParam0 == unk_0xD80958FC74E988A6())
		{
			func_62(bParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] = unk_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xA48931185F0536FE();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6E9C742F340CE5A2(unk_0x4F8644AF03D0E0D6(), &bVar3);
			if (bVar0 == 0)
			{
				unk_0xB3271D7AB655B441(joaat("sp0_parachute_current_tint"), bVar3, true);
			}
			else if (bVar0 == 1)
			{
				unk_0xB3271D7AB655B441(joaat("sp1_parachute_current_tint"), bVar3, true);
			}
			else if (bVar0 == 2)
			{
				unk_0xB3271D7AB655B441(joaat("sp2_parachute_current_tint"), bVar3, true);
			}
		}
	}
}

void func_62(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xEFFED78E9011134D(bParam0, func_67(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x015A522136D7F951(bParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x2B9EEDC07BD06B9F(bParam0, Var4.f_0);
					Var4.f_4 = unk_0xA2C9AC24B4061285(bParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(bParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_65(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC593212475FAE340(bParam0, Var4.f_0, iVar2))
						{
							unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_65(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_64(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0xD4D7B033C3AA243C(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x015A522136D7F951(bParam0, Var4.f_0);
					if (unk_0x8DECB02F88F428BC(bParam0, Var4.f_0, false))
					{
						Var4.f_3 = unk_0x2B9EEDC07BD06B9F(bParam0, Var4.f_0);
						Var4.f_4 = unk_0xA2C9AC24B4061285(bParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(bParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, bVar1, &Var8))
						{
							if (!func_63(Var8.f_3))
							{
								if (unk_0xC593212475FAE340(bParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8DECB02F88F428BC(bParam0, Var4.f_0, false))
					{
						Var4.f_0 = false;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case -610080759:
			case 1853742572:
			case -774507221:
				return 1;
				break;
			}
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < unk_0x405425358A7D61FE(iVar1))
					{
						if (unk_0x6CF598A2957C2BF8(iVar1, bVar2, &Var5))
						{
							if (!func_63(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE47635F352DA367();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x79923CD21BECE14E(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_68(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_48(bParam0);
	if (func_39(bVar0) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		Global_113386.f_2363.f_539.f_294[bVar0] = unk_0x9483AF821605B1D8(bParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	
	*uParam0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	uParam0->f_3 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
	uParam0->f_5 = unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6());
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		uParam0->f_4 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x2C83A9DA6BFFC4F9(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0x05B7A89BD78797FC(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_73(&iVar0))
		{
			if (func_71(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			bVar3 = func_229();
			if (bVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (bVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (bVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_70(struct<3> Param0, bool bParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEEA5AC2EDA7C33E8(Param0))
	{
		iVar0 = unk_0x05B7A89BD78797FC(Param2, bParam1);
		if (!unk_0x26B0E73D7EAAF4D3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xEC4CF9FCB29A4424(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_72(*uParam1, 0f, 0f, 0f, 0);
}

bool func_72(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_73(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_96())
		{
			*uParam0 = func_79(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 6, -1, 0, 1, -1);
			if (func_78(*uParam0) && !func_74(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, 0, 1);
}

int func_75(int iParam0, int iParam1, bool bParam2)
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
		if (func_77() == 0)
		{
			return BitTest(func_52(func_76(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_76(int iParam0)
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

int func_77()
{
	return Global_31959;
}

int func_78(int iParam0)
{
	return func_75(iParam0, 5, 1);
}

int func_79(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_95(iVar0))
		{
			if (!bParam3 || func_94(iVar0))
			{
				fVar1 = unk_0xF1B760881820C952(Param0, func_80(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_80(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_91(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_90())
			{
				if (func_89(Global_1853185))
				{
					return func_82(2, 2);
				}
				else if (func_81(Global_1853185))
				{
					return func_82(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_81(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_82(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_90())
	{
		if (iParam1 == 3)
		{
			if (func_83(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_83(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_83(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_83(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_88(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_88(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_86(iParam0) };
	}
	else
	{
		Var2 = { func_85(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_84(Var3, -Var0.f_3.f_2) };
	Var3 = { func_84(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0x163E252DE035A133(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_84(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x0BADBFA3B172435F(bParam1);
	fVar2 = unk_0xD0FFB162F40A139C(bParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_85(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_86(int iParam0)
{
	return func_87(iParam0);
}

struct<6> func_87(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	return -1;
}

Vector3 func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_92() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_92()
{
	return func_93(unk_0x4F8644AF03D0E0D6());
}

int func_93(bool bParam0)
{
	return unk_0x53158863FCC0893A(Global_2689235[bParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_94(int iParam0)
{
	return func_75(iParam0, 0, 0);
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_96()
{
	return Global_100493.f_375 > 0;
}

var func_97()
{
	var uVar0;
	
	func_107(&uVar0, unk_0x494E97C2EF27C470());
	func_106(&uVar0, unk_0x13D2B8ADD79640F2());
	func_105(&uVar0, unk_0x25223CA6B4D20B7F());
	func_100(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_99(&uVar0, unk_0xBBC72712E80257A1());
	func_98(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_98(var uParam0, int iParam1)
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

void func_99(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_100(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (bParam1 < 1 || bParam1 > func_101(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_101(int iParam0, int iParam1)
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

var func_102(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_103(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_104(bool bParam0)
{
	return (bParam0 && 15);
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_107(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

void func_108(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_110())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(9, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || func_109())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(9, &cVar1);
	}
}

bool func_109()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_110()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_111(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xCA042B6957743895(&Global_97511))
	{
		unk_0x7C4BB33A8CED7324(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xC19A2925C34D2231(sParam0, iParam1, iParam2, func_219(0));
}

struct<2> func_112(int iParam0)
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

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_115(int iParam0)
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

int func_116(int* iParam0)
{
	int iVar0;
	
	if (func_146(&(iParam0->f_1)))
	{
		if (!unk_0xCA042B6957743895(&(iParam0->f_9)))
		{
			func_136(1);
			func_134(iParam0, 1, func_135(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_133(*iParam0))
			{
				while (!unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					func_193();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_117(*iParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(iParam0->f_1), iParam0, 61, 51000);
		unk_0xC90D2DCACD56184C(&(iParam0->f_1));
		if (unk_0xC59F528E9AB9F339())
		{
			func_375("Initial cutscene loaded and passing to RC mission.");
			unk_0x8D9DF6ECA8768583(iVar0);
		}
		else
		{
			func_375("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x440AF51A3462B86F();
		}
		return 1;
	}
	return 0;
}

void func_117(int iParam0)
{
	struct<2> Var0;
	
	func_132();
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 250, false);
	}
	if (func_131(iParam0))
	{
		unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), false);
	}
	unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
	unk_0x2A179DF17CCF04CD(false, true);
	unk_0x2A179DF17CCF04CD(3, true);
	unk_0x2A179DF17CCF04CD(2, true);
	if (Global_44238 == 1)
	{
		if (func_129(unk_0xD80958FC74E988A6()))
		{
			func_120(unk_0xD80958FC74E988A6());
		}
	}
	if (!func_210())
	{
		if (iParam0 < 63)
		{
			func_118(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x5F28ECF5FC84772F(true, &Var0);
		}
	}
}

void func_118(int iParam0)
{
	if (iParam0 < 63)
	{
		func_119();
		Global_78574 = iParam0;
		Global_78573 = 0;
		Global_78576 = 7;
	}
}

void func_119()
{
	if (Global_78573 != 6)
	{
	}
	if (Global_78578)
	{
		unk_0x450930E616475D0D(15);
		Global_78578 = 0;
		Global_23150.f_8808 = 0;
	}
	Global_78573 = 6;
	Global_78575 = -1;
	Global_78574 = -1;
}

void func_120(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return;
	}
	iVar0 = func_128(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_122(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	func_124(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_128(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_129(bool bParam0)
{
	if (func_130(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_130(bool bParam0)
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

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_132()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xE80492A9AC099A93(&Global_8136, 25);
	unk_0x933D6A9EEC1BACD0(&Global_8137, 11);
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_134(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_130(uParam0->f_28[iVar0]))
		{
			unk_0xFAEE099C6F890BB8(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_130(uParam0->f_35[iVar0]))
		{
			unk_0xFAEE099C6F890BB8(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_130(uParam0->f_41[iVar0]))
		{
			unk_0xFAEE099C6F890BB8(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), bParam1);
		if (bParam2)
		{
			unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_136(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA5EDC40EF369B48D();
	if (!unk_0x424D4687FA1E5652(bVar0))
	{
		if (bParam0)
		{
		}
		unk_0x8D32347D6D4C40A2(bVar0, bParam0, 16);
		unk_0x8D32347D6D4C40A2(bVar0, bParam0, 32);
	}
	func_137(1, 1, 0, 0, 0, 0, 0);
}

void func_137(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_145(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_144())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_143(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_145(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_143(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_141(unk_0x4F8644AF03D0E0D6())) && !func_139(unk_0x4F8644AF03D0E0D6(), 0)) && !func_138()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_141(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_138()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_139(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_140(-1, 0) == 8;
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

int func_140(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_141(bool bParam0)
{
	if (func_139(bParam0, 0))
	{
		return 1;
	}
	if (func_142())
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

bool func_142()
{
	return BitTest(Global_2621446, 3);
}

int func_143(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

int func_144()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0)
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

int func_146(bool bParam0)
{
	if (!unk_0xCA042B6957743895(bParam0))
	{
		unk_0x6EB5F71AA68F2E8E(bParam0);
		while (!unk_0xE6CC9F3BA0FB9EF1(bParam0))
		{
			unk_0x6EB5F71AA68F2E8E(bParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_375("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_147()
{
	Global_20471 = 0;
	func_148();
}

void func_148()
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

int func_149()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_78319)
	{
		func_375("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_113(*uParam0, &Var0);
	if ((func_192(*uParam0) || func_190(*uParam0)) || Global_78564 == 1)
	{
		return 1;
	}
	if (!unk_0xC5042CC6F5E3D450())
	{
		func_375("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_182(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_181(uParam0->f_28[0]);
		}
		func_375("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_161(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_161(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_158(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_157(uParam0);
			}
			else
			{
				func_155(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_158(uParam0, 0, 1))
		{
			func_155(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_158(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_158(uParam0, 1, 0))
		{
			func_155(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_158(uParam0, 0, 0))
		{
			func_155(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_130(uParam0->f_35[0]))
		{
			if (!unk_0x20B60995556D004F(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0xAB0F816885B0E483(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_375("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_229()))
		{
			func_375("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_154(&(uParam0->f_48)) && bParam1)
	{
		func_151(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_151(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_130(bParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_154(uParam1))
				{
					if (unk_0xD031A9162D01088C(*uParam1))
					{
						unk_0xAAA34F8A7CB32098(bParam0);
						if (iParam2 != 21)
						{
							if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0xEA47FE3719165B94(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, false, false, false);
							}
							else
							{
								unk_0xE8854A4326B9E12B(&iVar0);
								if (func_153(uParam1))
								{
									unk_0x83CDB10EA29B370B(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, false);
								}
								else
								{
									unk_0x83CDB10EA29B370B(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, false);
								}
								unk_0x83CDB10EA29B370B(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, false);
								unk_0x39E72BC99E6360CB(iVar0);
								unk_0x5ABA3986D90D8A3B(bParam0, iVar0);
								unk_0x3841422E9C488D8C(&iVar0);
							}
						}
						else
						{
							unk_0x83CDB10EA29B370B(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_153(uParam1) || !unk_0x1F0B79228E461EC9(bParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_152(iParam2) && !unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 25f))
					{
						unk_0x5AD23D40115353AC(bParam0, unk_0xD80958FC74E988A6(), false);
						uParam1->f_3 = 5;
					}
					else if ((func_153(uParam1) && uParam1->f_4 == 0) && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xE8854A4326B9E12B(&iVar1);
				if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0xEA47FE3719165B94(false, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, false, false, false, false);
					unk_0xEA47FE3719165B94(false, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, false, false, false);
				}
				else
				{
					unk_0x83CDB10EA29B370B(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0f, 2, false);
					unk_0x83CDB10EA29B370B(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, false);
				}
				unk_0x39E72BC99E6360CB(iVar1);
				unk_0x5ABA3986D90D8A3B(bParam0, iVar1);
				unk_0x3841422E9C488D8C(&iVar1);
				uParam1->f_4 = 1;
				if (func_152(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_152(iParam2) || unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 10f))
				{
					if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0xEA47FE3719165B94(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, false, false, false);
					}
					else
					{
						unk_0x83CDB10EA29B370B(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, false);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_152(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0)
{
	if (unk_0xCA042B6957743895(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_154(var uParam0)
{
	if (unk_0xCA042B6957743895(*uParam0) || unk_0xCA042B6957743895(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_156(&(uParam0->f_41[1]));
		func_156(&(uParam0->f_41[2]));
	}
	if (func_130(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_129(uParam0->f_28[iVar0]))
			{
				if (!unk_0x997ABD671D25CA0B(uParam0->f_28[iVar0], false))
				{
					unk_0x1A9205C1B9EE827F(uParam0->f_28[iVar0], true, false);
					unk_0x428CA6DBD1094446(uParam0->f_28[0], false);
				}
				unk_0x971D38760FBC02EF(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_130(uParam0->f_41[0]))
					{
						unk_0x1A9205C1B9EE827F(uParam0->f_41[0], true, false);
						unk_0x428CA6DBD1094446(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_181(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0xD3BD40951412FEF6("rcmcollect_paperleadinout@");
						while (!unk_0xD031A9162D01088C("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xE8854A4326B9E12B(&iVar1);
						unk_0xEA47FE3719165B94(false, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, false, false, false, false);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(uParam0->f_28[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
						break;
					
					case 0:
					case 1:
						unk_0xD3BD40951412FEF6("rcmabigail");
						while (!unk_0xD031A9162D01088C("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xE8854A4326B9E12B(&iVar1);
						unk_0xEA47FE3719165B94(false, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, false, false, false, false);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(uParam0->f_28[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
						break;
					
					case 32:
						unk_0xD3BD40951412FEF6("rcmminute1");
						while (!unk_0xD031A9162D01088C("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xE8854A4326B9E12B(&iVar1);
						if (iVar0 == 0)
						{
							unk_0xEA47FE3719165B94(false, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, false, false, false, false);
						}
						else
						{
							unk_0xEA47FE3719165B94(false, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, false, false, false, false);
						}
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(uParam0->f_28[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
						break;
					
					case 24:
						unk_0xD3BD40951412FEF6("special_ped@hao@base");
						while (!unk_0xD031A9162D01088C("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xE8854A4326B9E12B(&iVar1);
						unk_0xEA47FE3719165B94(false, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, false, false, false, false);
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(uParam0->f_28[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
						break;
					
					default:
						unk_0x176CECF6F920D707(uParam0->f_28[iVar0]);
						unk_0x22B0D0E37CCB840D(uParam0->f_28[iVar0], unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_156(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0xB1632E9A5F988D11(*bParam0))
		{
			unk_0x961AC54BF0613F5D(*bParam0, true, true);
		}
		unk_0x539E0AE3E6634B9F(bParam0);
	}
}

void func_157(var uParam0)
{
	int iVar0;
	
	if (func_130(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_129(uParam0->f_28[iVar0]))
			{
				unk_0x9F7794730795E019(uParam0->f_28[iVar0], 1, false);
				unk_0x9F8AA94D6D97DBF4(uParam0->f_28[iVar0], false);
				unk_0x971D38760FBC02EF(uParam0->f_28[iVar0], true);
				unk_0xF166E48407BAC484(uParam0->f_28[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x2595DD4236549CE3(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_158(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_129(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_35[iVar0]))
			{
				if (unk_0x5F9532F3B5CC2551(uParam0->f_35[iVar0], false))
				{
					func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0x4C241E39B23DF959(uParam0->f_35[iVar0], false))
				{
					func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0xC86D67D52A707CF8(uParam0->f_35[iVar0], unk_0xD80958FC74E988A6(), false))
				{
					func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0xEEF059FAD016D209(uParam0->f_35[iVar0]) < 850)
				{
					func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (unk_0x17FFC1B2BA35A494(uParam0->f_35[iVar0], unk_0xD80958FC74E988A6()) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 5f)
						{
							func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						bVar2 = unk_0xB6997A7EB3F5C8C0();
						if (func_160(bVar2))
						{
							if (unk_0x9F47B058362C84B5(bVar2) == joaat("towtruck") || unk_0x9F47B058362C84B5(bVar2) == joaat("towtruck2"))
							{
								if (func_160(uParam0->f_35[iVar0]))
								{
									if (unk_0x146DF9EC4C4B9FD4(bVar2, uParam0->f_35[iVar0]))
									{
										func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						bVar3 = unk_0xB6997A7EB3F5C8C0();
						if (func_160(bVar3))
						{
							if (unk_0x17FFC1B2BA35A494(uParam0->f_35[iVar0], bVar3) && unk_0xD5037BA82E12416F(bVar3) > 6f)
							{
								func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_159(unk_0xD80958FC74E988A6(), uParam0->f_35[iVar0]))
							{
								func_375("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_159(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam1, false))
		{
			bVar0 = unk_0x6094AD011A2EA87D(bParam0);
			if (bVar0 == bParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160(bool bParam0)
{
	if (func_130(bParam0))
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

int func_161(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_129(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_28[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_28[iVar0]))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							if (func_149())
							{
								func_147();
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x605F5A140F202491(uParam0->f_28[iVar0]) || unk_0xDFD5033FDBA0A9C8(uParam0->f_28[iVar0])) || unk_0x95EB9964FF5C5C65(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_155(uParam0);
						}
						else
						{
							func_157(uParam0);
						}
						func_375("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x47E4E977581C5B55(uParam0->f_28[iVar0]))
					{
						if (unk_0x751B70C3D034E187(uParam0->f_28[iVar0], unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_180(*uParam0))
					{
						if (!func_204(*uParam0))
						{
							if (func_175(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_155(uParam0);
								}
								else
								{
									func_157(uParam0);
								}
								func_375("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(uParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_163(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_162(*uParam0))
					{
						if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(uParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
						{
							if (iParam2 == 0)
							{
								func_155(uParam0);
							}
							else
							{
								func_157(uParam0);
							}
							func_375("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_375("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_130(uParam0->f_41[0]))
						{
							unk_0x1A9205C1B9EE827F(uParam0->f_41[0], true, false);
							unk_0x428CA6DBD1094446(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_163(bool bParam0, float fParam1)
{
	float fVar0;
	
	if (func_130(unk_0xD80958FC74E988A6()) && func_130(bParam0))
	{
		if (func_174(bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
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
				if (func_164(bParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_164(bool bParam0, float fParam1)
{
	return func_165(bParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

bool func_165(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_173(bParam0, bParam1);
	if (!func_130(bParam0) || !func_130(bParam1))
	{
		if (iVar2 != -1)
		{
			func_172(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_169(bParam0, bParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_168();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = bParam0;
		Local_37[iVar2 /*4*/].f_2 = bParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_166(&(Local_37[iVar2 /*4*/]), Var1, bParam1, &(Local_37[iVar2 /*4*/].f_3), bParam0, bParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_166(var uParam0, struct<3> Param1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_130(bParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_167(bParam2, bParam5) };
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
		func_130(bVar3);
		if (unk_0x04A2A40C73395041(bVar3) == bParam2)
		{
			if (bLocal_38)
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
		func_130(bVar3);
		if (unk_0x997ABD671D25CA0B(bParam2, false))
		{
			if (unk_0x4B53F92932ADFAC0(bVar3) == unk_0x9A9112A0FE9A4713(bParam2, false))
			{
				if (bLocal_38)
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

Vector3 func_167(bool bParam0, bool bParam1)
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

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_169(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_171(unk_0x3FEF770D40960D5A(bParam1, true) - unk_0x3FEF770D40960D5A(bParam0, true)) };
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
		Var1 = { func_171(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_170(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_170(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_171(struct<3> Param0)
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

void func_172(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(bool bParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

int func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_130(unk_0xD80958FC74E988A6()) && func_130(bParam0))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar2, true);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_179(bParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_176(bParam0, fVar1, bParam3, bParam4))
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
				if (func_179(bParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_176(bParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_176(bool bParam0, float fParam1, bool bParam2, bool bParam3)
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
				if (func_177(bParam0, fParam1))
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
			if (func_177(bParam0, fParam1))
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

int func_177(bool bParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || unk_0x82FDE6A57EE4EE44(bParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_178(bParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_178(bool bParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_171(Param1 - unk_0x3FEF770D40960D5A(bParam0, true)) };
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
		Var1 = { func_171(unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_170(Var1, Var0);
	if (fVar2 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_179(bool bParam0, bool bParam1, float fParam2, float fParam3)
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

int func_180(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_181(bool bParam0)
{
	int iVar0;
	
	if (func_130(unk_0xD80958FC74E988A6()) && func_130(bParam0))
	{
		unk_0xD3BD40951412FEF6("rcmextreme3");
		while (!unk_0xD031A9162D01088C("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE8854A4326B9E12B(&iVar0);
		unk_0xEA47FE3719165B94(false, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, false, false, false, false);
		unk_0x90D2156198831D69(0, true);
		unk_0xB33E291AFA6BD03A(false, 64.6f, -737.8f, 44.2f);
		unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 10000f, -1, false, false);
		unk_0x39E72BC99E6360CB(iVar0);
		unk_0x5ABA3986D90D8A3B(bParam0, iVar0);
		unk_0x3841422E9C488D8C(&iVar0);
	}
}

int func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_192(iParam0))
	{
		return 0;
	}
	if (!func_186(4))
	{
		if (func_190(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_185() && !func_184())
	{
		return 1;
	}
	if (!func_183(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_184()
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

int func_185()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_186(int iParam0)
{
	return func_187(iParam0, Global_43052);
}

int func_187(int iParam0, int iParam1)
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

int func_188()
{
	return func_189(unk_0x442E0A7EDE4A738A(), 0);
}

int func_189(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = unk_0xD24D37CC275948CC(bParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_113(iVar0, &bVar1);
		if (unk_0xD24D37CC275948CC(bVar1) == bVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_190(int iParam0)
{
	if ((func_191() && Global_100441.f_11 == 6) && iParam0 == func_189(&(Global_100441.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

int func_192(int iParam0)
{
	if (func_219(0))
	{
		if (Global_78565.f_1 == 7)
		{
			if (Global_78565 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_193()
{
	func_198(0);
	func_197();
	func_194();
}

void func_194()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (func_195(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) != 1)
				{
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
				}
			}
		}
	}
}

int func_195(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_196(bParam0);
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

void func_196(bool bParam0)
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

void func_197()
{
	unk_0xFE99B66D079CF6BC(0, 21, true);
	unk_0xFE99B66D079CF6BC(0, 37, true);
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0xFE99B66D079CF6BC(0, 141, true);
	unk_0xFE99B66D079CF6BC(0, 140, true);
	unk_0xFE99B66D079CF6BC(0, 24, true);
	unk_0xFE99B66D079CF6BC(0, 257, true);
	unk_0xFE99B66D079CF6BC(0, 22, true);
	unk_0xFE99B66D079CF6BC(0, 23, true);
}

void func_198(int iParam0)
{
	if (func_203())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_202(0))
		{
			func_199(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_199(int iParam0)
{
	if (func_203())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_201())
		{
			func_200(1, 1);
		}
		else
		{
			func_200(0, 0);
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
	if (!func_144())
	{
		Global_20266.f_1 = 3;
	}
}

void func_200(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_202(0))
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

bool func_201()
{
	return BitTest(Global_1958711, 5);
}

int func_202(int iParam0)
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

bool func_203()
{
	return BitTest(Global_1958711, 19);
}

int func_204(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_207(&(Global_112473[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_206(iParam0);
	return 1;
}

void func_206(int iParam0)
{
	Global_112473[iParam0 /*10*/].f_4 = 1;
	Global_112473[iParam0 /*10*/].f_5 = 0;
	Global_112473[iParam0 /*10*/].f_6 = 0;
	Global_112473[iParam0 /*10*/] = 0;
}

int func_207(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_209(0))
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
		if (!func_186(iParam2))
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
			func_208(uParam0, iParam4);
		}
	}
	return 2;
}

void func_208(var uParam0, int iParam1)
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

int func_209(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_186(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_210()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	bool bVar0;
	
	if (Global_78319)
	{
		func_375("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !func_219(1))
	{
		func_375("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_212(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		func_375("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			func_113(iParam0, &bVar0);
			if (unk_0x0C515FAB3FF9EA92(&(Global_100441.f_3), bVar0))
			{
				func_375("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		func_375("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	var uVar0;
	
	func_113(iParam0, &uVar0);
	if (!func_186(4))
	{
		if (func_190(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_185() && !func_184())
	{
		return 0;
	}
	if (func_218(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_192(iParam0))
	{
		if (!func_217(iParam0))
		{
			return 0;
		}
		if (!func_216(iParam0))
		{
			return 0;
		}
		if (func_215(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_213(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_213(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_214(iParam0, &bVar1);
		iVar2 = unk_0x05B7A89BD78797FC(Global_95479[iParam0 /*10*/].f_3, &bVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_214(int iParam0, bool bParam1)
{
	StringCopy(bParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(bParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(bParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(bParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x88A741E44A2B3495("TrevorsTrailer"))
			{
				StringCopy(bParam1, "v_trailer", 32);
			}
			else if (unk_0x88A741E44A2B3495("TrevorsTrailerTidy"))
			{
				StringCopy(bParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x88A741E44A2B3495("TrevorsTrailerTrash"))
			{
				StringCopy(bParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(bParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(bParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(bParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x0C515FAB3FF9EA92(bParam1, "");
}

int func_215(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
}

int func_216(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 2);
}

int func_217(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 0);
}

int func_218(int iParam0)
{
	if (func_183(iParam0))
	{
		return 0;
	}
	else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_219(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_222()
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_227(unk_0xD80958FC74E988A6()))
	{
		return bVar0;
	}
	if (Global_112473[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		if (iLocal_243)
		{
			unk_0x8DFCED7A656F8802(true);
			func_226("RAMP_HELP_CRIM", -1);
			iLocal_243 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (iLocal_242)
		{
			unk_0x8DFCED7A656F8802(true);
			func_226("RAMP_HELP_FOOT", -1);
			iLocal_242 = 0;
		}
		bVar0 = true;
	}
	else if ((func_225(0) || unk_0xD9D2CFFF49FAB35F()) || func_224())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_225(0))
			{
			}
			else if (unk_0xD9D2CFFF49FAB35F())
			{
			}
			else if (func_224())
			{
			}
			unk_0x8DFCED7A656F8802(true);
			iLocal_244 = 0;
		}
		bVar0 = true;
	}
	else if (func_359(108))
	{
		if (!iLocal_244)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0x8DFCED7A656F8802(true);
				func_223("RAMP_HELP_TRIG");
			}
			iLocal_244 = 1;
		}
		bVar0 = !unk_0xF3A21BCD95725A4A(2, 51);
	}
	return bVar0;
}

void func_223(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

int func_224()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

bool func_225(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

void func_226(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_227(bool bParam0)
{
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(bParam0, false);
}

int func_228(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (!func_227(unk_0xD80958FC74E988A6()))
	{
		return -1;
	}
	Var2 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_32338[(iLocal_239 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0xF1B760881820C952(Var2, Var1, true) <= fParam0 && unk_0x73D57CFFDD12C355((Var2.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_229()
{
	func_59();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_230(int* iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1[5];
	int iVar2;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_356(&iVar1, iParam0, Param1, 5f))
	{
		func_375(" Didn't know which RC To Launch");
		func_360(iParam0, 1);
	}
	if (!func_211(*iParam0))
	{
		func_375(" RC Can't Launch");
		func_360(iParam0, 1);
	}
	if (func_355(*iParam0))
	{
		while (true)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (func_354(*iParam0))
			{
				func_360(iParam0, 1);
			}
		}
	}
	func_276(iParam0);
	unk_0xA56F01F3765B93A0(Param1, iParam0->f_15, true, false, false, false);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*iParam0 == 52 || *iParam0 == 53)
		{
			if (func_130(iParam0->f_28[0]))
			{
				if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(iParam0->f_28[0], true), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < iParam0->f_41)
						{
							if (unk_0x7239B21A38F536BA(iParam0->f_41[iVar2]))
							{
								if ((func_130(iParam0->f_28[0]) && unk_0xEFBE71898A993728(iParam0->f_41[iVar2], iParam0->f_28[0])) || (func_130(iParam0->f_28[1]) && unk_0xEFBE71898A993728(iParam0->f_41[iVar2], iParam0->f_28[1])))
								{
									unk_0x539E0AE3E6634B9F(&(iParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0xAE99FB955581844A(iParam0->f_28[0], 100, 500, 0, true, true, false);
					unk_0x697157CED63F18D4(iParam0->f_28[0], 1000, true, 0);
					if (func_130(iParam0->f_28[1]))
					{
						unk_0xAE99FB955581844A(iParam0->f_28[1], 100, 500, 0, true, true, false);
						unk_0x697157CED63F18D4(iParam0->f_28[1], 1000, true, 0);
					}
					func_375("Sitting Rampage attacked with explosives, cleaning up");
					func_360(iParam0, 1);
				}
			}
			if (func_130(iParam0->f_28[1]))
			{
				if (unk_0xAB0F816885B0E483(-1, unk_0x3FEF770D40960D5A(iParam0->f_28[1], true), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < iParam0->f_41)
						{
							if (unk_0x7239B21A38F536BA(iParam0->f_41[iVar2]))
							{
								if ((func_130(iParam0->f_28[0]) && unk_0xEFBE71898A993728(iParam0->f_41[iVar2], iParam0->f_28[0])) || (func_130(iParam0->f_28[1]) && unk_0xEFBE71898A993728(iParam0->f_41[iVar2], iParam0->f_28[1])))
								{
									unk_0x539E0AE3E6634B9F(&(iParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0xAE99FB955581844A(iParam0->f_28[1], 100, 500, 0, true, true, false);
					unk_0x697157CED63F18D4(iParam0->f_28[1], 1000, true, 0);
					if (func_130(iParam0->f_28[0]))
					{
						unk_0xAE99FB955581844A(iParam0->f_28[0], 100, 500, 0, true, true, false);
						unk_0x697157CED63F18D4(iParam0->f_28[0], 1000, true, 0);
					}
					func_375("Sitting Rampage attacked with explosives, cleaning up");
					func_360(iParam0, 1);
				}
			}
		}
		if (func_275(iParam0))
		{
			func_274(iParam0);
			func_375(" RC combat happening in area, tell peds to flee");
			func_155(iParam0);
			func_360(iParam0, 1);
		}
		if (!func_150(iParam0, 1))
		{
			func_375(" RC Is Not Fine And In Range");
			func_360(iParam0, 1);
		}
		if (func_273(52))
		{
			if (unk_0x367A09DED4E05B99("Rampage1"))
			{
				func_375(" Turning Off Scenario Group For Rampage 1");
				unk_0x02C8E5B49848664E("Rampage1", false);
			}
		}
		func_272(*iParam0);
		func_264(&iLocal_240, &(iParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_240 != -1)
		{
			func_263(iParam0, &uLocal_245);
			if (unk_0xC59F528E9AB9F339())
			{
				func_375(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_249 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		if ((!(*iParam0 == 52 && Local_249.f_2 > 34f) && !(*iParam0 == 53 && Local_249.f_2 > 71f)) && !(*iParam0 == 54 && Local_249.f_2 > 30f))
		{
			if (func_251(iParam0, 0))
			{
				if (*iParam0 == 53)
				{
					if (func_248(iParam0))
					{
						func_375(" Trigger Conditions Met");
						func_193();
						if (!func_5(iParam0))
						{
							func_375(" RC Can't Launch");
							func_360(iParam0, 1);
						}
						func_375(" RC Launcher Waiting To Terminate");
						if (func_3(iParam0))
						{
							func_375(" Ready To Terminate");
							func_360(iParam0, 0);
						}
					}
				}
				else if (func_247(iParam0))
				{
					func_375(" Trigger Conditions Met");
					func_193();
					if (!func_5(iParam0))
					{
						func_375(" RC Can't Launch");
						func_360(iParam0, 1);
					}
					func_375(" RC Launcher Waiting To Terminate");
					if (func_3(iParam0))
					{
						func_375(" Ready To Terminate");
						func_360(iParam0, 0);
					}
				}
			}
			else
			{
				if (*iParam0 == 53)
				{
					func_231(iParam0);
				}
				if (unk_0xE520FF1AD2785B40())
				{
					iLocal_69 = -1;
					unk_0xF46C581C61718916(false);
					unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
				}
			}
		}
	}
}

void func_231(int* iParam0)
{
	bool bVar0;
	
	bVar0 = "misstrvram_2";
	switch (iLocal_70)
	{
		case 0:
			unk_0xD3BD40951412FEF6(bVar0);
			if (unk_0xD031A9162D01088C(bVar0))
			{
				iLocal_70++;
			}
			break;
		
		case 1:
			if (func_130(iParam0->f_28[0]))
			{
				if (func_246(iParam0->f_28[0], unk_0xD80958FC74E988A6(), 1) < 30f && unk_0xE659E47AF827484B(iParam0->f_28[0]))
				{
					func_245(&uLocal_72, 0, iParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_70++;
				}
			}
			break;
		
		case 2:
			iLocal_71[0] = unk_0x8C18E0F9080ADD73(Local_66, Local_67, 2);
			if (func_130(iParam0->f_28[0]))
			{
				func_232(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0xEEA929141F699854(iParam0->f_28[0], iLocal_71[0], bVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1000f, 0);
			}
			unk_0xD9A897A4C6C2974F(iLocal_71[0], false);
			unk_0x394B9CD12435C981(iLocal_71[0], true);
			iLocal_70++;
			break;
		
		case 3:
			if (unk_0x25D39B935A038A26(iLocal_71[0]))
			{
				if (unk_0xE4A310B1D7FA73CC(iLocal_71[0]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 4:
			iLocal_71[1] = unk_0x8C18E0F9080ADD73(Local_66, Local_67, 2);
			if (func_130(iParam0->f_28[0]))
			{
				func_232(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0xEEA929141F699854(iParam0->f_28[0], iLocal_71[1], bVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1000f, 0);
			}
			unk_0xD9A897A4C6C2974F(iLocal_71[1], false);
			unk_0x394B9CD12435C981(iLocal_71[1], true);
			iLocal_70++;
			break;
		
		case 5:
			if (unk_0x25D39B935A038A26(iLocal_71[1]))
			{
				if (unk_0xE4A310B1D7FA73CC(iLocal_71[1]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 6:
			iLocal_71[2] = unk_0x8C18E0F9080ADD73(Local_66, Local_67, 2);
			if (func_130(iParam0->f_28[0]))
			{
				unk_0xEEA929141F699854(iParam0->f_28[0], iLocal_71[2], bVar0, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
			}
			unk_0xD9A897A4C6C2974F(iLocal_71[2], true);
			unk_0x394B9CD12435C981(iLocal_71[2], false);
			iLocal_70++;
			break;
		
		case 7:
			break;
	}
}

bool func_232(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_244(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_233(sParam2, iParam4, 0);
}

int func_233(char* sParam0, int iParam1, bool bParam2)
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
					func_148();
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
		if (func_243(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_242();
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
				func_241();
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
				if (func_240())
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
			if (func_144())
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
			func_239();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_238();
		func_234();
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
		func_148();
	}
	return 0;
}

void func_234()
{
	if (!func_235())
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

int func_235()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_90())
	{
		return 0;
	}
	if (func_236(unk_0x4F8644AF03D0E0D6()))
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

bool func_236(bool bParam0)
{
	return func_237(bParam0, 20);
}

var func_237(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_238()
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

void func_239()
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

int func_240()
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

void func_241()
{
	if (func_60(14))
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
		Global_20266 = func_229();
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

void func_242()
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

bool func_243(int iParam0, int iParam1)
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

void func_244(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_245(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

float func_246(bool bParam0, bool bParam1, bool bParam2)
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

int func_247(int* iParam0)
{
	func_193();
	if (iLocal_69 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam0->f_28[1], true)) < 25f)
		{
			return 1;
		}
		switch (*iParam0)
		{
			case 52:
				unk_0x189E955A8313E298(iParam0->f_28[0], 0.1f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam0->f_28[0], -1, 0, 2);
				unk_0xE3433EADAAF7EE40(true);
				unk_0xD1F8363DFAD03848(-5f);
				unk_0x5D7B620DAE436138(0.1f);
				unk_0xC92717EF615B6704(0f);
				unk_0xF8BDBF3D573049A1(0.3f);
				unk_0x513403FB9C56211F(40f);
				break;
			
			case 54:
				unk_0x189E955A8313E298(iParam0->f_28[0], 0f, -0.1f, 0.9f, true, -1, 2500, 2000, 0);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam0->f_28[0], -1, 0, 2);
				unk_0xE3433EADAAF7EE40(true);
				unk_0xD1F8363DFAD03848(-10f);
				unk_0x5D7B620DAE436138(-0.9f);
				unk_0xC92717EF615B6704(0f);
				unk_0xF8BDBF3D573049A1(0.35f);
				unk_0x513403FB9C56211F(40f);
				break;
			
			case 55:
				unk_0x189E955A8313E298(iParam0->f_28[1], 0f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam0->f_28[1], -1, 0, 2);
				unk_0xE3433EADAAF7EE40(true);
				unk_0xD1F8363DFAD03848(-8f);
				unk_0x5D7B620DAE436138(-0.9f);
				unk_0xC92717EF615B6704(0.1f);
				unk_0xF8BDBF3D573049A1(0.35f);
				unk_0x513403FB9C56211F(40f);
				break;
			
			case 56:
				unk_0x189E955A8313E298(iParam0->f_28[1], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam0->f_28[1], -1, 0, 2);
				unk_0xE3433EADAAF7EE40(true);
				unk_0xD1F8363DFAD03848(-5f);
				unk_0x5D7B620DAE436138(0.15f);
				unk_0xC92717EF615B6704(0f);
				unk_0xF8BDBF3D573049A1(0.3f);
				unk_0x513403FB9C56211F(40f);
				break;
		}
		iLocal_69 = unk_0x9CD27B0045628463() + 2500;
	}
	else if (unk_0x9CD27B0045628463() > iLocal_69)
	{
		iLocal_69 = -1;
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	func_193();
	switch (iLocal_237)
	{
		case 0:
			if (func_130(uParam0->f_28[0]))
			{
				func_249();
				iLocal_237++;
			}
			break;
		
		case 1:
			if (func_130(uParam0->f_28[0]))
			{
				if (!func_149())
				{
					if (func_232(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						bLocal_238 = unk_0x8C18E0F9080ADD73(Local_66, Local_67, 2);
						unk_0xEEA929141F699854(uParam0->f_28[0], bLocal_238, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1000f, 0);
						unk_0x189E955A8313E298(uParam0->f_28[0], 0f, 0f, 0.5f, true, -1, 2500, 2000, 0);
						unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), uParam0->f_28[0], -1, 0, 2);
						unk_0xE3433EADAAF7EE40(true);
						unk_0xD1F8363DFAD03848(0f);
						unk_0x5D7B620DAE436138(0.1f);
						unk_0xC92717EF615B6704(0f);
						unk_0xF8BDBF3D573049A1(0.35f);
						unk_0x513403FB9C56211F(40f);
						iLocal_237++;
					}
				}
			}
			break;
		
		case 2:
			if (func_130(uParam0->f_28[0]))
			{
				if (!func_149())
				{
					iLocal_237++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_249()
{
	Global_20471 = 0;
	func_250();
}

void func_250()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_251(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, false, true, 0))
				{
					if (func_130(uParam0->f_28[0]))
					{
						if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_28[0], true), true) < 3f)
						{
							if (func_256(2))
							{
								if (func_255(uParam0->f_27))
								{
									func_254(uParam0->f_27, *uParam0);
									func_375("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_130(uParam0->f_28[0]))
				{
					if (func_253(uParam0))
					{
						if (func_256(2))
						{
							if (func_255(uParam0->f_27))
							{
								func_254(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, false, true, 0)) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, false, true, 0)) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, false, true, 0))
				{
					if (func_130(uParam0->f_28[0]))
					{
						if (func_253(uParam0))
						{
							if (func_256(2))
							{
								if (func_255(uParam0->f_27))
								{
									func_254(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, false, true, 0))
				{
					if (func_130(uParam0->f_28[0]))
					{
						if (func_253(uParam0))
						{
							if (func_256(2))
							{
								if (func_255(uParam0->f_27))
								{
									func_254(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_130(uParam0->f_28[0]))
			{
				if (func_253(uParam0))
				{
					if (func_256(2))
					{
						if (func_255(uParam0->f_27))
						{
							func_254(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_130(uParam0->f_35[0]))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), uParam0->f_35[0], false))
				{
					if (func_256(3))
					{
						func_254(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_252();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(uParam0->f_35[0]))
			{
				if (!unk_0x5F9532F3B5CC2551(uParam0->f_35[0], false))
				{
					if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_35[0], true), true) < uParam0->f_15)
					{
						if (func_256(2))
						{
							if (func_255(uParam0->f_27))
							{
								func_254(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), uParam0->f_17[0 /*3*/], true) < uParam0->f_15)
			{
				if (func_256(2))
				{
					if (func_255(uParam0->f_27))
					{
						func_254(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_256(2))
				{
					if (func_255(uParam0->f_27))
					{
						func_254(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (func_130(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						if (unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), joaat("towtruck")) || unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), joaat("towtruck2")))
						{
							if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), uParam0->f_35[0]))
							{
								if (func_256(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), joaat("cargobob")) || unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), joaat("cargobob2"))) || unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), joaat("cargobob3")))
						{
							if (unk_0x1821D91AD4B56108(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && unk_0xD40148F22E81A1D9(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), uParam0->f_35[0]))
							{
								if (func_256(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (unk_0x8517D4A6CA8513ED(unk_0xD80958FC74E988A6()) >= 2f)
				{
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, false, true, 0))
					{
						if (func_256(2))
						{
							if (func_255(uParam0->f_27))
							{
								func_254(uParam0->f_27, *uParam0);
								func_375("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, false, true, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, false, true, 0))
				{
					if (func_256(2))
					{
						if (func_255(1))
						{
							func_254(1, *uParam0);
							func_375("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, false, true, 0))
				{
					if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, false, true, 0))
					{
						if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, false, true, 0))
						{
							if (func_256(2))
							{
								if (func_255(uParam0->f_27))
								{
									func_254(uParam0->f_27, *uParam0);
									func_375("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, false, true, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, false, true, 0))
					{
						return 0;
					}
				}
				if (func_256(2))
				{
					if (func_255(uParam0->f_27))
					{
						func_254(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_252()
{
	func_30(&(Global_103950.f_2890), &Global_103950, 0, 1, 1, 0);
}

int func_253(var uParam0)
{
	float fVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_28[0], true), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_254(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_133(iParam1))
		{
			return;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			func_375("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				func_375("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x2497C4717C8B881E(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, true, false);
			}
			func_193();
		}
	}
}

int func_255(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				bVar0 = unk_0xB6997A7EB3F5C8C0();
				if (func_160(bVar0))
				{
					if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
					{
						if ((!unk_0x8BAD02F0368D9E14(bVar0) && !unk_0x886E37EC497200B6(bVar0)) && unk_0xD5037BA82E12416F(bVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x886E37EC497200B6(bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				bVar0 = func_229();
				if (!func_39(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_224()) || Global_112433) || Global_31962) || func_262()) || func_243(8, -1)) || func_96()) || func_261()) || func_260()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_224()) || Global_31962) || func_262()) || func_243(8, -1)) || func_260()) || func_96()) || func_261()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_224()) || Global_112433) || Global_31962) || func_262()) || func_243(8, -1)) || func_260()) || func_96()) || func_261()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_224()) || Global_112433) || Global_31962) || func_262()) || func_243(8, -1)) || func_96()) || func_261()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_224() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_243(8, -1)) || func_259()) || func_258()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_243(8, -1) || func_96()) || func_261()) || func_258()) || func_257())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_224()) || Global_31962) || func_262()) || func_243(8, -1)) || func_261()) || func_260()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_224()) || func_261()) || Global_112433) || Global_31962) || func_262()) || Global_44238) || func_243(8, -1)) || func_260()) || func_258()) || func_259()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_224()) || Global_112433) || Global_31962) || func_262()) || func_243(8, -1)) || func_260()) || func_258()) || func_96()) || func_261()) || func_259())
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

var func_257()
{
	return Global_100480.f_1;
}

int func_258()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_259()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_260()
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

bool func_261()
{
	return Global_100493.f_376 > 0;
}

var func_262()
{
	return Global_1575058;
}

void func_263(var uParam0, var uParam1)
{
	if (unk_0xB56BBBCC2955D9CB())
	{
		if (func_130(unk_0xD80958FC74E988A6()))
		{
			unk_0x2A56C06EBEF2B0D9("Trevor", unk_0xD80958FC74E988A6(), unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_130(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[0], uParam0->f_28[0], false);
				}
				if (func_130(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[1], uParam0->f_28[1], false);
				}
				break;
			
			case 53:
				if (func_130(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[0], uParam0->f_28[0], false);
				}
				break;
			
			case 54:
				if (func_130(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[0], uParam0->f_28[0], false);
					unk_0xBA01E7B6DEEFBBC9((*uParam1)[0], 8, true, false, false);
				}
				if (func_130(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[1], uParam0->f_28[1], false);
				}
				break;
			
			case 55:
				if (func_130(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[0], uParam0->f_28[0], false);
					unk_0xBA01E7B6DEEFBBC9((*uParam1)[0], 10, false, true, false);
				}
				if (func_130(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[1], uParam0->f_28[1], false);
					unk_0xBA01E7B6DEEFBBC9((*uParam1)[1], 10, true, false, false);
				}
				break;
			
			case 56:
				if (func_130(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[0], uParam0->f_28[0], false);
				}
				if (func_130(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x2A56C06EBEF2B0D9((*uParam1)[1], uParam0->f_28[1], false);
				}
				break;
			}
	}
}

void func_264(int iParam0, bool bParam1, struct<3> Param2)
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0xCA042B6957743895(bParam1))
		{
			if (Global_43052 == 17)
			{
				if (*iParam0 != -1)
				{
					func_270(iParam0);
				}
			}
			else if (func_269())
			{
				if (*iParam0 != -1)
				{
					func_270(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_268(unk_0xD80958FC74E988A6(), Param2, 1) <= 100f)
				{
					func_267(iParam0, 1);
				}
			}
			else
			{
				switch (func_266(*iParam0))
				{
					case 1:
						if (unk_0x0C515FAB3FF9EA92(bParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0xC23DE0E91C30B58C(bParam1, 14, 8);
						}
						else
						{
							unk_0x7A86743F475D9E09(bParam1, 8);
						}
						unk_0xF8155A7F03DDFC8E(2);
						func_265(*iParam0, 1);
						break;
					
					case 2:
						unk_0xC7272775B4DC786E(false);
						unk_0x440AF51A3462B86F();
						unk_0xF8155A7F03DDFC8E(0);
						func_265(*iParam0, 0);
						break;
				}
				if (func_268(unk_0xD80958FC74E988A6(), Param2, 1) > 120f)
				{
					func_270(iParam0);
				}
			}
		}
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_78315 == iParam0)
		{
			Global_78316 = iParam0;
		}
	}
	else if (Global_78316 == iParam0)
	{
		Global_78316 = -1;
	}
}

int func_266(int iParam0)
{
	if (Global_78315 == iParam0)
	{
		if (Global_78316 == -1)
		{
			if (Global_78314 < unk_0xFC8202EFC642E6F2())
			{
				return 1;
			}
		}
	}
	else if (Global_78316 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_267(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_78312 < 5)
	{
		Global_78301[Global_78312 /*2*/] = 0;
		Global_78301[Global_78312 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_78312)
			{
				if (Global_78301[iVar1 /*2*/] == Global_78301[Global_78312 /*2*/])
				{
					Global_78301[Global_78312 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_78301[Global_78312 /*2*/];
		Global_78312++;
		Global_78313 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_268(bool bParam0, struct<3> Param1, bool bParam2)
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

bool func_269()
{
	return Global_97750;
}

void func_270(int iParam0)
{
	unk_0xC7272775B4DC786E(false);
	unk_0x440AF51A3462B86F();
	func_271(iParam0);
}

void func_271(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_78316 == *iParam0)
	{
		func_265(*iParam0, 0);
	}
	if (Global_78315 == *iParam0)
	{
		Global_78315 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_78312)
	{
		if (Global_78301[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_78312 - 2))
	{
		Global_78301[iVar2 /*2*/] = Global_78301[iVar2 + 1 /*2*/];
		Global_78301[iVar2 /*2*/].f_1 = Global_78301[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_78301[(Global_78312 - 1) /*2*/] = -1;
	Global_78301[(Global_78312 - 1) /*2*/].f_1 = 3;
	Global_78312 = (Global_78312 - 1);
	Global_78313 = 1;
	Global_78314 = unk_0xFC8202EFC642E6F2();
	*iParam0 = -1;
}

void func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_112473[iParam0 /*10*/].f_1 = 1;
}

bool func_273(int iParam0)
{
	return Global_112473[iParam0 /*10*/].f_1;
}

void func_274(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_375(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x7239B21A38F536BA(uParam0->f_41[3]))
		{
			unk_0x428CA6DBD1094446(uParam0->f_41[3], true);
			unk_0x3AE22DEB5BA5A3E6(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x7239B21A38F536BA(uParam0->f_41[4]))
		{
			unk_0x428CA6DBD1094446(uParam0->f_41[4], true);
			unk_0x3AE22DEB5BA5A3E6(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_275(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0x5407B7288D0478B7(unk_0xD80958FC74E988A6()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_353(uParam0);
			iLocal_250 = func_352();
			break;
		
		case 53:
			func_346(uParam0);
			iLocal_250 = func_344();
			break;
		
		case 54:
			func_343(uParam0);
			break;
		
		case 55:
			func_342(uParam0);
			iLocal_250 = func_341();
			break;
		
		case 56:
			func_277(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_250 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_277(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = "misstvrram_5";
	bVar1 = joaat("s_m_y_marine_03");
	bVar2 = joaat("crusader");
	unk_0x963D27A58DF860AC(bVar1);
	unk_0x963D27A58DF860AC(bVar2);
	unk_0xD3BD40951412FEF6(bVar0);
	unk_0x5443438F033E29C3(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x98A4EB5D89A0C952(bVar1) || !unk_0x98A4EB5D89A0C952(bVar2)) || !unk_0xD031A9162D01088C(bVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_339(&(uParam0->f_28[0]), bVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[0]));
	unk_0x98EFA132A4117BE1(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xEA47FE3719165B94(uParam0->f_28[0], bVar0, "marines_idle_a", 8f, -8f, -1, 1, false, false, false, false);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 0, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 3, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 4, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 8, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 9, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 10, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 11, false, false, 0);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 0);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 1);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 2);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 3);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 4);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 5);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 6);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 7);
	unk_0x0943E5B8E078E76E(uParam0->f_28[0], 8);
	while (!func_339(&(uParam0->f_28[1]), bVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[1]));
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 0, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 3, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 4, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 8, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 9, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 10, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 11, false, false, 0);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 0);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 1);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 2);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 3);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 4);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 5);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 6);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 7);
	unk_0x0943E5B8E078E76E(uParam0->f_28[1], 8);
	unk_0x98EFA132A4117BE1(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xEA47FE3719165B94(uParam0->f_28[1], bVar0, "marines_idle_b", 8f, -8f, -1, 1, false, false, false, false);
	while (!func_337(&(uParam0->f_35[0]), bVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x49733E92263139D1(uParam0->f_35[0], 5f);
	func_336(&(uParam0->f_35[0]));
	unk_0x7EE3A3C5E4A40CC9(uParam0->f_35[0], true, false);
	unk_0x7EE3A3C5E4A40CC9(uParam0->f_35[0], true, true);
	unk_0x428CA6DBD1094446(uParam0->f_35[0], true);
	if (!func_278(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_335(-0.5f)))
	{
	}
	else
	{
		unk_0x1A9205C1B9EE827F(uParam0->f_41[0], false, false);
		unk_0x06843DA7060A026B(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, true, false, false, true);
		unk_0x8E2530AA8ADA980E(uParam0->f_41[0], func_335(-0.5f));
		unk_0x428CA6DBD1094446(uParam0->f_41[0], true);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0xE532F5D78798DAAB(bVar1);
	unk_0xE532F5D78798DAAB(bVar2);
}

int func_278(bool bParam0, bool bParam1, struct<3> Param2, bool bParam3)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		unk_0x539E0AE3E6634B9F(bParam0);
		*bParam0 = 0;
	}
	bVar0 = unk_0xF46CDC33180FDA94(bParam1);
	unk_0x963D27A58DF860AC(bVar0);
	iVar2 = unk_0x9CD27B0045628463() + 10000;
	while (unk_0x9CD27B0045628463() < iVar2)
	{
		if (unk_0x98A4EB5D89A0C952(bVar0))
		{
			*bParam0 = unk_0x9541D3CF0D398F36(bParam1, -1, Param2, true, 1f, false, 0, 1);
			unk_0xE532F5D78798DAAB(bVar0);
			if (func_334(&uVar1, bParam1, joaat("gun_root")))
			{
				if (unk_0x76A18844E743BF91(*bParam0, func_279(&uVar1, bParam1, joaat("gun_root"), 0)))
				{
					unk_0xF7D82B0D66777611(*bParam0, func_279(&uVar1, bParam1, joaat("gun_root"), 0));
				}
				else if (unk_0x76A18844E743BF91(*bParam0, func_279(&uVar1, bParam1, joaat("gun_root"), 1)))
				{
					unk_0xF7D82B0D66777611(*bParam0, func_279(&uVar1, bParam1, joaat("gun_root"), 1));
				}
			}
			if (unk_0x7239B21A38F536BA(*bParam0))
			{
				unk_0x06843DA7060A026B(*bParam0, Param2, true, false, false, true);
				unk_0x8E2530AA8ADA980E(*bParam0, bParam3);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE532F5D78798DAAB(bVar0);
	return 0;
}

int func_279(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	
	func_333(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar2 = 0;
	while (func_280(&Var0, bParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar2)
			{
				return Var0.f_0;
			}
			iVar2++;
		}
		iVar1++;
	}
	return 0;
}

bool func_280(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	var* uVar15;
	struct<4> Var16;
	
	func_333(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			if (unk_0x10FAB35428CCC9D7())
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_appistol_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (unk_0x10FAB35428CCC9D7())
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_microsmg_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_333(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_333(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_333(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_333(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_333(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_333(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_333(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_333(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_333(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_333(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_333(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_333(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0x10FAB35428CCC9D7())
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_333(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_333(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_332(iLocal_65))
			{
				if (!func_323(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_333(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_333(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_333(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_333(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_333(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_333(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_333(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_333(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_333(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_333(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_333(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_333(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_333(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_333(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_333(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_333(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_333(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_333(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_333(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_333(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_333(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_333(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_333(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_333(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_333(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_333(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_333(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_333(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_333(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_333(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_333(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_333(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_333(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_333(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_333(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_raypistol_varmod_xmas18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, joaat("component_ceramicpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, joaat("component_ceramicpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, joaat("component_ceramicpistol_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (unk_0x10FAB35428CCC9D7())
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_333(uParam0, -325063463, joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_333(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_333(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_333(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_333(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_333(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_333(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		
		case -774507221:
			switch (iParam2)
			{
				case 0:
					func_333(uParam0, 927578299, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_333(uParam0, -2053876401, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_333(uParam0, -1649287133, joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_333(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_333(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_66(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				bVar13 = false;
				while (bVar13 < unk_0x405425358A7D61FE(iVar12))
				{
					if (unk_0x6CF598A2957C2BF8(iVar12, bVar13, &Var16))
					{
						if (!func_63(Var16.f_3))
						{
							if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16.f_0 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16.f_0 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16.f_0 == -31573710)
							{
								iVar9++;
							}
							else if (Var16.f_0 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16.f_0 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16.f_0 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16.f_0 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var16.f_0 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_333(uParam0, Var16.f_3, Var16.f_0, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					bVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_281(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

bool func_281(int iParam0, int iParam1)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	var* uVar4;
	struct<6> Var5;
	int iVar6;
	bool bVar7;
	var* uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	bVar0 = false;
	fVar1 = 2.5f;
	if (!unk_0x10FAB35428CCC9D7())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						bVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						bVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						bVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						bVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						bVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						bVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						bVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						bVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						bVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						bVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						bVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						bVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						bVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						bVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						bVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						bVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						bVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						bVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						bVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						bVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						bVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						bVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						bVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						bVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						bVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						bVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						bVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						bVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						bVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						bVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						bVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						bVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						bVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						bVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						bVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						bVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						bVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						bVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						bVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						bVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						bVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						bVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						bVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						bVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						bVar0 = 17600;
						break;
				}
				if (func_322() && (func_321() || func_320()))
				{
					bVar0 = false;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12450;
						break;
				}
				if (func_322() && (func_321() || func_320()))
				{
					bVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						bVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						bVar0 = 20000;
						break;
				}
				if (func_322() && (func_321() || func_320()))
				{
					bVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						bVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						bVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						bVar0 = false;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						bVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						bVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						bVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						bVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						bVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						bVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						bVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						bVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						bVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						bVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						bVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						bVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						bVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						bVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						bVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						bVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						bVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						bVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						bVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						bVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						bVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						bVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_66(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					bVar3 = false;
					while (bVar3 < unk_0x405425358A7D61FE(iVar2))
					{
						if (unk_0x6CF598A2957C2BF8(iVar2, bVar3, &Var5))
						{
							if (!func_63(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_318(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										bVar0 = -1;
									}
									else
									{
										bVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_322() && (func_321() || func_320()))
										{
											bVar0 = false;
										}
									}
								}
							}
						}
						bVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						bVar0 = 9175;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2894));
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 1675;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_pi_supp_02"):
						bVar0 = 12050;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						bVar0 = Global_262145.f_11039;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21237;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						bVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						bVar0 = Global_262145.f_21124;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 1825;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = Global_262145.f_21125;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						bVar0 = Global_262145.f_12428;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4419));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						bVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						bVar0 = 9400;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2897));
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 1975;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 12200;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						bVar0 = Global_262145.f_11038;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4413));
						break;
					
					case joaat("component_appistol_varmod_security"):
						bVar0 = Global_262145.f_31993;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						bVar0 = 9325;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2898));
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 1900;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 10800;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12150;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						bVar0 = Global_262145.f_11042;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4423));
						break;
					
					case joaat("component_microsmg_varmod_security"):
						bVar0 = Global_262145.f_31992;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						bVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						bVar0 = 9475;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2899));
						break;
					
					case joaat("component_smg_clip_03"):
						bVar0 = Global_262145.f_16642;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2050;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_scope_macro_02"):
						bVar0 = 10825;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = 12250;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4358));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						bVar0 = Global_262145.f_11041;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4428));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21238;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						bVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						bVar0 = 9550;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2901));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						bVar0 = Global_262145.f_16637;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4200;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2125;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 10850;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4366));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12300;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						bVar0 = Global_262145.f_11035;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4414));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21240;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						bVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						bVar0 = 9775;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2902));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						bVar0 = Global_262145.f_16636;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4350;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2350;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4372));
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = 10900;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 12450;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4373));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						bVar0 = Global_262145.f_11037;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4417));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21241;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						bVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						bVar0 = 9925;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2904));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2425;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4377));
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = 10950;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 12500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4378));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						bVar0 = Global_262145.f_11036;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4412));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						bVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						bVar0 = 9850;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2905));
						break;
					
					case joaat("component_at_scope_small_02"):
						bVar0 = 10925;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4380));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						bVar0 = Global_262145.f_12429;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4422));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						bVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						bVar0 = 10000;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2906));
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4425;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4402));
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = 10975;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4403));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						bVar0 = Global_262145.f_12430;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4418));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21239;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						bVar0 = 1750;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_at_sr_supp"):
						bVar0 = 12350;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						bVar0 = Global_262145.f_12425;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4426));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22961;
						break;
					
					case joaat("component_pumpshotgun_varmod_security"):
						bVar0 = Global_262145.f_31990;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						bVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						bVar0 = 9625;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2908));
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4275;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4388));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2200;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4389));
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = 12350;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4390));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						bVar0 = 12400;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4391));
						break;
					
					case joaat("component_at_scope_max"):
						bVar0 = 12500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4392));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12050;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						bVar0 = Global_262145.f_11044;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4429));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						bVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						bVar0 = 99;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_at_scope_max"):
						bVar0 = 12500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4395));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_21242;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4404));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4400));
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = 11000;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4401));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						bVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						bVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						bVar0 = 9700;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2900));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2275;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4360));
						break;
					
					case joaat("component_at_scope_macro"):
						bVar0 = 10875;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4363));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12400;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						bVar0 = Global_262145.f_12426;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4362));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						bVar0 = Global_262145.f_7060;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_snspistol_clip_02"):
						bVar0 = Global_262145.f_7639;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						bVar0 = Global_262145.f_12427;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22966;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						bVar0 = Global_262145.f_7644;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						bVar0 = Global_262145.f_16639;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_7647;
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = Global_262145.f_7643;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = Global_262145.f_7641;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_7646;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						bVar0 = Global_262145.f_12431;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22962;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						bVar0 = Global_262145.f_7645;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = Global_262145.f_7649;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = Global_262145.f_7642;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						bVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						bVar0 = Global_262145.f_7652;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_7655;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_7650;
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = Global_262145.f_7651;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_7653;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						bVar0 = Global_262145.f_12432;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22965;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						bVar0 = Global_262145.f_8127;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = Global_262145.f_8128;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						bVar0 = Global_262145.f_8856;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						bVar0 = Global_262145.f_16643;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_8857;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = Global_262145.f_8858;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_8859;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						bVar0 = Global_262145.f_8862;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_8863;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_8865;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_8866;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						bVar0 = Global_262145.f_8867;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22963;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						bVar0 = 4100;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_15134));
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = 2300;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4386));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12450;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4387));
						break;
				}
				if (func_322() && (func_321() || func_320()))
				{
					bVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						bVar0 = 9500;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = 2000;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4352));
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = 12250;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4353));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						bVar0 = Global_262145.f_11040;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4425));
						break;
				}
				if (func_322() && (func_321() || func_320()))
				{
					bVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						bVar0 = Global_262145.f_11043;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4427));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						bVar0 = Global_262145.f_11365;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4432));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						bVar0 = Global_262145.f_11366;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4433));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						bVar0 = Global_262145.f_11367;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4434));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						bVar0 = Global_262145.f_11368;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4435));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						bVar0 = Global_262145.f_11369;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4436));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						bVar0 = Global_262145.f_11370;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4437));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						bVar0 = Global_262145.f_11371;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4438));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						bVar0 = Global_262145.f_11372;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4439));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						bVar0 = Global_262145.f_11373;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4440));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						bVar0 = Global_262145.f_11390;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4442));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						bVar0 = Global_262145.f_16641;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = Global_262145.f_11391;
						bVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar0) * Global_262145.f_4443));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						bVar0 = false;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						bVar0 = Global_262145.f_13273;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						bVar0 = Global_262145.f_13274;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						bVar0 = Global_262145.f_13331;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						bVar0 = Global_262145.f_13272;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						bVar0 = Global_262145.f_22964;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						bVar0 = Global_262145.f_15064;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						bVar0 = Global_262145.f_16638;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						bVar0 = false;
						break;
				}
				break;
			
			case joaat("weapon_minismg"):
				switch (iParam1)
				{
					case joaat("component_minismg_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_minismg_clip_02"):
						bVar0 = Global_262145.f_19087;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						bVar0 = Global_262145.f_21120;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						bVar0 = Global_262145.f_16640;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_21121;
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = Global_262145.f_21123;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_21122;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_02"):
						bVar0 = Global_262145.f_21243;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_21244;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21245;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21246;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_tracer"):
						bVar0 = Global_262145.f_21247;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_21248;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_21249;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_21250;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						bVar0 = Global_262145.f_21251;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						bVar0 = Global_262145.f_21252;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = Global_262145.f_21253;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_21254;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_21255;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_21256;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_21257;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_21258;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_21259;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_21260;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_21261;
						break;
					
					case joaat("component_at_ar_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_ar_barrel_02"):
						bVar0 = Global_262145.f_21262;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_02"):
						bVar0 = Global_262145.f_21263;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_21264;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21265;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21266;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_tracer"):
						bVar0 = Global_262145.f_21267;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_21268;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_21269;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_21270;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						bVar0 = Global_262145.f_21271;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						bVar0 = Global_262145.f_21272;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_21273;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_21274;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_21275;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_21276;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_21277;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_21278;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_21279;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_21280;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_21281;
						break;
					
					case joaat("component_at_cr_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_cr_barrel_02"):
						bVar0 = Global_262145.f_21282;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				switch (iParam1)
				{
					case joaat("component_combatmg_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_combatmg_mk2_clip_02"):
						bVar0 = Global_262145.f_21283;
						break;
					
					case joaat("component_combatmg_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_21284;
						break;
					
					case joaat("component_combatmg_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21285;
						break;
					
					case joaat("component_combatmg_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21286;
						break;
					
					case joaat("component_combatmg_mk2_clip_tracer"):
						bVar0 = Global_262145.f_21287;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_21288;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_21289;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						bVar0 = Global_262145.f_21290;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						bVar0 = Global_262145.f_21291;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_21292;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_21293;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_21294;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_21295;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_21296;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_21297;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_21298;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_21299;
						break;
					
					case joaat("component_at_mg_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_mg_barrel_02"):
						bVar0 = Global_262145.f_21300;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_heavysniper_mk2_clip_02"):
						bVar0 = Global_262145.f_21301;
						break;
					
					case joaat("component_heavysniper_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_21302;
						break;
					
					case joaat("component_heavysniper_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21304;
						break;
					
					case joaat("component_heavysniper_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21305;
						break;
					
					case joaat("component_heavysniper_mk2_clip_explosive"):
						bVar0 = Global_262145.f_21303;
						break;
					
					case joaat("component_at_scope_large_mk2"):
						bVar0 = Global_262145.f_21306;
						break;
					
					case joaat("component_at_scope_max"):
						bVar0 = false;
						break;
					
					case joaat("component_at_scope_nv"):
						bVar0 = Global_262145.f_21307;
						break;
					
					case joaat("component_at_scope_thermal"):
						bVar0 = Global_262145.f_21308;
						break;
					
					case joaat("component_at_sr_supp_03"):
						bVar0 = Global_262145.f_21309;
						break;
					
					case joaat("component_at_muzzle_08"):
						bVar0 = Global_262145.f_21310;
						break;
					
					case joaat("component_at_muzzle_09"):
						bVar0 = Global_262145.f_21311;
						break;
					
					case joaat("component_at_sr_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_sr_barrel_02"):
						bVar0 = Global_262145.f_21312;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_pistol_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_pistol_mk2_clip_02"):
						bVar0 = Global_262145.f_21313;
						break;
					
					case joaat("component_pistol_mk2_clip_hollowpoint"):
						bVar0 = Global_262145.f_21315;
						break;
					
					case joaat("component_pistol_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21314;
						break;
					
					case joaat("component_pistol_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21316;
						break;
					
					case joaat("component_pistol_mk2_clip_tracer"):
						bVar0 = Global_262145.f_21317;
						break;
					
					case joaat("component_at_pi_flsh_02"):
						bVar0 = Global_262145.f_21318;
						break;
					
					case joaat("component_at_pi_rail"):
						bVar0 = Global_262145.f_21319;
						break;
					
					case joaat("component_at_pi_supp_02"):
						bVar0 = Global_262145.f_21320;
						break;
					
					case joaat("component_at_pi_comp"):
						bVar0 = Global_262145.f_21321;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				switch (iParam1)
				{
					case joaat("component_smg_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_smg_mk2_clip_02"):
						bVar0 = Global_262145.f_21322;
						break;
					
					case joaat("component_smg_mk2_clip_hollowpoint"):
						bVar0 = Global_262145.f_21324;
						break;
					
					case joaat("component_smg_mk2_clip_fmj"):
						bVar0 = Global_262145.f_21323;
						break;
					
					case joaat("component_smg_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_21325;
						break;
					
					case joaat("component_smg_mk2_clip_tracer"):
						bVar0 = Global_262145.f_21326;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_at_sights_smg"):
						bVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_at_scope_macro_02_smg_mk2"):
						bVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_at_scope_small_smg_mk2"):
						bVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_at_pi_supp"):
						bVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_21337;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_21338;
						break;
					
					case joaat("component_at_sb_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_sb_barrel_02"):
						bVar0 = Global_262145.f_21339;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				switch (iParam1)
				{
					case joaat("component_pumpshotgun_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_22993;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_explosive"):
						bVar0 = Global_262145.f_22994;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
						bVar0 = Global_262145.f_22992;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_22991;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_23020;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_23021;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_23022;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						bVar0 = Global_262145.f_23023;
						break;
					
					case joaat("component_at_sr_supp_03"):
						bVar0 = Global_262145.f_23024;
						break;
					
					case joaat("component_at_muzzle_08"):
						bVar0 = Global_262145.f_23025;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_02"):
						bVar0 = Global_262145.f_22995;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_22999;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_fmj"):
						bVar0 = Global_262145.f_22997;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_22998;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_tracer"):
						bVar0 = Global_262145.f_22996;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_23026;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_23027;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_23028;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						bVar0 = Global_262145.f_23029;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = Global_262145.f_23030;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_23031;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_23032;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_23033;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_23034;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_23035;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_23036;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_23037;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_23038;
						break;
					
					case joaat("component_at_sc_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_sc_barrel_02"):
						bVar0 = Global_262145.f_23039;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_snspistol_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_snspistol_mk2_clip_02"):
						bVar0 = Global_262145.f_23910;
						break;
					
					case joaat("component_snspistol_mk2_clip_fmj"):
						bVar0 = Global_262145.f_23015;
						break;
					
					case joaat("component_snspistol_mk2_clip_hollowpoint"):
						bVar0 = Global_262145.f_23017;
						break;
					
					case joaat("component_snspistol_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_23016;
						break;
					
					case joaat("component_snspistol_mk2_clip_tracer"):
						bVar0 = Global_262145.f_23014;
						break;
					
					case joaat("component_at_pi_flsh_03"):
						bVar0 = Global_262145.f_23071;
						break;
					
					case joaat("component_at_pi_rail_02"):
						bVar0 = Global_262145.f_23072;
						break;
					
					case joaat("component_at_pi_supp_02"):
						bVar0 = Global_262145.f_23073;
						break;
					
					case joaat("component_at_pi_comp_02"):
						bVar0 = Global_262145.f_23074;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_02"):
						bVar0 = Global_262145.f_23000;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_23004;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_fmj"):
						bVar0 = Global_262145.f_23002;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_23003;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_tracer"):
						bVar0 = Global_262145.f_23001;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_23040;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_23041;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						bVar0 = Global_262145.f_23042;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom_mk2"):
						bVar0 = false;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_23043;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_23044;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_23045;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_23046;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_23047;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_23048;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_23049;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_23050;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_23051;
						break;
					
					case joaat("component_at_mrfl_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_mrfl_barrel_02"):
						bVar0 = Global_262145.f_23052;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				switch (iParam1)
				{
					case joaat("component_revolver_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_revolver_mk2_clip_tracer"):
						bVar0 = Global_262145.f_23005;
						break;
					
					case joaat("component_revolver_mk2_clip_fmj"):
						bVar0 = Global_262145.f_23006;
						break;
					
					case joaat("component_revolver_mk2_clip_hollowpoint"):
						bVar0 = Global_262145.f_23008;
						break;
					
					case joaat("component_revolver_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_23007;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_23053;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						bVar0 = Global_262145.f_23054;
						break;
					
					case joaat("component_at_pi_flsh"):
						bVar0 = Global_262145.f_23055;
						break;
					
					case joaat("component_at_pi_comp_03"):
						bVar0 = Global_262145.f_23056;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_mk2_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_02"):
						bVar0 = Global_262145.f_23009;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
						bVar0 = Global_262145.f_23013;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_fmj"):
						bVar0 = Global_262145.f_23011;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_incendiary"):
						bVar0 = Global_262145.f_23012;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_tracer"):
						bVar0 = Global_262145.f_23010;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_23057;
						break;
					
					case joaat("component_at_sights"):
						bVar0 = Global_262145.f_23058;
						break;
					
					case joaat("component_at_scope_macro_02_mk2"):
						bVar0 = Global_262145.f_23059;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						bVar0 = Global_262145.f_23060;
						break;
					
					case joaat("component_at_bp_barrel_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_bp_barrel_02"):
						bVar0 = Global_262145.f_23070;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_23061;
						break;
					
					case joaat("component_at_muzzle_01"):
						bVar0 = Global_262145.f_23062;
						break;
					
					case joaat("component_at_muzzle_02"):
						bVar0 = Global_262145.f_23063;
						break;
					
					case joaat("component_at_muzzle_03"):
						bVar0 = Global_262145.f_23064;
						break;
					
					case joaat("component_at_muzzle_04"):
						bVar0 = Global_262145.f_23065;
						break;
					
					case joaat("component_at_muzzle_05"):
						bVar0 = Global_262145.f_23066;
						break;
					
					case joaat("component_at_muzzle_06"):
						bVar0 = Global_262145.f_23067;
						break;
					
					case joaat("component_at_muzzle_07"):
						bVar0 = Global_262145.f_23068;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						bVar0 = Global_262145.f_23069;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						bVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						bVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						bVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						bVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						bVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						bVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						bVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						bVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						bVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						bVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						bVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_raypistol"):
				switch (iParam1)
				{
					case joaat("component_raypistol_varmod_xmas18"):
						bVar0 = false;
						break;
				}
				break;
			
			case joaat("weapon_ceramicpistol"):
				switch (iParam1)
				{
					case joaat("component_ceramicpistol_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_ceramicpistol_clip_02"):
						bVar0 = Global_262145.f_28685;
						break;
					
					case joaat("component_ceramicpistol_supp"):
						bVar0 = Global_262145.f_28686;
						break;
				}
				break;
			
			case joaat("weapon_combatshotgun"):
				switch (iParam1)
				{
					case joaat("component_combatshotgun_clip_01"):
						bVar0 = false;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_30824;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_30825;
						break;
				}
				break;
			
			case joaat("weapon_gadgetpistol"):
				switch (iParam1)
				{
					case joaat("component_gadgetpistol_clip_01"):
						bVar0 = false;
						break;
				}
				break;
			
			case joaat("weapon_militaryrifle"):
				switch (iParam1)
				{
					case joaat("component_militaryrifle_clip_01"):
						bVar0 = Global_262145.f_30810;
						break;
					
					case joaat("component_militaryrifle_clip_02"):
						bVar0 = Global_262145.f_30811;
						break;
					
					case joaat("component_militaryrifle_sight_01"):
						bVar0 = Global_262145.f_30812;
						break;
					
					case joaat("component_at_scope_small"):
						bVar0 = Global_262145.f_30813;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_30814;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_30815;
						break;
				}
				break;
			
			case joaat("weapon_heavyrifle"):
				switch (iParam1)
				{
					case joaat("component_heavyrifle_clip_01"):
						bVar0 = Global_262145.f_31958;
						break;
					
					case joaat("component_heavyrifle_clip_02"):
						bVar0 = Global_262145.f_31959;
						break;
					
					case -325063463:
						bVar0 = Global_262145.f_31991;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_31964;
						break;
					
					case joaat("component_at_ar_flsh"):
						bVar0 = Global_262145.f_31962;
						break;
					
					case joaat("component_at_scope_medium"):
						bVar0 = Global_262145.f_31961;
						break;
					
					case joaat("component_at_ar_supp"):
						bVar0 = Global_262145.f_31963;
						break;
					
					case joaat("component_heavyrifle_sight_01"):
						bVar0 = Global_262145.f_31960;
						break;
				}
				break;
			
			case -774507221:
				switch (iParam1)
				{
					case 927578299:
						bVar0 = false;
						break;
					
					case -2053876401:
						bVar0 = Global_262145.f_33124;
						break;
					
					case -1649287133:
						bVar0 = Global_262145.f_33126;
						break;
					
					case joaat("component_at_ar_supp_02"):
						bVar0 = Global_262145.f_33127;
						break;
					
					case joaat("component_at_ar_afgrip"):
						bVar0 = Global_262145.f_33125;
						break;
				}
				break;
			
			default:
				iVar6 = func_66(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					bVar7 = false;
					while (bVar7 < unk_0x405425358A7D61FE(iVar6))
					{
						if (unk_0x6CF598A2957C2BF8(iVar6, bVar7, &Var9))
						{
							if (!func_63(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										bVar0 = -1;
									}
									else
									{
										bVar0 = Var9.f_5;
									}
								}
							}
						}
						bVar7++;
					}
				}
				break;
			}
	}
	if (unk_0x10FAB35428CCC9D7() && func_316())
	{
		StringCopy(&Var11, func_314(iParam1, iParam0), 16);
		func_309(&sVar10, Var11, unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()), 3, 1, func_312(iParam0), func_311(iParam0), -1, 0, 0);
		if (unk_0xBD4D7EAF8A30F637(&sVar10))
		{
			bVar0 = unk_0xC27009422FCCA88D(unk_0xD24D37CC275948CC(&sVar10), 1671640801, true);
		}
	}
	if (bVar0 > 0)
	{
		fVar12 = func_282(iParam0, &bVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return bVar0;
}

float func_282(int iParam0, bool bParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x10FAB35428CCC9D7() && func_316())
	{
		fVar1 = (fVar1 + func_308());
		fVar0 = (1f - fVar1);
		*bParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*bParam1) * fVar0));
		return fVar0;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		*bParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*bParam1) * fParam2));
	}
	if (!Global_78319)
	{
		if (*bParam1 != 0)
		{
			iVar2 = func_305(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (iLocal_64 == 1)
		{
			*bParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*bParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_132) / 100f));
		}
		if (iLocal_64 == 0)
		{
			*bParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*bParam1) * Global_262145.f_77));
			if (func_283())
			{
				fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_132) / 100f));
				iLocal_64 = 1;
			}
			else
			{
				iLocal_64 = -1;
			}
		}
		fVar1 = (fVar1 + func_308());
	}
	fVar0 = (1f - fVar1);
	*bParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*bParam1) * fVar0));
	return fVar0;
}

int func_283()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (unk_0x48AF36444B965238())
	{
		return 0;
	}
	if (func_302())
	{
		if (func_287())
		{
			bVar0 = func_285();
			bVar1 = func_284();
			fVar2 = ((unk_0xBBDA792448DB5A89(bVar1) / unk_0xBBDA792448DB5A89(bVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_131) && bVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1659620);
	iVar0 = (iVar0 + Global_1659623);
	return iVar0;
}

int func_285()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1659621);
	iVar0 = (iVar0 + Global_1659622);
	iVar0 = (iVar0 + Global_1659620);
	iVar0 = (iVar0 + Global_1659623);
	iVar0 = (iVar0 + Global_1659625);
	iVar0 = (iVar0 + Global_1659624);
	iVar0 = (iVar0 + func_286(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_286(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_286(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_286(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_286(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_286(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_286(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_286(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_286(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_286(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_287()
{
	struct<7> Var0;
	struct<7> Var1;
	
	unk_0xDA488F299A5B164E(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_301(joaat("mpply_started_mp")) };
	if (func_288(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_288(struct<7> Param0, struct<7> Param1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_299(Param1);
	bVar1 = func_295(Param0, iParam2);
	if (bVar1 == -15)
	{
		return 0;
	}
	if (func_289(bVar0, bVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_294(bParam1) || !func_294(bParam0))
	{
		return 1;
	}
	iVar0 = func_102(bParam0);
	iVar1 = func_102(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(bParam0);
	iVar1 = func_104(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_293(bParam0);
	iVar1 = func_293(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_292(bParam0);
	iVar1 = func_292(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_291(bParam0);
	iVar1 = func_291(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_290(bParam0);
	iVar1 = func_290(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_290(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_291(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_292(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_293(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_294(bool bParam0)
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
	iVar0 = func_290(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_291(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_292(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_293(bParam0);
	if (iVar5 < 1 || iVar5 > func_101(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_295(struct<7> Param0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_298(Param0) == 0)
	{
		uVar0 = func_299(Param0);
		uVar1 = uVar0;
		func_296(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	bVar2 = func_293(*uParam0);
	bVar3 = func_292(*uParam0);
	bVar4 = func_291(*uParam0);
	bVar5 = func_290(*uParam0);
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
	iVar6 = func_101(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_101(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_297(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_297(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_107(uParam0, bParam1);
	func_106(uParam0, bParam2);
	func_105(uParam0, bParam3);
	func_99(uParam0, iParam5);
	func_100(uParam0, bParam4);
	func_98(uParam0, iParam6);
}

int func_298(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_299(struct<6> Param0, var uParam1)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_98(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_99(&uVar0, func_300(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_100(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_105(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_106(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_107(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_300(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_301(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	iVar0 = iParam0;
	if (unk_0x8B0FACEFC36C824B(iVar0, &Var2, 7, -1))
	{
		return Var2;
	}
	return Var1;
}

int func_302()
{
	if (func_304() && func_303(0))
	{
		return 1;
	}
	return 0;
}

var func_303(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_304()
{
	return func_303(func_54() + 1);
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_229();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_306(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_306(1, iVar0);
		iVar3[1] = func_306(3, iVar0);
		iVar3[2] = func_306(2, iVar0);
		iVar3[3] = func_306(4, iVar0);
		iVar3[4] = func_306(5, iVar0);
		iVar3[5] = func_306(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_306(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_307(iVar0, iParam1);
	if (func_307(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_307(iVar1, iParam1);
	}
	if (func_307(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_307(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_307(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_307(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_307(int iParam0, int iParam1)
{
	return Global_113386.f_19147[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

float func_308()
{
	return Global_100493.f_2072;
}

void func_309(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (unk_0xD24D37CC275948CC(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (bParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (bParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (bParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (bParam4 == Global_75446)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (bParam4 == Global_75447)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (bParam4 == Global_75448)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (bParam4 == Global_75449)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (bParam4 == Global_75450)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (bParam4 == func_310())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (bParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, unk_0xB215AAC32D25D019(bParam4), 16);
				if (unk_0xCA042B6957743895(&cParam1) || unk_0xD24D37CC275948CC(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (bParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (bParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0xB215AAC32D25D019(bParam4), 16);
						if (unk_0xCA042B6957743895(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (bParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_310()
{
	return joaat("kosatka");
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 2;
			break;
	}
	return -1;
}

int func_312(int iParam0)
{
	return func_313(iParam0);
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_emplauncher"):
			return 89;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 90;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 91;
			break;
		
		case -610080759:
			return 92;
			break;
		
		case -774507221:
			return 93;
			break;
		
		case 1853742572:
			return 94;
			break;
	}
	return 0;
}

char* func_314(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var* uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 927578299:
			return "WCT_CLIP1";
			break;
		
		case -2053876401:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("component_raypistol_varmod_xmas18"):
			return "WCT_VAR_RAY18";
			break;
		
		case joaat("component_ceramicpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_ceramicpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_ceramicpistol_supp"):
			return "WCT_SUPP";
			break;
		
		case -325063463:
			return "WCT_VAR_FAM";
			break;
		
		case joaat("component_microsmg_varmod_security"):
			return "WCT_VAR_WEED";
			break;
		
		case joaat("component_appistol_varmod_security"):
			return "WCT_VAR_STUD";
			break;
		
		case joaat("component_pumpshotgun_varmod_security"):
			return "WCT_VAR_BONE";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_66(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					bVar1 = false;
					while (bVar1 < unk_0x405425358A7D61FE(iVar0))
					{
						if (unk_0x6CF598A2957C2BF8(iVar0, bVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_315(&(Var3.f_6));
							}
						}
						bVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_315(var uParam0)
{
	return uParam0;
}

int func_316()
{
	if (unk_0x10FAB35428CCC9D7() && func_317())
	{
		return 1;
	}
	return 0;
}

int func_317()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_318(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_319(iParam0))
	{
		return Global_262145.f_21232;
	}
	return 1;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_320()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0D0A9F0E7BD91E3C(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x767FBC2AC802EF3D(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x5AA3BEFA29F03AD4())
	{
		iVar3 = unk_0xC488FF2356EA7791(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_321()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0D0A9F0E7BD91E3C(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x767FBC2AC802EF3D(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x5AA3BEFA29F03AD4())
	{
		iVar3 = unk_0xC488FF2356EA7791(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x91B87C55093DE351())
			{
				unk_0x767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &bVar4, -1);
				unk_0x933D6A9EEC1BACD0(&bVar4, true);
				unk_0x933D6A9EEC1BACD0(&bVar4, 3);
				unk_0x933D6A9EEC1BACD0(&bVar4, 5);
				unk_0x933D6A9EEC1BACD0(&Global_25, true);
				unk_0x933D6A9EEC1BACD0(&Global_25, 3);
				unk_0x933D6A9EEC1BACD0(&Global_25, 5);
				unk_0xB3271D7AB655B441(joaat("sp_unlock_exclus_content"), bVar4, true);
				if (unk_0x5AA3BEFA29F03AD4())
				{
					bVar4 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&bVar4, true);
					unk_0x933D6A9EEC1BACD0(&bVar4, 3);
					unk_0xDAC073C7901F9E15(bVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_322()
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

int func_323(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_331())
	{
		return 0;
	}
	uVar0 = func_327(iParam0, iParam1, iParam2);
	iVar1 = func_325(iParam0, iParam1);
	return BitTest(uVar0, func_324(iVar1));
}

int func_324(int iParam0)
{
	return (iParam0 % 32);
}

int func_325(int iParam0, int iParam1)
{
	return func_326(iParam0, iParam1);
}

int func_326(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
				
				case joaat("component_appistol_varmod_security"):
					return 569;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
				
				case joaat("component_microsmg_varmod_security"):
					return 570;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
				
				case joaat("component_pumpshotgun_varmod_security"):
					return 571;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam0)
			{
				case joaat("component_raypistol_varmod_xmas18"):
					return 554;
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam0)
			{
				case joaat("component_ceramicpistol_clip_01"):
					return 555;
					break;
				
				case joaat("component_ceramicpistol_clip_02"):
					return 556;
					break;
				
				case joaat("component_ceramicpistol_supp"):
					return 557;
					break;
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			switch (iParam0)
			{
				case joaat("component_combatshotgun_clip_01"):
					return 559;
				
				case joaat("component_at_ar_flsh"):
					return 560;
					break;
				
				case joaat("component_at_ar_supp"):
					return 561;
					break;
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			switch (iParam0)
			{
				case joaat("component_militaryrifle_clip_01"):
					return 562;
					break;
				
				case joaat("component_militaryrifle_clip_02"):
					return 563;
					break;
				
				case joaat("component_militaryrifle_sight_01"):
					return 564;
					break;
				
				case joaat("component_at_scope_small"):
					return 565;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 566;
					break;
				
				case joaat("component_at_ar_supp"):
					return 567;
					break;
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			switch (iParam0)
			{
				case joaat("component_gadgetpistol_clip_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case -325063463:
					return 568;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
				
				case joaat("component_heavyrifle_sight_01"):
					return 572;
					break;
			}
			break;
		
		case -774507221:
			switch (iParam0)
			{
				case 927578299:
					return 573;
					break;
				
				case -2053876401:
					return 574;
					break;
				
				case -1649287133:
					return 575;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 576;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 577;
					break;
			}
			break;
	}
	return 0;
}

var func_327(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_52(func_328(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_325(iParam0, iParam1);
	iVar1 = func_330(iVar0);
	if ((func_77() == 0 || func_329() == 0) || (func_77() == 999 && func_329() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10274;
				break;
		}
	}
	return 1755;
}

int func_329()
{
	return Global_31960;
}

int func_330(int iParam0)
{
	return (iParam0 / 32);
}

bool func_331()
{
	return Global_1575037;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
			return 1;
		
		default:
	}
	return 0;
}

void func_333(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_334(var uParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar1;
	
	func_333(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_280(&Var0, bParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

float func_335(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_336(var uParam0)
{
	if (!unk_0x7239B21A38F536BA(*uParam0))
	{
		return 0;
	}
	unk_0x79F020FF9EDC0748(*uParam0, true);
	return 1;
}

int func_337(bool bParam0, bool bParam1, struct<3> Param2, bool bParam3)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		unk_0xEA386986E786A54F(bParam0);
		*bParam0 = 0;
	}
	*bParam0 = unk_0xAF35D0D2583051B0(bParam1, Param2, bParam3, true, true, false);
	if (!unk_0x7239B21A38F536BA(*bParam0))
	{
		return 0;
	}
	return 1;
}

int func_338(var uParam0)
{
	if (!unk_0x7239B21A38F536BA(*uParam0))
	{
		return 0;
	}
	unk_0xA9C8960E8684C1B5(*uParam0, 0);
	unk_0x98EFA132A4117BE1(*uParam0, "RAMP:SCENE PED");
	unk_0x63F58F7C80513AAD(*uParam0, false);
	unk_0x9F8AA94D6D97DBF4(*uParam0, true);
	return 1;
}

int func_339(bool bParam0, bool bParam1, struct<3> Param2, bool bParam3, bool bParam4)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		unk_0x9614299DCB53E54B(bParam0);
		*bParam0 = 0;
	}
	*bParam0 = unk_0xD49F9B0955C367DE(26, bParam1, Param2, bParam3, true, true);
	if (!unk_0x7239B21A38F536BA(*bParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		func_340(*bParam0, Param2);
		unk_0x8E2530AA8ADA980E(*bParam0, bParam3);
	}
	unk_0xA9C8960E8684C1B5(*bParam0, 0);
	unk_0x98EFA132A4117BE1(*bParam0, "RAMP:SCENE PED");
	unk_0x63F58F7C80513AAD(*bParam0, false);
	unk_0x9F8AA94D6D97DBF4(*bParam0, true);
	return 1;
}

Vector3 func_340(bool bParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xC906A7DAB05C8D2B(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_227(bParam0))
	{
		unk_0x06843DA7060A026B(bParam0, Param1, true, false, false, true);
	}
	return Param1;
}

int func_341()
{
	return unk_0x1B5C85C612E5256E(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, false, true, true, true);
}

void func_342(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = joaat("ig_ramp_gang");
	bVar1 = "misstrvram_4";
	unk_0x963D27A58DF860AC(bVar0);
	unk_0xD3BD40951412FEF6(bVar1);
	unk_0x5443438F033E29C3(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x98A4EB5D89A0C952(bVar0) || !unk_0xD031A9162D01088C(bVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_339(&(uParam0->f_28[0]), bVar0, -161.37f, -1669.63f, 33.1f, func_335(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[0]));
	unk_0x98EFA132A4117BE1(uParam0->f_28[0], "RP0_NOGUN");
	unk_0x45EEE61580806D63(uParam0->f_28[0]);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 0, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 3, false, true, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 4, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 8, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 9, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 10, false, true, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 11, false, false, 0);
	unk_0xEA47FE3719165B94(uParam0->f_28[0], bVar1, "thugs_idle_b", 8f, -8f, -1, 1, false, false, false, false);
	while (!func_339(&(uParam0->f_28[1]), bVar0, -161.93f, -1670.39f, 33.14f, func_335(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[1]));
	unk_0x98EFA132A4117BE1(uParam0->f_28[1], "RP1_GUN");
	unk_0x45EEE61580806D63(uParam0->f_28[1]);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 0, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 3, true, true, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 4, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 8, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 9, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 10, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 11, false, false, 0);
	unk_0xBF0FD6E56C964FCB(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, true, true);
	unk_0xEA47FE3719165B94(uParam0->f_28[1], bVar1, "thugs_idle_a", 8f, -8f, -1, 1, false, false, false, false);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0xE532F5D78798DAAB(bVar0);
}

void func_343(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = joaat("ig_ramp_mex");
	bVar1 = "misstrvram_3";
	unk_0x963D27A58DF860AC(bVar0);
	unk_0xD3BD40951412FEF6(bVar1);
	unk_0x5443438F033E29C3(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x98A4EB5D89A0C952(bVar0) || !unk_0x36E353271F0E90EE(joaat("weapon_microsmg"))) || !unk_0xD031A9162D01088C(bVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_339(&(uParam0->f_28[0]), bVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[0]));
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 0, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 3, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 4, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 8, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 9, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 10, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 11, false, false, 0);
	unk_0x98EFA132A4117BE1(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xEA47FE3719165B94(uParam0->f_28[0], bVar1, "mexicans_idle_a", 8f, -8f, -1, 1, false, false, false, false);
	while (!func_339(&(uParam0->f_28[1]), bVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[1]));
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 0, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 1, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 2, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 3, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 4, false, true, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 5, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 6, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 7, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 8, true, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 9, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 10, false, false, 0);
	unk_0x262B14F48D29DE80(uParam0->f_28[1], 11, false, false, 0);
	unk_0x98EFA132A4117BE1(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xEA47FE3719165B94(uParam0->f_28[1], bVar1, "mexicans_idle_b", 8f, -8f, -1, 1, false, false, false, false);
	if (func_278(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_335(-0.85f)))
	{
		unk_0x33E179436C0B31DB(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0x33E179436C0B31DB(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0xE532F5D78798DAAB(bVar0);
}

int func_344()
{
	return func_345(1182.137f, -400.4787f, 66.92414f, 8f);
}

int func_345(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x1B5C85C612E5256E(Param0 - Var0, Param0 + Var0, false, true, true, true);
}

void func_346(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	
	bVar0 = joaat("ig_ramp_hipster");
	bVar1 = joaat("prop_chair_01a");
	bVar2 = joaat("prop_npc_phone");
	bVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var6 = { 0f, 0f, 0f };
	unk_0x5443438F033E29C3(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x963D27A58DF860AC(bVar0);
	unk_0x963D27A58DF860AC(bVar1);
	unk_0x963D27A58DF860AC(bVar2);
	unk_0xD3BD40951412FEF6(bVar3);
	func_350(&uLocal_68);
	while ((((!unk_0x98A4EB5D89A0C952(bVar0) || !unk_0x98A4EB5D89A0C952(bVar1)) || !unk_0x98A4EB5D89A0C952(bVar2)) || !unk_0xD031A9162D01088C(bVar3)) || !func_349(&uLocal_68))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xDD9B9B385AAC7F5B(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0xE143FA2249364369(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), true, false, true);
	if (unk_0x7239B21A38F536BA(uParam0->f_41[2]))
	{
		unk_0x06843DA7060A026B(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, true, false, false, true);
		unk_0x8524A8B0171D5E07(uParam0->f_41[2], 0f, 0f, 50f, 2, true);
		unk_0x428CA6DBD1094446(uParam0->f_41[2], true);
	}
	uParam0->f_41[3] = unk_0xE143FA2249364369(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), true, false, true);
	if (unk_0x7239B21A38F536BA(uParam0->f_41[3]))
	{
		unk_0x428CA6DBD1094446(uParam0->f_41[3], true);
	}
	while (!func_339(&(uParam0->f_28[0]), bVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_338(&(uParam0->f_28[0]));
	unk_0x428CA6DBD1094446(uParam0->f_28[0], true);
	unk_0x45EEE61580806D63(uParam0->f_28[0]);
	unk_0x262B14F48D29DE80(uParam0->f_28[0], 2, false, false, 0);
	func_348(&(uParam0->f_41[1]), bVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0x6B9BBD38AB0796DF(uParam0->f_41[1], uParam0->f_28[0], unk_0x3F428D08BE5AAE31(uParam0->f_28[0], iVar4), Var6, Var5, true, false, false, false, 2, true, 0);
	func_347(&uLocal_68, 0, 3);
	if (!unk_0x25D39B935A038A26(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x8C18E0F9080ADD73(Local_66, Local_67, 2);
		if (func_130(uParam0->f_28[0]))
		{
			unk_0xEEA929141F699854(uParam0->f_28[0], uParam0->f_59, bVar3, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
		}
		unk_0xD9A897A4C6C2974F(uParam0->f_59, true);
	}
	if (!func_278(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_335(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0xE532F5D78798DAAB(bVar0);
	unk_0xE532F5D78798DAAB(bVar1);
	unk_0xE532F5D78798DAAB(bVar2);
}

void func_347(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x85F01B8D5B90570E(*uParam0))
	{
		if (bParam1)
		{
			unk_0xB4A53E05F68B6FA1(&iVar0);
		}
		else
		{
			if (!unk_0x78DCDC15C9F116B4("npcphone"))
			{
				unk_0x57D9C12635E25CE3("npcphone", false);
				unk_0xF6C09E276AEB3F2D(joaat("prop_npc_phone"));
			}
			iVar0 = unk_0x1A6478B61C6BDC3B("npcphone");
		}
		unk_0x5F15302936E07111(iVar0);
		unk_0xF6E48914C7A8694E(*uParam0, "DISPLAY_VIEW");
		unk_0xC3D0841A0CC546A6(bParam2);
		unk_0xC6796A8FFA375E53();
		unk_0x54972ADAF0294A93(*uParam0, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
	}
}

void func_348(bool bParam0, bool bParam1, struct<3> Param2, bool bParam3)
{
	func_156(bParam0);
	*bParam0 = unk_0x509D5878EB39E842(bParam1, Param2, true, true, false);
	unk_0x8E2530AA8ADA980E(*bParam0, bParam3);
}

int func_349(var uParam0)
{
	if (unk_0x85F01B8D5B90570E(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_350(var uParam0)
{
	*uParam0 = unk_0x11FE353CF9733E6F(func_351());
}

char* func_351()
{
	return "CELLPHONE_CUTSCENE";
}

int func_352()
{
	return func_345(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_353(var uParam0)
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar1 = "misstrvram_1";
	iVar2 = 28422;
	Var3 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, -0.1f };
	bVar5 = joaat("ig_ramp_hic");
	bVar6 = joaat("prop_table_03b_chr");
	bVar7 = joaat("prop_beer_bottle");
	unk_0x963D27A58DF860AC(bVar5);
	unk_0x963D27A58DF860AC(bVar6);
	unk_0x963D27A58DF860AC(bVar7);
	unk_0xD3BD40951412FEF6(bVar1);
	unk_0x5443438F033E29C3(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x98A4EB5D89A0C952(bVar5) || !unk_0x98A4EB5D89A0C952(bVar6)) || !unk_0x98A4EB5D89A0C952(bVar7)) || !unk_0xD031A9162D01088C(bVar1)) || !unk_0x36E353271F0E90EE(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_339(&(uParam0->f_28[0]), bVar5, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_130(uParam0->f_28[0]))
	{
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 0, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 1, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 2, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 3, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 4, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 5, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 6, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 7, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 8, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 9, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 10, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[0], 11, false, false, 0);
		Var0 = { unk_0x17C07FC640E86B4E(uParam0->f_28[0], iVar2, 0f, 0f, 0f) };
		unk_0x98EFA132A4117BE1(uParam0->f_28[0], "RAMP:PED 0");
		func_348(&(uParam0->f_41[1]), bVar7, Var0, 0f);
		unk_0x6B9BBD38AB0796DF(uParam0->f_41[1], uParam0->f_28[0], unk_0x3F428D08BE5AAE31(uParam0->f_28[0], iVar2), Var4, Var3, true, true, false, false, 2, true, 0);
		unk_0x406137F8EF90EAF5(uParam0->f_41[1], true);
		unk_0x428CA6DBD1094446(uParam0->f_28[0], true);
		unk_0x1913FE4CBF41C463(uParam0->f_28[0], 208, true);
		unk_0xC80A74AC829DDD92(uParam0->f_28[0], joaat("player"));
	}
	while (!func_339(&(uParam0->f_28[1]), bVar5, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_130(uParam0->f_28[1]))
	{
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 0, true, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 1, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 2, true, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 3, true, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 4, true, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 5, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 6, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 7, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 8, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 9, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 10, false, false, 0);
		unk_0x262B14F48D29DE80(uParam0->f_28[1], 11, false, false, 0);
		Var0 = { unk_0x17C07FC640E86B4E(uParam0->f_28[1], iVar2, 0f, 0f, 0f) };
		unk_0x98EFA132A4117BE1(uParam0->f_28[1], "RAMP:PED 1");
		func_348(&(uParam0->f_41[2]), bVar7, Var0, 0f);
		unk_0x6B9BBD38AB0796DF(uParam0->f_41[2], uParam0->f_28[1], unk_0x3F428D08BE5AAE31(uParam0->f_28[1], iVar2), Var4, Var3, true, true, false, false, 2, true, 0);
		unk_0x406137F8EF90EAF5(uParam0->f_41[2], true);
		unk_0x428CA6DBD1094446(uParam0->f_28[1], true);
		unk_0x1913FE4CBF41C463(uParam0->f_28[1], 208, true);
		unk_0xC80A74AC829DDD92(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0xE143FA2249364369(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (unk_0x7239B21A38F536BA(uParam0->f_41[3]))
	{
		unk_0x428CA6DBD1094446(uParam0->f_41[3], true);
	}
	uParam0->f_41[4] = unk_0xE143FA2249364369(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (unk_0x7239B21A38F536BA(uParam0->f_41[4]))
	{
		unk_0x428CA6DBD1094446(uParam0->f_41[4], true);
	}
	if (!unk_0x25D39B935A038A26(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x8C18E0F9080ADD73(910.13f, 3643.74f, 31.69f, 0f, 0f, func_335(-0.26f), 2);
		if (func_130(uParam0->f_28[0]))
		{
			unk_0xEEA929141F699854(uParam0->f_28[0], uParam0->f_59, bVar1, "redneck_idle_a", 8f, -8f, 513, 0, 1000f, 0);
		}
		if (func_130(uParam0->f_28[1]))
		{
			unk_0xEEA929141F699854(uParam0->f_28[1], uParam0->f_59, bVar1, "redneck_idle_b", 8f, -8f, 513, 0, 1000f, 0);
		}
		unk_0xD9A897A4C6C2974F(uParam0->f_59, true);
	}
	if (!func_278(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0xE532F5D78798DAAB(bVar5);
	unk_0xE532F5D78798DAAB(bVar6);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_354(int iParam0)
{
	if (!unk_0xC5042CC6F5E3D450())
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 1;
	}
	if (func_182(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	struct<27> Var0;
	bool bVar1;
	
	func_113(iParam0, &Var0);
	bVar1 = func_229();
	if (bVar1 == 145)
	{
		return 1;
	}
	else if ((bVar1 != 1 && bVar1 != 0) && bVar1 != 2)
	{
		return 1;
	}
	if (!BitTest(Var0.f_26, bVar1))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0, var uParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_357((*iParam0)[0], Param2, fParam3, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_357((*iParam0)[iVar0], Param2, fParam3, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_375("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_357(int iParam0, struct<3> Param1, float fParam2, var uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_113(iParam0, &Var1);
	if (func_358(Var1.f_6, Param1, fParam2, 0))
	{
		if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_192(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_358(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_359(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_360(int* iParam0, bool bParam1)
{
	func_274(iParam0);
	if (bParam1)
	{
		func_375(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_363(iParam0, 0, 0, 0);
	}
	func_362(&(iParam0->f_48));
	if (iLocal_240 != -1)
	{
		func_375("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_271(&iLocal_240);
	}
	if (iLocal_250 != 0)
	{
		if (*iParam0 == 55 || *iParam0 == 53)
		{
			unk_0x31D16B74C6E29D66(iLocal_250, false);
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(false);
	}
	if (iLocal_244)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0x8DFCED7A656F8802(true);
			iLocal_244 = 0;
		}
	}
	func_361();
	func_375("SCRIPT TERMINATED");
	Global_97713 = 0;
	unk_0x1090044AD1DA76FA();
}

void func_361()
{
	func_375("Running end routines.");
	Global_113104 = (Global_113104 - 1);
}

int func_362(var uParam0)
{
	if (func_154(uParam0))
	{
		if (unk_0xD031A9162D01088C(*uParam0))
		{
			unk_0xF66A602F829E2A06(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_363(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_371(uParam0, iParam1);
	func_367(uParam0, bParam2);
	func_364(uParam0, bParam3);
}

void func_364(var uParam0, bool bParam1)
{
	func_365(&(uParam0->f_41), bParam1);
}

void func_365(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_156(uParam0[iVar0]);
		}
		else
		{
			func_366(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_366(bool bParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (unk_0xB1632E9A5F988D11(*bParam0))
		{
			unk_0x961AC54BF0613F5D(*bParam0, true, true);
		}
		if (!bParam1)
		{
			unk_0x3AE22DEB5BA5A3E6(bParam0);
		}
		else
		{
			unk_0xADBE4809F19F927A(*bParam0);
		}
	}
}

void func_367(var uParam0, bool bParam1)
{
	func_368(&(uParam0->f_35), bParam1);
}

void func_368(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_370(uParam0[iVar0]);
		}
		else
		{
			func_369(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_369(bool bParam0)
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

void func_370(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (!unk_0x0A7B270912999B3C(*bParam0))
		{
			unk_0xAD738C3085FE7E11(*bParam0, true, false);
		}
		if (func_160(*bParam0))
		{
			if (unk_0x0A7B270912999B3C(*bParam0) && unk_0xDDE6DF5AE89981D2(*bParam0, true))
			{
				if (func_130(unk_0xD80958FC74E988A6()))
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
			if (func_130(unk_0xD80958FC74E988A6()))
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

void func_371(var uParam0, int iParam1)
{
	func_372(&(uParam0->f_28), iParam1);
}

void func_372(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_374(uParam0[iVar0]);
		}
		else
		{
			func_373(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_373(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_374(bool bParam0)
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

void func_375(bool bParam0)
{
	if (!unk_0xCA042B6957743895(bParam0))
	{
	}
}

void func_376(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_377()
{
	func_375("Running start routines.");
	Global_113104++;
}

