#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<6> Local_47[11];
	struct<4> Local_48[5];
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78[1] = { 0 };
	var uLocal_79 = 16;
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
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	struct<2> Local_245 = { 0, 5 } ;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 5;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_49 = "RE_SeaPlane1";
	bLocal_50 = "RE_SeaPlane2";
	Local_51 = { 0f, 0f, 0f };
	Local_53 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_57 = -1;
	iLocal_58 = -1;
	bLocal_59 = joaat("dodo");
	bLocal_60 = joaat("tropic");
	bLocal_61 = joaat("g_m_y_mexgoon_02");
	bLocal_62 = joaat("suntrap");
	bLocal_63 = joaat("g_m_y_armgoon_02");
	Local_52 = { ScriptParam_245.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		if (func_199(Local_48[0 /*4*/]))
		{
			unk_0xB664292EAECF7FA6(Local_48[0 /*4*/], 2);
		}
		func_169(1, 0);
	}
	if (func_168() && func_125(Local_52, 32, 0, 0, 1))
	{
		func_122(32);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		if ((unk_0xC5042CC6F5E3D450() || func_121(1)) || func_121(4))
		{
			if (func_121(7))
			{
				func_82();
			}
			switch (iLocal_45)
			{
				case 0:
					func_35();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_199(Local_48[0 /*4*/]))
			{
				unk_0xB664292EAECF7FA6(Local_48[0 /*4*/], 2);
			}
			func_169(1, 0);
		}
		unk_0x4EDE34FBADD967A6(false);
	}
}

