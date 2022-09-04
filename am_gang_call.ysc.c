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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_64 = 0;
	struct<5> Local_65[32];
	int iLocal_66 = 0;
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int* iLocal_78 = NULL;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 16;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<21> Local_257 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_69 = -1;
	iLocal_72 = -1;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_560(ScriptParam_257);
	}
	while (true)
	{
		func_559();
		if (func_552())
		{
			func_549();
		}
		iLocal_74 = unk_0x7A5487FE9FAA6B48();
		func_540();
		func_537();
		func_532();
		func_531();
		switch (func_530(unk_0xEE68096F9F37341E()))
		{
			case 0:
				if (func_529() == 1)
				{
					Local_65[unk_0xEE68096F9F37341E() /*5*/] = 1;
				}
				else if (func_529() == 4)
				{
					Local_65[unk_0xEE68096F9F37341E() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_529() == 1)
				{
					func_523();
				}
				else if (func_529() == 0)
				{
					func_517();
					Local_65[unk_0xEE68096F9F37341E() /*5*/] = 0;
				}
				else if (func_529() == 4)
				{
					Local_65[unk_0xEE68096F9F37341E() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_493();
				func_491(&(Local_63.f_54));
				if (func_490(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_489(bLocal_69))
					{
						func_493();
						iVar0++;
					}
					Local_65[unk_0xEE68096F9F37341E() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_65[unk_0xEE68096F9F37341E() /*5*/] = 4;
			
			case 4:
				func_263();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			func_261();
			func_260();
			func_259();
			switch (func_529())
			{
				case 0:
					func_258();
					if (func_254())
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(bLocal_71), false))
						{
							func_252(unk_0x43A66C31C68491C0(bLocal_71));
						}
						else
						{
							Local_63.f_36 = { Local_73 };
						}
						unk_0xE80492A9AC099A93(&(Local_63.f_2), 6);
						Local_63.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_529() < 4)
	{
		if (func_22())
		{
			iLocal_75 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_489(bLocal_69) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
	{
		if (unk_0x38CE16C96BD11344(Local_63.f_10[iLocal_75 /*7*/]))
		{
			if (unk_0x7239B21A38F536BA(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iLocal_75 /*7*/])))
			{
				if (unk_0x5F9532F3B5CC2551(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iLocal_75 /*7*/]), false))
				{
					if (!BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
					{
						if (bLocal_69 == 0)
						{
							Local_63.f_48++;
							if (!BitTest(Local_63.f_2, 12))
							{
								if (unk_0x7A1ADEEF01740A24(Local_63.f_10[iLocal_75 /*7*/], &uVar0) == bLocal_71)
								{
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_75 && !BitTest(Local_63.f_2, 5)) || Local_63.f_48 == func_489(bLocal_69))
							{
								Var1.f_2 = 199776836;
								Var1.f_10 = bLocal_71;
								Var1.f_11 = bLocal_70;
								if (func_489(bLocal_69) > 1)
								{
									Var1.f_12 = unk_0x41BD2A6B006AF756(true);
								}
								else
								{
									Var1.f_12 = unk_0x41BD2A6B006AF756(false);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_75)
								{
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 5);
								}
							}
							else if (!BitTest(Local_63.f_2, 5))
							{
								Var1.f_2 = 1036580915;
								Var1.f_11 = bLocal_70;
								func_20(Var1, func_21(1));
							}
						}
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iLocal_75 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_63.f_10[iLocal_75 /*7*/].f_2, 5))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 2);
					}
					unk_0x933D6A9EEC1BACD0(&iLocal_66, true);
				}
			}
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&iLocal_66, true);
		unk_0x933D6A9EEC1BACD0(&iLocal_66, 2);
	}
	func_3(iLocal_75);
	iLocal_75++;
	if (iLocal_75 >= func_489(bLocal_69))
	{
		iLocal_75 = 0;
		if (BitTest(Local_63.f_1, 0))
		{
			if (!BitTest(iLocal_66, 1))
			{
				if (!BitTest(Local_63.f_1, 1))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), true);
				}
			}
			if (!BitTest(iLocal_66, 2))
			{
				if (!BitTest(Local_63.f_1, 9))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 9);
				}
			}
		}
		unk_0xE80492A9AC099A93(&iLocal_66, true);
		unk_0xE80492A9AC099A93(&iLocal_66, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x83CD99A1E6061AB5())
	{
		if (unk_0x38CE16C96BD11344(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]);
			if (!unk_0x5F9532F3B5CC2551(iVar0, false))
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x632E831F382A0FA8(iVar0) == 2 || (Global_2689235[bLocal_71 /*453*/].f_244 != -1 && func_18(Global_2689235[bLocal_71 /*453*/].f_244) == 4)) || BitTest(Global_1853348[bLocal_71 /*834*/].f_833, 14)) || func_16(bLocal_71, 0)) || func_9(bLocal_71))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = iLocal_74;
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x632E831F382A0FA8(iVar0) != 2 && Global_2689235[bLocal_71 /*453*/].f_244 == -1) && !BitTest(Global_1853348[bLocal_71 /*834*/].f_833, 14)) && !func_16(bLocal_71, 0)) && !func_9(bLocal_71))
							{
								unk_0xE80492A9AC099A93(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x632E831F382A0FA8(iVar0) != 2)
							{
								if (!BitTest(Local_63.f_2, 10))
								{
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(bLocal_71) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_489(bLocal_69))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x8517D4A6CA8513ED(iVar0) == 3f && !unk_0x7EE53118C892B513(iVar0, 118, true))
									{
										unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_71, 1, 1))
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true), 25f) || !func_5(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true), 625f))
								{
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true)) || (unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0x43A66C31C68491C0(bLocal_71)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_63.f_2, 1))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(bLocal_71, 1, 1))
						{
							if (!func_4(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true)) && !(unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0x43A66C31C68491C0(bLocal_71)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x7EE53118C892B513(iVar0, 118, true))
								{
									unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0x73D57CFFDD12C355((Param1.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var1.f_0 = Param1.f_0;
		Var1.f_1 = Param1.f_1;
		if (func_5(Var0, Var1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(bool bParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

int func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8DFD30D6973E135(bParam0))
	{
		if (func_14(bParam0, 1))
		{
			iVar0 = unk_0x43A66C31C68491C0(bParam0);
			iVar1 = func_11(bParam0);
			if (unk_0x7239B21A38F536BA(iVar1))
			{
				if (unk_0x4C241E39B23DF959(iVar1, false))
				{
					if (unk_0xA3EE4A07279BB9DB(iVar0, iVar1, false))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (unk_0x4F14F9F870D6FBC8("MPBitset", 3) && unk_0x05661B80A8C9165F(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xA06C969B02A97298(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	if (func_14(bParam0, 1))
	{
		return Global_2815059.f_5195.f_226[func_12(bParam0)];
	}
	return 0;
}

int func_12(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return Global_1892703[bParam0 /*599*/].f_10;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (func_6(bParam0, 1, 1))
	{
		iVar0 = unk_0x43A66C31C68491C0(bParam0);
		if (unk_0x997ABD671D25CA0B(iVar0, bParam1))
		{
			if (func_17(unk_0x9A9112A0FE9A4713(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0x7239B21A38F536BA(iParam0) && (!bParam1 || unk_0x4C241E39B23DF959(iParam0, false)))
		{
			if (unk_0x05661B80A8C9165F(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, bool bParam1)
{
	if (unk_0x4F14F9F870D6FBC8("AttributeDamage", 3))
	{
		if (unk_0x05661B80A8C9165F(iParam0, "AttributeDamage"))
		{
			if (BitTest(unk_0xA06C969B02A97298(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = unk_0x4F8644AF03D0E0D6();
	if (!iParam13 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < unk_0xA6C90FBC38E395EE())
	{
		if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(bVar1)))
		{
			bVar2 = unk_0x24FB80D107371267(unk_0x9EC6603812C24710(bVar1));
			if (func_6(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (BitTest(Local_63.f_1, 0))
	{
		if (bLocal_69 == 1)
		{
			if (BitTest(Local_63.f_1, 4))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_63.f_1, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), false);
			return 1;
		}
	}
	else if (BitTest(Local_63.f_1, 2))
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), true);
		unk_0x933D6A9EEC1BACD0(&Global_1922952, bLocal_69);
		return 1;
	}
	if (BitTest(Local_63.f_3, 12))
	{
		return 1;
	}
	if (bLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 2);
			return 1;
		}
		if (BitTest(Local_63.f_2, 8))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 8);
			return 1;
		}
		if (BitTest(Local_63.f_2, 5))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 3);
			return 1;
		}
		if (BitTest(Local_63.f_2, 9))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 9);
			return 1;
		}
		if (BitTest(Local_63.f_1, 15))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!func_6(bLocal_71, 0, 1))
	{
		if (bLocal_69 != 0 || !BitTest(Local_63.f_2, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_43(bLocal_71, 129))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 13);
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 8);
			return 1;
		}
		if (func_43(bLocal_71, 131) || BitTest(Global_1892703[bLocal_71 /*599*/].f_1, 11))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 13);
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(bLocal_71, 136) || (func_42(unk_0x4F8644AF03D0E0D6(), 24) && func_41(bLocal_71)))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(bLocal_71, 146))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_40(unk_0x4F8644AF03D0E0D6()) && ((func_39(unk_0x4F8644AF03D0E0D6()) == 148 || func_39(unk_0x4F8644AF03D0E0D6()) == 142) || func_39(unk_0x4F8644AF03D0E0D6()) == 164))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x4F8644AF03D0E0D6()) == 153)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x4F8644AF03D0E0D6()) && func_39(unk_0x4F8644AF03D0E0D6()) == 170)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x4F8644AF03D0E0D6()) == 167)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0x4F8644AF03D0E0D6()) == 168)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x4F8644AF03D0E0D6()) && func_39(unk_0x4F8644AF03D0E0D6()) == 238)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0x4F8644AF03D0E0D6()) && func_39(unk_0x4F8644AF03D0E0D6()) == 249)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		switch (func_36(unk_0x4F8644AF03D0E0D6()))
		{
			case 6:
			case 7:
				if (func_35())
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_34(bLocal_71))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_33(bLocal_71))
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(bLocal_71) == 276)
		{
			if (func_31(bLocal_71) == 3)
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
				return 1;
			}
		}
		if (unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(bLocal_71), false))
		{
			if (bLocal_69 == 1)
			{
				if (BitTest(Local_63.f_1, 0))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (bLocal_69 == 1)
			{
				if (func_43(bLocal_71, 146))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_63.f_1, 16))
				{
					if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_9) > func_30())
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 7);
					return 1;
				}
				if (func_23(bLocal_71, func_12(bLocal_70), 1))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (iLocal_72 != unk_0xD24D37CC275948CC(unk_0x6D0DE6A7B5DA71F8(bLocal_71)))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(bool bParam0, int iParam1, bool bParam2)
{
	return func_24(bParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
		{
			if (iParam1 == Global_1892703[iParam0 /*599*/].f_10)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_13())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					if (Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(bLocal_71, 1, 1) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71))
	{
		return 1;
	}
	return 0;
}

bool func_28(bool bParam0)
{
	return Global_1853348[bParam0 /*834*/].f_192 != 0;
}

