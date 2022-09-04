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
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_53 = 0;
	var uLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	bool bLocal_77 = 0;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	bool bLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	bLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	bLocal_77 = 4f;
	Local_56 = { ScriptParam_261.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xC968670BFACE42D9(114))
	{
		func_143(1);
	}
	bLocal_53 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
	iLocal_59 = 0;
	func_141(&Global_112037, 0);
	func_135();
	unk_0x6F2135B6129620C1(true);
	if (func_134(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_38391)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_134(uLocal_58, 8))
	{
		if (!func_132(iLocal_64))
		{
			if (func_131(0, iLocal_63))
			{
				func_143(0);
			}
			else
			{
				func_143(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_131(0, iLocal_63))
		{
			func_143(1);
		}
	}
	if (func_134(uLocal_58, 8388608))
	{
		func_143(1);
	}
	if (func_134(uLocal_58, 524288) && (func_130() && !func_129()))
	{
		func_143(1);
	}
	if (unk_0x2C83A9DA6BFFC4F9(unk_0x8A1C8B1738FFE87E()) > 1 && !func_134(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_128(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_127(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_143(1);
		}
		bLocal_53 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
		if (func_134(uLocal_58, 1048576))
		{
			if (unk_0x5F9532F3B5CC2551(bLocal_53, false))
			{
				func_143(1);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_53) && !unk_0x5F9532F3B5CC2551(bLocal_53, false))
		{
			Local_55 = { unk_0x3FEF770D40960D5A(bLocal_53, true) };
			fLocal_57 = unk_0xB7A628320EFF8E47(Local_55, ScriptParam_261.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_261.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = unk_0xB7A628320EFF8E47(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_132(iLocal_64) || (func_134(uLocal_58, 16) && !func_134(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_123();
						func_127(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_128(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_127(10);
						}
						if ((Local_55.f_2 - ScriptParam_261.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_121())
					{
						iLocal_67 = iLocal_67;
						func_127(3);
					}
					else
					{
						func_123();
					}
					break;
				
				case 3:
					if (unk_0xCA97246103B63917())
					{
						func_143(1);
						return;
					}
					if (!func_132(iLocal_64))
					{
						if (!func_134(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0x0C515FAB3FF9EA92(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_143(0);
								break;
							}
						}
					}
					if (!func_134(uLocal_58, 4))
					{
						func_118();
						func_117(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (func_116(6) && !func_115(iLocal_69))
							{
							}
							else
							{
								func_128(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_127(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_134(uLocal_58, 64);
						func_141(&uLocal_58, 128);
						if (!func_114(3) && !Global_100475)
						{
							if (func_134(uLocal_58, 2097152))
							{
								if ((!func_134(uLocal_58, 1) || !unk_0x7239B21A38F536BA(func_113())) && !Global_100475)
								{
									func_127(10);
									break;
								}
							}
						}
						if (func_134(uLocal_58, 524288) && (func_130() && !func_129()))
						{
							func_143(1);
						}
						if (func_112())
						{
							func_143(1);
						}
						if ((!func_104(6) || Global_112433) || func_103())
						{
							bVar2 = false;
						}
						if (func_134(uLocal_58, 1))
						{
							if (!func_102())
							{
								func_100(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_99(1))
						{
							bVar2 = false;
						}
						if (Global_78319)
						{
							bVar2 = false;
						}
						if (func_98())
						{
							bVar2 = false;
						}
						if (unk_0xD9D2CFFF49FAB35F())
						{
							bVar2 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
						{
							bVar2 = false;
						}
						if (!unk_0x8A876A65283DD7D7(unk_0x4F8644AF03D0E0D6()))
						{
							bVar2 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x20B60995556D004F(bLocal_53, ScriptParam_261.f_1[0 /*3*/], bLocal_77, bLocal_77, 2f, false, true, iLocal_67))
							{
								bVar2 = false;
							}
							if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xEDE476E5EE29EDB1(0, 51);
								if (func_93(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_92(&iLocal_60, 4, bLocal_65, 0, 0, 0, 0);
										func_100(&uLocal_58, 2048);
									}
									else if (!func_134(uLocal_58, 2048) || !unk_0x4D79439A6B55AC67())
									{
										func_91(&iLocal_60);
										func_141(&uLocal_58, 2048);
									}
									if (func_89(iLocal_60, 1))
									{
										bLocal_65 = bLocal_65;
										func_91(&iLocal_60);
										func_141(&uLocal_58, 2048);
										unk_0x6EB5F71AA68F2E8E(&Local_52);
										unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
										func_127(5);
									}
								}
								else
								{
									bLocal_65 = bLocal_65;
									func_91(&iLocal_60);
									func_141(&uLocal_58, 2048);
									unk_0x6EB5F71AA68F2E8E(&Local_52);
									unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
									func_127(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_91(&iLocal_60);
								func_141(&uLocal_58, 2048);
								unk_0x8DFCED7A656F8802(false);
							}
						}
					}
					func_86();
					break;
				
				case 5:
					unk_0xEDE476E5EE29EDB1(0, 51);
					if (unk_0xE6CC9F3BA0FB9EF1(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_91(&iLocal_60);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_134(uLocal_58, 1))
						{
							if (func_116(6) || func_116(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_83(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
							{
								unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
							}
							func_82();
							if (Global_44238)
							{
								func_73(unk_0xD80958FC74E988A6());
							}
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 56);
							iLocal_50 = func_26();
							func_100(&uLocal_58, 2);
							func_127(6);
							func_22(&bLocal_71);
							if (iLocal_63 != -1)
							{
								func_21(iLocal_63);
								func_18(func_20(iLocal_63), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_17();
						}
						else if (iVar3 == 0)
						{
							func_127(10);
						}
					}
					else
					{
						func_17();
					}
					break;
				
				case 6:
					if (func_134(Global_112037, 262144))
					{
						func_141(&Global_112037, 262144);
						func_16();
					}
					if (func_134(uLocal_58, 2097152))
					{
						if (!func_114(3) && !unk_0x46E9AE36D8FA6417(iLocal_50))
						{
							func_127(10);
						}
					}
					if (!unk_0x46E9AE36D8FA6417(iLocal_50))
					{
						unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_12(&bLocal_71) * 1000f)), iLocal_63, 0);
						func_11(&bLocal_71);
						func_141(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_141(&uLocal_58, 2);
						}
						else if (func_134(uLocal_58, 2))
						{
							if (func_134(Global_112037, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_141(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_141(&uLocal_58, 2);
							}
						}
						func_127(0);
						if (iLocal_63 != -1)
						{
							if (func_134(Global_112037, 0))
							{
								unk_0xC900596A63978C1D(func_20(iLocal_63), 0, Global_100478, 0);
								func_6(func_20(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								unk_0xC900596A63978C1D(func_20(iLocal_63), 0, Global_100478, 0);
								func_6(func_20(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_5();
						func_141(&Global_112037, 0);
						if (func_134(uLocal_58, 16777216))
						{
							func_143(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!func_131(0, iLocal_63))
								{
									func_143(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_127(0);
					break;
				
				case 10:
					func_143(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_128(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_127(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_128(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_91(&iLocal_60);
					}
					if (!unk_0xCA042B6957743895(bLocal_65))
					{
						if (func_1(bLocal_65))
						{
							unk_0x8DFCED7A656F8802(true);
						}
					}
					func_127(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_132(iLocal_64) && func_131(0, iLocal_63))
									{
										func_135();
										if (iLocal_69 != 263)
										{
											func_128(iLocal_69, 1, 0);
										}
										func_127(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_128(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_127(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_135();
									if (iLocal_69 != 263)
									{
										func_128(iLocal_69, 1, 0);
									}
									func_127(0);
								}
							}
						}
						else
						{
							func_128(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_2()
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	unk_0xF66A602F829E2A06("pickup_object");
	unk_0xF66A602F829E2A06("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xE532F5D78798DAAB((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (unk_0xCA042B6957743895(&Global_97511))
	{
		return;
	}
	if (unk_0x1E34710ECD4AB0EB(bParam0, &Global_97511, false, -1) != 0)
	{
		return;
	}
	unk_0x7C4BB33A8CED7324(bParam0, iParam1, iParam2, bParam3, bParam4, Global_94618);
	StringCopy(&Global_97511, "", 64);
}

void func_7(int iParam0)
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

void func_8()
{
	char cVar0[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_10())
	{
		unk_0x1DCCACDCFC569362(StackVal, 0, 0, 0);
	}
	else if (unk_0xCCA1072C29D096C2() || func_9())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

bool func_9()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_10()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_11(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

float func_12(bool bParam0)
{
	if (func_15(bParam0))
	{
		if (func_14(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_13(bool bParam0)
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

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_16()
{
	return 1;
}

void func_17()
{
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xCA042B6957743895(&Global_97511))
	{
		unk_0x7C4BB33A8CED7324(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xC19A2925C34D2231(sParam0, iParam1, iParam2, func_19(0));
}

int func_19(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_10())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || func_9())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_22(bool bParam0)
{
	if (!func_15(bParam0))
	{
		func_25(bParam0);
	}
	else
	{
		func_23(bParam0);
	}
}

void func_23(bool bParam0)
{
	func_24(bParam0, 0f);
}

void func_24(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_13(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_25(bool bParam0)
{
	if (!func_15(bParam0))
	{
		func_23(bParam0);
	}
}

int func_26()
{
	int iVar0;
	
	Global_113386.f_18967 = iLocal_82;
	switch (iLocal_82)
	{
		case 4:
		case 8:
			func_27(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_27(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_51, &Local_83, 170, iLocal_61);
	unk_0xC90D2DCACD56184C(&Local_51);
	return iVar0;
}

void func_27(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	
	Var6 = { func_72(iLocal_82) };
	Var6 = { func_71(unk_0xD0FFB162F40A139C(Var6.f_2), unk_0x0BADBFA3B172435F(Var6.f_2), unk_0x632106CC96E82E91(Var6.f_0)) };
	unk_0x212A8D0D2BABFAC2(func_70(iLocal_82), Var6, 5000f, 0);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 256);
	unk_0xA6294919E56FF02A(false);
	unk_0xA0EBB943C300E693(false);
	func_68(1);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.3f)
		{
			unk_0x919BE13EED931959(unk_0xD80958FC74E988A6(), -1);
			while (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
				}
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_255))
		{
			Var4 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(bLocal_255, false) };
			Var4.f_2 = 0f;
			fVar7 = unk_0x652D2EEEF1D3E62C(Var4);
			unk_0xE8854A4326B9E12B(&iVar1);
			if (fVar7 > 0.8f)
			{
				Var4 = { Var4 * FtoV((0.78f / fVar7)) };
				Var5 = { unk_0x3FEF770D40960D5A(bLocal_255, false) + Var4 };
				if (iLocal_82 == 12)
				{
					unk_0x15D3A79D4E44B913(false, Var5, 1f, 20000, 0.25f, false, func_67(Var5, unk_0x3FEF770D40960D5A(bLocal_255, false)));
				}
				else
				{
					unk_0xD76B57B44F1E6F8B(false, Var5, 1f, -1, func_67(Var5, unk_0x3FEF770D40960D5A(bLocal_255, false)), 0.5f);
				}
			}
			else if (fVar7 > 0.15f)
			{
				unk_0x93B93A37987F1F3D(false, func_67(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_255, false)), 0);
			}
			unk_0xEA47FE3719165B94(false, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
			unk_0x39E72BC99E6360CB(iVar1);
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
				unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iVar1);
			}
			unk_0x3841422E9C488D8C(&iVar1);
			func_68(1);
		}
	}
	func_25(&bLocal_251);
	while ((func_12(&bLocal_251) < 6f && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false)) && !unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
	{
		unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.8f);
		bVar8 = true;
	}
	while ((func_12(&bLocal_251) < 6f && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false)) && unk_0x346D81500D088F42(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		if (!bVar8 && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
		{
			unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.8f);
			bVar8 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (!bVar8 && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
		{
			unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.7f);
			bVar8 = true;
		}
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
	}
	func_11(&bLocal_251);
	func_43();
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_37() == 0)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 9, 5, false, 0);
		}
		else if (func_37() == 1)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, true, false, 0);
		}
		else if (func_37() == 2)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, 3, false, 0);
		}
	}
	if (bParam0)
	{
		if (!func_35(func_36(iLocal_82)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			unk_0x15D3A79D4E44B913(unk_0xD80958FC74E988A6(), func_36(iLocal_82), 1f, -1, 0.25f, false, 1193033728);
		}
		if (unk_0x7239B21A38F536BA(bLocal_255))
		{
			unk_0x539E0AE3E6634B9F(&bLocal_255);
		}
		bVar2 = unk_0x6ABFA3E16460F22D(26379945, func_34(iLocal_82), func_33(iLocal_82), func_32(iLocal_82), true, 2);
		bVar3 = unk_0x6ABFA3E16460F22D(26379945, func_31(iLocal_82), func_30(iLocal_82), func_29(iLocal_82), false, 2);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		unk_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
		func_25(&bVar0);
		while (func_12(&bVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x9FBDA379383A52A4(bVar3, bVar2, func_28(iLocal_82), 1, 1);
		func_23(&bVar0);
		while (func_12(&bVar0) < ((unk_0xBBDA792448DB5A89(func_28(iLocal_82)) / 1000f) + 0.3f))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_83.f_2 = bLocal_255;
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_33(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_37()
{
	func_38();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_41(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_40(unk_0xD80958FC74E988A6());
			if (func_39(iVar0) && (!func_116(14) || Global_112337))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_43()
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
	if (unk_0x7239B21A38F536BA(bLocal_255))
	{
		unk_0x539E0AE3E6634B9F(&bLocal_255);
	}
	func_51(0, 0, 1);
	bLocal_255 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_50(iLocal_82), true, true, false);
	unk_0x8524A8B0171D5E07(bLocal_255, func_49(iLocal_82), 2, true);
	func_44(&Var0, &uVar1);
	Var2 = { 0f, 0f, uVar1 };
	bVar3 = unk_0x8C18E0F9080ADD73(Var0, Var2, 2);
	unk_0xC77720A12FE14A86(bLocal_255, bVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1000f);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), bVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	unk_0x67C540AA08E4A6F5(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	bVar4 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
	unk_0xE32EFE9AB4A9AA0C(bVar4, bVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x026FB97D0A425F84(bVar4, true);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	while (unk_0xE4A310B1D7FA73CC(bVar3) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = { func_48(iLocal_82) };
	switch (iLocal_82)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_47(func_67(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_47(func_67(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_47(func_67(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_47(func_67(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_45(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_46(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_47(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_50(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_51(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_63(0);
	func_53(1, 1, iParam2, 0, 0, 0, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_52(23, 1);
}

void func_52(bool bParam0, bool bParam1)
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

void func_53(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_62(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_61())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_60(1, bParam3, uParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_62(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_60(0, bParam3, uParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_58(unk_0x4F8644AF03D0E0D6())) && !func_55(unk_0x4F8644AF03D0E0D6(), 0)) && !func_54()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_58(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_54()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_55(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1574918;
}

int func_58(bool bParam0)
{
	if (func_55(bParam0, 0))
	{
		return 1;
	}
	if (func_59())
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

bool func_59()
{
	return BitTest(Global_2621446, 3);
}

int func_60(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

int func_61()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
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

void func_63(int iParam0)
{
	if (func_66())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_65())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_61())
	{
		Global_20266.f_1 = 3;
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_95(0))
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

bool func_65()
{
	return BitTest(Global_1958711, 5);
}

bool func_66()
{
	return BitTest(Global_1958711, 19);
}

float func_67(struct<2> Param0, bool bParam1, struct<2> Param2, bool bParam3)
{
	return unk_0x2FFB6B224F4B2926((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		func_69();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_95(0))
		{
			func_63(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_69()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_71(struct<3> Param0)
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

Vector3 func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_73(bool bParam0)
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
	iVar0 = func_81(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_76(1, iVar1, 1);
		return;
	}
	iVar2 = func_75(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_74(iVar2);
}

void func_74(int iParam0)
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

int func_75(bool bParam0)
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

void func_76(int iParam0, int iParam1, int iParam2)
{
	func_77(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_79(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_78();
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

int func_78()
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

int func_79(int iParam0, int iParam1, int iParam2)
{
	if (func_80(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, int iParam1, int iParam2)
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

int func_81(bool bParam0)
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

void func_82()
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

int func_83(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_85(0))
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_132(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_84(iParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)
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

int func_85(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_132(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_86()
{
	switch (iLocal_82)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_87();
			break;
		
		default:
			break;
	}
}

void func_87()
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x7239B21A38F536BA(bVar0))
	{
		Local_83.f_1 = bVar0;
	}
	if (unk_0x7239B21A38F536BA(bLocal_255))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bLocal_255, true) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_56) > 25f)
		{
			func_88(0);
		}
	}
}

void func_88(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_89(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_90(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_95(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_91(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_90(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_91(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0xC30338E8088E2E21();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), bParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_93(var uParam0)
{
	return 1;
}

var func_94()
{
	return Global_75485;
}

int func_95(int iParam0)
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

var func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_98()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

void func_100(var uParam0, int iParam1)
{
	func_101(uParam0, iParam1);
}

void func_101(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_102()
{
	return 1;
}

bool func_103()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return ((((bVar1 && unk_0xF3A21BCD95725A4A(0, 69)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 70))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 68))) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
	}
	return (((((bVar1 && unk_0xF3A21BCD95725A4A(0, 24)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 25))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 47))) || unk_0xDCCA191DF9980FD7(unk_0xD80958FC74E988A6())) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_111()) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_111()) || Global_31962) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_111()) || func_108()) || Global_112433) || Global_31962) || func_110()) || Global_44238) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_111()) || Global_112433) || Global_31962) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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

var func_105()
{
	return Global_100480.f_1;
}

int func_106()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_107()
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

bool func_108()
{
	return Global_100493.f_376 > 0;
}

bool func_109()
{
	return Global_100493.f_375 > 0;
}

var func_110()
{
	return Global_1575058;
}

int func_111()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_96273;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_116(6) || func_116(7))
			{
				return 1;
			}
			else
			{
				return func_114(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_132(5))
			{
				if (func_104(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xA6DB27D19ECBB7DA(Global_32338[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_118()
{
	struct<3> Var0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 4:
			case 5:
			case 8:
				bLocal_255 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_50(iLocal_82), true, true, false);
				unk_0x8524A8B0171D5E07(bLocal_255, func_49(iLocal_82), 2, true);
				unk_0x428CA6DBD1094446(bLocal_255, true);
				break;
			
			case 6:
			case 12:
				bLocal_255 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_50(iLocal_82), true, true, false);
				unk_0x8524A8B0171D5E07(bLocal_255, func_49(iLocal_82), 2, true);
				unk_0x58A850EAEE20FAA3(bLocal_255);
				Var0 = { func_120(iLocal_82) };
				if (!func_35(Var0))
				{
					iLocal_256 = unk_0xAF35D0D2583051B0(joaat("bati"), Var0, func_119(iLocal_82), true, true, false);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_119(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_120(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_121()
{
	switch (iLocal_82)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xD031A9162D01088C("pickup_object") && unk_0xD031A9162D01088C("oddjobs@basejump@ig_15")) && func_122(&uLocal_78)) && func_122(&uLocal_80));
			break;
		
		case 12:
			return ((unk_0xD031A9162D01088C("pickup_object") && unk_0xD031A9162D01088C("oddjobs@basejump@ig_15")) && func_122(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_122(&uLocal_78) && func_122(&uLocal_80));
}

int func_122(var uParam0)
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

void func_123()
{
	switch (iLocal_82)
	{
		case 5:
		case 8:
			func_125(&uLocal_78, joaat("p_parachute_s"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_125(&uLocal_78, joaat("p_parachute_s"));
			func_125(&uLocal_80, joaat("bati"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_125(&uLocal_78, joaat("p_parachute_s"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_124(&uLocal_78);
	func_124(&uLocal_80);
}

void func_124(var uParam0)
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

int func_125(var uParam0, int iParam1)
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
	iVar1 = func_126(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_126(var uParam0)
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

void func_127(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129()
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

int func_130()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
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

bool func_132(int iParam0)
{
	return func_133(iParam0, Global_43052);
}

int func_133(int iParam0, int iParam1)
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

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_135()
{
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		func_100(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_139(Local_56, 0);
	switch (iLocal_82)
	{
		case 4:
			iLocal_69 = 129;
			break;
		
		case 5:
			iLocal_69 = 130;
			break;
		
		case 6:
			iLocal_69 = 131;
			break;
		
		case 8:
			iLocal_69 = 133;
			break;
		
		case 12:
			iLocal_69 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 129)
	{
		if (func_138(19))
		{
			func_137(iLocal_69);
		}
	}
	func_100(&uLocal_58, 4194304);
	iLocal_63 = 0;
	fLocal_66 = (unk_0xBBDA792448DB5A89(func_136(iLocal_69)) + 5f);
	bLocal_77 = 1.1f;
	bLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 263)
	{
		if (!func_131(0, iLocal_63))
		{
			bLocal_254 = false;
			func_137(iLocal_69);
		}
		else
		{
			bLocal_254 = true;
		}
	}
	else
	{
		bLocal_254 = false;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("bj")) > 0)
	{
		func_100(&uLocal_58, 8);
	}
	else
	{
		func_141(&uLocal_58, 8);
	}
	if (func_116(12))
	{
		func_100(&uLocal_58, 8);
	}
	iLocal_61 = 51000;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_137(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_128(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_91(&iLocal_60);
		iLocal_59 = 9;
	}
}

bool func_138(int iParam0)
{
	return Global_112473[iParam0 /*10*/].f_1;
}

int func_139(struct<3> Param0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_140(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_48(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_141(var uParam0, int iParam1)
{
	func_142(uParam0, iParam1);
}

void func_142(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_128(iLocal_69, 0, 0);
		}
	}
	func_91(&iLocal_60);
	if (func_134(uLocal_58, 2))
	{
		func_5();
		func_141(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_144();
	unk_0x1090044AD1DA76FA();
}

void func_144()
{
	func_141(&uLocal_58, 4);
	func_145();
	if (unk_0x46E9AE36D8FA6417(iLocal_50))
	{
		unk_0xF745B37630DF176B(iLocal_50, 3);
	}
	if (!unk_0xF22B6C47C6EAB066(&Local_52))
	{
		if (unk_0xF030907CCBB8A9FD(&Local_52) != 0)
		{
			unk_0xC90D2DCACD56184C(&Local_52);
		}
	}
}

void func_145()
{
}