void func_1()
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_54)
			{
				case 0:
					iLocal_46 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_32(66, 1);
	func_32(67, 1);
	func_6(-1, 0);
	func_3();
	func_169(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
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

int func_5(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_6(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_29(iParam0))
	{
		func_28(iParam0, bParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_14(iParam0, bParam1) != 322)
		{
			func_8(func_14(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_7(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_113372 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
		func_12((891 + iParam0), 1, -1);
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
		func_9();
	}
}

void func_9()
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
		func_11(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_10() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_31959;
}

int func_11(int iParam0, bool bParam1)
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

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_13();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_13()
{
	return Global_1574918;
}

int func_14(int iParam0, bool bParam1)
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

int func_15(int iParam0)
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

void func_16(int iParam0)
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_19();
	}
}

void func_19()
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

int func_20()
{
	func_21();
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

void func_21()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_25(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_24(unk_0xD80958FC74E988A6());
			if (func_23(iVar0) && (!func_22(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_23(Global_113386.f_2363.f_539.f_4321))
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

bool func_22(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_27(int iParam0)
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

void func_28(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_29(int iParam0)
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

int func_30()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_32(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_34(iParam0, 0))
		{
			func_33(iParam0, 1, 0);
			func_33(iParam0, 2, 0);
			func_33(iParam0, 3, 0);
			func_33(iParam0, 4, 0);
			func_33(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_33(iParam0, 0, 0);
	}
}

void func_33(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_35()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_46)
	{
		case 0:
			func_69();
			func_68(7);
			unk_0x963D27A58DF860AC(bLocal_60);
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_54)
			{
				case 0:
					if (unk_0x98A4EB5D89A0C952(bLocal_60))
					{
						unk_0x963D27A58DF860AC(bLocal_59);
						iLocal_54++;
					}
					break;
				
				case 1:
					if (unk_0x98A4EB5D89A0C952(bLocal_59))
					{
						unk_0x963D27A58DF860AC(bLocal_61);
						iLocal_54++;
					}
					break;
				
				case 2:
					if (unk_0x98A4EB5D89A0C952(bLocal_61))
					{
						unk_0x963D27A58DF860AC(bLocal_62);
						iLocal_54++;
					}
					break;
				
				case 3:
					if (unk_0x98A4EB5D89A0C952(bLocal_62))
					{
						unk_0x963D27A58DF860AC(bLocal_63);
						iLocal_54++;
					}
					break;
				
				case 4:
					if (unk_0x98A4EB5D89A0C952(bLocal_63))
					{
						unk_0x9EEFB62EB27B5792(bLocal_49);
						iLocal_54++;
					}
					break;
				
				case 5:
					if (unk_0xCB4E8BE8A0063C5D(bLocal_49))
					{
						unk_0x9EEFB62EB27B5792(bLocal_50);
						iLocal_54++;
					}
					break;
				
				case 6:
					if ((((((unk_0x98A4EB5D89A0C952(bLocal_60) && unk_0x98A4EB5D89A0C952(bLocal_59)) && unk_0x98A4EB5D89A0C952(bLocal_61)) && unk_0x98A4EB5D89A0C952(bLocal_63)) && unk_0x98A4EB5D89A0C952(bLocal_62)) && unk_0xCB4E8BE8A0063C5D(bLocal_49)) && unk_0xCB4E8BE8A0063C5D(bLocal_50))
					{
						func_64(0, Local_51, -1f, 1);
						unk_0xE532F5D78798DAAB(bLocal_59);
						func_64(1, Local_51, -1082130432, 0);
						func_64(2, Local_51, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_55(iVar0, 0, Local_51, -1082130432);
							iVar0++;
						}
						func_45(1);
						iLocal_54++;
					}
					break;
				
				case 7:
					if (func_44())
					{
						func_43(&(Local_48[0 /*4*/].f_1));
						func_68(1);
						unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_77);
						unk_0xBF25EB89375A37AD(5, iLocal_77, joaat("player"));
						func_64(3, Local_51, -1082130432, 0);
						func_64(4, Local_51, -1082130432, 0);
						unk_0xE532F5D78798DAAB(bLocal_60);
						unk_0xE532F5D78798DAAB(bLocal_62);
						func_55(7, 0, Local_51, -1082130432);
						func_55(8, 0, Local_51, -1082130432);
						func_55(9, 0, Local_51, -1082130432);
						func_55(10, 0, Local_51, -1082130432);
						unk_0xE532F5D78798DAAB(bLocal_61);
						unk_0xE532F5D78798DAAB(bLocal_63);
						iLocal_54++;
					}
					if (func_42())
					{
						if (!unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
						{
							unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_77);
							unk_0xBF25EB89375A37AD(5, iLocal_77, joaat("player"));
						}
						else if (!func_121(2))
						{
							unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_77);
							unk_0xBF25EB89375A37AD(3, iLocal_77, joaat("player"));
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_39(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_54++;
					}
					break;
				
				case 9:
					if (func_199(Local_48[0 /*4*/]))
					{
						if (func_38(unk_0xD80958FC74E988A6(), Local_53, 1) >= 200f && func_38(Local_48[0 /*4*/], Local_53, 1) >= 200f)
						{
							iLocal_46 = 2;
						}
					}
					else
					{
						func_37();
					}
					break;
			}
			break;
		
		case 2:
			func_36(1);
			break;
	}
}

void func_36(int iParam0)
{
	iLocal_54 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_37()
{
	if (func_199(Local_48[0 /*4*/]))
	{
		unk_0xB664292EAECF7FA6(Local_48[0 /*4*/], 2);
	}
	func_169(1, 0);
}

float func_38(bool bParam0, struct<3> Param1, bool bParam2)
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

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_199(Local_47[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (func_41(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 1) >= 400f)
		{
			func_40(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !unk_0xA6DB27D19ECBB7DA(Local_47[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(Local_47[iParam0 /*6*/]))
	{
		func_43(&(Local_47[iParam0 /*6*/].f_1));
		if ((((func_199(Local_47[iParam0 /*6*/]) && unk_0xB346476EF1A64897(Local_47[iParam0 /*6*/])) && !unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], true)) && !unk_0x826AA586EDB9FEF8(Local_47[iParam0 /*6*/])) && !unk_0xBB062B2B5722478E(Local_47[iParam0 /*6*/]))
		{
			unk_0x961AC54BF0613F5D(Local_47[iParam0 /*6*/], true, true);
		}
		if (bParam1)
		{
			unk_0x9614299DCB53E54B(&(Local_47[iParam0 /*6*/]));
		}
		else
		{
			unk_0x2595DD4236549CE3(&(Local_47[iParam0 /*6*/]));
		}
		Local_47[iParam0 /*6*/].f_3 = 0;
		Local_47[iParam0 /*6*/].f_2 = 0;
	}
}

float func_41(bool bParam0, bool bParam1, bool bParam2)
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

bool func_42()
{
	return unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, false, true, 0);
}

void func_43(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*bParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*bParam0, false);
		unk_0x86A652570E5F25DD(bParam0);
	}
}

int func_44()
{
	if (func_199(Local_48[0 /*4*/]) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_48[0 /*4*/], false))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	if (func_49())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_15(Global_113375))
		{
			func_46(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_15(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_47(func_48(iParam0), -1);
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
					func_47(func_48(iParam0), -1);
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
					func_47(func_48(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_47(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_48(int iParam0)
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

int func_49()
{
	switch (func_50(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_50(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_54(0))
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
		if (!func_52(iParam2))
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
			func_51(uParam0, iParam4);
		}
	}
	return 2;
}

void func_51(var uParam0, int iParam1)
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

bool func_52(int iParam0)
{
	return func_53(iParam0, Global_43052);
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_52(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, bool bParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	
	if (!unk_0x7239B21A38F536BA(Local_47[iParam0 /*6*/]))
	{
		bVar3 = joaat("weapon_unarmed");
		bVar4 = false;
		bVar5 = -1;
		Var7 = { Local_51 };
		Var8 = { Local_51 };
		iVar9 = 0;
		iVar10 = 1;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		fVar14 = 0.75f;
		fVar15 = 0.95f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		fVar21 = 125f;
		iVar22 = iLocal_77;
		bVar23 = true;
		bVar24 = true;
		bVar25 = false;
		bVar26 = true;
		bVar27 = true;
		bVar28 = false;
		bVar29 = false;
		bVar30 = false;
		bVar31 = false;
		bVar32 = true;
		bVar33 = true;
		bVar34 = true;
		bVar35 = false;
		bVar36 = true;
		bVar37 = false;
		bVar38 = true;
		bVar39 = true;
		bVar40 = true;
		bVar41 = true;
		bVar42 = true;
		bVar43 = true;
		bVar44 = false;
		bVar45 = false;
		bVar46 = false;
		bVar47 = false;
		bVar48 = false;
		bVar49 = false;
		bVar50 = true;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = true;
		bVar55 = true;
		iVar56 = 0;
		bVar57 = false;
		bVar58 = false;
		bVar59 = false;
		bVar60 = false;
		bVar61 = false;
		bVar62 = false;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		switch (iParam0)
		{
			case 0:
				bVar2 = bLocal_63;
				bVar4 = Local_48[1 /*4*/];
				bVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 1:
				bVar2 = bLocal_63;
				Var0 = { unk_0x1899F328B0E12848(Local_48[1 /*4*/], 0f, -1.7f, 0.9f) };
				bVar1 = (unk_0xE83D4F9BA2A38914(Local_48[1 /*4*/]) + 90f);
				bVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 2:
				bVar2 = bLocal_61;
				bVar4 = Local_48[2 /*4*/];
				bVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 3:
				bVar2 = bLocal_61;
				Var0 = { unk_0x1899F328B0E12848(Local_48[2 /*4*/], 0f, -1.5f, 0.9f) };
				bVar1 = (unk_0xE83D4F9BA2A38914(Local_48[2 /*4*/]) + 90f);
				bVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 4:
				bVar2 = bLocal_61;
				Var0 = { unk_0x1899F328B0E12848(Local_48[2 /*4*/], 0f, -2.3f, 0.9f) };
				bVar1 = (unk_0xE83D4F9BA2A38914(Local_48[2 /*4*/]) + 90f);
				bVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				bVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 7:
				bVar2 = bLocal_61;
				bVar4 = Local_48[3 /*4*/];
				bVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 8:
				bVar2 = bLocal_61;
				bVar4 = Local_48[3 /*4*/];
				bVar5 = false;
				bVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 9:
				bVar2 = bLocal_63;
				bVar4 = Local_48[4 /*4*/];
				bVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 10:
				bVar2 = bLocal_63;
				bVar4 = Local_48[4 /*4*/];
				bVar5 = false;
				bVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			default:
				break;
		}
		if (!unk_0x98A4EB5D89A0C952(bVar2))
		{
			return 0;
		}
		if (!func_63(Param2, Local_51, 0))
		{
			if (!unk_0x7239B21A38F536BA(bVar6))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var7 = { Param2 };
			}
		}
		if (fParam3 != -1f)
		{
			bVar1 = fParam3;
		}
		if (func_199(bVar4))
		{
			Local_47[iParam0 /*6*/] = unk_0x7DD959874C1FD534(bVar4, 26, bVar2, bVar5, true, true);
		}
		else
		{
			Local_47[iParam0 /*6*/] = unk_0xD49F9B0955C367DE(26, bVar2, Var0, bVar1, true, true);
			unk_0x1A9205C1B9EE827F(Local_47[iParam0 /*6*/], bVar36, false);
			unk_0x9EBC85ED0FFFE51C(Local_47[iParam0 /*6*/], !bVar60, false);
		}
		if (bVar35)
		{
			unk_0x239A3351AC1DA385(Local_47[iParam0 /*6*/], Var0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar22 == iLocal_77)
			{
				Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0, 145);
			}
		}
		unk_0x476AE72C1D19D1A8(Local_47[iParam0 /*6*/], bVar54);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 213, bVar23);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 212, bVar24);
		unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], bVar25);
		unk_0x971D38760FBC02EF(Local_47[iParam0 /*6*/], bVar26);
		unk_0x5BA7919BED300023(Local_47[iParam0 /*6*/], bVar27);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 188, bVar50);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 42, !bVar28);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 9, bVar30);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 3, bVar32);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 342, bVar52);
		unk_0x0DC7CABAB1E9B67E(Local_47[iParam0 /*6*/], bVar31, 1);
		unk_0xCEA04D83135264CC(Local_47[iParam0 /*6*/], bVar12);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 8, bVar34);
		unk_0xEA1C610A04DB6BBB(Local_47[iParam0 /*6*/], bVar33, false);
		unk_0x3882114BDE571AD4(Local_47[iParam0 /*6*/], bVar37);
		unk_0xBF0FD6E56C964FCB(Local_47[iParam0 /*6*/], bVar3, -1, bVar29, bVar29);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 2, bVar38);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, bVar39);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 52, bVar40);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 13, bVar63);
		unk_0xEBD76F2359F190AC(Local_47[iParam0 /*6*/], bVar41);
		unk_0x63F58F7C80513AAD(Local_47[iParam0 /*6*/], bVar42);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 118, bVar43);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 115, bVar44);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 12, bVar45);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 36, bVar46);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 35, bVar47);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 29, bVar48);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 185, bVar49);
		unk_0x332B562EEDA62399(Local_47[iParam0 /*6*/], bVar51);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 17, bVar57);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 5, bVar66);
		unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 46, bVar67);
		unk_0xA9A41C1E940FB0E8(Local_47[iParam0 /*6*/], bVar58);
		unk_0x9D64D7405520E3D3(Local_47[iParam0 /*6*/], bVar53);
		func_59(Local_47[iParam0 /*6*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		unk_0x428CA6DBD1094446(Local_47[iParam0 /*6*/], bVar61);
		unk_0x1913FE4CBF41C463(Local_47[iParam0 /*6*/], 203, bVar62);
		unk_0xA9B61A329BFDCBEA(Local_47[iParam0 /*6*/], !bVar62);
		if (!bVar55)
		{
			func_58(iParam0, 2);
		}
		if (!unk_0xCA042B6957743895(bVar68))
		{
			unk_0x142A02425FF02BD9(Local_47[iParam0 /*6*/], bVar68, -1, false);
		}
		if (bVar11 > 0)
		{
			if (bVar11 > unk_0x15D757606D170C3C(Local_47[iParam0 /*6*/]) || iVar56)
			{
				unk_0x166E7CF68597D8B5(Local_47[iParam0 /*6*/], bVar11);
			}
			unk_0x6B76DC1F3AE6E6A3(Local_47[iParam0 /*6*/], bVar11, false);
		}
		if (bVar13 > 0)
		{
			unk_0x7AEFB85C1D49DEB6(Local_47[iParam0 /*6*/], bVar13);
		}
		if (fVar21 >= 0f)
		{
			unk_0x33A8F7F7D5F7F33C(Local_47[iParam0 /*6*/], fVar21);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			unk_0x8378627201D5497D(Local_47[iParam0 /*6*/], fVar14, fVar15);
		}
		if (bVar64)
		{
			unk_0x9D3151A373974804(Local_47[iParam0 /*6*/], Var0, 5f, false, false);
		}
		if (bVar65)
		{
			unk_0xC158D28142A34608(Local_47[iParam0 /*6*/]);
		}
		unk_0xC80A74AC829DDD92(Local_47[iParam0 /*6*/], iVar22);
		if (unk_0x7239B21A38F536BA(bVar6))
		{
			unk_0x6B9BBD38AB0796DF(Local_47[iParam0 /*6*/], bVar6, -1, Var7, Var8, true, true, true, false, 2, true, 0);
			unk_0xB128377056A54E2A(Local_47[iParam0 /*6*/], false);
			func_58(iParam0, 1);
		}
		func_57(iParam0);
		func_56(iParam0);
		if (iVar9 != 0)
		{
			unk_0xD966D51AA5B28BB9(Local_47[iParam0 /*6*/], bVar3, iVar9);
			unk_0xADF692B254977C0C(Local_47[iParam0 /*6*/], bVar3, true);
		}
		unk_0xC7622C0D36B2FDA8(Local_47[iParam0 /*6*/], iVar10);
		if (bVar59)
		{
			unk_0x88CBB5CEB96B7BD2(Local_47[iParam0 /*6*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_57(int iParam0)
{
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, false, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, false, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, false, 0);
				break;
			
			case 1:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, true, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, true, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, true, 0);
				break;
			
			case 2:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, false, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, false, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, false, 0);
				break;
			
			case 3:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, true, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, true, false, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, true, 0);
				break;
			
			case 4:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, true, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, false, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, true, false, 0);
				break;
			
			case 7:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, false, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, true, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, true, 2, 0);
				break;
			
			case 8:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, true, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, false, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, 2, 0);
				break;
			
			case 9:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, true, 2, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, false, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, false, 2, 0);
				break;
			
			case 10:
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 0, false, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 3, true, true, 0);
				unk_0x262B14F48D29DE80(Local_47[iParam0 /*6*/], 4, true, false, 0);
				break;
			}
	}
}