int func_29(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(bool bParam0)
{
	if (func_32(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_32(bool bParam0, int iParam1)
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_34(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x10FAB35428CCC9D7())
	{
		return 0;
	}
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = unk_0x43A66C31C68491C0(bParam0);
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			iVar1 = unk_0x9F47B058362C84B5(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_35()
{
	return Global_1835491;
}

int func_36(bool bParam0)
{
	if (func_39(bParam0) == 243)
	{
		return func_31(bParam0);
	}
	return -1;
}

int func_37(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_38(bParam0, 9);
	}
	return 0;
}

var func_38(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_39(bool bParam0)
{
	if (func_32(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_40(bool bParam0)
{
	if (func_15(bParam0))
	{
		if (func_37(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

var func_41(bool bParam0)
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 4);
}

var func_42(bool bParam0, int iParam1)
{
	return BitTest(Global_2689235[bParam0 /*453*/].f_216, iParam1);
}

int func_43(bool bParam0, int iParam1)
{
	if (Global_1892703[bParam0 /*599*/] == iParam1)
	{
		return func_44(bParam0);
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_45()
{
	func_56();
	if (bLocal_69 != 1)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;
	
	if (func_6(unk_0x41BD2A6B006AF756(iLocal_76), 0, 1))
	{
		if (bLocal_69 == 1)
		{
			if (unk_0x41BD2A6B006AF756(bLocal_76) == bLocal_71)
			{
				if (!BitTest(Local_63.f_1, 16))
				{
					if (BitTest(Local_65[bLocal_76 /*5*/].f_1, 3))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_63.f_1, 11))
			{
				if (func_52(unk_0x41BD2A6B006AF756(bLocal_76)))
				{
					if (!BitTest(Local_63.f_4, bLocal_76))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 11);
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_4), bLocal_76);
					}
				}
				else if (BitTest(Local_63.f_4, bLocal_76))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 11);
					unk_0xE80492A9AC099A93(&(Local_63.f_4), bLocal_76);
				}
			}
			else if (BitTest(Local_65[bLocal_76 /*5*/].f_1, 2))
			{
				unk_0xE80492A9AC099A93(&(Local_63.f_1), 11);
			}
			if (bLocal_69 == 0)
			{
				if (BitTest(Local_65[bLocal_76 /*5*/].f_1, 0))
				{
					if (Local_65[bLocal_76 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), true);
							Local_63.f_42 = Local_65[bLocal_76 /*5*/].f_2;
							Local_63.f_43 = Local_65[bLocal_76 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!BitTest(Local_63.f_2, 9))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < func_489(bLocal_69))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 9);
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), true);
					}
				}
				if (func_51())
				{
					if (!BitTest(iLocal_66, 17))
					{
						if (BitTest(Local_65[bLocal_76 /*5*/].f_1, 5))
						{
							func_50();
							unk_0x933D6A9EEC1BACD0(&iLocal_66, 17);
						}
						else if (BitTest(Local_65[bLocal_76 /*5*/].f_1, 6))
						{
							func_49();
							unk_0x933D6A9EEC1BACD0(&iLocal_66, 17);
						}
					}
				}
				if (!BitTest(Local_65[bLocal_76 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_66, 3))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 3);
					}
				}
				else if (unk_0x41BD2A6B006AF756(bLocal_76) == bLocal_71)
				{
					if (bLocal_69 == 0)
					{
						if (!BitTest(Local_63.f_2, 1))
						{
							if (!BitTest(Local_63.f_2, 6))
							{
								unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_76++;
	if (bLocal_76 >= 32)
	{
		bLocal_76 = false;
		if (bLocal_69 == 0)
		{
			if (!BitTest(iLocal_66, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			unk_0xE80492A9AC099A93(&iLocal_66, 3);
		}
	}
}

void func_47()
{
	if (BitTest(Local_63.f_2, 3))
	{
		unk_0xE80492A9AC099A93(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!BitTest(Local_63.f_2, 3))
	{
		Local_63.f_6 = iLocal_74;
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = -250941162;
	Var0.f_10 = bLocal_71;
	Var0.f_11 = bLocal_70;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = -1296682161;
	Var0.f_10 = bLocal_71;
	Var0.f_11 = bLocal_70;
	if (func_489(bLocal_69) > 1)
	{
		Var0.f_12 = unk_0x41BD2A6B006AF756(true);
	}
	else
	{
		Var0.f_12 = unk_0x41BD2A6B006AF756(false);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

int func_51()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

bool func_52(bool bParam0)
{
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		return func_55();
	}
	return BitTest(Global_1648034.f_241.f_136[func_54(10) /*33*/][bParam0], func_53(10));
}

int func_53(int iParam0)
{
	return (iParam0 % 32);
}

int func_54(int iParam0)
{
	return (iParam0 / 32);
}

var func_55()
{
	return Global_1574582;
}

void func_56()
{
	int iVar0;
	
	if (bLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 3))
		{
			if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_6) > 10000)
			{
				if (BitTest(Local_63.f_2, 1))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 2);
				}
			}
		}
		if (BitTest(Local_63.f_1, 8))
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				if (func_60())
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!BitTest(Local_63.f_1, 0))
		{
			if (func_6(bLocal_71, 1, 1))
			{
				iVar0 = unk_0x43A66C31C68491C0(bLocal_71);
				if (func_58(iVar0))
				{
					func_252(iVar0);
				}
			}
		}
		if (!BitTest(Local_63.f_2, 1))
		{
			if (!func_6(bLocal_71, 1, 1) || func_28(bLocal_71))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 15);
			}
		}
	}
	if (BitTest(Local_63.f_1, 0))
	{
		if (BitTest(Local_63.f_1, 5))
		{
			if (!BitTest(Local_63.f_1, 4))
			{
				if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_5) > 600000)
				{
					unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_63.f_3, 12))
		{
			if (func_57())
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_773 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_773 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x84A2DD9AC37C35C1(iParam0))
	{
	}
	if (BitTest(Local_63.f_1, 17))
	{
		if (!unk_0xCFB0A0D8EDD145A3(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, unk_0x3FEF770D40960D5A(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	func_517();
	Local_63.f_0 = 0;
}

int func_60()
{
	if ((((((((BitTest(Local_63.f_2, 6) || unk_0x424D4687FA1E5652(bLocal_71)) || func_29(bLocal_71, 1, 1)) || func_62(bLocal_71)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71)) || Global_2689235[bLocal_71 /*453*/].f_246) || func_61(unk_0x43A66C31C68491C0(bLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (bLocal_71 != -1)
	{
		if (BitTest(Local_65[bLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			if (unk_0x826AA586EDB9FEF8(iParam0))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (unk_0x9F47B058362C84B5(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!BitTest(Local_63.f_1, 5))
	{
		Local_63.f_5 = iLocal_74;
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (BitTest(Local_63.f_1, 5))
	{
		unk_0xE80492A9AC099A93(&(Local_63.f_1), 5);
	}
}

int func_65()
{
	bool bVar0;
	
	if (BitTest(Local_63.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_254())
		{
			if (bLocal_69 == 1)
			{
				bVar0 = true;
			}
			else if (func_249())
			{
				if (func_246())
				{
					if (func_245())
					{
						bVar0 = true;
					}
					else if (func_243(func_244(bLocal_69)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x83CD99A1E6061AB5())
	{
		if (BitTest(Local_63.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (bLocal_69)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_489(bLocal_69))
					{
						if ((!unk_0x38CE16C96BD11344(Local_63.f_10[iVar0 /*7*/]) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_67(iVar0, func_70(bLocal_69), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_69 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_489(bLocal_69))
				{
					if (!unk_0x38CE16C96BD11344(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x933D6A9EEC1BACD0(&iLocal_66, true);
			unk_0x933D6A9EEC1BACD0(&iLocal_66, 2);
			unk_0x933D6A9EEC1BACD0(&iLocal_66, 3);
			unk_0x933D6A9EEC1BACD0(&iLocal_66, 4);
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), false);
			unk_0x933D6A9EEC1BACD0(&Global_1922953, bLocal_69);
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1, struct<3> Param2, float fParam3)
{
	if (unk_0x83CD99A1E6061AB5())
	{
		if (!unk_0x38CE16C96BD11344(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0xCB215C4B56A7FAE7(false) < unk_0x1F13D5AE5CB17E17(false, 0))
			{
				if (unk_0xBCBF4FEF9FA5D781(1))
				{
					if (func_243(func_244(bLocal_69)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_244(bLocal_69), Param2, fParam3, 1, 1, 1))
						{
							Local_63.f_10[iParam0 /*7*/].f_1 = bLocal_69;
							Local_63.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];
	
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), false))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), Global_1837196);
				unk_0xF35425A4204367EC(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), true);
				unk_0x38FE1EC73743793C(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), false);
			}
			unk_0xFAEE099C6F890BB8(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), false, false, false, false, false, false, true, false);
			unk_0xC7622C0D36B2FDA8(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 2);
			unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 13, true);
			unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 41, true);
			unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 20, true);
			unk_0x1913FE4CBF41C463(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 132, true);
			unk_0x1913FE4CBF41C463(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 118, false);
			unk_0x1913FE4CBF41C463(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 311, true);
			unk_0x112942C6E708F70B(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x98EFA132A4117BE1(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 0, false);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 2, false);
					unk_0x4D9CA1009AFBD057(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 2);
					unk_0x3C606747B23E497B(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0xD75ACCF5E0FB5367(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), false, -1, 0);
					unk_0x1913FE4CBF41C463(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 32, true);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 4, false);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 1024, true);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 128, true);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 32, false);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 8, false);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 64, false);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 256, true);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 1, false);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 2, true);
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 16, true);
					if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0x70A2D1137C8ED7C9(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 512, true);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 17, false);
					unk_0xBF0FD6E56C964FCB(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					unk_0xA9C8960E8684C1B5(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0x69F4BE8C8CC4796C(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), unk_0x43A66C31C68491C0(bLocal_71), -1, 0, 2);
					unk_0x3FA36981311FA4FF(Local_63.f_10[iParam0 /*7*/], true);
					break;
			}
			unk_0x6B76DC1F3AE6E6A3(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), unk_0xF2DB717A73826179((Global_262145.f_164 * IntToFloat(unk_0xEEF059FAD016D209(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!BitTest(Local_63.f_1, 8))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 8);
			}
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	iVar0 = unk_0xD49F9B0955C367DE(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = unk_0x0EDEC3C276198689(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam7);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_70(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_71()
{
	struct<6> Var0;
	
	if (BitTest(Local_63.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (bLocal_69)
		{
			case 0:
				if (unk_0xB8DFD30D6973E135(bLocal_71) && func_6(bLocal_71, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xFB8F2A6F3DF08CBE();
					unk_0xFEE4A5459472A9F8();
					if (Global_2667225.f_2472)
					{
						unk_0x916F0A3CDEC3445E();
						Global_2667225.f_2472 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_73(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0x46E9AE36D8FA6417(Global_2667225.f_2473) && !Global_2667225.f_2473 == unk_0xC30338E8088E2E21())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (unk_0x46E9AE36D8FA6417(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == unk_0xC30338E8088E2E21())
				{
					if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2470) < func_242(0))
					{
						return 0;
					}
				}
				else if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2470) < func_242(0))
				{
					return 0;
				}
			}
			unk_0xFB8F2A6F3DF08CBE();
			unk_0xFEE4A5459472A9F8();
			func_241();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2470) > func_242(0))
	{
		Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
		func_235();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		unk_0xFB8F2A6F3DF08CBE();
		unk_0xFEE4A5459472A9F8();
		func_241();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_234(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x3C67506996001F5E())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_233(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
			Global_2667225.f_2470 = unk_0x7A5487FE9FAA6B48();
			Global_2667225.f_2473 = unk_0xC30338E8088E2E21();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (unk_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_232(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_205(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_204(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((unk_0xF813C7E63F9062A5(Var7, Var8) || unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2471) > 15000) || unk_0x01708E8DD3FF8C65(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				if (uParam0->f_5 && !func_201(unk_0x4F8644AF03D0E0D6(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2475) > 7000)
			{
				func_200(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (func_199() || unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (unk_0x3C67506996001F5E())
			{
				unk_0xFB8F2A6F3DF08CBE();
				unk_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_235();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x5A6FFA2433E2F14C(unk_0x4F8644AF03D0E0D6(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
								Global_2667225.f_2465 = 5;
							}
							break;
						
						case 1:
							func_198(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (unk_0x4BA92A18502BCA61(unk_0x4F8644AF03D0E0D6(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
								Global_2667225.f_2465 = 5;
							}
							break;
						
						case 2:
							if (unk_0x4BA92A18502BCA61(unk_0x4F8644AF03D0E0D6(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_198(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							unk_0xB2AFF10216DEFA2F(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_126(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2471) > 20000)
			{
				unk_0xFB8F2A6F3DF08CBE();
				unk_0xFEE4A5459472A9F8();
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_198(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					unk_0xB2AFF10216DEFA2F(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_126(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_204(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_122(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x2A70BAE8883E4C81(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				func_74(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_76(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = unk_0x7A5487FE9FAA6B48();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			unk_0xFB8F2A6F3DF08CBE();
			unk_0xFEE4A5459472A9F8();
			func_241();
			return 1;
		}
		Global_2667225.f_2470 = unk_0x7A5487FE9FAA6B48();
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_125(uParam5->f_4) || !unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_90(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_88(unk_0x4F8644AF03D0E0D6(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_205(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_90(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_87(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0xC906A7DAB05C8D2B(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0xC906A7DAB05C8D2B(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (func_86(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_81(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(unk_0x652D2EEEF1D3E62C(Var2)) };
	fVar3 = (unk_0x652D2EEEF1D3E62C(Var1) * unk_0x0BADBFA3B172435F(unk_0x186FC4BE848E1C92(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_80(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_81(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(unk_0x652D2EEEF1D3E62C(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_81(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(unk_0x652D2EEEF1D3E62C(Var2)) };
		fVar3 = (unk_0x652D2EEEF1D3E62C(Var11) * unk_0x0BADBFA3B172435F(unk_0x186FC4BE848E1C92(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_80(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (unk_0x2A488C176D52CCA5(Var4, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_80(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_81(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_82(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

void func_83(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_84(&Var0, 0f, 0f, unk_0x313CE5879CEB6FCD(0f, 360f));
		}
		else
		{
			func_84(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

void func_84(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_85(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_83(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_82(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_79(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xE50E52416CCF948B(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_204(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_122(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x2A70BAE8883E4C81(Var1, Param1, Param2, fParam3, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_86(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_204(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_122(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x2A70BAE8883E4C81(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false);
			}
			else if (bParam3)
			{
				if (unk_0x2A70BAE8883E4C81(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x2A70BAE8883E4C81(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x2A70BAE8883E4C81(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_87(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_122(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x2A70BAE8883E4C81(Param0, Param2, Param3, fParam4, false, true);
			break;
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_13())
	{
		if (func_6(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_13())
			{
				return func_89(Global_2689235[bParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_90(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_121(Param0, uParam1))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xB61C8E878A4199CA(Param0, false, uParam1, iParam2))
	{
		if (func_91(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_107(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_95(*uParam1, 1056964608))
			{
				if (!func_92(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar2])
	{
		if (func_93(Var1, &(Global_2672374[iVar2 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2672374[iVar2 /*155*/][iVar0 /*7*/], Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (func_93(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&Var1, Global_2672374[8 /*155*/][iVar0 /*7*/], Global_2672374[8 /*155*/][iVar0 /*7*/].f_3, Global_2672374[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_93(struct<3> Param0, var uParam1)
{
	return unk_0x2A70BAE8883E4C81(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
}

int func_94(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2673781[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673781[1])
	{
		if (Param0.f_0 < Global_2673785[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673781[2])
	{
		if (Param0.f_0 < Global_2673785[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673785[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673785[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_95(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_104(unk_0x4F8644AF03D0E0D6(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_96(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
				{
					if (func_96(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_78574 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_78574)
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
				{
					if (func_96(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_268)
			{
				if (unk_0x7239B21A38F536BA(Global_1058069.f_233[iVar0]) && !unk_0x5F9532F3B5CC2551(Global_1058069.f_233[iVar0], false))
				{
					if (func_96(Param0, unk_0x3FEF770D40960D5A(Global_1058069.f_233[iVar0], true), unk_0xE83D4F9BA2A38914(Global_1058069.f_233[iVar0]), unk_0x9F47B058362C84B5(Global_1058069.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_266)
			{
				if (unk_0x7239B21A38F536BA(Global_1058069.f_119[iVar0]) && !unk_0x5F9532F3B5CC2551(Global_1058069.f_119[iVar0], false))
				{
					if (func_96(Param0, unk_0x3FEF770D40960D5A(Global_1058069.f_119[iVar0], true), unk_0xE83D4F9BA2A38914(Global_1058069.f_119[iVar0]), unk_0x9F47B058362C84B5(Global_1058069.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_96(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param1) < func_103(iParam3, 1008981770))
	{
		func_97(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x2A70BAE8883E4C81(Param0, Var0, Var1, fVar2, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_97(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_98(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x73D57CFFDD12C355((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x73D57CFFDD12C355((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x73D57CFFDD12C355((Var2.f_0 - Var1.f_0));
}

void func_98(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0xC0296A2EDF545E92(iParam0))
	{
		unk_0x03E8D3D5F549087A(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_101(iParam0);
		if (iVar0 != 0)
		{
			func_99(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_100(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC0296A2EDF545E92(Global_1577992[iVar0]))
		{
			unk_0x03E8D3D5F549087A(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577996[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_103(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_98(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (unk_0x71D93B57D07F9804(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[bParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

var func_106(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_107(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_114(Param0))
	{
		if (func_77(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_109(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_108(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (unk_0x2A488C176D52CCA5(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_83(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2667225.f_2737[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_111(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_78(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_111(Var2, &uVar1) || func_110(Var2))
			{
				Var2 = { *uParam0 };
				func_78(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_110(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2667225.f_596 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2667225.f_593);
		if (fVar0 < Global_2667225.f_596)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_113())
	{
		return 0;
	}
	iVar1 = func_112();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1946250.f_519;
}

int func_114(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_118(unk_0x4F8644AF03D0E0D6(), 1))
			{
				return 1;
			}
			if (!func_117(Param0, 1008981770))
			{
				if (!func_77(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_77(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_116(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_115(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_77(&Var1, 0, 0, 0, 1))
					{
						if (!func_77(&Param0, 0, 0, 0, 1))
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

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_116(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_117(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_118(bool bParam0, bool bParam1)
{
	if (func_120() != 0)
	{
		return func_119(bParam0) != 0;
	}
	return func_104(bParam0, bParam1, 0);
}

int func_119(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_31959;
}

int func_121(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2667225.f_2263[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2667225.f_2263[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_122(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_123(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_124(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.f_0 > Param1.f_0)
	{
		Var1.f_0 = Param0.f_0;
		Var0.f_0 = Param1.f_0;
	}
	else
	{
		Var1.f_0 = Param1.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x3C891A251567DFCE(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_196(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && func_75(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x313CE5879CEB6FCD(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_196(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x3C67506996001F5E())
		{
			if (!unk_0xF445DE8DA80A1792())
			{
				if (unk_0xA586FBEB32A53DBB())
				{
					func_196(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = unk_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xFEE4A5459472A9F8();
				func_196(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_193(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || unk_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x371EA43692861CF1(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x280C7E3AC7F56E90(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						unk_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_134(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				func_128(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					func_74(uParam0, &(Global_2667225.f_2491.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x313CE5879CEB6FCD(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				func_74(uParam0, &(Global_2667225.f_2491.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0xD53343AA4FB7DD28(0, Global_2667225.f_2491.f_1);
				unk_0x371EA43692861CF1(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x313CE5879CEB6FCD(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x313CE5879CEB6FCD(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && func_75(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_76(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x313CE5879CEB6FCD(0f, 360f);
		func_127(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_127(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2667225.f_2625[(3 - iVar0) /*3*/] = { Global_2667225.f_2625[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2667225.f_2625[0 /*3*/] = { Param0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2667225.f_489) && func_133() < 4096)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_1;
				Var2 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_2 < fVar1 && Global_2670168[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_2;
				Var2 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2670168[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	bVar10 = false;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (unk_0x73D57CFFDD12C355((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_190(unk_0x4F8644AF03D0E0D6()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_189(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x68772DB2B2526F9F(unk_0xD80958FC74E988A6(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x68772DB2B2526F9F(unk_0xD80958FC74E988A6(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_188(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((unk_0x652D2EEEF1D3E62C(uParam3->f_23) > 0f && unk_0x652D2EEEF1D3E62C(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x2A70BAE8883E4C81(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_182(Param0, fParam1, uParam2->f_15, func_187(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			bVar10 = Global_2667225.f_3;
		}
	}
	else if (!func_179(Param0, 25f, unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_175(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_175(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!func_108(Param0, 0.5f))
			{
				if (func_114(Var12))
				{
					if (!func_77(&Param0, 0, 0, 0, 1) && !func_174(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_174(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_173(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_172(unk_0x4F8644AF03D0E0D6()) && func_171(unk_0x4F8644AF03D0E0D6())))
		{
			if (!func_170(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_171(unk_0x4F8644AF03D0E0D6()))
		{
			if (!func_169(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_168(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_75(Global_2667225.f_489))
			{
				if (func_117(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_167(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x26B0E73D7EAAF4D3(unk_0xB0F7F8663821D9C3(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!func_109(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_92(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_116(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_166(Param0, &Var15, &Var16, &fVar17);
			if (!func_161(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_160(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, bVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_151(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, bVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = func_149(Param0);
			}
			uVar7 = func_140(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_139(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_151(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, bVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_151(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, bVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_75(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_149(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_138(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_138(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_136(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_140(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_138(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				if (unk_0xE33D59DA70B58FDF(Param0, fParam1))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_6(bVar1, 1, 1))
		{
			if (!func_201(bVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if (func_137(bVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x37039302F4E0A008(bVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(bVar1) != iParam5 || unk_0x37039302F4E0A008(bVar1) == -1)
						{
							if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

int func_137(bool bParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

void func_138(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_138(Var0, iParam1 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_133();
	if (Param0.f_0 > iVar2)
	{
		iVar2 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] < iVar2)
		{
			Global_2670168[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] == 0)
		{
			Global_2670168[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2670168[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2670168[iVar4 /*10*/] = { Param0 };
	}
}

float func_140(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar7 = iVar0;
		if (func_6(bVar7, 1, 1) || (iParam5 == 1 && func_6(bVar7, 0, 0)))
		{
			if (!bVar7 == unk_0x4F8644AF03D0E0D6() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_141(bVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x37039302F4E0A008(bVar7) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
					{
						if (!unk_0x37039302F4E0A008(bVar7) == -1 || !func_118(unk_0x4F8644AF03D0E0D6(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar7) || !bParam4)
					{
						if (func_137(bVar7))
						{
							Var5 = { func_8(bVar7) };
							if (!bVar7 == unk_0x4F8644AF03D0E0D6())
							{
								Var6 = { unk_0x64D779659BC37B19(unk_0x43A66C31C68491C0(bVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0xF1B760881820C952(Param0, Var5, true);
							fVar2 = unk_0xF1B760881820C952(Param0, Var6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(bool bParam0)
{
	if (func_6(bParam0, 0, 1))
	{
		if (!func_147(bParam0))
		{
			if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bParam0))
			{
				if (!unk_0x37039302F4E0A008(bParam0) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
				{
					if (func_104(unk_0x4F8644AF03D0E0D6(), 1, 0))
					{
						if (!func_146(unk_0x37039302F4E0A008(bParam0), unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x37039302F4E0A008(bParam0) == -1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
				{
					if (!func_104(unk_0x4F8644AF03D0E0D6(), 1, 0))
					{
						if (!func_142(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_142(bool bParam0)
{
	if (func_145(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_144(bParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2787505))
	{
		return 1;
	}
	if (func_143(unk_0x4F8644AF03D0E0D6(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_12(bParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_144(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

int func_145(bool bParam0, bool bParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2787505 = { func_144(bParam0) };
		Global_2787518 = { func_144(bParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2787505))
		{
			if (unk_0xB124B57F571D8F18(&Global_2787518))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2787435, 35, &Global_2787505);
				unk_0xEEE6EACBE8874FBA(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_147(bool bParam0)
{
	if (func_201(bParam0, 0))
	{
		return 1;
	}
	if (func_148())
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

bool func_148()
{
	return BitTest(Global_2621446, 3);
}

float func_149(struct<3> Param0)
{
	var uVar0;
	
	return func_150(Param0, &(Global_2667225.f_45), &uVar0);
}

float func_150(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2667225.f_2735) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_151(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (bParam5 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(bParam5) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam2)
	{
		fVar0 = func_135(unk_0x2A488C176D52CCA5(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_140(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_135(fVar4, 0f, func_159(), func_157(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_155(Param0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && !func_118(unk_0x4F8644AF03D0E0D6(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_153(Param0, unk_0x4F8644AF03D0E0D6(), 0);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_152(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_135(unk_0x2A488C176D52CCA5(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_152(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x6448050E9C2A7207(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x1EAF30FCFBF5AF74(iVar1))
	{
		unk_0x703123E5E7D429C2(iVar1, &Var0);
		*uParam1 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam2 = unk_0x73D57CFFDD12C355((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_153(struct<3> Param0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	
	fVar0 = 999999.9f;
	if (func_6(bParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!bParam1 == iVar2 || iParam2 == 1)
			{
				bVar3 = iVar2;
				if (func_6(bVar3, 0, 1))
				{
					if (unk_0x37039302F4E0A008(bVar3) != unk_0x37039302F4E0A008(bParam1) || (unk_0x37039302F4E0A008(bVar3) == -1 && unk_0x37039302F4E0A008(bParam1) == -1))
					{
						if (!func_154(bVar3, bParam1))
						{
							if (Global_2680265.f_261[iVar2])
							{
								fVar1 = unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_154(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam0 != func_13() && bParam1 != func_13())
	{
		iVar0 = func_12(bParam0);
		if (iVar0 != func_13())
		{
			return iVar0 == func_12(bParam1);
		}
	}
	return 0;
}

float func_155(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x7239B21A38F536BA(uVar4[iVar2]))
		{
			if (!unk_0x5F9532F3B5CC2551(uVar4[iVar2], false))
			{
				if (func_156(uVar4[iVar2]))
				{
					Var3 = { unk_0x3FEF770D40960D5A(uVar4[iVar2], true) };
					fVar1 = unk_0xF1B760881820C952(Param0, Var3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2667225.f_2934)
	{
		if (Global_1058069.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058069.f_267)
			{
				if (unk_0x7239B21A38F536BA(Global_1058069.f_152[iVar2]))
				{
					if (!unk_0x5F9532F3B5CC2551(Global_1058069.f_152[iVar2], false))
					{
						if (func_156(Global_1058069.f_152[iVar2]))
						{
							Var3 = { unk_0x3FEF770D40960D5A(Global_1058069.f_152[iVar2], true) };
							fVar1 = unk_0xF1B760881820C952(Param0, Var3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7DBDD04862D95F04(iParam0);
	switch (unk_0x9E6B70061662AE5C(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCC6E3B6BB69501F1(Global_1837161[unk_0x4F8644AF03D0E0D6()]))
	{
		switch (unk_0x9E6B70061662AE5C(iVar0, Global_1837161[unk_0x4F8644AF03D0E0D6()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] == 0)
	{
		iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCC6E3B6BB69501F1(Global_1836871[iVar1]))
			{
				switch (unk_0x9E6B70061662AE5C(iVar0, Global_1836871[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_157()
{
	if (func_158())
	{
		if ((unk_0xA0948AB42D7BA0DE(Global_2667225.f_45.f_67) || unk_0xDCE4334788AF94EA(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_158()
{
	if (Global_2667225.f_45.f_65 && !Global_2667225.f_45.f_304)
	{
		if (!func_147(unk_0x4F8644AF03D0E0D6()))
		{
			return 1;
		}
	}
	return 0;
}

float func_159()
{
	if (func_158())
	{
		if ((unk_0xA0948AB42D7BA0DE(Global_2667225.f_45.f_67) || unk_0xDCE4334788AF94EA(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_160(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x61E1DD6125A3EEE6(Param0, fParam5)) || (fVar0 > 0f && unk_0x083961498679DC9F(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x397DC58FF00298D1(Param0, fParam6, false))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x397DC58FF00298D1(Param0, fParam7, true)))
	{
		return 1;
	}
	return 0;
}

int func_161(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_165(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_164(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_162(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_162(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_163(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x2A70BAE8883E4C81(Var0[iVar1 /*3*/], Param3, Param4, fParam5, false, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_163(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_81(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(unk_0x652D2EEEF1D3E62C(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 };
}

int func_164(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.f_0, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.f_0, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.f_0, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x2A70BAE8883E4C81(Var0[iVar1 /*3*/], Param2, Param3, fParam4, false, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_165(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x2A70BAE8883E4C81(Var0[iVar1 /*3*/], Param2, Param3, fParam4, false, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_166(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_94(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar2])
	{
		if (func_93(Var1, &(Global_2672374[iVar2 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672374[iVar2 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (func_93(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672374[8 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672374[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672374[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_167(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2667225.f_45.f_55)
	{
		if (unk_0x26B0E73D7EAAF4D3(Global_2667225.f_45.f_56))
		{
			if (!unk_0xEEA5AC2EDA7C33E8(Param0))
			{
				iVar0 = unk_0xB0F7F8663821D9C3(Param0);
				if (unk_0x26B0E73D7EAAF4D3(iVar0))
				{
					iVar1 = unk_0xE4A84ABF135EF91A(iVar0);
					if (!iVar1 == Global_2667225.f_45.f_57)
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
		}
	}
	return 1;
}

int func_168(struct<3> Param0)
{
	switch (Global_2667225.f_2487)
	{
		case 0:
			return func_204(Param0, Global_2667225.f_2466, Global_2667225.f_2469, 0, 0);
			break;
		
		case 1:
			return func_122(Param0, Global_2667225.f_2480, Global_2667225.f_2483, 0, 0);
			break;
		
		case 2:
			return unk_0x2A70BAE8883E4C81(Param0, Global_2667225.f_2480, Global_2667225.f_2483, Global_2667225.f_2486, false, true);
			break;
	}
	return 0;
}

int func_169(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (unk_0x2A488C176D52CCA5(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x2A70BAE8883E4C81(Param0, Var2, Var3, fVar4, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_170(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_83(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(bool bParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(bParam0))
			{
				if (Global_1853348[bParam0 /*834*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_172(bool bParam0)
{
	if (func_104(bParam0, 1, 0))
	{
		if (Global_1853348[bParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (unk_0xB7A628320EFF8E47(Global_2667225.f_2625[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x313CE5879CEB6FCD(0.01f, 360f);
			func_83(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar2);
			if (func_111(Var1, &uVar0) || func_110(Var1))
			{
				Var1 = { *uParam0 };
				func_83(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_175(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF1B760881820C952(func_176(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam1))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_6(bVar1, 1, 1))
		{
			if (!func_201(bVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_137(bVar1) || !bParam8) && !Global_2689235[bVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(bVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x37039302F4E0A008(bVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(bVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_176(bVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(bVar1) != iParam6 || unk_0x37039302F4E0A008(bVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_176(bVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_176(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_178() && Global_1853348[iVar0 /*834*/].f_804) && !func_177(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_8(bParam0);
}

int func_177(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_178()
{
	return Global_2714762.f_19;
}

int func_179(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_181(Param0, fParam1, bParam2, iParam3, 0) || func_180(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_180(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam1 == iVar0 || iParam2 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_181(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam2, 0, 1))
				{
					if (unk_0x37039302F4E0A008(bVar1) == unk_0x37039302F4E0A008(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(bVar1, 0, 1) && func_6(bParam2, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_8(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(bVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_8(bVar1), Param0) < 1f)
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

int func_182(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2667225.f_3 = 0;
	if (!func_179(Param0, 0.5f, unk_0x4F8644AF03D0E0D6(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (func_234(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_234(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!func_186(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!func_183(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!func_95(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (func_234(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!func_186(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!func_183(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!func_95(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!unk_0x4F8644AF03D0E0D6() == bVar1)
		{
			if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
			{
				if (!func_185(unk_0x4F8644AF03D0E0D6(), bVar1, -2, 0))
				{
					if (func_184(func_8(bVar1), Param0, fParam1, fParam2, fParam3, fParam4))
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

bool func_184(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam2);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x2A70BAE8883E4C81(Param0, Param1, Var1, fParam4, false, true);
}

bool func_185(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(bParam0) == -1 && unk_0x37039302F4E0A008(bParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(bParam0) == unk_0x37039302F4E0A008(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(bParam0) == iParam2;
	}
	return unk_0x37039302F4E0A008(bParam0) == iParam2;
}

int func_186(struct<3> Param0, float fParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_6(bVar1, 1, 1) && func_137(bVar1)) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
		{
			if ((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && unk_0x37039302F4E0A008(bVar1) == -1) && !func_118(unk_0x4F8644AF03D0E0D6(), 1))
			{
				return 0;
			}
			else if ((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && !unk_0x4F8644AF03D0E0D6() == bVar1) || !func_185(unk_0x4F8644AF03D0E0D6(), bVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_8(bVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_187(int iParam0)
{
	if ((Global_2667225.f_489 == 9 || Global_2667225.f_489 == 9) || (Global_2667225.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_188(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x4F8644AF03D0E0D6() != bVar1) || iParam6 == 0)
		{
			if (func_6(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
				{
					if (!bParam5 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(bVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && iParam7) && bParam4) && func_142(bVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(bVar1)))
							{
								if (unk_0xF1B760881820C952(func_8(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_189(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_6(bVar1, 1, 1))
			{
				if ((!func_201(bVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1)) && bVar1 != unk_0x4F8644AF03D0E0D6())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x37039302F4E0A008(bVar1) == -1)
						{
							if (unk_0x37039302F4E0A008(bVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x37039302F4E0A008(bVar1) == iVar3)
					{
						if (unk_0xF1B760881820C952(func_8(bVar1), Param0, true) <= (fVar2 + fParam1))
						{
							if (unk_0xDC3A310219E5DA62(bVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_190(bool bParam0)
{
	if (((func_118(bParam0, 1) || func_192(bParam0)) || func_32(bParam0, 0)) || func_191(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_191(bool bParam0)
{
	if (!func_6(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_833, 2);
}

int func_192(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

void func_193(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam1[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2621865[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_195(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0x652D2EEEF1D3E62C(*(uParam1[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6292[iVar1 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_195(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam1[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_195(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam2[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var5, Param0) < unk_0x2A488C176D52CCA5(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_194(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1, int iParam2)
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_195(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_196(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (func_197(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1);
				}
				func_134(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		func_128(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

int func_197(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_87(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_87(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_198(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, float fParam4)
{
	float fVar0;
	
	func_123(&Param0, &Param1);
	fVar0 = (Param1.f_0 - Param0.f_0);
	*uParam2 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*fParam4 = (fVar0 * 0.5f);
}

var func_199()
{
	return Global_1573131.f_4;
}

void func_200(float fParam0, float fParam1)
{
	func_241();
	func_233(fParam0, fParam1);
}

bool func_201(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_202(-1, 0) == 8;
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

int func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_203();
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

int func_203()
{
	return Global_1574918;
}

bool func_204(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param1) < (fParam2 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param1) < (fParam2 + 0.01f);
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_227(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_206(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_206(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_226(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_101(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x6448050E9C2A7207(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x1EAF30FCFBF5AF74(iVar6))
		{
			unk_0x703123E5E7D429C2(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x4F5070AA58F69279(iVar6)) || unk_0xA2AE5C478B96E3B6(iVar6))
			{
				unk_0x0568566ACBB5DEDC(Var1, &uVar4, &uVar5);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_174(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_225(Var1))
									{
										Var1 = { func_221(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_95(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_220(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_226(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_216(Var1, fVar2, uParam2->f_34, unk_0x4F8644AF03D0E0D6(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_215(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_234(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_234(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_212(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_211(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (func_220(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_209(0, uParam2);
						}
						iVar24 = unk_0xD53343AA4FB7DD28(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_208(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_107(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_226(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_207(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_207(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_179(*(uParam0[iVar2 /*4*/]), 5f, unk_0x4F8644AF03D0E0D6(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_208(int iParam0, struct<3> Param1, int iParam2, int iParam3, float* fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xD53343AA4FB7DD28((1 + iParam0), (40 + iParam0));
		if (unk_0x80CA6A8B6C094CC4(Param1, *iParam2, iParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (unk_0x652D2EEEF1D3E62C(*iParam3) > 0f)
			{
				*iParam3 = { func_221(*iParam3, fParam4, iParam7, uParam5->f_9, *uParam5, bParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_225(*iParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_209(int iParam0, var uParam1)
{
	if (!func_220(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		func_210(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_209(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_209(iParam0 + 1, uParam1);
	}
}

void func_210(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674786[iParam0 /*3*/] = { Global_2674786[iParam0 + 1 /*3*/] };
			Global_2674786.f_121[iParam0] = Global_2674786.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_211(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_211(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_212(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_141(bVar3))
		{
			Var1 = { func_8(bVar3) };
			fVar5 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_213(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x4F8644AF03D0E0D6() != bVar1) || iParam7 == 0)
		{
			if (func_6(bVar1, bParam3, bParam4))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bVar1))
				{
					if (!bParam6 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(bVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && iParam8) && bParam5) && func_142(bVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(bVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x997ABD671D25CA0B(unk_0x43A66C31C68491C0(bVar1), false))
								{
									iVar3 = unk_0x9A9112A0FE9A4713(unk_0x43A66C31C68491C0(bVar1), false);
									if (unk_0x7239B21A38F536BA(iVar3) && !unk_0x5F9532F3B5CC2551(iVar3, false))
									{
										iVar4 = unk_0x9F47B058362C84B5(iVar3);
										Var5 = { unk_0x3FEF770D40960D5A(iVar3, false) };
										fVar6 = unk_0xE83D4F9BA2A38914(iVar3);
										if (func_214(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(bVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_214(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_96(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_97(Param0, fParam1, iParam2, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	func_97(Param3, fParam4, iParam5, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (unk_0xA0AD167E4B39D9A2(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_215(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xF73EB622C4F1689B(Param0, 30f, 0, iVar0);
	if (unk_0x7239B21A38F536BA(iVar1) && !unk_0x5F9532F3B5CC2551(iVar1, false))
	{
		iVar2 = unk_0x9F47B058362C84B5(iVar1);
		Var3 = { unk_0x3FEF770D40960D5A(iVar1, false) };
		fVar4 = unk_0xE83D4F9BA2A38914(iVar1);
		if (func_214(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xF73EB622C4F1689B(Param0, 30f, 0, iVar0);
	if (unk_0x7239B21A38F536BA(iVar1) && !unk_0x5F9532F3B5CC2551(iVar1, false))
	{
		iVar2 = unk_0x9F47B058362C84B5(iVar1);
		Var3 = { unk_0x3FEF770D40960D5A(iVar1, false) };
		fVar4 = unk_0xE83D4F9BA2A38914(iVar1);
		if (func_214(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_219(Param0, fParam1, iParam2, bParam3, iParam4) || func_217(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_217(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_218(Param0, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_214(Param0, fParam1, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(bVar2, 0, 1) && func_6(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_218(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_103(iParam1, 1008981770);
	fVar1 = func_103(iParam3, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_219(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar1 = iVar0;
			if (func_6(bVar1, 0, 1) && func_6(bParam3, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(func_8(bVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_96(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(bVar1, 0, 0))
			{
				if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(bVar1)))
				{
					if (func_96(func_8(bVar1), Param0, fParam1, iParam2, 1036831949))
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

int func_220(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_204(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_122(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x2A70BAE8883E4C81(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_221(struct<3> Param0, float* fParam1, int iParam2, bool bParam3, struct<3> Param4, bool bParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (unk_0x652D2EEEF1D3E62C(Param4) > 0f)
		{
			if (!func_224(Param0, *fParam1, Param4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x0568566ACBB5DEDC(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x132F52BBA570FE92(Param0, 1f, 1, &uVar3, &uVar3, &bVar4, &bVar5, &fVar6, bParam5);
		if (bVar4 == bVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((bVar4 + bVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xDCE4334788AF94EA(iParam7) && func_223(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (bVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == bVar4)
			{
				bVar9 = true;
			}
		}
		else if (bVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == bVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (unk_0xBBDA792448DB5A89(bVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * unk_0xBBDA792448DB5A89(bVar4));
				}
				if (bVar9)
				{
					if (bVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((bVar4 - 2)) * 1f));
					}
				}
				else if (bVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((bVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (unk_0xBBDA792448DB5A89(bVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * unk_0xBBDA792448DB5A89(bVar5));
				}
				if (bVar9)
				{
					if (bVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((bVar5 - 2)) * 1f));
					}
				}
				else if (bVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((bVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_222(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_222(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param4) > 0f)
	{
		if (!func_224(Param0, *fParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0x163E252DE035A133(Param0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0xA0F8A7517A273C05(Param0, *fParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(unk_0x652D2EEEF1D3E62C(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_222(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_222(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_222(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_98(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_223(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xC906A7DAB05C8D2B(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_224(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_84(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_80(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_225(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (func_93(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (func_93(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_226(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (func_204(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_122(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x2A70BAE8883E4C81(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_227(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_226(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_230(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_229();
		}
		else
		{
			func_228();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var3) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_216(Var3, fVar4, uParam2->f_34, unk_0x4F8644AF03D0E0D6(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_107(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_215(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_234(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_234(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_213(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_212(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var3, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_211(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_209(0, uParam2);
				}
				iVar0 = unk_0xD53343AA4FB7DD28(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = unk_0xD53343AA4FB7DD28(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_228()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		iVar1 = unk_0xD53343AA4FB7DD28(0, Global_2667225.f_1754);
		iVar2 = unk_0xD53343AA4FB7DD28(0, Global_2667225.f_1754);
		uVar3 = Global_2667225.f_2160[iVar1];
		Global_2667225.f_2160[iVar1] = Global_2667225.f_2160[iVar2];
		Global_2667225.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_230(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = func_231(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_231(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667225.f_1754)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2667225.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_232(int iParam0)
{
	return iParam0 == 50;
}

void func_233(float fParam0, float fParam1)
{
	unk_0x387EAD7EE42F6685(fParam0, fParam1, 0.1f);
	Global_2667225.f_2474 = unk_0xC30338E8088E2E21();
	Global_2667225.f_2472 = 1;
	Global_2667225.f_2475 = unk_0x7A5487FE9FAA6B48();
}

int func_234(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x083961498679DC9F(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_188(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_175(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

void func_235()
{
	func_240();
	func_239();
	func_238();
	func_237();
	func_236();
}

void func_236()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2670168[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_237()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2667225.f_2491.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_238()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2667225.f_2491.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_239()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2667225.f_2491.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_240()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2667225.f_2491 = { Var0 };
}

void func_241()
{
	if (Global_2667225.f_2472)
	{
		if (unk_0xC30338E8088E2E21() == Global_2667225.f_2474)
		{
			unk_0x916F0A3CDEC3445E();
		}
		else
		{
			unk_0x916F0A3CDEC3445E();
		}
		Global_2667225.f_2472 = 0;
	}
}

int func_242(bool bParam0)
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_243(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_244(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_245()
{
	if (bLocal_69 == 0)
	{
		if (BitTest(Local_63.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!BitTest(Local_63.f_2, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), false);
		if (bLocal_69 != 0)
		{
			return 1;
		}
		else if (func_6(bLocal_71, 1, 1))
		{
			if (unk_0x1F13D5AE5CB17E17(false, 0) - unk_0xCB215C4B56A7FAE7(false)) >= func_489(bLocal_69)
			{
				if (unk_0xBCBF4FEF9FA5D781(func_489(bLocal_69)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x43A66C31C68491C0(bLocal_71);
					iVar3 = unk_0x23F8F5FC7E8C4A6B(iVar2, &uLocal_252, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_489(bLocal_69))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x38CE16C96BD11344(Local_63.f_10[iVar1 /*7*/]) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x7239B21A38F536BA(uLocal_252[iVar0]))
								{
									if (!unk_0x5F9532F3B5CC2551(uLocal_252[iVar0], false))
									{
										if (!unk_0x12534C348C6CB68B(uLocal_252[iVar0]))
										{
											if (func_248(unk_0x9F47B058362C84B5(uLocal_252[iVar0])))
											{
												if (!unk_0x0A7B270912999B3C(uLocal_252[iVar0]))
												{
													if (!unk_0x997ABD671D25CA0B(uLocal_252[iVar0], false))
													{
														if (func_5(unk_0x3FEF770D40960D5A(uLocal_252[iVar0], true), unk_0x3FEF770D40960D5A(iVar2, true), 625f))
														{
															unk_0xAD738C3085FE7E11(uLocal_252[iVar0], true, false);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_63.f_1, 12))
															{
																Local_63.f_8 = iLocal_74;
																unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_489(bLocal_69))
		{
			if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x5F9532F3B5CC2551(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], false))
				{
					if (unk_0x0A7B270912999B3C(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x01BF60A500E28887(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xB69317BF5E782347(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0xF25DF915FA38C5F3(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], true);
							Local_63.f_10[iVar6 /*7*/] = unk_0x0EDEC3C276198689(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							unk_0xE05E81A888FA63C8(Local_63.f_10[iVar6 /*7*/], true);
							unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iVar6 /*7*/].f_2), false);
							Local_63.f_10[iVar6 /*7*/].f_1 = bLocal_69;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(bLocal_69);
							func_68(iVar6);
							unk_0xE80492A9AC099A93(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_489(bLocal_69))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_252[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_489(bLocal_69))
			{
				if (BitTest(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_247(&(Local_63.f_10[iVar6 /*7*/]));
					unk_0xE80492A9AC099A93(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0xE80492A9AC099A93(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_247(int iParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*iParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*iParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

int func_248(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_249()
{
	if (BitTest(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_69 == 0)
	{
		Local_63.f_49 = func_250(Local_63.f_36, 1);
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_250(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	if (func_251(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_251(Param0, 1100f, -196f, 300f, 350f, 0) || func_251(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_251(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_251(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_251(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_251(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_251(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0xD53343AA4FB7DD28(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = unk_0xD53343AA4FB7DD28(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_251(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	return unk_0xF1B760881820C952(Param0, Param1, bParam3) <= fParam2;
}

void func_252(int iParam0)
{
	if (unk_0x84A2DD9AC37C35C1(iParam0))
	{
	}
	Local_63.f_36 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	if (func_253(iParam0, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 17);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Local_63.f_1), 17);
	}
}

int func_253(int iParam0, int iParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false) || iParam1)
		{
			if (unk_0xCFB0A0D8EDD145A3(iParam0))
			{
				if (unk_0xE81AFC1BC4CC41CE(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	bool bVar0;
	
	if (unk_0x83CD99A1E6061AB5())
	{
		if (BitTest(Local_63.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_69)
			{
				case 0:
					if (BitTest(Local_63.f_2, 11))
					{
						if (func_6(bLocal_71, 1, 1))
						{
							if (unk_0xB7A628320EFF8E47(func_8(bLocal_71), Local_63.f_39) > 625f)
							{
								unk_0xE80492A9AC099A93(&(Local_63.f_2), 11);
								unk_0xE80492A9AC099A93(&iLocal_66, 8);
							}
						}
					}
					else
					{
						if (func_6(bLocal_71, 1, 1))
						{
							bVar0 = true;
							if (func_257())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (BitTest(Local_63.f_1, 5))
						{
							if (func_256())
							{
								func_64();
								unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(bLocal_71, 1, 1))
					{
						bVar0 = true;
						if (func_255())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (BitTest(Local_63.f_1, 5))
					{
						if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_5) > 30000)
						{
							func_64();
							unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_255()
{
	int iVar0;
	
	iVar0 = unk_0x43A66C31C68491C0(bLocal_71);
	if (((((unk_0x886E37EC497200B6(iVar0) || unk_0xCFB0A0D8EDD145A3(iVar0)) || func_29(bLocal_71, 1, 1)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71))
	{
		return 1;
	}
	if (func_118(bLocal_71, 1))
	{
		if (bLocal_71 > -1)
		{
			if (Global_1853348[bLocal_71 /*834*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256()
{
	if (!BitTest(Local_63.f_1, 18))
	{
		if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_5) > 5000)
		{
			unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	int iVar0;
	
	iVar0 = unk_0x43A66C31C68491C0(bLocal_71);
	if (((((((((unk_0xD5037BA82E12416F(iVar0) > 10f || unk_0x886E37EC497200B6(iVar0)) || unk_0xCFB0A0D8EDD145A3(iVar0)) || func_29(bLocal_71, 1, 1)) || func_62(bLocal_71)) || func_42(bLocal_71, 0)) || func_42(bLocal_71, 7)) || func_28(bLocal_71)) || Global_2689235[bLocal_71 /*453*/].f_246) || func_61(unk_0x43A66C31C68491C0(bLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (func_118(bLocal_71, 1))
	{
		if (bLocal_71 > -1)
		{
			if (Global_1853348[bLocal_71 /*834*/] != 1)
			{
				return 1;
			}
		}
	}
	if (bLocal_71 != -1)
	{
		if (BitTest(Local_65[bLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_258()
{
	if (!BitTest(Local_63.f_1, 14))
	{
		Local_63.f_9 = iLocal_74;
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 14);
	}
}

void func_259()
{
	if (Local_63.f_44 != Local_65[bLocal_70 /*5*/].f_4)
	{
		Local_63.f_44 = Local_65[bLocal_70 /*5*/].f_4;
	}
}

void func_260()
{
	if (!BitTest(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_489(bLocal_69);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_1), 10);
	}
}

void func_261()
{
	func_262();
	if (!BitTest(Local_63.f_1, 8))
	{
		if (BitTest(Local_63.f_2, 7))
		{
			if (unk_0xA2C6FC031D46FFF0(iLocal_74, Local_63.f_7) > 300000)
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_262()
{
	if (!BitTest(Local_63.f_2, 7))
	{
		Local_63.f_7 = iLocal_74;
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 7);
	}
}

void func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
	if (BitTest(Local_63.f_3, 1))
	{
	}
	if (BitTest(Local_63.f_3, 2))
	{
	}
	if (BitTest(Local_63.f_3, 3))
	{
	}
	if (BitTest(Local_63.f_3, 9))
	{
	}
	if (BitTest(Local_63.f_3, 4))
	{
	}
	if (BitTest(Local_63.f_3, 5))
	{
	}
	if (BitTest(Local_63.f_3, 11))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
			}
			else if (func_383("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 6))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
			}
			else if (func_383("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
			}
		}
	}
	if (BitTest(Local_63.f_3, 7))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 7);
			if (func_343())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					if (iLocal_253 > 0)
					{
						func_336(iLocal_253, 1, 0, 0f);
						func_321(iLocal_253, 4, 1, 1);
					}
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 0))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				unk_0xE80492A9AC099A93(&iLocal_66, 7);
				if (func_383("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
			}
		}
		else if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
		{
			if (BitTest(Local_63.f_2, 1))
			{
				if (BitTest(Local_63.f_2, 12))
				{
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_7101) * Global_262145.f_4303));
					func_279(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_265(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 8))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 7);
			if (func_343())
			{
				if (bLocal_69 == 0)
				{
					iLocal_253 = (func_338(2) * func_489(bLocal_69));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_336(iLocal_253, 1, 0, 0f);
						func_321(iLocal_253, iVar1, 1, 0);
					}
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(Local_63.f_3, 10))
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 7);
			if (func_343())
			{
				if (bLocal_69 == 0)
				{
					iLocal_253 = (func_338(2) * func_489(bLocal_69));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_342(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_338(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_336(iLocal_253, 1, 0, 0f);
						func_321(iLocal_253, iVar2, 1, 0);
					}
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_66, 7))
	{
		func_264();
	}
}

void func_264()
{
	unk_0xE80492A9AC099A93(&(Global_1853348[unk_0xEE68096F9F37341E() /*834*/].f_140), bLocal_69);
	Global_1853348[unk_0xEE68096F9F37341E() /*834*/].f_141 = -1;
	if (bLocal_69 == 1)
	{
		if (unk_0xC8BC6461E629BEAA(iLocal_251))
		{
			unk_0x556C1AA270D5A207(iLocal_251);
		}
	}
	func_517();
	func_549();
}

int func_265(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_266(iParam0, iParam1);
}

int func_266(int iParam0, int iParam1)
{
	if (func_278(14) && !func_277(iParam0))
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
	if (func_276(&Global_4541529))
	{
		if (func_274(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_267(&Global_4541529, iParam0))
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

int func_267(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_278(14) && !func_277(iParam1))
	{
		return 0;
	}
	if (func_274(uParam0, iParam1))
	{
		return 0;
	}
	if (func_273(uParam0) < 0f)
	{
		func_272(uParam0, 0);
	}
	func_270(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_268(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_268(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_278(14) && !func_277(iParam1))
	{
		return 0;
	}
	if (func_274(uParam0, iParam1))
	{
		return 0;
	}
	if (func_273(uParam0) < 0f)
	{
		func_272(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_269(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_269(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_270(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_271(uParam0, iVar0);
		iVar0++;
	}
	func_272(uParam0, (Global_4541528 - 0.5f));
}

void func_271(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_272(var uParam0, float fParam1)
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

float func_273(var uParam0)
{
	return uParam0->f_80;
}

bool func_274(var uParam0, int iParam1)
{
	return func_275(uParam0, iParam1) != -1;
}

int func_275(var uParam0, int iParam1)
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

bool func_276(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_277(int iParam0)
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

bool func_278(int iParam0)
{
	return Global_43052 == iParam0;
}

var func_279(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_280(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_281(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

bool func_281(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_314();
	if (func_313(sParam2))
	{
	}
	if (func_312())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_310(bVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(bVar1) * Global_262145.f_1);
		bVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			bVar1 = func_309(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_307(0, &bVar1);
					break;
				
				case 3:
					func_307(1, &bVar1);
					break;
				
				case 1:
					func_305(&bVar1);
					break;
				}
		}
		if (bVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_302(1165, bVar1, -1);
			if (iParam1 == 0)
			{
				func_291((func_301(unk_0x4F8644AF03D0E0D6()) + bVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x46F917F6B4128FE4(bVar1, iParam8, iParam9);
				if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_2 != -1)
				{
					func_302(1166, bVar1, -1);
				}
				func_286(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_282((func_284(unk_0x4F8644AF03D0E0D6()) + bVar1));
			}
			else
			{
				func_282((func_284(unk_0x4F8644AF03D0E0D6()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_282(bool bParam0)
{
	if (func_312())
	{
		Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_5 = bParam0;
		func_283(joaat("mpply_globalxp"), bParam0);
	}
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, true);
	}
}

int func_284(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_6(bParam0, 0, 1))
		{
			if (bParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return func_285(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[bParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_285(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_285(int iParam0)
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

void func_286(bool bParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_144(unk_0x4F8644AF03D0E0D6()) };
	if (unk_0x579CCED0265D4896())
	{
		if (unk_0xB124B57F571D8F18(&Var0))
		{
			iVar1 = func_289(func_290(&Var0));
			if (iVar1 == 0)
			{
				func_288(&Global_1659614, bParam0);
				func_287(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_288(&Global_1659615, bParam0);
				func_287(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_288(&Global_1659616, bParam0);
				func_287(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_288(&Global_1659617, bParam0);
				func_287(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_288(&Global_1659618, bParam0);
				func_287(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_287(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = bParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = bParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = bParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = bParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = bParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = bParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = bParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = bParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = bParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = bParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = bParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = bParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = bParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = bParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = bParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = bParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = bParam1;
			break;
		
		default:
			break;
	}
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_289(int iParam0)
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_290(var* uParam0)
{
	if (unk_0x579CCED0265D4896())
	{
		if (unk_0xB124B57F571D8F18(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_291(bool bParam0, int iParam1, int iParam2)
{
	if (func_312())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1659759[func_300(-1)])
				{
					unk_0x46F917F6B4128FE4(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1659759[func_300(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (bParam0 == 0)
			{
				unk_0x46F917F6B4128FE4(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (bParam0 < 0)
			{
				unk_0x46F917F6B4128FE4(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_299(unk_0x4F8644AF03D0E0D6()))
		{
			Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_1 = bParam0;
			Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_6 = func_297(bParam0, 1);
		}
		func_296(640, bParam0, -1, 1);
		func_295(641, func_297(bParam0, 1), -1, 1, 0);
		Global_1659759[func_300(-1)] = bParam0;
		func_292(-1109644434, 7, 0);
	}
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_294(iParam1, iParam2))
	{
		iVar0 = func_293();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_293()
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

int func_294(int iParam0, var uParam1)
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

void func_295(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

void func_296(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_300(iParam2)] = bParam1;
			break;
		
		case 789:
			Global_1659693[func_300(iParam2)] = bParam1;
			break;
		
		case 790:
			Global_1659699[func_300(iParam2)] = bParam1;
			break;
		
		case 791:
			Global_1659705[func_300(iParam2)] = bParam1;
			break;
		
		case 8729:
			Global_1659711[func_300(iParam2)] = bParam1;
			break;
		
		case 778:
			Global_1659657[func_300(iParam2)] = bParam1;
			break;
		
		case 779:
			Global_1659663[func_300(iParam2)] = bParam1;
			break;
		
		case 780:
			Global_1659669[func_300(iParam2)] = bParam1;
			break;
		
		case 781:
			Global_1659675[func_300(iParam2)] = bParam1;
			break;
		
		case 8731:
			Global_1659681[func_300(iParam2)] = bParam1;
			break;
		
		case 768:
			Global_1659627[func_300(iParam2)] = bParam1;
			break;
		
		case 769:
			Global_1659633[func_300(iParam2)] = bParam1;
			break;
		
		case 770:
			Global_1659639[func_300(iParam2)] = bParam1;
			break;
		
		case 771:
			Global_1659645[func_300(iParam2)] = bParam1;
			break;
		
		case 8733:
			Global_1659651[func_300(iParam2)] = bParam1;
			break;
		
		case 758:
			Global_1659717[func_300(iParam2)] = bParam1;
			break;
		
		case 759:
			Global_1659723[func_300(iParam2)] = bParam1;
			break;
		
		case 760:
			Global_1659729[func_300(iParam2)] = bParam1;
			break;
		
		case 761:
			Global_1659735[func_300(iParam2)] = bParam1;
			break;
		
		case 8735:
			Global_1659741[func_300(iParam2)] = bParam1;
			break;
		
		case 1304:
			Global_1659747[func_300(iParam2)] = bParam1;
			break;
		
		case 7236:
			Global_1659753[func_300(iParam2)] = bParam1;
			break;
		
		case 640:
			Global_1659759[func_300(iParam2)] = bParam1;
			break;
		
		case 1279:
			Global_1659765[func_300(iParam2)] = bParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 11391:
			Global_2869950[func_300(iParam2)] = bParam1;
			break;
		
		case 765:
			Global_1659771[func_300(iParam2)] = bParam1;
			break;
		
		case 766:
			Global_1659777[func_300(iParam2)] = bParam1;
			break;
		
		case 767:
			Global_1659783[func_300(iParam2)] = bParam1;
			break;
		
		case 8734:
			Global_1659789[func_300(iParam2)] = bParam1;
			break;
		
		case 9538:
			Global_1659795[func_300(iParam2)] = bParam1;
			break;
		
		case 1237:
			Global_1659801[func_300(iParam2)] = bParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3666:
			Global_2869985[func_300(iParam2)] = bParam1;
			break;
		
		case 3667:
			Global_2869994[func_300(iParam2)] = bParam1;
			break;
		
		case 3668:
			Global_2869988[func_300(iParam2)] = bParam1;
			break;
		
		case 3669:
			Global_2869997[func_300(iParam2)] = bParam1;
			break;
		
		case 3670:
			Global_2869991[func_300(iParam2)] = bParam1;
			break;
		
		case 3671:
			Global_2870000[func_300(iParam2)] = bParam1;
			break;
		
		case 3692:
			Global_2870003[func_300(iParam2)] = bParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8285:
			Global_2870006[func_300(iParam2)] = bParam1;
			break;
		
		case 8286:
			Global_2870009[func_300(iParam2)] = bParam1;
			break;
		
		case 8287:
			Global_2870012[func_300(iParam2)] = bParam1;
			break;
		
		case 8288:
			Global_2870015[func_300(iParam2)] = bParam1;
			break;
		
		case 8289:
			Global_2870018[func_300(iParam2)] = bParam1;
			break;
		
		case 8290:
			Global_2870021[func_300(iParam2)] = bParam1;
			break;
		
		case 8291:
			Global_2870024[func_300(iParam2)] = bParam1;
			break;
		
		case 8292:
			Global_2870027[func_300(iParam2)] = bParam1;
			break;
		
		case 8293:
			Global_2870030[func_300(iParam2)] = bParam1;
			break;
		
		case 8294:
			Global_2870033[func_300(iParam2)] = bParam1;
			break;
		
		case 8295:
			Global_2870036[func_300(iParam2)] = bParam1;
			break;
		
		case 8296:
			Global_2870039[func_300(iParam2)] = bParam1;
			break;
		
		case 8297:
			Global_2870042[func_300(iParam2)] = bParam1;
			break;
		
		case 8905:
			Global_2870045[func_300(iParam2)] = bParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_300(iParam2)] = bParam1;
			break;
		
		default:
			break;
	}
}

bool func_297(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_298(bParam0, 0);
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	bVar1 = 8000;
	bVar2 = false;
	iVar3 = ((bVar1 - bVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (bVar1 == bVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			bVar1 = iVar3;
			bVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (bVar2 == iVar3)
			{
				bVar2++;
			}
			else
			{
				bVar2 = iVar3;
			}
		}
		else if (bVar1 == iVar3)
		{
			bVar1 = (bVar1 - 1);
		}
		else
		{
			bVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(bVar1) - unk_0xBBDA792448DB5A89(bVar2)) / 2f) + unk_0xBBDA792448DB5A89(bVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_299(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, bParam0);
	}
	return 1;
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_203();
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

int func_301(bool bParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return Global_1659759[func_300(-1)];
			}
			else if (func_299(bParam0))
			{
				return Global_1853348[bParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_300(-1)];
	}
	return 0;
}

void func_302(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_304(iParam0, func_300(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_303(iParam0))
	{
		func_295(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_296(iParam0, bVar0, iParam2, 1);
	}
}

int func_303(int iParam0)
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_304(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_300(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_305(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	bVar0 = false;
	while (bVar0 < unk_0xA6C90FBC38E395EE())
	{
		bVar4 = unk_0x9EC6603812C24710(bVar0);
		if (unk_0x6FF8FF40B6357D45(bVar4))
		{
			bVar5 = unk_0x24FB80D107371267(bVar4);
			if (unk_0x37039302F4E0A008(bVar5) != -1)
			{
				if (unk_0x37039302F4E0A008(bVar5) == iVar1 || func_146(unk_0x37039302F4E0A008(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != unk_0x4F8644AF03D0E0D6())
					{
						if (func_145(unk_0x4F8644AF03D0E0D6(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_306(*bParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_306(*bParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_306(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(bParam0);
	fVar1 = unk_0xBBDA792448DB5A89(bParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_307(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA6C90FBC38E395EE())
		{
			bVar3 = iVar0;
			if (unk_0x6FF8FF40B6357D45(bVar3))
			{
				bVar4 = unk_0x24FB80D107371267(bVar3);
				if (func_6(bVar4, 0, 1))
				{
					if (bVar4 != unk_0x4F8644AF03D0E0D6())
					{
						iVar1++;
						if (func_145(unk_0x4F8644AF03D0E0D6(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_6(bVar4, 1, 1))
			{
				if (bVar4 != unk_0x4F8644AF03D0E0D6())
				{
					if (func_308(unk_0x4F8644AF03D0E0D6(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_145(unk_0x4F8644AF03D0E0D6(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_306(*bParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_306(*bParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_308(bool bParam0, bool bParam1)
{
	return unk_0x2A488C176D52CCA5(func_8(bParam0), func_8(bParam1));
	return 0f;
}

bool func_309(bool bParam0)
{
	int iVar0;
	
	if (unk_0xBB41AFBBBC0A0287() != 3)
	{
		return *bParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_306(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

int func_310(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xF0D31AD191A74F87(iParam0) > func_301(unk_0x4F8644AF03D0E0D6()))
		{
			iParam0 = -func_301(unk_0x4F8644AF03D0E0D6());
		}
	}
	if (func_311(8000, 0, 0) > 0)
	{
		if (func_311(8000, 0, 0) < (iParam0 + func_301(unk_0x4F8644AF03D0E0D6())))
		{
			iParam0 = (func_311(8000, 0, 0) - func_301(unk_0x4F8644AF03D0E0D6()));
		}
	}
	return iParam0;
}

int func_311(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

int func_312()
{
	return 1;
}

int func_313(char* sParam0)
{
	if (unk_0xF22B6C47C6EAB066(sParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92(sParam0, "") || unk_0x0C515FAB3FF9EA92(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_314()
{
	int iVar0;
	
	if (func_320(unk_0x4F8644AF03D0E0D6()) || func_319(unk_0x4F8644AF03D0E0D6()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_317() || func_315(unk_0x4F8644AF03D0E0D6()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_315(bool bParam0)
{
	return func_316(func_39(bParam0));
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_317()
{
	if (unk_0x05095437424397FA())
	{
		return func_178();
	}
	return func_318(Global_4718592.f_116524);
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_319(bool bParam0)
{
	return Global_2689235[bParam0 /*453*/].f_119 == 2;
}

bool func_320(bool bParam0)
{
	return Global_2689235[bParam0 /*453*/].f_119 == 7;
}

void func_321(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_335(iParam1), 16);
	StringCopy(&Var1, func_334(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_51())
	{
		func_322(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4534105[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4534105[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0xF9C812CD7C46E817(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_322(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_323(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_323(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_323(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_323(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_323(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_203()) || unk_0x810E8431C0614BF9())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x3C5FD37B5499582E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x39BE7CEA8D9CC8E6(iVar4))
		{
			*uParam0 = func_330(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_329(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_324(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_325(iParam0);
	}
}

void func_325(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_328(iParam0))
		{
			if (!bVar0)
			{
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_326(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_326(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_327(&(uParam0->f_14));
	func_327(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_327(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_328(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_329(int iParam0, int iParam1)
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = unk_0xFC8202EFC642E6F2();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_331(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_331(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_333(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_332();
		unk_0xA40CC53DF8E50837(1, &Var0, 36, iVar1);
	}
}

void func_332()
{
	unk_0x6EB5F71AA68F2E8E("AM_ARENA_SHP");
}

var func_333(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x933D6A9EEC1BACD0(&uVar0, bParam0);
	}
	return uVar0;
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_336(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_3 = (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_337(iVar1, 0);
	}
}

void func_337(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_341(iParam0) >= 0)
	{
		iVar0 = func_341(iParam0);
	}
	else
	{
		iVar0 = func_339(iParam0);
	}
	return iVar0;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_340())
			{
				return 0;
			}
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 1)
			{
				return 200;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 2)
			{
				return 400;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 3)
			{
				return 600;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 4)
			{
				return 800;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_340()
{
	return BitTest(func_304(6427, -1, 0), 19);
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7104;
			break;
		
		case 10:
			return Global_262145.f_4127;
			break;
		
		case 11:
			return Global_262145.f_4128;
			break;
		
		case 8:
			return Global_262145.f_4125;
			break;
		
		case 0:
			return Global_262145.f_4111;
			break;
		
		case 9:
			return Global_262145.f_4126;
			break;
		
		case 13:
			return Global_262145.f_4130;
			break;
		
		case 12:
			return Global_262145.f_4129;
			break;
		
		case 2:
			return Global_262145.f_4121;
			break;
		
		case 14:
			return Global_262145.f_4131;
			break;
		
		case 20:
			if (func_340())
			{
				return 0;
			}
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 1)
			{
				return Global_262145.f_7111;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 2)
			{
				return Global_262145.f_7112;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 3)
			{
				return Global_262145.f_7113;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 4)
			{
				return Global_262145.f_7114;
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 5)
			{
				return Global_262145.f_7115;
			}
			break;
		
		case 6:
			return Global_262145.f_4124;
			break;
		
		case 22:
			return Global_262145.f_4137;
			break;
		
		case 23:
			return Global_262145.f_4138;
			break;
		
		case 24:
			return Global_262145.f_4139;
			break;
		
		case 25:
			return Global_262145.f_4140;
			break;
		
		case 26:
			return Global_262145.f_4141;
			break;
		
		case 35:
			return Global_262145.f_7680;
			break;
		
		case 15:
			return Global_262145.f_7105;
			break;
		
		case 17:
			return Global_262145.f_7105;
			break;
		
		case 18:
			return Global_262145.f_7105;
			break;
		
		case 19:
			return Global_262145.f_7105;
			break;
		
		case 21:
			return Global_262145.f_7105;
			break;
		
		case 36:
			return Global_262145.f_8147;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13356;
			break;
		
		case 41:
			return Global_262145.f_13357;
			break;
		
		case 42:
			return Global_262145.f_13358;
			break;
		
		case 43:
			return Global_262145.f_15943;
			break;
		
		case 44:
			return Global_262145.f_15945;
			break;
		
		case 57:
			return Global_262145.f_4139;
			break;
		
		case 58:
			return Global_262145.f_25776;
			break;
		
		case 62:
			return Global_262145.f_25777;
			break;
		
		case 63:
			return Global_262145.f_29247;
			break;
		
		case 64:
			return Global_262145.f_7105;
			break;
		
		case 71:
			return Global_262145.f_25777;
			break;
		
		case 72:
			return Global_262145.f_31762;
			break;
		
		case 73:
			return Global_262145.f_31764;
			break;
		
		case 74:
			return Global_262145.f_31766;
			break;
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23992;
		
		case 2:
			return Global_262145.f_23993;
		
		case 3:
			return Global_262145.f_23994;
		
		default:
	}
	return 9999999;
}

int func_343()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!BitTest(Local_63.f_3, 7))
			{
				func_344("HS_UNABLE", bLocal_71, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (bLocal_69)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_383(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_344(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x37039302F4E0A008(bParam1);
	if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), bParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6D0DE6A7B5DA71F8(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6D0DE6A7B5DA71F8(bParam1), 64);
		}
		if (unk_0xCA042B6957743895(&Var2))
		{
		}
		unk_0x202709F4C58A0424(sParam0);
		if ((iVar1 != -1 && unk_0x05095437424397FA()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				unk_0x39BBF623FC803EAC(func_381(iVar1, bParam1, 0));
			}
			else
			{
				unk_0x39BBF623FC803EAC(func_352(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x39BBF623FC803EAC(func_352(bParam1, -2, 1, 0, 0));
		}
		unk_0x6C188BE134E074AA(func_350(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x2ED7843F8F801023(false, true);
		}
		else
		{
			Global_2787505 = { func_144(bParam1) };
			if (unk_0xEEE6EACBE8874FBA(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (unk_0x0C515FAB3FF9EA92(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_349(&Var2) };
					}
					iVar0 = unk_0x137BC35589E34E1E(bVar4, unk_0x7543BB439F63792B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = unk_0x97C9E4E7024A8F2C(bVar4, unk_0x7543BB439F63792B(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = unk_0x2ED7843F8F801023(false, true);
			}
		}
		func_345(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_345(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_348() || !unk_0x05095437424397FA()) || !func_201(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return;
	}
	iVar0 = func_346(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_347(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_348()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

struct<16> func_349(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_350(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_351(&cVar0);
}

var func_351(char[4] cParam0)
{
	return cParam0;
}

int func_352(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_147(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x37039302F4E0A008(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(unk_0x4F8644AF03D0E0D6()) || (func_380() && func_379())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_378();
		if (unk_0x7239B21A38F536BA(iVar1))
		{
			if (unk_0x12534C348C6CB68B(iVar1))
			{
				if (unk_0x6C0E2E0125610278(iVar1) != -1)
				{
					if (func_6(unk_0x6C0E2E0125610278(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x05095437424397FA()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_381(iParam1, bParam0, 0);
							}
							else
							{
								return func_364(bParam0, unk_0x6C0E2E0125610278(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_364(bParam0, unk_0x6C0E2E0125610278(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x05095437424397FA()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_381(iParam1, bParam0, 0);
				}
				else
				{
					return func_353(0, -1, 0);
				}
			}
			else
			{
				return func_353(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x05095437424397FA()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_381(iParam1, bParam0, 0);
		}
		else
		{
			return func_364(bParam0, unk_0x4F8644AF03D0E0D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_364(bParam0, unk_0x4F8644AF03D0E0D6(), iParam1, bParam2, bParam3);
}

int func_353(bool bParam0, int iParam1, bool bParam2)
{
	return func_354(unk_0x4F8644AF03D0E0D6(), bParam0, iParam1, bParam2);
}

int func_354(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xB8DFD30D6973E135(bParam0))
	{
		return 3;
	}
	iVar0 = unk_0x37039302F4E0A008(bParam0);
	if ((func_363() || (func_362() && func_360())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_359(iParam2, iVar0);
		}
		else
		{
			return func_359(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_358(1);
				}
				else
				{
					return func_358(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_355(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_355(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_358(1);
	}
	return func_358(0);
}

int func_355(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_357(iParam0, iParam1, iParam3);
	if (func_356(Global_4718592.f_116524, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_356(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_358(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_359(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_357(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_360()
{
	if (func_361())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_361()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_362()
{
	if (unk_0x05095437424397FA())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && unk_0x2C83A9DA6BFFC4F9(joaat("fm_deathmatch_creator")) > 0);
}

int func_363()
{
	if (func_361() && unk_0x05095437424397FA())
	{
		return 1;
	}
	return 0;
}

int func_364(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x37039302F4E0A008(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1853348[bVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_369())
			{
				iVar3 = func_368(bParam0);
				if (!iVar3 == -1)
				{
					return func_366(iVar3);
				}
			}
			if ((func_185(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_146(unk_0x37039302F4E0A008(bParam1), unk_0x37039302F4E0A008(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_358(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_365(1);
			}
			else
			{
				return func_354(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_358(1);
			}
			else
			{
				return func_354(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_368(bParam0);
	if (!iVar4 == -1)
	{
		return func_366(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_365(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_366(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_367(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_367(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_368(bool bParam0)
{
	if (!bParam0 == func_13())
	{
		if (func_14(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_12(bParam0)];
		}
	}
	return -1;
}

int func_369()
{
	if ((((((func_377() || func_376()) || func_178()) || func_375()) || func_374()) || func_372()) || func_370())
	{
		return 1;
	}
	if (unk_0x05095437424397FA() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	return func_371(Global_4718592.f_116524);
}

int func_371(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_372()
{
	return func_373(Global_4718592.f_116524);
}

int func_373(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_374()
{
	return Global_2714762.f_24;
}

var func_375()
{
	return Global_2714762.f_21;
}

var func_376()
{
	return Global_2714762.f_18;
}

var func_377()
{
	return Global_2714762.f_17;
}

var func_378()
{
	return Global_2621446.f_2;
}

var func_379()
{
	return BitTest(Global_2621446, 4);
}

var func_380()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

int func_381(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_369())
	{
		iVar2 = func_368(bParam1);
		if (!iVar2 == -1)
		{
			return func_366(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_13())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_354(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_382(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_146(iParam0, unk_0x37039302F4E0A008(bParam1), 0))
		{
			iVar0 = func_365(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_382(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_383(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x0C515FAB3FF9EA92(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_68, 0))
		{
			func_488(&uLocal_86, 3, 0, sParam1, 0, 1);
			if (func_385(&uLocal_86, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_68, false);
			}
		}
		else if (!BitTest(iLocal_68, 1))
		{
			if (func_384(0))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_68, true);
			}
		}
		else if (!func_384(0))
		{
			iLocal_68 = 0;
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
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

int func_385(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_486())
	{
		return 0;
	}
	if (func_485())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_386(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_386(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xCA042B6957743895(sParam2))
	{
		return 0;
	}
	if (unk_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xCA042B6957743895(sParam3))
	{
		return 0;
	}
	if (unk_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
	iVar1 = func_484(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xCA042B6957743895(sParam7))
	{
		iVar2 = unk_0xD24D37CC275948CC(sParam7);
	}
	if (func_483(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_478(uParam6))
	{
		return 0;
	}
	if (func_475(iVar0, iVar1, iVar2))
	{
		if (func_474())
		{
			return 0;
		}
		func_473();
		return func_393(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_392(iParam4))
	{
		return 0;
	}
	func_387(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_387(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_388(iParam4);
	func_473();
	Global_1641031.f_40.f_13 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), 7000);
}

void func_388(int iParam0)
{
	if (func_391(iParam0))
	{
		func_390();
		return;
	}
	func_389();
}

void func_389()
{
	Global_1641031.f_40.f_10 = 0;
}

void func_390()
{
	Global_1641031.f_40.f_10 = 1;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_392(int iParam0)
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_393(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_472();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_469(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_466(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_469(uParam0, sParam3, sParam4);
		}
		return func_448(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_447(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_435(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_434(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_394(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_394(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_433();
	bVar0 = true;
	if (func_396(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_395(120000);
		return 1;
	}
	return 0;
}

void func_395(int iParam0)
{
	Global_1641031.f_40.f_11 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_396(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	bVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = unk_0x6D0DE6A7B5DA71F8(bVar0);
		iVar1 = func_427(bVar0);
		if (iVar1 == 0)
		{
			if (unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_426(sParam5, bParam6, &iVar3);
	uVar5 = func_424(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xCA042B6957743895(sParam8))
	{
		iVar6++;
		if (!unk_0xCA042B6957743895(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x0C515FAB3FF9EA92(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xCA042B6957743895(sVar2))
	{
		bVar12 = func_423(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_400(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_399();
	}
	func_433();
	func_398();
	func_397();
	return 1;
}

void func_397()
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_398()
{
	Global_1641031.f_40 = 3;
}

void func_399()
{
	unk_0x933D6A9EEC1BACD0(&Global_8136, 8);
}

int func_400(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_401(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			unk_0x933D6A9EEC1BACD0(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_401(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x0C515FAB3FF9EA92(sParam14, sParam15))
	{
	}
	func_416();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_415() == 0)
	{
		func_413();
		return 0;
	}
	func_412(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_416();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_411(0);
				break;
			
			case 1:
				func_411(1);
				break;
			
			case 2:
				func_411(2);
				break;
			
			case 3:
				func_411(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_416();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_410())
			{
				unk_0x67C540AA08E4A6F5(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_409(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_406(1);
			func_409(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_402(iParam0, sParam1, bVar1, func_405(unk_0x4F8644AF03D0E0D6()));
	return 1;
}

void func_402(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_403())
	{
		return;
	}
	unk_0x65482BFD0923C8A1(iParam0, -1180597171, unk_0xD24D37CC275948CC(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_403()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_13())
	{
		return 0;
	}
	if (func_404(unk_0x4F8644AF03D0E0D6()))
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

bool func_404(bool bParam0)
{
	return func_38(bParam0, 20);
}

int func_405(bool bParam0)
{
	return Global_1853348[bParam0 /*834*/].f_205.f_6;
}

void func_406(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	bVar0 = false;
	while (bVar0 < 9)
	{
		Global_8705[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 9)
	{
		iVar1 = 0;
		if (func_278(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[bVar0] == 0)
						{
							Global_8669[bVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									bVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									bVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar2);
								unk_0xC6796A8FFA375E53();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[bVar0] == 0)
						{
							Global_8669[bVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									bVar4 = false;
									bVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													bVar4++;
												}
											}
										}
										iVar5++;
									}
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											bVar6 = Global_44249;
											break;
										
										case 1:
											bVar6 = Global_44250;
											break;
										
										case 2:
											bVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_8142);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									bVar7 = 42;
								}
								else
								{
									bVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									bVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									bVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(bVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else if ((iVar1 == 23 && unk_0x0C515FAB3FF9EA92(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xF6E48914C7A8694E(Global_20247, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(true);
								unk_0xC3D0841A0CC546A6(bVar0);
								unk_0xC3D0841A0CC546A6(Global_8143[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(false);
								func_408(&(Global_8143[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								bVar9 = false;
								bVar9 = Global_1888478.f_1;
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(bVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_407(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(false), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_407(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_408(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_408(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_408(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_408(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_408(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_408(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_409(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

bool func_410()
{
	return Global_1575058;
}

void func_411(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x494E97C2EF27C470();
	iVar1 = unk_0x13D2B8ADD79640F2();
	iVar2 = unk_0x25223CA6B4D20B7F();
	iVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_4539964[iParam0 /*104*/].f_18 = iVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_414(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_414(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_415()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_414(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

void func_416()
{
	if (func_278(14))
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
		Global_20266 = func_417();
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

var func_417()
{
	func_418();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_418()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_421(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_420(unk_0xD80958FC74E988A6());
			if (func_419(iVar0) && (!func_278(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_419(Global_113386.f_2363.f_539.f_4321))
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

bool func_419(int iParam0)
{
	return iParam0 < 3;
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_421(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_421(int iParam0)
{
	if (func_419(iParam0))
	{
		return func_422(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_422(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_423(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_401(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			unk_0x933D6A9EEC1BACD0(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_425(2, iParam1);
	return iParam0;
}

void func_425(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_426(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xCA042B6957743895(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_425(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x7B5280EBA9840C72(sParam0);
}

int func_427(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_430(bParam0);
	if (iVar0 == -1)
	{
		func_428(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_428(bool bParam0, bool bParam1)
{
	if (!func_6(bParam0, 0, 1))
	{
		return;
	}
	if (func_430(bParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (bParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_429(bParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = bParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_429(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_430(bool bParam0)
{
	int iVar0;
	
	if (!func_6(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == bParam0)
		{
			if (unk_0xA0A9668F158129A2(Global_1660783[iVar0 /*5*/].f_2) && unk_0x7085228842B13A67(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_431(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_431(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0xA0A9668F158129A2(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xDB4EACD4AD0A5D6B(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x96B1361D9B24C2FF(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_432(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_432(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		uParam0->f_3 = unk_0x7A5487FE9FAA6B48();
	}
}

void func_433()
{
	Global_1641031.f_40.f_9 = 4;
}

int func_434(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_433();
	bVar0 = false;
	return func_396(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_435(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_436(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_436(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	bVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = unk_0x6D0DE6A7B5DA71F8(bVar0);
		iVar1 = func_427(bVar0);
		if (iVar1 == 0)
		{
			if (unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_426(sParam5, bParam6, &iVar3);
	uVar5 = func_424(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xCA042B6957743895(sParam8))
	{
		iVar6++;
		if (!unk_0xCA042B6957743895(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x0C515FAB3FF9EA92(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xCA042B6957743895(sVar2))
	{
		bVar12 = func_446(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_438(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_399();
	}
	func_437();
	func_398();
	func_397();
	return 1;
}

void func_437()
{
	Global_1641031.f_40.f_9 = 3;
}

int func_438(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xE80492A9AC099A93(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_440(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_439(iParam0) };
			Global_8823 = iParam0;
			unk_0x933D6A9EEC1BACD0(&Global_8136, true);
			unk_0x933D6A9EEC1BACD0(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_439(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_440(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x0C515FAB3FF9EA92(sParam14, sParam15))
	{
	}
	func_416();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_445() == 0)
	{
		func_443();
		return 0;
	}
	func_442(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_411(0);
		func_411(2);
		func_411(1);
	}
	else
	{
		func_416();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_411(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_411(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_411(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_411(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_416();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_410())
			{
				unk_0x67C540AA08E4A6F5(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_409(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_406(1);
			func_409(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_441(iParam0, sParam1, bVar1, func_405(unk_0x4F8644AF03D0E0D6()));
	return 1;
}

void func_441(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_403())
	{
		return;
	}
	unk_0x65482BFD0923C8A1(iParam0, 1654525105, unk_0xD24D37CC275948CC(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x494E97C2EF27C470();
	iVar1 = unk_0x13D2B8ADD79640F2();
	iVar2 = unk_0x25223CA6B4D20B7F();
	iVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_444(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_444(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_445()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_444(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_446(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xE80492A9AC099A93(&Global_8136, 10);
	iVar0 = 3;
	if (func_440(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_439(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			unk_0x933D6A9EEC1BACD0(&Global_8136, true);
			unk_0x933D6A9EEC1BACD0(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_447(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
	}
	if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	func_437();
	bVar0 = true;
	if (func_436(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_395(120000);
		return 1;
	}
	return 0;
}

int func_448(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_465(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_454(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_453(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_452(1);
		}
		func_451();
		func_398();
		func_450();
		func_449();
		return 1;
	}
	return 0;
}

void func_449()
{
	Global_2824944 = 0;
}

void func_450()
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_451()
{
	Global_1641031.f_40.f_9 = 1;
}

void func_452(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8138, false);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8138, false);
	}
}

void func_453(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_8136, 20);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_8136, 20);
	}
}

int func_454(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_464(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
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
	return func_455(sParam3, iParam4, bParam7);
}

int func_455(char* sParam0, int iParam1, bool bParam2)
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
					func_463();
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
		if (func_462(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_461();
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
				func_416();
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
				if (func_460())
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
			if (func_459())
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
			func_458();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_457();
		func_456();
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
		func_463();
	}
	return 0;
}

void func_456()
{
	if (!func_403())
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

void func_457()
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

void func_458()
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

int func_459()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_460()
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

void func_461()
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

bool func_462(int iParam0, int iParam1)
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

void func_463()
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

void func_464(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_465(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_464(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_455(sParam3, iParam4, bParam7);
}

int func_466(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
	}
	if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	if (func_468(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_467();
		func_451();
		func_398();
		func_450();
		func_449();
		return 1;
	}
	return 0;
}

void func_467()
{
	Global_22623 = 0;
}

bool func_468(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_464(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_455(sParam3, iParam4, bParam8);
}

int func_469(var uParam0, char* sParam1, char* sParam2)
{
	if (func_471(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_470();
		func_398();
		func_450();
		return 1;
	}
	return 0;
}

void func_470()
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_471(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_464(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_455(sParam2, iParam3, 0);
}

void func_472()
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_473()
{
	Global_1641031.f_40 = 1;
}

bool func_474()
{
	return Global_1641031.f_40 == 1;
}

int func_475(int iParam0, int iParam1, int iParam2)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_476(int iParam0)
{
	if (!func_477())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_477()
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_478(var uParam0)
{
	if (func_482())
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (func_384(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_480())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_479())
		{
			return 0;
		}
	}
	return 1;
}

bool func_479()
{
	return unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1659413);
}

int func_480()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_481()
{
	return Global_1641031.f_40 == 3;
}

bool func_482()
{
	return func_459();
}

int func_483(int iParam0, int iParam1, int iParam2)
{
	if (!func_481())
	{
		return 0;
	}
	return func_475(iParam0, iParam1, iParam2);
}

int func_484(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xD24D37CC275948CC(&cVar0);
}

bool func_485()
{
	return Global_2821909.f_1;
}

int func_486()
{
	if (Global_1641219.f_2)
	{
		return 1;
	}
	return func_487();
}

bool func_487()
{
	return func_482();
}

void func_488(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_489(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_490(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_491(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x83CD99A1E6061AB5())
		{
			func_492(uParam0, 0, 0);
		}
	}
}

void func_492(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_493()
{
	if (unk_0x18A47D074708FD68(Local_63.f_10[iLocal_77 /*7*/]) && !unk_0x5F9532F3B5CC2551(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iLocal_77 /*7*/]), false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (func_5(unk_0x3FEF770D40960D5A(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iLocal_77 /*7*/]), true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50625f))
			{
				if (!BitTest(iLocal_66, 4))
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_66, 4);
				}
			}
			else if (!BitTest(iLocal_66, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_77 == Local_63.f_42)
					{
						if (!BitTest(iLocal_66, 5))
						{
							unk_0x933D6A9EEC1BACD0(&iLocal_66, 5);
						}
					}
				}
			}
		}
	}
	func_494(iLocal_77);
	iLocal_77++;
	if (iLocal_77 >= func_489(bLocal_69))
	{
		if ((!BitTest(iLocal_66, 4) && BitTest(Local_63.f_1, 8)) || BitTest(iLocal_66, 5))
		{
			if (!BitTest(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1, 1))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), true);
			}
		}
		else if (BitTest(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1, 1))
		{
			unk_0xE80492A9AC099A93(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), true);
		}
		unk_0xE80492A9AC099A93(&iLocal_66, 4);
		unk_0xE80492A9AC099A93(&iLocal_66, 5);
		iLocal_77 = 0;
	}
}

void func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar2 = false;
	Var3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0x38CE16C96BD11344(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]);
		if (bLocal_69 == 0)
		{
			if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_67[iParam0], 0))
				{
					unk_0x933D6A9EEC1BACD0(&Global_1835488, false);
					unk_0x933D6A9EEC1BACD0(&(iLocal_67[iParam0]), false);
				}
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_67[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (BitTest(iLocal_67[iParam0], 1))
				{
					unk_0xE80492A9AC099A93(&(iLocal_67[iParam0]), true);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0x38CE16C96BD11344(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!unk_0x4D36070FE0215186(Local_63.f_10[iParam0 /*7*/]))
				{
					unk_0xA670B3662FAFFBD0(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x4D36070FE0215186(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
			{
				if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_67[iParam0], 1))
				{
					if (unk_0x0EDE326D47CD0F3E(iVar0, unk_0x4F8644AF03D0E0D6()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_516(iVar0, 3);
								break;
						}
						unk_0x933D6A9EEC1BACD0(&(iLocal_67[iParam0]), true);
					}
				}
			}
			if (!unk_0x5F9532F3B5CC2551(iVar0, false) && !unk_0x84A2DD9AC37C35C1(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0xC1E8A365BF3B29F2(iVar0, 187, true);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x1E982AC8716912C5(iVar0, 3f);
									unk_0x9F8AA94D6D97DBF4(iVar0, true);
									unk_0x1913FE4CBF41C463(iVar0, 118, false);
								}
							}
						}
						if (unk_0x4F8644AF03D0E0D6() == bLocal_71 && func_5(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true), 25f))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_2815059.f_4658), false);
						}
						else
						{
							unk_0xE80492A9AC099A93(&(Global_2815059.f_4658), false);
						}
						if (!unk_0xBBCCE00B381F8482(iVar0))
						{
							if (!unk_0x625B774D75C87068(iVar0, 29))
							{
								if (func_6(bLocal_71, 1, 1))
								{
									if (!BitTest(Local_63.f_2, 13))
									{
										if (func_515(bLocal_71) && !unk_0x1C86D8AEF8254B78(unk_0x43A66C31C68491C0(bLocal_71)))
										{
											if (!func_514(iVar0, -1794415470))
											{
												if (func_513(iVar0))
												{
													iVar1 = unk_0x9A9112A0FE9A4713(unk_0x43A66C31C68491C0(bLocal_71), false);
													if (unk_0x7239B21A38F536BA(iVar1))
													{
														if (unk_0x4C241E39B23DF959(iVar1, false))
														{
														}
														if (!unk_0xF7F203E31F96F6A1(iVar1, func_512(unk_0x43A66C31C68491C0(bLocal_71), 0)))
														{
															unk_0xC20E50AA46D09CA8(iVar0, iVar1, -1, func_511(unk_0x43A66C31C68491C0(bLocal_71), iVar1), func_510(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0x43A66C31C68491C0(bLocal_71)) && !unk_0x997ABD671D25CA0B(iVar0, true))
										{
											if (func_514(iVar0, -1794415470))
											{
												unk_0xE1EF3C1216AFF2CD(iVar0);
											}
											if (!func_514(iVar0, 1227113341))
											{
												if (func_513(iVar0))
												{
													unk_0x6A071245EB0D1882(iVar0, unk_0x43A66C31C68491C0(bLocal_71), -1, 0f, func_510(iParam0), 2f, 0);
												}
											}
											else
											{
												unk_0xC1E8A365BF3B29F2(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x4F8644AF03D0E0D6() == bLocal_71 && func_5(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bLocal_71), true), 25f))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_2815059.f_4658), false);
						}
						else
						{
							unk_0xE80492A9AC099A93(&(Global_2815059.f_4658), false);
						}
						if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
						{
							if (!BitTest(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1, 0))
							{
								if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
								{
									if ((func_4(unk_0x3FEF770D40960D5A(iVar0, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) && (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) || unk_0x1C86D8AEF8254B78(unk_0xD80958FC74E988A6()))) || (unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0xD80958FC74E988A6()))
									{
										bVar2 = func_508(unk_0x4F8644AF03D0E0D6());
										fVar5 = (unk_0xBBDA792448DB5A89(Global_262145.f_7109) / 100f);
										bVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(bVar2) * fVar5));
										iVar6 = func_405(unk_0x4F8644AF03D0E0D6());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (bVar2 > (iVar6 * Global_262145.f_7110))
										{
											bVar2 = (iVar6 * Global_262145.f_7110);
										}
										if (bVar2 > 0)
										{
											unk_0x933D6A9EEC1BACD0(&iLocal_66, 16);
										}
										unk_0x8C825BDC7741D37C(unk_0xD80958FC74E988A6(), 5000, 10000, 4);
										if (!(unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0x43A66C31C68491C0(bLocal_71)))
										{
											Var3 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iVar0, true) };
											Var3 = { func_507(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											unk_0xC5F68BE9613E2D18(unk_0xD80958FC74E988A6(), 1, Var3, 0f, 0f, 0.5f, 0, false, true, true, false, true);
										}
										unk_0x70A2D1137C8ED7C9(iVar0, 512, false);
										unk_0x9F7794730795E019(iVar0, 17, true);
										if (((unk_0x997ABD671D25CA0B(iVar0, true) || unk_0x4AE4FF911DFB61DA(iVar0)) && func_505(iVar0)) && func_512(iVar0, 0) == -1)
										{
											unk_0x70A2D1137C8ED7C9(iVar0, 2, true);
											unk_0x9F7794730795E019(iVar0, 3, false);
											unk_0x9F7794730795E019(iVar0, 6, true);
										}
										else
										{
											unk_0xE1EF3C1216AFF2CD(iVar0);
											unk_0x22B0D0E37CCB840D(iVar0, unk_0xD80958FC74E988A6(), 10000f, -1, true, false);
										}
										Local_65[unk_0xEE68096F9F37341E() /*5*/].f_3 = bVar2;
										if (bVar2 > 0)
										{
											Local_65[unk_0xEE68096F9F37341E() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_65[unk_0xEE68096F9F37341E() /*5*/].f_2 = -1;
										}
										unk_0xC80A74AC829DDD92(iVar0, Global_1837201);
										unk_0x933D6A9EEC1BACD0(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), false);
										unk_0x933D6A9EEC1BACD0(&(Global_2815059.f_4658), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xAF9E59B1B1FBF2A0(iVar0, 187))
						{
							unk_0xC1E8A365BF3B29F2(iVar0, 187, false);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x9F8AA94D6D97DBF4(iVar0, false);
								unk_0x1913FE4CBF41C463(iVar0, 118, true);
							}
						}
						if (!(unk_0x4AE4FF911DFB61DA(iVar0) && unk_0x5486A79D9FBD342D(iVar0) == unk_0x43A66C31C68491C0(bLocal_71)))
						{
							if (!unk_0xBBCCE00B381F8482(iVar0))
							{
								if (func_513(iVar0))
								{
									if ((unk_0x997ABD671D25CA0B(iVar0, true) || unk_0x4AE4FF911DFB61DA(iVar0)) && !BitTest(Local_63.f_2, 10))
									{
										if (!func_514(iVar0, -258271821) && !func_514(iVar0, -1273030092))
										{
											if (unk_0x826AA586EDB9FEF8(iVar0))
											{
												iVar7 = unk_0x9A9112A0FE9A4713(iVar0, true);
												iVar8 = unk_0x9F47B058362C84B5(iVar7);
												if (BitTest(Local_63.f_2, 13))
												{
													unk_0x9F7794730795E019(iVar0, 17, true);
													unk_0x9F7794730795E019(iVar0, 6, false);
													unk_0x9F7794730795E019(iVar0, 1, false);
												}
												else if (unk_0xDCE4334788AF94EA(iVar8))
												{
													unk_0xDAD029E187A2BEB4(iVar0, iVar7, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (unk_0xA0948AB42D7BA0DE(iVar8))
												{
													unk_0x23703CD154E83B88(iVar0, iVar7, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 1.121039E-43f, 1.121039E-43f, 1);
												}
												else if (unk_0x9F47B058362C84B5(iVar7) == joaat("taxi"))
												{
													unk_0x70A2D1137C8ED7C9(iVar0, 2, false);
													unk_0x9F7794730795E019(iVar0, 3, true);
													unk_0x9F7794730795E019(iVar0, 6, false);
													unk_0x22B0D0E37CCB840D(iVar0, unk_0x43A66C31C68491C0(bLocal_71), 10000f, -1, true, false);
												}
												else
												{
													unk_0x480142959D337D00(iVar0, unk_0x9A9112A0FE9A4713(iVar0, true), 60f, 786468);
												}
											}
										}
									}
									else if (!func_514(iVar0, 1805844857))
									{
										if (func_6(bLocal_71, 1, 1))
										{
											unk_0x22B0D0E37CCB840D(iVar0, unk_0x43A66C31C68491C0(bLocal_71), 10000f, -1, true, false);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_503(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0xE1EF3C1216AFF2CD(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]));
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 17, true);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 6, false);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(Local_63.f_10[iParam0 /*7*/]), 1, false);
				}
				func_495(iVar0);
			}
		}
	}
}

void func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_66, 16))
	{
		iVar0 = Local_65[unk_0xEE68096F9F37341E() /*5*/].f_3;
		iVar1 = func_496(iVar0);
		if (iVar1 == 1)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 15);
			unk_0xE80492A9AC099A93(&iLocal_66, 16);
			if (!func_51())
			{
				unk_0xFD06E55DAF765B32(iVar0, 0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8528)
			{
				iVar0 = Global_262145.f_8528;
			}
			unk_0xA9C8960E8684C1B5(iParam0, iVar0);
			unk_0x933D6A9EEC1BACD0(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0xE80492A9AC099A93(&iLocal_66, 15);
			unk_0xE80492A9AC099A93(&iLocal_66, 16);
			unk_0x933D6A9EEC1BACD0(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_496(int iParam0)
{
	if (func_51())
	{
		if (func_499(iParam0))
		{
			if (func_498(iLocal_254) == 2)
			{
				unk_0x9507D4271988E1AE(func_497(iLocal_254));
				unk_0xFD06E55DAF765B32(iParam0, 0, 0, 0);
				func_325(iLocal_254);
				return 1;
			}
			else
			{
				func_325(iLocal_254);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_497(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_498(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_499(int iParam0)
{
	if (!BitTest(iLocal_66, 15))
	{
		func_323(&iLocal_254, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_502(&uLocal_255, 0, 0);
		unk_0x933D6A9EEC1BACD0(&iLocal_66, 15);
	}
	else if (func_501(iLocal_254) || func_500(&uLocal_255, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_500(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_492(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_502(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			*uParam0 = unk_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = unk_0x9CD27B0045628463();
	}
	uParam0->f_1 = 1;
}

void func_503(int iParam0, bool bParam1)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		if (unk_0x4D36070FE0215186(iParam0))
		{
			if (!func_504(iParam0))
			{
				if (BitTest(Local_63.f_2, 13))
				{
					unk_0xE1EF3C1216AFF2CD(unk_0xBDCD95FC216A8B3E(iParam0));
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(iParam0), 17, true);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(iParam0), 6, false);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						unk_0xE1EF3C1216AFF2CD(unk_0xBDCD95FC216A8B3E(iParam0));
					}
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(iParam0), 6, true);
					unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(iParam0), 1, true);
				}
			}
		}
		func_247(&iParam0);
	}
}

int func_504(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

int func_505(int iParam0)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, true))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, true);
	}
	if (unk_0x4AE4FF911DFB61DA(iParam0))
	{
		iVar0 = unk_0xF92691AED837A5FC(iParam0);
	}
	if (!unk_0x7239B21A38F536BA(iVar0))
	{
		if (func_515(bLocal_71))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0x43A66C31C68491C0(bLocal_71), true);
		}
	}
	if (unk_0x7239B21A38F536BA(iVar0))
	{
		if (func_506(iVar0))
		{
			return 0;
		}
		if (unk_0x2E0E1C2B4F6CB339(iParam0) || unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iVar0)))
		{
			if (!unk_0xCFB0A0D8EDD145A3(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x9F47B058362C84B5(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_506(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
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

Vector3 func_507(struct<3> Param0)
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

int func_508(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_509(bParam0);
	return uVar0;
}

int func_509(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return unk_0xA40F9C2623F6A8B5(-1);
		}
		else if (func_299(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_510(int iParam0)
{
	if (!BitTest(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_511(int iParam0, int iParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0, false) && !unk_0x5F9532F3B5CC2551(iParam1, false))
	{
		if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
		{
			if (unk_0xBB40DD2270B65366(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_512(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x997ABD671D25CA0B(iParam0, bParam1))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, bParam1);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				iVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x22AC59A870E6A669(iVar0, iVar3, false))
					{
						if (unk_0xBB40DD2270B65366(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_513(int iParam0)
{
	if ((!unk_0x84A2DD9AC37C35C1(iParam0) && !unk_0x4FBACCE3B4138EE8(iParam0, 0)) && !unk_0x47E4E977581C5B55(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0, int iParam1)
{
	if (unk_0x77F1BEB8863288D5(iParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_515(bool bParam0)
{
	if (unk_0x690A61A6D13583F6(bParam0))
	{
		return 0;
	}
	if (unk_0x826AA586EDB9FEF8(unk_0x43A66C31C68491C0(bParam0)))
	{
		return 1;
	}
	return 0;
}

void func_516(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x05661B80A8C9165F(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xA06C969B02A97298(iParam0, "AttributeDamage");
	}
	unk_0x933D6A9EEC1BACD0(&iVar0, bParam1);
	unk_0x0CE3AA5E1CA19E10(iParam0, "AttributeDamage", iVar0);
}

void func_517()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_63.f_2, 6);
	bVar1 = BitTest(Local_63.f_2, 10);
	func_522();
	if (bLocal_69 != 1)
	{
		if (BitTest(Local_63.f_3, 12))
		{
			func_519();
		}
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_78))
	{
		func_518(&iLocal_78);
	}
	iVar3 = 0;
	while (iVar3 < func_489(bLocal_69))
	{
		iLocal_67[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = iLocal_74;
		Local_63.f_6 = iLocal_74;
		Local_63.f_7 = iLocal_74;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_489(bLocal_69))
		{
			bVar2 = BitTest(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x933D6A9EEC1BACD0(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1 = 0;
	Local_65[unk_0xEE68096F9F37341E() /*5*/].f_2 = -1;
	iLocal_66 = 0;
	if (bVar0)
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x933D6A9EEC1BACD0(&(Local_63.f_2), 11);
		unk_0x933D6A9EEC1BACD0(&iLocal_66, 8);
	}
	unk_0x933D6A9EEC1BACD0(&iLocal_66, 4);
	unk_0x933D6A9EEC1BACD0(&iLocal_66, 11);
}

void func_518(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_7))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0->f_7, false))
		{
			if (unk_0x15B8ECF844EE67ED(iParam0->f_7))
			{
				unk_0xD30C50DF888D58B5(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_519()
{
	switch (bLocal_69)
	{
		case 0:
			func_521(&(Global_1837209[3]));
			break;
		
		case 1:
			func_520();
			break;
	}
}

void func_520()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xBF25EB89375A37AD(3, Global_1837161[iVar0], -1467815081);
			unk_0xBF25EB89375A37AD(3, -1467815081, Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_521(var uParam0)
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xBF25EB89375A37AD(3, Global_1837161[iVar0], *uParam0);
			unk_0xBF25EB89375A37AD(3, *uParam0, Global_1837161[iVar0]);
			iVar0++;
		}
	}
}

void func_522()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_489(bLocal_69))
	{
		bVar1 = false;
		if (bLocal_69 == 0)
		{
			if (!BitTest(Local_63.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_503(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_523()
{
	func_524();
	if (bLocal_69 != 1)
	{
		func_493();
	}
}

void func_524()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_489(bLocal_69))
	{
		if (unk_0x38CE16C96BD11344(Local_63.f_10[iVar0 /*7*/]))
		{
			if (unk_0x4D36070FE0215186(Local_63.f_10[iVar0 /*7*/]))
			{
				iVar1 = unk_0xBDCD95FC216A8B3E(Local_63.f_10[iVar0 /*7*/]);
				if (!unk_0x5F9532F3B5CC2551(iVar1, false))
				{
					unk_0xC1E8A365BF3B29F2(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2815059.f_1766)
	{
	}
	if (bLocal_69 == 1)
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
		{
			if (BitTest(Local_63.f_1, 0))
			{
				if (!unk_0xC8BC6461E629BEAA(iLocal_251))
				{
					if (func_6(bLocal_71, 1, 1))
					{
						if (Local_63.f_50)
						{
							unk_0x05983472F0494E60(15, unk_0x43A66C31C68491C0(bLocal_71), 4, 0f, &iLocal_251, -1467815081, 0);
						}
						else if (Local_63.f_52)
						{
							unk_0x05983472F0494E60(16, unk_0x43A66C31C68491C0(bLocal_71), 4, 0f, &iLocal_251, -1467815081, Local_63.f_53);
						}
						else
						{
							unk_0x05983472F0494E60(14, unk_0x43A66C31C68491C0(bLocal_71), 4, 0f, &iLocal_251, 0, 0);
						}
					}
				}
				if (Global_2815059.f_1766)
				{
					if (!BitTest(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1, 3))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_69 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (unk_0x18A47D074708FD68(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xBDCD95FC216A8B3E(Local_63.f_10[Local_63.f_42 /*7*/]), false) && !func_528(unk_0xBDCD95FC216A8B3E(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_525(Local_63.f_10[Local_63.f_42 /*7*/], &iLocal_78, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
						if (unk_0xA6DB27D19ECBB7DA(iLocal_78))
						{
							if (!BitTest(iLocal_66, 6))
							{
								unk_0xEAA0FFE120D92784(iLocal_78, "FM_MGR_BLP");
								unk_0x933D6A9EEC1BACD0(&iLocal_66, 6);
							}
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(iLocal_78))
				{
					func_518(&iLocal_78);
				}
			}
			if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
			{
				if (!BitTest(iLocal_66, 14))
				{
					if (func_383("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 14);
					}
				}
			}
		}
	}
}

void func_525(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		if (func_527(0))
		{
			Global_2703735 = unk_0x4F8644AF03D0E0D6();
		}
		if (bParam3)
		{
			func_526(unk_0xBDCD95FC216A8B3E(iParam0), iParam1, 1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_526(unk_0xBDCD95FC216A8B3E(iParam0), iParam1, -1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (unk_0xA6DB27D19ECBB7DA(*iParam1))
	{
		func_518(iParam1);
	}
}

int func_526(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (bParam3 == 0)
	{
		bParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(iParam0))
		{
			bVar0 = true;
			if (unk_0x9134873537FA419C(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0xD30C50DF888D58B5(iParam0, true);
				}
				else
				{
					unk_0xB13DCB4C6FAAD238(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0xE52B8E7F85D39A08(iParam0, iParam2);
				unk_0x97C65887D4B37FA9(iParam0, fParam6);
				if (unk_0xA6DB27D19ECBB7DA(*uParam1))
				{
					unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0x0C4BBF625CA98C4E(iParam0, bParam4);
		unk_0x3EED80DFF7325CAA(iParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x03D7FB09E75D6B7E(*uParam1, iParam8);
				}
				if (!unk_0xCA042B6957743895(sParam7))
				{
					unk_0xF9113A30DE5C6670("STRING");
					if (bParam10)
					{
						unk_0x6C188BE134E074AA(sParam7);
					}
					else
					{
						unk_0xC63CD5D2920ACBE7(sParam7);
					}
					unk_0xBC38B49BCB83BC9B(*uParam1);
				}
				unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x03D7FB09E75D6B7E(uParam1->f_1, iParam8);
					}
					if (!unk_0xCA042B6957743895(sParam7))
					{
						unk_0xF9113A30DE5C6670("STRING");
						if (bParam10)
						{
							unk_0x6C188BE134E074AA(sParam7);
						}
						else
						{
							unk_0xC63CD5D2920ACBE7(sParam7);
						}
						unk_0xBC38B49BCB83BC9B(uParam1->f_1);
					}
					unk_0xAE9FC9EF6A9FAC79(uParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_527(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x997ABD671D25CA0B(iParam0, false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (unk_0x4F14F9F870D6FBC8("MPBitset", 3))
			{
				if (unk_0x05661B80A8C9165F(iVar0, "MPBitset"))
				{
					iVar1 = unk_0xA06C969B02A97298(iVar0, "MPBitset");
				}
				if (BitTest(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_529()
{
	return Local_63.f_0;
}

int func_530(int iParam0)
{
	return Local_65[iParam0 /*5*/];
}

void func_531()
{
	if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
	{
		if (Global_32110)
		{
			if (!BitTest(Local_65[bLocal_76 /*5*/].f_1, 4))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_65[bLocal_76 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Local_65[bLocal_76 /*5*/].f_1), 4);
		}
	}
}

void func_532()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
	{
		if (BitTest(Global_1835488, 0))
		{
			unk_0xE80492A9AC099A93(&Global_1835488, false);
			bVar0 = true;
		}
		if (!BitTest(Local_65[bLocal_70 /*5*/].f_1, 2))
		{
			if (BitTest(Local_63.f_1, 11))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_65[bLocal_70 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_63.f_1, 11))
		{
			unk_0xE80492A9AC099A93(&(Local_65[bLocal_70 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_65[unk_0xEE68096F9F37341E() /*5*/].f_4 = func_536();
			func_533(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_4);
		}
	}
	else if (Local_65[unk_0xEE68096F9F37341E() /*5*/].f_4 != Local_63.f_44)
	{
		Local_65[unk_0xEE68096F9F37341E() /*5*/].f_4 = Local_63.f_44;
		func_533(Local_65[unk_0xEE68096F9F37341E() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_533(var uParam0)
{
	switch (bLocal_69)
	{
		case 0:
			func_535(&(Global_1837209[3]), uParam0);
			break;
		
		case 1:
			func_534(uParam0);
			break;
	}
}

void func_534(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			unk_0xBF25EB89375A37AD(1, Global_1837161[bVar0], -1467815081);
			unk_0xBF25EB89375A37AD(1, -1467815081, Global_1837161[bVar0]);
		}
		else
		{
			unk_0xBF25EB89375A37AD(3, Global_1837161[bVar0], -1467815081);
			unk_0xBF25EB89375A37AD(3, -1467815081, Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

void func_535(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			unk_0xBF25EB89375A37AD(1, Global_1837161[bVar0], *uParam0);
			unk_0xBF25EB89375A37AD(1, *uParam0, Global_1837161[bVar0]);
		}
		else
		{
			unk_0xBF25EB89375A37AD(3, Global_1837161[bVar0], *uParam0);
			unk_0xBF25EB89375A37AD(3, *uParam0, Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

int func_536()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bLocal_69 == 1 || bLocal_69 == 0)
		{
			if (bLocal_70 == unk_0x41BD2A6B006AF756(bVar1))
			{
				unk_0x933D6A9EEC1BACD0(&iVar0, bVar1);
			}
		}
		else if (unk_0x4F8644AF03D0E0D6() == unk_0x41BD2A6B006AF756(bVar1))
		{
			unk_0x933D6A9EEC1BACD0(&iVar0, bVar1);
		}
		else if (func_6(unk_0x41BD2A6B006AF756(bVar1), 0, 1))
		{
			if (func_52(unk_0x41BD2A6B006AF756(bVar1)))
			{
				unk_0x933D6A9EEC1BACD0(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_537()
{
	switch (bLocal_69)
	{
		case 0:
			if (!BitTest(iLocal_66, 11))
			{
				if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
				{
					if (func_6(bLocal_71, 1, 1))
					{
						func_344("GC_TCK_60", bLocal_71, 0, 0, 0, 1, 0);
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 11);
					}
				}
			}
			if (!BitTest(iLocal_66, 12))
			{
				if (BitTest(Local_63.f_1, 8))
				{
					if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
					{
						if (func_6(bLocal_71, 1, 1))
						{
							func_344("GC_TCK_62", bLocal_71, 0, 0, 0, 1, 0);
							unk_0x933D6A9EEC1BACD0(&iLocal_66, 12);
						}
					}
				}
			}
			if (BitTest(Local_63.f_2, 10))
			{
				if (!BitTest(iLocal_66, 8))
				{
					if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
					{
						if (func_6(bLocal_71, 1, 1))
						{
							func_344("GC_TCK_65", bLocal_71, 0, 0, 0, 1, 0);
							unk_0x933D6A9EEC1BACD0(&iLocal_66, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_66, 13))
			{
				if (!BitTest(Local_63.f_2, 11))
				{
					if (BitTest(Local_63.f_1, 8))
					{
						if (BitTest(Local_63.f_2, 6))
						{
							if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
							{
								if (func_6(bLocal_71, 1, 1))
								{
									func_344("GC_TCK_63", bLocal_71, 0, 0, 0, 1, 0);
									unk_0x933D6A9EEC1BACD0(&iLocal_66, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(iLocal_66, 11))
			{
				if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
				{
					if (func_6(bLocal_71, 1, 1) && unk_0x4F8644AF03D0E0D6() != bLocal_71)
					{
						if (Local_63.f_50)
						{
							func_344("HS_SUCC", bLocal_71, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_344("GO_ASS_SUCC", bLocal_71, 0, 0, 0, 1, 0);
						}
						else
						{
							func_344("GC_TCK_70", bLocal_71, 0, 0, 0, 1, 0);
						}
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 11);
					}
				}
				else if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
				{
					if (func_6(bLocal_70, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_539("HS_A_SUCC", 0);
							}
							else
							{
								func_344("HS_SENT", bLocal_70, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_344("GO_ASS_SENT", bLocal_70, 0, 0, 0, 1, 0);
						}
						else
						{
							func_344("GC_TCK_71", bLocal_70, 0, 0, 0, 1, 0);
						}
						unk_0x933D6A9EEC1BACD0(&iLocal_66, 11);
					}
				}
			}
			if (!BitTest(iLocal_66, 10))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 6))
					{
						if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
						{
							if (func_6(bLocal_71, 0, 1))
							{
								func_538(-1, 1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_344("HS_KILLED", bLocal_71, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_344("GO_ASS_KILL", bLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_344("GC_TCK_73", bLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0x933D6A9EEC1BACD0(&iLocal_66, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_66, 9))
			{
				if (BitTest(Local_63.f_1, 0))
				{
					if (BitTest(Local_63.f_3, 7))
					{
						if (unk_0x4F8644AF03D0E0D6() == bLocal_70 && unk_0x4F8644AF03D0E0D6() != bLocal_71)
						{
							if (func_6(bLocal_71, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_344("HS_ESCAPED", bLocal_71, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_344("GO_ASS_ESC", bLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_344("GC_TCK_75", bLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0x933D6A9EEC1BACD0(&iLocal_66, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_538(bool bParam0, int iParam1)
{
	if (Global_1836575)
	{
		if (Global_1836579 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 148)
		{
			if (Global_1836068.f_14 == unk_0x41BD2A6B006AF756(bParam0))
			{
				Global_1888178 = (Global_1888178 + iParam1);
			}
		}
		else
		{
			Global_1888178 = (Global_1888178 + iParam1);
		}
	}
}

int func_539(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0x202709F4C58A0424(sParam0);
	iVar0 = unk_0x2ED7843F8F801023(false, true);
	func_345(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_540()
{
	if (unk_0x1F13D5AE5CB17E17(false, 0) != Local_63.f_45)
	{
		if (func_548(Local_63.f_45, 0, 1))
		{
			if (unk_0xCB215C4B56A7FAE7(false) <= Local_63.f_45)
			{
				unk_0xB60FEBA45333D36F(Local_63.f_45);
			}
		}
	}
	if (unk_0xCF3A965906452031(false, 0) != Local_63.f_46)
	{
		if (func_547(Local_63.f_45, 0, 1))
		{
			if (unk_0x0CD9AB83489430EA(false) <= Local_63.f_46)
			{
				unk_0x76B02E21ED27A469(Local_63.f_46);
			}
		}
	}
	if (unk_0xAA81B5F10BC43AC2(false, 0) != Local_63.f_47)
	{
		if (func_541(Local_63.f_45, 0, 1))
		{
			if (unk_0x12B6281B6C6706C0(false) <= Local_63.f_47)
			{
				unk_0x4E5C93BD0C32FBF8(Local_63.f_47);
			}
		}
	}
}

bool func_541(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(2, iParam0, 1, bParam1, bParam2);
}

int func_542(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_546(iParam0) - func_545(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_545(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_546(iParam0) - func_544(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_545(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_546(iParam0) - func_545(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_543(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_545(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_547(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(1, iParam0, 1, bParam1, bParam2);
}

bool func_548(int iParam0, bool bParam1, bool bParam2)
{
	return func_542(0, iParam0, 1, bParam1, bParam2);
}

void func_549()
{
	if (Local_63.f_50)
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			func_551(3);
		}
		else if (unk_0x4F8644AF03D0E0D6() == bLocal_71)
		{
			func_551(4);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_550();
}

void func_550()
{
	unk_0x1090044AD1DA76FA();
}

void func_551(bool bParam0)
{
	unk_0xE80492A9AC099A93(&(Global_1892703[unk_0x4F8644AF03D0E0D6() /*599*/].f_10.f_5), bParam0);
}

int func_552()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_558())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_557())
	{
		return 1;
	}
	if (func_556(159))
	{
		if (!func_555())
		{
			return 1;
		}
	}
	if (func_556(157))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_553() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_553()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_553()
{
	switch (func_120())
	{
		case 0:
			return func_554();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_554()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_555()
{
	return Global_2714762.f_698;
}

int func_556(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_557()
{
	return Global_2725403;
}

bool func_558()
{
	return Global_2714762.f_693;
}

void func_559()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_560(struct<21> Param0)
{
	func_566(32, Param0);
	func_565(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_63, 56, 0);
	unk_0x3364AA97340CA215(&Local_65, 161, 0);
	unk_0xAA391C728106F7AF(false);
	if (!func_564())
	{
		func_264();
	}
	bLocal_69 = Param0.f_16;
	bLocal_70 = unk_0x41BD2A6B006AF756(Param0.f_17);
	if (unk_0xB8DFD30D6973E135(bLocal_70))
	{
	}
	bLocal_71 = unk_0x41BD2A6B006AF756(Param0.f_18);
	if (unk_0xB8DFD30D6973E135(bLocal_71))
	{
		iLocal_72 = unk_0xD24D37CC275948CC(unk_0x6D0DE6A7B5DA71F8(bLocal_71));
	}
	if (func_563(bLocal_70, 3) && bLocal_69 == 1)
	{
		Local_63.f_50 = 1;
		if (func_563(bLocal_71, 4))
		{
			Local_63.f_51 = 1;
		}
	}
	if (bLocal_69 == 1)
	{
		if (func_562(bLocal_70))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_561(bLocal_70);
		}
	}
	Local_73 = { Param0.f_10 };
	if (bLocal_69 == 1)
	{
		if (unk_0x4F8644AF03D0E0D6() == bLocal_70)
		{
			unk_0x933D6A9EEC1BACD0(&Global_1835488, false);
		}
	}
	Global_1922952 = 0;
	Global_1922953 = 0;
	if (bLocal_69 == 1)
	{
		Global_2815059.f_1766 = 0;
	}
	Local_65[unk_0xEE68096F9F37341E() /*5*/] = 0;
}

var func_561(bool bParam0)
{
	return Global_1853348[bParam0 /*834*/].f_180.f_4;
}

bool func_562(bool bParam0)
{
	return Global_1853348[bParam0 /*834*/].f_180 != func_13();
}

bool func_563(bool bParam0, int iParam1)
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_5, iParam1);
}

int func_564()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_558())
		{
			return 0;
		}
		if (func_556(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_565(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_550();
			}
			else
			{
				return 0;
			}
		}
		if (!func_527(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_550();
					}
					else
					{
						return 0;
					}
				}
				if (func_558())
				{
					if (!bParam2)
					{
						func_550();
					}
					else
					{
						return 0;
					}
				}
				if (func_556(157))
				{
					if (!bParam2)
					{
						func_550();
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
					func_550();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
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
				func_550();
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
			func_550();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_566(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_550();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