void func_58(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Local_47[iParam0 /*6*/].f_2), bParam1);
}

void func_59(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0xF29CF591C4BF6CEE(bParam0, fParam1);
		unk_0x9C74B0BC831B753A(bParam0, fParam2);
		unk_0x3B6405E8AB34A907(bParam0, (fParam3 / 2f));
		unk_0x2DB492222FB21E26(bParam0, fParam4);
		unk_0x70793BDCA1E854D4(bParam0, fParam5);
	}
}

bool func_60(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_61(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_61(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_62(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_62(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_62(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_63(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_64(int iParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	bool bVar24;
	struct<3> Var25;
	struct<3> Var26;
	bool bVar27;
	
	if (!unk_0x7239B21A38F536BA(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0;
		bVar4 = true;
		bVar5 = true;
		bVar6 = false;
		bVar7 = false;
		bVar8 = true;
		bVar9 = false;
		bVar10 = false;
		bVar11 = true;
		bVar12 = false;
		bVar13 = false;
		bVar14 = false;
		bVar15 = false;
		bVar16 = false;
		bVar17 = true;
		bVar18 = false;
		bVar19 = false;
		bVar20 = true;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_53 };
				bVar1 = 163.5528f;
				bVar2 = bLocal_59;
				bVar11 = false;
				bVar16 = true;
				bVar17 = false;
				bVar19 = true;
				bVar6 = true;
				break;
			
			case 1:
				Var0 = { 3087.114f, 2195.558f, 2f };
				bVar1 = 157.68f;
				bVar2 = bLocal_62;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				bVar20 = false;
				bVar16 = true;
				bVar17 = false;
				break;
			
			case 2:
				Var0 = { 3092.788f, 2197.243f, 2f };
				bVar1 = -22.32f;
				bVar2 = bLocal_60;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				bVar20 = false;
				bVar16 = true;
				bVar17 = false;
				break;
			
			case 3:
				Var0 = { 3170.401f, 1964.587f, 0.2889f };
				bVar1 = 341.1273f;
				bVar2 = bLocal_60;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				bVar20 = false;
				bVar16 = true;
				bVar17 = false;
				break;
			
			case 4:
				Var0 = { 3227.12f, 2074.91f, 0.75f };
				bVar1 = 175.16f;
				bVar2 = bLocal_62;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				bVar20 = false;
				bVar16 = true;
				bVar17 = false;
				break;
			
			default:
				break;
		}
		if (!unk_0x98A4EB5D89A0C952(bVar2))
		{
			return 0;
		}
		if (!func_63(Param1, Local_51, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam2 != -1f)
		{
			bVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = unk_0xAF35D0D2583051B0(bVar2, Var0, bVar1, true, true, false);
		func_67(iParam0);
		func_66(iParam0);
		unk_0xEA1C610A04DB6BBB(Local_48[iParam0 /*4*/], bVar5, false);
		if (unk_0x7239B21A38F536BA(bVar24))
		{
			unk_0x6B9BBD38AB0796DF(Local_48[iParam0 /*4*/], bVar24, -1, Var25, Var26, false, false, false, false, 2, true, 0);
		}
		else
		{
			unk_0x1A9205C1B9EE827F(Local_48[iParam0 /*4*/], bVar4, false);
		}
		unk_0x3E8C8727991A8A0B(Local_48[iParam0 /*4*/], bVar6);
		unk_0x428CA6DBD1094446(Local_48[iParam0 /*4*/], bVar7);
		unk_0xEB9DC3C7D8596C46(Local_48[iParam0 /*4*/], bVar8);
		if (bVar9)
		{
			unk_0x2497C4717C8B881E(Local_48[iParam0 /*4*/], bVar9, true, false);
		}
		unk_0x3882114BDE571AD4(Local_48[iParam0 /*4*/], bVar12);
		unk_0x0DC7CABAB1E9B67E(Local_48[iParam0 /*4*/], bVar13, 1);
		unk_0x3750146A28097A82(Local_48[iParam0 /*4*/], bVar14);
		unk_0x4D9D109F63FEE1D4(Local_48[iParam0 /*4*/], bVar15);
		unk_0x8BA6F76BC53A1493(Local_48[iParam0 /*4*/], bVar17, 0);
		unk_0x2B6747FAA9DB9D6B(Local_48[iParam0 /*4*/], bVar16);
		unk_0x79F020FF9EDC0748(Local_48[iParam0 /*4*/], bVar18);
		unk_0x31B927BBC44156CD(Local_48[iParam0 /*4*/], bVar20);
		if (!unk_0xCA042B6957743895(bVar27))
		{
			unk_0x95A88F0B409CDA47(Local_48[iParam0 /*4*/], bVar27);
		}
		if (fVar21 > 0f)
		{
			unk_0xAB54A438726D25D5(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar10)
		{
			unk_0xA178472EBB8AE60D(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			unk_0xAD2D28A1AFDFF131(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			unk_0xE6F13851780394DA(Local_48[iParam0 /*4*/], fVar23);
		}
		if (bVar19)
		{
			unk_0x75DBEC174AEEAD10(Local_48[iParam0 /*4*/], true);
		}
		if (iVar3 != 0)
		{
			unk_0xB664292EAECF7FA6(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = func_65(Local_48[iParam0 /*4*/], bVar11, 0);
		}
		if (iParam0 == 0)
		{
			unk_0xCFC8BE9A5E1FE575(Local_48[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

bool func_65(bool bParam0, bool bParam1, bool bParam2)
{
	return func_61(bParam0, !bParam1, bParam2);
}

void func_66(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], true, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 2, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 3, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 4, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 5, false);
				break;
			
			case 1:
			case 4:
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], true, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 2, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 3, true);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 4, false);
				unk_0x7EE3A3C5E4A40CC9(Local_48[iParam0 /*4*/], 5, true);
				break;
			}
	}
}

void func_67(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x4F1D4BE3A7F24601(Local_48[iParam0 /*4*/], 111, 28);
				unk_0x2036F561ADD12E33(Local_48[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				unk_0x4F1D4BE3A7F24601(Local_48[iParam0 /*4*/], 121, 20);
				unk_0x2036F561ADD12E33(Local_48[iParam0 /*4*/], false, 156);
				break;
			
			case 3:
				unk_0x4F1D4BE3A7F24601(Local_48[iParam0 /*4*/], 121, 46);
				unk_0x2036F561ADD12E33(Local_48[iParam0 /*4*/], false, 156);
				break;
			
			case 4:
				unk_0x4F1D4BE3A7F24601(Local_48[iParam0 /*4*/], 111, 54);
				unk_0x2036F561ADD12E33(Local_48[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_68(bool bParam0)
{
	unk_0x933D6A9EEC1BACD0(&iLocal_55, bParam0);
}

void func_69()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	func_81(1);
	unk_0xC6ED9D5092438D91(1);
	func_80(0);
	unk_0xC12321827687FE4D(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, false, true);
	unk_0x46A1E1A299EC4BBA(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!unk_0xE33D59DA70B58FDF(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0xC12321827687FE4D(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, false, true);
		unk_0x46A1E1A299EC4BBA(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!unk_0xE33D59DA70B58FDF(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0xC12321827687FE4D(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, false, true);
		unk_0x46A1E1A299EC4BBA(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!unk_0xE33D59DA70B58FDF(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0xBE31FD6CE464AC59(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!unk_0xE33D59DA70B58FDF(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0x01C7B9B38428AEB6(3070.882f, 2103.967f, -2.0883f, 5f, false, false, false, false, false, false, 0);
	}
	unk_0xF372BC22FCB88606("ENEMIES", &iLocal_77);
	unk_0xBF25EB89375A37AD(1, joaat("player"), joaat("player"));
	unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_77);
	unk_0xBF25EB89375A37AD(1, iLocal_77, iLocal_77);
	unk_0xBF25EB89375A37AD(3, iLocal_77, joaat("player"));
	unk_0xC80A74AC829DDD92(unk_0xD80958FC74E988A6(), joaat("player"));
	func_79(&uLocal_79, 1, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	unk_0x020E5F00CDA207BA(0f);
	func_70(1);
}

void func_70(bool bParam0)
{
	func_71(39, bParam0);
	func_71(40, bParam0);
	func_71(41, bParam0);
	func_71(42, bParam0);
	func_71(43, bParam0);
	func_71(44, bParam0);
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_78(iParam0, 2, 1))
		{
			func_77(iParam0, 2, 1);
		}
	}
	else if (func_78(iParam0, 2, 1))
	{
		func_72(iParam0, 2, 1);
	}
}

void func_72(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			bVar0 = func_75(func_76(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_73(func_76(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_73(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
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

void func_77(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			bVar0 = func_75(func_76(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_73(func_76(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_78(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0)
		{
			return BitTest(func_75(func_76(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_79(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_78[iParam0] = unk_0x1B5C85C612E5256E(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, false, true, true, true);
			break;
	}
}

void func_81(int iParam0)
{
	iParam0 = iParam0;
}

void func_82()
{
	if (!func_120())
	{
		if (func_107())
		{
			func_169(1, 0);
		}
	}
	unk_0x208784099002BC30("RE_SEAPLANE", 0);
	func_106();
	func_94();
	func_90();
	func_85();
	func_83(&uLocal_64, &uLocal_56);
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0x7239B21A38F536BA((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0x7239B21A38F536BA((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_84((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x0267D00AF114F17A((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xFCDFF7B72D23A1AC((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0x7239B21A38F536BA((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0x7239B21A38F536BA((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x7239B21A38F536BA(Local_47[iVar0 /*6*/]) && unk_0xA6DB27D19ECBB7DA(Local_47[iVar0 /*6*/].f_1))
		{
			if (unk_0x997ABD671D25CA0B(Local_47[iVar0 /*6*/], false))
			{
				if (!func_89(iVar0, 0))
				{
					unk_0xD38744167B2FA257(Local_47[iVar0 /*6*/].f_1, 1f);
					func_58(iVar0, 0);
				}
				if (func_88(Local_47[iVar0 /*6*/], 0) != -1)
				{
					if (func_87(iVar0))
					{
						if (unk_0x970F608F0EE6C885(Local_47[iVar0 /*6*/].f_1) > 0)
						{
							unk_0x45FF974EEE1C8734(Local_47[iVar0 /*6*/].f_1, false);
							unk_0x54318C915D27E4CE(Local_47[iVar0 /*6*/].f_1, true);
						}
					}
					else if (unk_0x970F608F0EE6C885(Local_47[iVar0 /*6*/].f_1) == 0)
					{
						unk_0x45FF974EEE1C8734(Local_47[iVar0 /*6*/].f_1, 255);
						unk_0x54318C915D27E4CE(Local_47[iVar0 /*6*/].f_1, false);
					}
				}
			}
			else if (func_89(iVar0, 0))
			{
				unk_0xD38744167B2FA257(Local_47[iVar0 /*6*/].f_1, 0.7f);
				func_86(iVar0, 0);
				if (unk_0x970F608F0EE6C885(Local_47[iVar0 /*6*/].f_1) == 0)
				{
					unk_0x45FF974EEE1C8734(Local_47[iVar0 /*6*/].f_1, 255);
					unk_0x54318C915D27E4CE(Local_47[iVar0 /*6*/].f_1, false);
				}
			}
			if (unk_0x84A2DD9AC37C35C1(Local_47[iVar0 /*6*/]))
			{
				func_43(&(Local_47[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x7239B21A38F536BA(Local_48[iVar0 /*4*/]) && unk_0xA6DB27D19ECBB7DA(Local_48[iVar0 /*4*/].f_1))
		{
			if (!unk_0x4C241E39B23DF959(Local_48[iVar0 /*4*/], false))
			{
				func_43(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_86(int iParam0, bool bParam1)
{
	unk_0xE80492A9AC099A93(&(Local_47[iParam0 /*6*/].f_2), bParam1);
}

int func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_199(Local_47[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_199(Local_47[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_199(Local_47[2 /*6*/]) && !func_199(Local_47[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_199(Local_47[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_199(Local_47[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_88(bool bParam0, bool bParam1)
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

bool func_89(int iParam0, int iParam1)
{
	return BitTest(Local_47[iParam0 /*6*/].f_2, iParam1);
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x7239B21A38F536BA(Local_48[iVar0 /*4*/]))
		{
			func_91(iVar0);
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_48[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_199(unk_0xBB40DD2270B65366(Local_48[iParam0 /*4*/], -1, false)) && !func_199(unk_0xBB40DD2270B65366(Local_48[iParam0 /*4*/], false, false))) && !func_199(unk_0xBB40DD2270B65366(Local_48[iParam0 /*4*/], true, false))) && !func_199(unk_0xBB40DD2270B65366(Local_48[iParam0 /*4*/], 2, false)))
						{
							unk_0x31B927BBC44156CD(Local_48[iParam0 /*4*/], true);
							unk_0x75DBEC174AEEAD10(Local_48[iParam0 /*4*/], false);
							Local_48[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (unk_0x47D6F43D77935C75(Local_48[iParam0 /*4*/]))
	{
		func_92(iParam0, 0);
	}
	else
	{
		func_92(iParam0, 1);
	}
}

void func_92(int iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(Local_48[iParam0 /*4*/]))
	{
		func_43(&(Local_48[iParam0 /*4*/].f_1));
		if (unk_0x1C8A4C2C19E68EEC(Local_48[iParam0 /*4*/]))
		{
			unk_0x54833611C17ABDEA(Local_48[iParam0 /*4*/]);
		}
		if (func_93(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0xEA386986E786A54F(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				unk_0x629BFA74418D6239(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0;
		Local_48[iParam0 /*4*/].f_2 = 0;
		Local_48[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_93(var uParam0)
{
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x7239B21A38F536BA(Local_47[iVar0 /*6*/]))
		{
			func_95(iVar0);
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_47[iParam0 /*6*/].f_3 >= 2 && Local_47[iParam0 /*6*/].f_3 < 5)
				{
					if ((unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
					{
						func_105();
						unk_0x90D2156198831D69(false, true);
						unk_0x504D54DF3F6F2247(false, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(false, false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_199(Local_47[3 /*6*/]))
							{
								unk_0xC32779C16FCEECD9(Local_47[iParam0 /*6*/], 1, Local_47[3 /*6*/], 31086, Local_51, 0, -1, -1);
							}
						}
						else if (func_199(Local_47[1 /*6*/]))
						{
							unk_0xC32779C16FCEECD9(Local_47[iParam0 /*6*/], 1, Local_47[1 /*6*/], 31086, Local_51, 0, -1, -1);
						}
						if (((func_121(1) || unk_0x4859F1FC66A6278E(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6())) || func_102()) || func_101())
						{
							func_100(iParam0);
							unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_199(Local_47[1 /*6*/]) || (func_199(Local_48[1 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_47[1 /*6*/], Local_48[1 /*4*/], true)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_199(Local_47[3 /*6*/]) || (func_199(Local_48[2 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_47[3 /*6*/], Local_48[2 /*4*/], true))) && (!func_199(Local_47[4 /*6*/]) || (func_199(Local_48[2 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_47[4 /*6*/], Local_48[2 /*4*/], true))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							bVar4 = bLocal_49;
						}
						else
						{
							bVar4 = bLocal_50;
						}
						unk_0xB629A298081F876F(bVar4, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), &iVar1);
						unk_0x5343532C01A07234(bVar4, &iVar3);
						unk_0xB629A298081F876F(bVar4, unk_0x3FEF770D40960D5A(Local_47[iParam0 /*6*/], true), &iVar2);
						if (iVar1 > 0 && unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, false, true, 0))
						{
							iVar1 = func_99(iVar1, 22, iVar3);
						}
						if (func_38(unk_0xD80958FC74E988A6(), Local_53, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_57 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_58 != iVar1) && iVar1 > iVar2)) && func_199(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]))) && !unk_0x4FBACCE3B4138EE8(Local_47[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_57 = iVar1;
							}
							else
							{
								iLocal_58 = iVar1;
							}
							if (func_199(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/])))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false);
								func_86(iParam0, 5);
							}
							unk_0x3123FAA6DB1CF7ED(Local_47[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), bVar4, 786469, 0, iVar5, iVar1, -1f, false, 6f);
						}
						if ((!func_98(Local_47[iParam0 /*6*/], -235832601, 1) && unk_0x77F1BEB8863288D5(Local_47[iParam0 /*6*/], -235832601) == 7) && !func_98(Local_47[iParam0 /*6*/], 538064912, 1))
						{
							unk_0x10AB107B887214D8(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 20f);
							if (func_199(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/])) && unk_0x2467A2D807D37CA3(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/])))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), true);
								func_58(iParam0, 5);
							}
						}
						if (!func_89(iParam0, 4))
						{
							if (unk_0x4FBACCE3B4138EE8(Local_47[iParam0 /*6*/], 0))
							{
								func_58(iParam0, 4);
								unk_0xE1EF3C1216AFF2CD(Local_47[iParam0 /*6*/]);
								if (!func_89(iParam0, 5) && unk_0x2467A2D807D37CA3(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/])))
								{
									unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), true);
								}
							}
						}
						else if (!unk_0x4FBACCE3B4138EE8(Local_47[iParam0 /*6*/], 0))
						{
							func_86(iParam0, 4);
							if (!func_89(iParam0, 5))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false);
							}
						}
						if ((unk_0x77F1BEB8863288D5(Local_47[iParam0 /*6*/], -235832601) == 1 && !unk_0x5721B434AD84D57A(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]))) && !unk_0x8785E6E40C7A8818(Local_47[iParam0 /*6*/]))
						{
							unk_0x2F8AF0E82773A171(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), false, Local_51, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
						unk_0x2FB897405C90B361(bVar4, (iVar3 - 1), &Var6);
						if (unk_0x20B60995556D004F(Local_47[iParam0 /*6*/], Var6, 8f, 8f, 8f, false, true, 0))
						{
							unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							unk_0x15C86013127CE63F(Local_47[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false, unk_0xD80958FC74E988A6(), Local_51, 7, 20f, 786469, 5f, 7);
							func_68(5);
							unk_0xFF1B8B4AA1C25DC8(bVar4);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_47[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), false, Local_51, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 4:
						if (!func_98(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_47[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_98(Local_47[iParam0 /*6*/], 993674639, 1)) && func_199(Local_47[3 /*6*/]))
						{
							unk_0xC32779C16FCEECD9(Local_47[iParam0 /*6*/], 1, Local_47[3 /*6*/], 31086, Local_51, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_199(Local_47[1 /*6*/])) && func_98(Local_47[iParam0 /*6*/], 993674639, 1))
						{
							unk_0xC32779C16FCEECD9(Local_47[iParam0 /*6*/], 1, Local_47[1 /*6*/], 31086, Local_51, 0, -1, -1);
						}
						if (((func_121(1) || unk_0x4859F1FC66A6278E(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6())) || func_102()) || func_101())
						{
							func_100(iParam0);
							Local_47[iParam0 /*6*/].f_4 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(1250, 1501));
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x9CD27B0045628463() >= Local_47[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_199(Local_48[1 /*4*/])) && func_199(unk_0xBB40DD2270B65366(Local_48[1 /*4*/], -1, false)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_47[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_47[iParam0 /*6*/], Local_48[1 /*4*/], 20000, false, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							}
							if ((iParam0 == 3 && func_199(Local_48[2 /*4*/])) && func_199(unk_0xBB40DD2270B65366(Local_48[2 /*4*/], -1, false)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_47[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_47[iParam0 /*6*/], Local_48[2 /*4*/], 20000, false, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							}
							if ((iParam0 == 4 && func_199(Local_48[2 /*4*/])) && func_199(unk_0xBB40DD2270B65366(Local_48[2 /*4*/], -1, false)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_47[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_47[iParam0 /*6*/], Local_48[2 /*4*/], 20000, true, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							}
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar7 = 1;
								break;
							
							case 3:
								iVar7 = 2;
								break;
							
							case 4:
								iVar7 = 2;
								break;
						}
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], true) || !func_199(unk_0xBB40DD2270B65366(Local_48[iVar7 /*4*/], -1, false)))
						{
							unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
							unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						else if (!func_98(Local_47[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_199(Local_48[iVar7 /*4*/])))
							{
								unk_0xC20E50AA46D09CA8(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 20000, false, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_199(Local_48[iVar7 /*4*/]))
							{
								unk_0xC20E50AA46D09CA8(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 20000, true, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
						{
							if (unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
							{
								func_105();
								unk_0x90D2156198831D69(false, true);
								unk_0x504D54DF3F6F2247(false, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
								unk_0x90D2156198831D69(false, false);
								unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
								func_103(Local_47[iParam0 /*6*/]);
								unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							if (Local_47[iParam0 /*6*/].f_3 == 3)
							{
								if ((unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), 3, 6000) || func_97(iParam0, 5000)) && func_121(5))
								{
									unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], 20000);
									unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
									unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
									Local_47[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_199(unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), -1, false)))
								{
									unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 3, true);
									unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
									Local_47[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_98(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_47[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
					{
						func_105();
						unk_0x90D2156198831D69(false, true);
						unk_0x504D54DF3F6F2247(false, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(false, false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_47[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_48[3 /*4*/]))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false);
								fVar8 = unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6());
								fVar8 = func_96(fVar8, 10f, 40f);
								unk_0xAB54A438726D25D5(Local_48[3 /*4*/], fVar8);
							}
							unk_0xADF692B254977C0C(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0x15C86013127CE63F(Local_47[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false, unk_0xD80958FC74E988A6(), Local_51, 7, 20f, 786469, 5f, 7);
							unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_47[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), false, Local_51, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_98(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_47[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
					{
						func_105();
						unk_0x90D2156198831D69(false, true);
						unk_0x504D54DF3F6F2247(false, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(false, false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_44() && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_47[iParam0 /*6*/]))) || func_121(6))
						{
							if (func_199(Local_48[4 /*4*/]))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false);
								fVar9 = unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6());
								fVar9 = func_96(fVar9, 10f, 40f);
								unk_0xAB54A438726D25D5(Local_48[4 /*4*/], fVar9);
							}
							unk_0xADF692B254977C0C(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0x15C86013127CE63F(Local_47[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_47[iParam0 /*6*/]), false, unk_0xD80958FC74E988A6(), Local_51, 7, 20f, 786469, 5f, 7);
							unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
							func_68(6);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), 3, 6000) || func_97(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_47[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), false, Local_51, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_98(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_47[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false) && func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
					{
						func_105();
						unk_0x90D2156198831D69(false, true);
						unk_0x504D54DF3F6F2247(false, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(false, false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_44() && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_41(unk_0xD80958FC74E988A6(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_47[iParam0 /*6*/])))
						{
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
							unk_0x45FF974EEE1C8734(Local_47[iParam0 /*6*/].f_1, false);
							unk_0x54318C915D27E4CE(Local_47[iParam0 /*6*/].f_1, true);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false))
						{
							if (func_199(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false)))
							{
								if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), 3, 6000) || func_97(iParam0, 5000))
								{
									unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
									unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
									unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 1, false);
									Local_47[iParam0 /*6*/].f_3++;
								}
								else if (!func_199(unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(Local_47[iParam0 /*6*/], false), -1, false)))
								{
									unk_0x9F7794730795E019(Local_47[iParam0 /*6*/], 3, true);
									unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
									Local_47[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_98(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_47[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_47[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_89(iParam0, 1))
		{
			unk_0xB128377056A54E2A(Local_47[iParam0 /*6*/], true);
			unk_0x961AC54BF0613F5D(Local_47[iParam0 /*6*/], true, false);
			func_86(iParam0, 1);
		}
		if (!func_89(iParam0, 2))
		{
			if (unk_0x47D6F43D77935C75(Local_47[iParam0 /*6*/]))
			{
				func_40(iParam0, 0);
			}
			else
			{
				func_40(iParam0, 1);
			}
		}
	}
}

float func_96(float fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_199(Local_48[iVar0 /*4*/]))
	{
		if (!unk_0xCFB0A0D8EDD145A3(Local_48[iVar0 /*4*/]))
		{
			Local_48[iVar0 /*4*/].f_3 = (Local_48[iVar0 /*4*/].f_3 + unk_0x15C40837039FFAF7());
		}
		else
		{
			Local_48[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_48[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_98(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_100(int iParam0)
{
	func_58(iParam0, 3);
	if (!func_121(4))
	{
		func_68(4);
	}
	if (!func_121(2))
	{
		func_68(2);
	}
	Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
	unk_0xF29CF591C4BF6CEE(Local_47[iParam0 /*6*/], 200f);
	if (unk_0x997ABD671D25CA0B(Local_47[iParam0 /*6*/], false))
	{
		if (func_88(Local_47[iParam0 /*6*/], 0) != -1)
		{
			unk_0x45FF974EEE1C8734(Local_47[iParam0 /*6*/].f_1, false);
			unk_0x54318C915D27E4CE(Local_47[iParam0 /*6*/].f_1, true);
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(Local_47[iParam0 /*6*/]);
			unk_0x9F8AA94D6D97DBF4(Local_47[iParam0 /*6*/], true);
		}
	}
}

bool func_101()
{
	return unk_0xA079A6C51525DC4B(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_102()
{
	bool bVar0;
	
	bVar0 = unk_0xB6997A7EB3F5C8C0();
	if (func_199(bVar0) && unk_0x51210CED3DA1C78A(bVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_103(bool bParam0)
{
	if (func_121(0))
	{
		unk_0x39E72BC99E6360CB(iLocal_244);
		func_104(0);
	}
	unk_0x5ABA3986D90D8A3B(bParam0, iLocal_244);
	unk_0x3841422E9C488D8C(&iLocal_244);
}

void func_104(bool bParam0)
{
	unk_0xE80492A9AC099A93(&iLocal_55, bParam0);
}

void func_105()
{
	if (!func_121(0))
	{
		unk_0x3841422E9C488D8C(&iLocal_244);
		unk_0xE8854A4326B9E12B(&iLocal_244);
		func_68(0);
	}
}

void func_106()
{
	bool bVar0;
	int iVar1;
	
	if (func_121(1) || func_121(4))
	{
		if (func_199(Local_48[0 /*4*/]) && func_41(unk_0xD80958FC74E988A6(), Local_48[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_39(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_37();
			}
		}
	}
	if (unk_0x7239B21A38F536BA(Local_48[0 /*4*/]) && !func_199(Local_48[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_39(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_37();
		}
	}
}

int func_107()
{
	if (!func_52(5))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_108(float fParam0, bool bParam1)
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
		if (func_23(func_114()))
		{
			iVar5 = func_20();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_109(iVar1, &Var0);
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

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_111(int iParam0)
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

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_113(iParam0) };
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

struct<2> func_113(int iParam0)
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

int func_114()
{
	func_21();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_115()
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

int func_116()
{
	if (func_119() && !func_115())
	{
		return 1;
	}
	if (func_118() && func_117())
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return Global_113104 > 0;
}

int func_118()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_120()
{
	if ((Global_113375 == func_30() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

bool func_121(int iParam0)
{
	return BitTest(iLocal_55, iParam0);
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_124(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_123();
}

void func_123()
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

void func_124(int iParam0)
{
	Global_113375 = iParam0;
}

int func_125(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_30();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_167())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_115())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_116())
		{
			return 0;
		}
		if (func_166())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_108(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_165(iParam1))
		{
			return 0;
		}
		if (func_23(func_114()))
		{
			if (func_164(func_114()) == 4 || func_164(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_114()))
		{
			if (!func_163(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_162(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_160())
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
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_52(5))
		{
			return 0;
		}
		if (func_149(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_165(30) && !func_149(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_114()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_148(bVar4))
				{
					if (func_126(iVar2))
					{
						if (!func_63(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_114() != iVar2)
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

bool func_126(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_127(bVar0);
}

int func_127(bool bParam0)
{
	return func_128(bParam0, 1);
}

int func_128(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(bParam0))
	{
		return 0;
	}
	func_129(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_129(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_130(func_141(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_130(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_140(bParam0, bParam1))
	{
		bVar0 = func_139(bParam1);
		iVar1 = func_137(bParam0);
		iVar2 = (func_137(bParam0) - func_137(bParam1));
		iVar3 = (func_139(bParam0) - func_139(bParam1));
		iVar4 = (func_136(bParam0) - func_136(bParam1));
		iVar5 = (func_135(bParam0) - func_135(bParam1));
		iVar6 = (func_134(bParam0) - func_134(bParam1));
		iVar7 = (func_133(bParam0) - func_133(bParam1));
	}
	else
	{
		bVar0 = func_139(bParam0);
		iVar1 = func_137(bParam1);
		iVar2 = (func_137(bParam1) - func_137(bParam0));
		iVar3 = (func_139(bParam1) - func_139(bParam0));
		iVar4 = (func_136(bParam1) - func_136(bParam0));
		iVar5 = (func_135(bParam1) - func_135(bParam0));
		iVar6 = (func_134(bParam1) - func_134(bParam0));
		iVar7 = (func_133(bParam1) - func_133(bParam0));
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
		iVar4 = (iVar4 + func_132(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_131(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_131(bool bParam0, float fParam1, float fParam2)
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

int func_132(int iParam0, int iParam1)
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

int func_133(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_134(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_135(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_136(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_137(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_138(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_139(bool bParam0)
{
	return (bParam0 && 15);
}

int func_140(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_148(bParam1) || !func_148(bParam0))
	{
		return 1;
	}
	iVar0 = func_137(bParam0);
	iVar1 = func_137(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(bParam0);
	iVar1 = func_139(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(bParam0);
	iVar1 = func_136(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(bParam0);
	iVar1 = func_135(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(bParam0);
	iVar1 = func_134(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(bParam0);
	iVar1 = func_133(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	var uVar0;
	
	func_147(&uVar0, unk_0x494E97C2EF27C470());
	func_146(&uVar0, unk_0x13D2B8ADD79640F2());
	func_145(&uVar0, unk_0x25223CA6B4D20B7F());
	func_144(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_143(&uVar0, unk_0xBBC72712E80257A1());
	func_142(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (bParam1 < 1 || bParam1 > func_132(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_147(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_148(bool bParam0)
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
	iVar0 = func_133(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_134(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_135(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_136(bParam0);
	if (iVar5 < 1 || iVar5 > func_132(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_114();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_159()) || Global_112433) || Global_31962) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_159()) || Global_31962) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_159()) || Global_112433) || Global_31962) || func_158()) || func_157(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_159()) || Global_112433) || Global_31962) || func_158()) || func_157(8, -1)) || func_156()) || func_155()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_159() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_157(8, -1)) || func_153()) || func_152()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_157(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_159()) || Global_31962) || func_158()) || func_157(8, -1)) || func_155()) || func_154()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_159()) || func_155()) || Global_112433) || Global_31962) || func_158()) || Global_44238) || func_157(8, -1)) || func_154()) || func_152()) || func_153()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_159()) || Global_112433) || Global_31962) || func_158()) || func_157(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
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

var func_151()
{
	return Global_100480.f_1;
}

int func_152()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_153()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()
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

bool func_155()
{
	return Global_100493.f_376 > 0;
}

bool func_156()
{
	return Global_100493.f_375 > 0;
}

var func_157(int iParam0, int iParam1)
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

var func_158()
{
	return Global_1575058;
}

int func_159()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_160()
{
	func_161();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_161()
{
	if (func_22(14))
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
		Global_20266 = func_114();
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

bool func_162(bool bParam0)
{
	return func_140(func_141(), bParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_114();
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

int func_164(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_167())
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

int func_166()
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

int func_167()
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

int func_168()
{
	struct<3> Var0;
	float fVar1;
	
	if (func_199(unk_0xD80958FC74E988A6()))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		unk_0xC906A7DAB05C8D2B(Var0, &fVar1, false, false);
		if ((Var0.f_1 < 2149.042f && (unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()) || (unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6()) && (Var0.f_2 - fVar1) >= 7.5f))) && (Var0.f_2 - fVar1) >= 3f)
		{
			return 0;
		}
		if (Var0.f_2 >= 100f && unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	return 1;
}

void func_169(bool bParam0, bool bParam1)
{
	func_198();
	func_197();
	func_81(0);
	func_195(1, 1, 1, 0);
	func_193(0);
	func_191();
	unk_0xC12321827687FE4D(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, true, true);
	unk_0x0F07E7745A236711();
	unk_0xA0EBB943C300E693(true);
	unk_0x72751156E7678833(false);
	func_190();
	func_189();
	func_188();
	func_187(bParam1);
	func_186(bParam1);
	unk_0xB6BA2444AB393DA2(iLocal_77);
	unk_0x020E5F00CDA207BA(1f);
	func_184();
	func_182();
	func_181(&uLocal_79, 1);
	func_181(&uLocal_79, 3);
	func_181(&uLocal_79, 4);
	func_181(&uLocal_79, 5);
	unk_0x8E5FB15663F79120(false);
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	func_70(0);
	if (bParam0)
	{
		func_170(-1);
		unk_0x1090044AD1DA76FA();
	}
}

void func_170(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120())
	{
		func_174(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_173(30000);
		StringCopy(&cVar0, func_172(Global_113375, 1), 64);
		if (func_29(Global_113375) > 0)
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
	func_171(&Global_32019);
	Global_113376 = 0;
	func_124(-1);
}

void func_171(var uParam0)
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

char* func_172(int iParam0, bool bParam1)
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

void func_173(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_174(int iParam0)
{
	func_175(iParam0, 0, func_180(iParam0));
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_141();
	func_178(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_177(iParam0, &uVar0);
	Var1 = { func_176(&uVar0) };
}

struct<16> func_176(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_135(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_134(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_177(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	bVar2 = func_136(*uParam0);
	bVar3 = func_135(*uParam0);
	bVar4 = func_134(*uParam0);
	bVar5 = func_133(*uParam0);
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
	iVar6 = func_132(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_179(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_147(uParam0, bParam1);
	func_146(uParam0, bParam2);
	func_145(uParam0, bParam3);
	func_143(uParam0, iParam5);
	func_144(uParam0, bParam4);
	func_142(uParam0, iParam6);
}

int func_180(int iParam0)
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

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_182()
{
	Global_20471 = 0;
	func_183();
}

void func_183()
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

void func_184()
{
	Global_20471 = 0;
	func_185();
}

void func_185()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_92(iVar0, bParam0);
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_40(iVar0, bParam0);
		iVar0++;
	}
}

void func_188()
{
}

void func_189()
{
	unk_0xFF1B8B4AA1C25DC8(bLocal_49);
	unk_0xFF1B8B4AA1C25DC8(bLocal_50);
}

void func_190()
{
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_192(iVar0);
		iVar0++;
	}
}

void func_192(int iParam0)
{
	if (iLocal_78[iParam0] != 0)
	{
		unk_0x31D16B74C6E29D66(iLocal_78[iParam0], false);
		iLocal_78[iParam0] = 0;
	}
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), false, false);
		unk_0xAA5F02DB48D704B9(false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x020E5F00CDA207BA(0f);
		unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x102E68B2024D536D(false);
		unk_0xDC0F817884CDD856(3, false);
		unk_0xDC0F817884CDD856(1, false);
		unk_0xDC0F817884CDD856(8, false);
		unk_0xDC0F817884CDD856(2, false);
		unk_0xDC0F817884CDD856(6, false);
		unk_0xDC0F817884CDD856(4, false);
		unk_0xDC0F817884CDD856(12, false);
		unk_0xDC0F817884CDD856(5, false);
		func_194(9, 1);
		func_194(8, 1);
	}
	else
	{
		unk_0xAA5F02DB48D704B9(5);
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x102E68B2024D536D(true);
		unk_0xDC0F817884CDD856(3, true);
		unk_0xDC0F817884CDD856(1, true);
		unk_0xDC0F817884CDD856(8, true);
		unk_0xDC0F817884CDD856(2, true);
		unk_0xDC0F817884CDD856(6, true);
		unk_0xDC0F817884CDD856(4, true);
		unk_0xDC0F817884CDD856(12, true);
		unk_0xDC0F817884CDD856(5, true);
		func_194(9, 0);
		func_194(8, 0);
	}
}

void func_194(bool bParam0, bool bParam1)
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

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_182();
	}
	if (bParam1)
	{
		if (!func_196() || (bParam0 && !bParam3))
		{
			unk_0xCC33FA791322B9D9();
		}
		unk_0xB57D8DD645CFA2CF();
	}
	if (bParam2)
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

int func_196()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_197()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_43(&(Local_47[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_43(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_198()
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
}

int func_199(bool bParam0)
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

