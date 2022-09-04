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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
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
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	struct<3> Local_83[5];
	bool bLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	bool bLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	bool bLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
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
	bLocal_78 = true;
	bLocal_79 = 6;
	bLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	Local_56 = { ScriptParam_274.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	bLocal_54 = bLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xC968670BFACE42D9(82))
	{
		func_153(1);
	}
	bLocal_53 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
	iLocal_59 = 0;
	func_151(&Global_112037, 0);
	func_145();
	unk_0x6F2135B6129620C1(true);
	if (func_144(uLocal_58, 1))
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
	if (!func_144(uLocal_58, 8))
	{
		if (!func_142(iLocal_64))
		{
			if (func_141(0, iLocal_63))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_141(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_144(uLocal_58, 8388608))
	{
		func_153(1);
	}
	if (func_144(uLocal_58, 524288) && (func_140() && !func_139()))
	{
		func_153(1);
	}
	if (unk_0x2C83A9DA6BFFC4F9(unk_0x8A1C8B1738FFE87E()) > 1 && !func_144(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_138(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_137(10);
	}
	while (true)
	{
		if (!func_144(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xC906A7DAB05C8D2B(ScriptParam_274.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					func_136(&uLocal_58, 268435456);
				}
			}
		}
		bLocal_53 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
		if (func_144(uLocal_58, 1048576))
		{
			if (unk_0x5F9532F3B5CC2551(bLocal_53, false))
			{
				func_153(1);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_53) && !unk_0x5F9532F3B5CC2551(bLocal_53, false))
		{
			Local_55 = { unk_0x3FEF770D40960D5A(bLocal_53, true) };
			fLocal_57 = unk_0xB7A628320EFF8E47(Local_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_274.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = unk_0xB7A628320EFF8E47(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_142(iLocal_64) || (func_144(uLocal_58, 16) && !func_144(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_138(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_137(10);
						}
						if ((Local_55.f_2 - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_130() && fLocal_57 > ((bLocal_77 * 1.5f) * (bLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
				
				case 3:
					if (unk_0xCA97246103B63917())
					{
						func_153(1);
						return;
					}
					if (!func_142(iLocal_64))
					{
						if (!func_144(uLocal_58, 8))
						{
							bVar2 = true;
							if (unk_0x0C515FAB3FF9EA92(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!func_144(uLocal_58, 4))
					{
						func_119();
						func_136(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (func_118(6) && !func_117(iLocal_69))
							{
							}
							else
							{
								func_138(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_137(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_144(uLocal_58, 64);
						func_151(&uLocal_58, 128);
						if (!func_116(3) && !Global_100475)
						{
							if (func_144(uLocal_58, 2097152))
							{
								if ((!func_144(uLocal_58, 1) || !unk_0x7239B21A38F536BA(func_115())) && !Global_100475)
								{
									func_137(10);
									break;
								}
							}
						}
						if (func_144(uLocal_58, 524288) && (func_140() && !func_139()))
						{
							func_153(1);
						}
						if (func_114())
						{
							func_153(1);
						}
						if ((!func_106(6) || Global_112433) || func_105())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							func_103(&uLocal_58, 128);
							bVar3 = false;
						}
						if (func_144(uLocal_58, 1))
						{
							if (!func_102())
							{
								func_103(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_101(1))
						{
							bVar3 = false;
						}
						if (Global_78319)
						{
							bVar3 = false;
						}
						if (func_100())
						{
							bVar3 = false;
						}
						if (unk_0xD9D2CFFF49FAB35F())
						{
							bVar3 = false;
						}
						if (func_99() || func_98(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
						{
							bVar3 = false;
						}
						if (!unk_0x8A876A65283DD7D7(unk_0x4F8644AF03D0E0D6()))
						{
							bVar3 = false;
						}
						if (func_97(0) || func_96())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x20B60995556D004F(bLocal_53, ScriptParam_274.f_1[0 /*3*/], bLocal_77, bLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							bVar4 = unk_0x25223CA6B4D20B7F();
							if (bLocal_79 > bLocal_80)
							{
								if (bVar4 < bLocal_79 && bVar4 >= bLocal_80)
								{
									func_103(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((bLocal_77 * bLocal_77) + 4f))
									{
										if (!func_144(uLocal_58, 134217728))
										{
											func_95("MG_NA_TIME", bLocal_79, bLocal_80);
											func_103(&uLocal_58, 134217728);
										}
									}
									else
									{
										func_151(&uLocal_58, 134217728);
									}
								}
							}
							else if (bVar4 < bLocal_79 || bVar4 >= bLocal_80)
							{
								func_103(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((bLocal_77 * bLocal_77) + 4f))
								{
									if (!func_144(uLocal_58, 134217728))
									{
										func_95("MG_NA_TIME", bLocal_79, bLocal_80);
										func_103(&uLocal_58, 134217728);
									}
								}
								else
								{
									func_151(&uLocal_58, 134217728);
								}
							}
							if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0xEDE476E5EE29EDB1(0, 51);
								if (func_94(bLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_93(&iLocal_60, 4, bLocal_65, 0, 0, 0, 0);
										func_103(&uLocal_58, 2048);
									}
									else if (!func_144(uLocal_58, 2048) || !unk_0x4D79439A6B55AC67())
									{
										func_92(&iLocal_60);
										func_151(&uLocal_58, 2048);
									}
									if (func_90(iLocal_60, 1))
									{
										bLocal_65 = bLocal_65;
										func_92(&iLocal_60);
										func_151(&uLocal_58, 2048);
										unk_0x6EB5F71AA68F2E8E(&Local_52);
										unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
										func_137(5);
									}
								}
								else
								{
									bLocal_65 = bLocal_65;
									func_92(&iLocal_60);
									func_151(&uLocal_58, 2048);
									unk_0x6EB5F71AA68F2E8E(&Local_52);
									unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
									func_137(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_92(&iLocal_60);
								func_151(&uLocal_58, 2048);
								unk_0x8DFCED7A656F8802(false);
							}
						}
					}
					func_52();
					break;
				
				case 5:
					unk_0xEDE476E5EE29EDB1(0, 51);
					if (unk_0xE6CC9F3BA0FB9EF1(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_92(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_144(uLocal_58, 1))
						{
							if (func_118(6) || func_118(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_49(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x5F9532F3B5CC2551(bLocal_54, false))
							{
								unk_0x629BFA74418D6239(&bLocal_54);
							}
							if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
							{
								unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
							}
							func_48();
							if (Global_44238)
							{
								func_39(unk_0xD80958FC74E988A6());
							}
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 56);
							iLocal_50 = func_38();
							func_103(&uLocal_58, 2);
							func_137(6);
							func_34(&bLocal_71);
							if (iLocal_63 != -1)
							{
								func_33(iLocal_63);
								func_31(func_32(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_30();
						}
						else if (iVar5 == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
				
				case 6:
					if (func_144(Global_112037, 262144))
					{
						func_151(&Global_112037, 262144);
						func_29();
					}
					if (func_144(uLocal_58, 2097152))
					{
						if (!func_116(3) && !unk_0x46E9AE36D8FA6417(iLocal_50))
						{
							func_137(10);
						}
					}
					if (!unk_0x46E9AE36D8FA6417(iLocal_50))
					{
						unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_25(&bLocal_71) * 1000f)), iLocal_63, 0);
						func_24(&bLocal_71);
						func_151(&uLocal_58, 256);
						func_21();
						if (bVar0)
						{
							func_151(&uLocal_58, 2);
						}
						else if (func_144(uLocal_58, 2))
						{
							if (func_144(Global_112037, 0))
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_151(&uLocal_58, 2);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_151(&uLocal_58, 2);
							}
						}
						func_137(0);
						if (iLocal_63 != -1)
						{
							if (func_144(Global_112037, 0))
							{
								unk_0xC900596A63978C1D(func_32(iLocal_63), 0, Global_100478, 0);
								func_19(func_32(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								unk_0xC900596A63978C1D(func_32(iLocal_63), 0, Global_100478, 0);
								func_19(func_32(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_5();
						func_151(&Global_112037, 0);
						if (func_144(uLocal_58, 16777216))
						{
							func_153(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!func_141(0, iLocal_63))
								{
									func_153(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_137(0);
					break;
				
				case 10:
					func_153(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_138(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_137(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_138(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_92(&iLocal_60);
					}
					if (!unk_0xCA042B6957743895(bLocal_65))
					{
						if (func_1(bLocal_65))
						{
							unk_0x8DFCED7A656F8802(true);
						}
					}
					func_137(4);
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
									if (func_142(iLocal_64) && func_141(0, iLocal_63))
									{
										func_145();
										if (iLocal_69 != 263)
										{
											func_138(iLocal_69, 1, 0);
										}
										func_137(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_138(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_137(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_69 != 263)
									{
										func_138(iLocal_69, 1, 0);
									}
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_69, 1, 0);
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
	bool bVar0;
	
	func_3(&(Local_267.f_71));
	func_3(&(Local_267.f_77));
	func_3(&(Local_267.f_99));
	unk_0xF66A602F829E2A06("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0xF66A602F829E2A06("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0xF66A602F829E2A06("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0xF66A602F829E2A06("amb@world_human_aa_smoke@male@idle_a");
	unk_0xF66A602F829E2A06("random@street_race");
	unk_0xF66A602F829E2A06("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			bVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			bVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			bVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			bVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			bVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			bVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xCA042B6957743895(bVar0))
	{
		if (unk_0xF9034C136C9E00D3(bVar0))
		{
			if (unk_0x367A09DED4E05B99(bVar0))
			{
				unk_0x02C8E5B49848664E(bVar0, false);
			}
		}
	}
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
	if (func_144(Global_113386.f_19016, 1))
	{
		func_151(&(Global_113386.f_19016), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
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

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_8()
{
	if (Global_113386.f_19016.f_18 < Global_113386.f_19016.f_19[iLocal_82] || Global_113386.f_19016.f_19[iLocal_82] == 0)
	{
		Global_113386.f_19016.f_19[iLocal_82] = Global_113386.f_19016.f_18;
		Global_113386.f_19016.f_18 = 999;
	}
	if (iLocal_82 == Global_113386.f_19016.f_1 || Global_113386.f_19016.f_1 == -1)
	{
		if (Global_113386.f_19016.f_1 != 5)
		{
			Global_113386.f_19016.f_1++;
			switch (Global_113386.f_19016.f_1)
			{
				case 1:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					break;
				
				case 2:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					break;
				
				case 3:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					break;
				
				case 4:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					break;
				
				case 5:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					func_17(74, 1);
					func_138(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, 1, 0);
			func_17(70, 1);
			func_138(71, 1, 0);
			func_17(71, 1);
			func_138(73, 1, 0);
			func_17(73, 1);
			func_138(74, 1, 0);
			func_17(74, 1);
			func_138(75, 1, 0);
			func_17(75, 1);
			func_138(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_113386.f_19016.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_16();
	}
}

void func_16()
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

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_32338[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0xD37401D78A929A49();
	unk_0x0D40EE2A7F2B2D6D();
	switch (iLocal_82)
	{
		case 0:
			unk_0x0027501B9F3B407E(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x0027501B9F3B407E(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x0027501B9F3B407E(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x0027501B9F3B407E(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x0027501B9F3B407E(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

void func_20(int iParam0)
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

void func_21()
{
	char cVar0[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_23())
	{
		unk_0x1DCCACDCFC569362(StackVal, 0, 0, 0);
	}
	else if (unk_0xCCA1072C29D096C2() || func_22())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

bool func_22()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_23()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_24(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

float func_25(bool bParam0)
{
	if (func_28(bParam0))
	{
		if (func_27(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_26(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_26(bool bParam0)
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

bool func_27(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_28(bool bParam0)
{
	return BitTest(*bParam0, 1);
}

int func_29()
{
	func_8();
	return 1;
}

void func_30()
{
}

void func_31(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xCA042B6957743895(&Global_97511))
	{
		unk_0x7C4BB33A8CED7324(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xC19A2925C34D2231(sParam0, iParam1, iParam2, func_7(0));
}

char* func_32(int iParam0)
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

void func_33(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_23())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || func_22())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_34(bool bParam0)
{
	if (!func_28(bParam0))
	{
		func_37(bParam0);
	}
	else
	{
		func_35(bParam0);
	}
}

void func_35(bool bParam0)
{
	func_36(bParam0, 0f);
}

void func_36(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_26(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_37(bool bParam0)
{
	if (!func_28(bParam0))
	{
		func_35(bParam0);
	}
}

int func_38()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0x8DFCED7A656F8802(true);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_82;
	Var0.f_1 = { Local_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	unk_0x2206BF9A37B7F724("SwitchSceneNeutral", false, true);
	unk_0x4EDE34FBADD967A6(400);
	iVar2 = unk_0xB8BA7F44DF1575E1(&Local_51, &Var0, 18, iLocal_61);
	unk_0xC90D2DCACD56184C(&Local_51);
	return iVar2;
}

void func_39(bool bParam0)
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
	iVar0 = func_47(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_42(1, iVar1, 1);
		return;
	}
	iVar2 = func_41(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_40(iVar2);
}

void func_40(int iParam0)
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

int func_41(bool bParam0)
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

void func_42(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_45(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_44();
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

int func_44()
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

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1, int iParam2)
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

int func_47(bool bParam0)
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

void func_48()
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

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_51(0))
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
		if (!func_142(iParam2))
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
			func_50(iParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
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

int func_51(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_81);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_98)
	{
		if (func_54())
		{
			iLocal_98 = 1;
			func_53();
		}
	}
}

void func_53()
{
	iLocal_46++;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!unk_0x7239B21A38F536BA(Local_267[iVar0 /*14*/]) || !unk_0x7239B21A38F536BA(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x7239B21A38F536BA(Local_267.f_83) || !unk_0x7239B21A38F536BA(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()
{
	int iVar0;
	char* sVar1;
	
	if (!func_28(&bLocal_90))
	{
		func_37(&bLocal_90);
		return;
	}
	if (unk_0x7239B21A38F536BA(bLocal_95) && !unk_0x5F9532F3B5CC2551(bLocal_95, false))
	{
		if (unk_0x9072C8B49907BFAD(bLocal_95))
		{
			return;
		}
	}
	if (func_25(&bLocal_90) >= 8f)
	{
		iVar0 = (unk_0xD53343AA4FB7DD28(false, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x5F9532F3B5CC2551(Local_267[(iVar0 - 1) /*14*/], false))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_57(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_35(&bLocal_90);
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_58(sParam2, iParam3, 0);
}

int func_58(char* sParam0, int iParam1, bool bParam2)
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
					func_76();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_75();
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
				func_68();
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
				if (func_67())
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
			if (func_66())
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
			func_65();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_64();
		func_59();
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
		func_76();
	}
	return 0;
}

void func_59()
{
	if (!func_60())
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

int func_60()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_63())
	{
		return 0;
	}
	if (func_61(unk_0x4F8644AF03D0E0D6()))
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

bool func_61(bool bParam0)
{
	return func_62(bParam0, 20);
}

var func_62(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_63()
{
	return -1;
}

void func_64()
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

void func_65()
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

int func_66()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()
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

void func_68()
{
	if (func_118(14))
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
		Global_20266 = func_69();
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

var func_69()
{
	func_70();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_70()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_73(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_72(unk_0xD80958FC74E988A6());
			if (func_71(iVar0) && (!func_118(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_71(Global_113386.f_2363.f_539.f_4321))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_75()
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

void func_76()
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

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

void func_78()
{
	bool bVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x5F9532F3B5CC2551(Local_267.f_83, false))
	{
		bVar0 = unk_0x25223CA6B4D20B7F();
		if (bVar0 <= bLocal_79 && bVar0 >= bLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		unk_0x189E955A8313E298(Local_267.f_83, 0f, 0f, 0.75f, true, 2000, 2000, 2000, 0);
	}
}

void func_79()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = unk_0x25223CA6B4D20B7F();
	if (bVar0 <= bLocal_79 && bVar0 >= bLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_95, false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		switch (iLocal_266)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_95, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 64f && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				unk_0xE8854A4326B9E12B(&iVar1);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 0, 2);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
				unk_0x39E72BC99E6360CB(iVar1);
				unk_0x5ABA3986D90D8A3B(bLocal_95, iVar1);
				unk_0x3841422E9C488D8C(&iVar1);
				iLocal_266 = 2;
				break;
			
			case 2:
				if ((unk_0x77F1BEB8863288D5(bLocal_95, 242628503) != 1 || unk_0xD71649DB0A545AA3(bLocal_95, unk_0xD80958FC74E988A6(), 20f)) && !unk_0x16754C556D2EDE3D())
				{
					unk_0x5AD23D40115353AC(bLocal_95, unk_0xD80958FC74E988A6(), -1);
					if (!iLocal_100)
					{
						func_80(bLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_80(bLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x9072C8B49907BFAD(bLocal_95))
				{
					func_35(&bLocal_87);
					unk_0xEA47FE3719165B94(bLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, false, false, false, false);
					iLocal_266 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_95, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 225f)
				{
					unk_0xE8854A4326B9E12B(&iVar2);
					unk_0x93B93A37987F1F3D(false, Local_267.f_83.f_9, 1000);
					unk_0xEA47FE3719165B94(false, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, false, false, false, false);
					unk_0x39E72BC99E6360CB(iVar2);
					unk_0x5ABA3986D90D8A3B(bLocal_95, iVar2);
					unk_0x3841422E9C488D8C(&iVar2);
					iLocal_266 = 0;
				}
				if (func_28(&bLocal_87))
				{
					if (func_25(&bLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (func_25(&bLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_80(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x3523634255FC3318(bParam0, bParam1, bParam2, func_81(iParam3), false);
}

int func_81(int iParam0)
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

void func_82()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0x7239B21A38F536BA(Local_267[iVar2 /*14*/].f_1) && unk_0x7239B21A38F536BA(Local_267[iVar2 /*14*/]))
		{
			if (func_87(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_267[iVar2 /*14*/].f_1, true))
			{
				func_85();
				func_84(iLocal_69);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
			if (!unk_0x84A2DD9AC37C35C1(Local_267[iVar2 /*14*/]))
			{
				if (func_28(&(Local_83[iVar2 /*3*/])))
				{
					if (func_25(&(Local_83[iVar2 /*3*/])) > bLocal_93[iVar2])
					{
						if (unk_0x4C241E39B23DF959(Local_267[iVar2 /*14*/].f_1, false) && unk_0xA3EE4A07279BB9DB(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, false))
						{
							bVar0 = unk_0xD53343AA4FB7DD28(250, 500);
							bVar1 = unk_0xD53343AA4FB7DD28(250, 500);
							unk_0xE8854A4326B9E12B(&iVar3);
							unk_0xC429DCEEB339E129(false, Local_267[iVar2 /*14*/].f_1, 1, bVar0);
							unk_0xC429DCEEB339E129(false, Local_267[iVar2 /*14*/].f_1, 31, bVar1);
							unk_0x39E72BC99E6360CB(iVar3);
							if (!unk_0x84A2DD9AC37C35C1(Local_267[iVar2 /*14*/]))
							{
								unk_0x5ABA3986D90D8A3B(Local_267[iVar2 /*14*/], iVar3);
							}
							unk_0x3841422E9C488D8C(&iVar3);
						}
						func_35(&(Local_83[iVar2 /*3*/]));
						bLocal_93[iVar2] = unk_0x313CE5879CEB6FCD(0f, 3f);
					}
				}
				else
				{
					func_37(&(Local_83[iVar2 /*3*/]));
				}
			}
			if (!unk_0x5F9532F3B5CC2551(Local_267[iVar2 /*14*/], false))
			{
				if ((unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), Local_267[iVar2 /*14*/]) && !unk_0x47E4E977581C5B55(Local_267[iVar2 /*14*/])) && !unk_0x2A74E1D5F2F00EEC(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0x93B93A37987F1F3D(false, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0xEA47FE3719165B94(false, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, false, false, false, false);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(Local_267[iVar2 /*14*/], iVar3);
					unk_0x3841422E9C488D8C(&iVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x47E4E977581C5B55(Local_267[iVar2 /*14*/]) || unk_0x2A74E1D5F2F00EEC(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (unk_0x47E4E977581C5B55(Local_267[iVar2 /*14*/]) || unk_0x2A74E1D5F2F00EEC(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					unk_0xE8854A4326B9E12B(&iVar3);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 1000);
					unk_0xEA47FE3719165B94(false, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, false, false, false, false);
					unk_0x93B93A37987F1F3D(false, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0xEA47FE3719165B94(false, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, false, false, false, false);
					unk_0x39E72BC99E6360CB(iVar3);
					unk_0x5ABA3986D90D8A3B(Local_267[iVar2 /*14*/], iVar3);
					unk_0x3841422E9C488D8C(&iVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0x7239B21A38F536BA(Local_267.f_83.f_1) && unk_0x7239B21A38F536BA(Local_267.f_83))
	{
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_267.f_83.f_1, false))
		{
			bLocal_54 = Local_267.f_83.f_1;
		}
		if (func_87(Local_267.f_83, 1, 0, 0, 0))
		{
			func_85();
			func_84(iLocal_69);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(Local_267.f_83))
		{
			if (func_28(&bLocal_84))
			{
				if (func_25(&bLocal_84) > bLocal_94)
				{
					if (unk_0x4C241E39B23DF959(Local_267.f_83.f_1, false) && unk_0xA3EE4A07279BB9DB(Local_267.f_83, Local_267.f_83.f_1, false))
					{
						bVar0 = unk_0xD53343AA4FB7DD28(250, 500);
						bVar1 = unk_0xD53343AA4FB7DD28(250, 500);
						unk_0xE8854A4326B9E12B(&iVar3);
						unk_0xC429DCEEB339E129(false, Local_267.f_83.f_1, 1, bVar0);
						unk_0xC429DCEEB339E129(false, Local_267.f_83.f_1, 31, bVar1);
						unk_0x39E72BC99E6360CB(iVar3);
						if (!unk_0x84A2DD9AC37C35C1(Local_267.f_83))
						{
							unk_0x5ABA3986D90D8A3B(Local_267.f_83, iVar3);
						}
						unk_0x3841422E9C488D8C(&iVar3);
					}
					func_35(&bLocal_84);
					bLocal_94 = unk_0x313CE5879CEB6FCD(0f, 3f);
				}
			}
			else
			{
				func_37(&bLocal_84);
			}
		}
		if (!unk_0x5F9532F3B5CC2551(Local_267.f_83, false))
		{
			if ((unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), Local_267.f_83) && !unk_0x47E4E977581C5B55(Local_267.f_83)) && !unk_0x2A74E1D5F2F00EEC(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0x93B93A37987F1F3D(false, Local_267.f_83.f_9, 1000);
				unk_0xEA47FE3719165B94(false, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, false, false, false, false);
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(Local_267.f_83, iVar3);
				unk_0x3841422E9C488D8C(&iVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (unk_0x47E4E977581C5B55(Local_267.f_83) || unk_0x2A74E1D5F2F00EEC(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				unk_0xE8854A4326B9E12B(&iVar3);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 1000);
				unk_0xEA47FE3719165B94(false, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, false, false, false, false);
				unk_0x93B93A37987F1F3D(false, Local_267.f_83.f_9, 1000);
				unk_0xEA47FE3719165B94(false, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, false, false, false, false);
				unk_0x39E72BC99E6360CB(iVar3);
				unk_0x5ABA3986D90D8A3B(Local_267.f_83, iVar3);
				unk_0x3841422E9C488D8C(&iVar3);
				iLocal_266 = 4;
				func_35(&bLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0xD53343AA4FB7DD28(false, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_84(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_138(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_92(&iLocal_60);
		iLocal_59 = 9;
	}
}

void func_85()
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	
	unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0x7239B21A38F536BA(iVar0[iVar2]) && !unk_0x84A2DD9AC37C35C1(iVar0[iVar2]))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
			{
				unk_0x22B0D0E37CCB840D(iVar0[iVar2], unk_0xD80958FC74E988A6(), 100f, -1, false, false);
			}
			else
			{
				unk_0xE8854A4326B9E12B(&iVar1);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), unk_0xD53343AA4FB7DD28(300, 900));
				unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 0);
				unk_0x39E72BC99E6360CB(iVar1);
				unk_0x5ABA3986D90D8A3B(iVar0[iVar2], iVar1);
				unk_0x3841422E9C488D8C(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_113386.f_19016.f_1)
	{
		case 0:
			func_86(0);
			break;
		
		case 1:
			func_86(0);
			break;
		
		case 3:
			func_86(0);
			break;
		
		case 4:
			func_86(0);
			break;
		
		case 5:
			func_86(0);
			break;
		
		case 2:
			func_86(0);
			break;
	}
}

void func_86(int iParam0)
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

int func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = unk_0xD80958FC74E988A6();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			Var1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			if (bParam1)
			{
				if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x4859F1FC66A6278E(bParam0, bVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x17FFC1B2BA35A494(bVar0, bParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
				{
					if (func_88(bParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x997ABD671D25CA0B(bParam0, false))
			{
				if (unk_0xC86D67D52A707CF8(unk_0x9A9112A0FE9A4713(bParam0, false), bVar0, true))
				{
					return 1;
				}
			}
			if (unk_0xBBCCE00B381F8482(bParam0))
			{
				return 1;
			}
			if (unk_0x475768A975D5AD17(bVar0, 4))
			{
				if (unk_0x34616828CD07F1A1(bVar0))
				{
					if (unk_0x20B60995556D004F(bParam0, unk_0x3FEF770D40960D5A(bVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x3F2023999AD51C1F(Var1, 4f, true))
			{
				return 1;
			}
			if (unk_0x5270A8FBC098C3F8((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), false))
			{
				return 1;
			}
			if (unk_0x9A497FE2DF198913(bParam0))
			{
				if (unk_0x9B128DC36C1E04CF(bParam0) == bVar0)
				{
					return 1;
				}
			}
			if ((unk_0xAB0F816885B0E483(-1, Var1, 25f) && !unk_0xAB0F816885B0E483(11, Var1, 25f)) && !unk_0xAB0F816885B0E483(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xA72CD9CA74A5ECBA(bParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_88(bool bParam0, bool bParam1)
{
	return func_89(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), bParam0, bParam1);
}

float func_89(bool bParam0, bool bParam1, bool bParam2)
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_97(0))
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

int func_91(int iParam0)
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

void func_92(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
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

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
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

int func_94(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam0, false))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_95(bool bParam0, bool bParam1, bool bParam2)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	unk_0x238FFE5C7B0498A6(0, false, true, -1);
}

var func_96()
{
	return Global_75485;
}

int func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1)
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

bool func_99()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_100()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_102()
{
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_105()
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

int func_106(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_69();
				if (!func_71(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_109()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_113()) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_113() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_98(8, -1)) || func_100()) || func_108()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_111()) || func_110()) || func_108()) || func_107())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_113()) || Global_31962) || func_112()) || func_98(8, -1)) || func_110()) || func_109()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_113()) || func_110()) || Global_112433) || Global_31962) || func_112()) || Global_44238) || func_98(8, -1)) || func_109()) || func_108()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_108()) || func_111()) || func_110()) || func_100())
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

var func_107()
{
	return Global_100480.f_1;
}

int func_108()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_109()
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

bool func_110()
{
	return Global_100493.f_376 > 0;
}

bool func_111()
{
	return Global_100493.f_375 > 0;
}

var func_112()
{
	return Global_1575058;
}

int func_113()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_114()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_115()
{
	return Global_96273;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_118(6) || func_118(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_142(5))
			{
				if (func_106(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xA6DB27D19ECBB7DA(Global_32338[iVar0 /*23*/].f_19);
}

bool func_118(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_119()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x25223CA6B4D20B7F();
	if ((bVar0 <= bLocal_79 && bVar0 >= bLocal_80) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_129();
		func_128();
		switch (iLocal_82)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_127(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_126(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_127(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_127(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_127(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_126(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				bVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				bVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				bVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				bVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				bVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				bVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xCA042B6957743895(bVar1))
		{
			if (unk_0xF9034C136C9E00D3(bVar1))
			{
				if (!unk_0x367A09DED4E05B99(bVar1))
				{
					unk_0x02C8E5B49848664E(bVar1, true);
				}
			}
		}
	}
	func_120();
}

void func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267.f_0)
		{
			if (!func_125(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = unk_0xAF35D0D2583051B0(func_124(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, true, true, false);
				unk_0x49733E92263139D1(Local_267[iVar5 /*14*/].f_1, 5f);
				unk_0x92F0CF722BC4202F(Local_267[iVar5 /*14*/].f_1, true);
				if (func_125(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = unk_0x7DD959874C1FD534(Local_267[iVar5 /*14*/].f_1, 4, func_123(), -1, true, true);
					unk_0x2497C4717C8B881E(Local_267[iVar5 /*14*/].f_1, true, false, false);
				}
				else
				{
					Local_267[iVar5 /*14*/] = unk_0xD49F9B0955C367DE(4, func_123(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, true, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							bVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							bVar4 = "idle_b";
							break;
						
						default:
							bVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							bVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							bVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							bVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = bVar3;
					Local_267[iVar5 /*14*/].f_13 = bVar4;
					unk_0xE8854A4326B9E12B(&iVar0);
					unk_0xE73A266DB0CA9042(false, unk_0xD53343AA4FB7DD28(100, 500));
					unk_0xEA47FE3719165B94(false, bVar3, bVar4, 8f, -8f, -1, 8193, unk_0x313CE5879CEB6FCD(0f, 1065353216), false, false, false);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B(Local_267[iVar5 /*14*/], iVar0);
					unk_0x3841422E9C488D8C(&iVar0);
				}
				unk_0x560A43136EB58105(Local_267[iVar5 /*14*/], true);
				unk_0x54C7C4A94367717E(Local_267[iVar5 /*14*/], true, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = unk_0xAF35D0D2583051B0(func_124(1), Local_267.f_83.f_2, Local_267.f_83.f_5, true, true, false);
		unk_0x49733E92263139D1(Local_267.f_83.f_1, 5f);
		unk_0x92F0CF722BC4202F(Local_267.f_83.f_1, true);
		if (func_125(Local_267.f_83.f_6))
		{
			Local_267.f_83 = unk_0x7DD959874C1FD534(Local_267.f_83.f_1, 4, func_123(), -1, true, true);
			unk_0x2497C4717C8B881E(Local_267.f_83.f_1, true, false, false);
		}
		else
		{
			Local_267.f_83 = unk_0xD49F9B0955C367DE(4, func_123(), Local_267.f_83.f_6, Local_267.f_83.f_9, true, true);
			iVar1 = (unk_0xD53343AA4FB7DD28(false, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					bVar4 = "idle_a";
					break;
				
				case 1:
					bVar4 = "idle_b";
					break;
				
				default:
					bVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = bVar4;
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x919BE13EED931959(false, func_122((unk_0xD53343AA4FB7DD28(false, 65535) % 1000), 1, 1000));
			unk_0xEA47FE3719165B94(false, "amb@world_human_aa_smoke@male@idle_a", bVar4, 8f, -8f, -1, 1, unk_0x313CE5879CEB6FCD(0f, 1065353216), false, false, false);
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(Local_267.f_83, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	bLocal_95 = Local_267.f_83;
	if (!unk_0x5F9532F3B5CC2551(Local_267[0 /*14*/], false))
	{
		func_121(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x5F9532F3B5CC2551(Local_267[1 /*14*/], false))
	{
		func_121(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x5F9532F3B5CC2551(Local_267[2 /*14*/], false))
	{
		func_121(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_28(&bLocal_90))
	{
		func_37(&bLocal_90);
	}
	else
	{
		func_35(&bLocal_90);
	}
}

void func_121(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_122(int iParam0, int iParam1, int iParam2)
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

int func_123()
{
	return joaat("a_m_y_motox_01");
}

int func_124(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (unk_0x19AAC8F07BFEC53E(Local_267.f_71[iVar1]))
		{
			bVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			bVar0 = (bVar0 - 1);
		}
	}
	bVar0 = unk_0xD53343AA4FB7DD28(false, bVar0);
	if (Local_267.f_71[bVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[bVar0];
}

int func_125(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_126(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	if (func_125(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { Param0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { Param2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_127(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		if (!bVar1 && func_125(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { Param0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { Param2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_129()
{
	switch (iLocal_82)
	{
		case 0:
			unk_0x1A5AA1208AF5DB59(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, true, false, true);
			unk_0x01C7B9B38428AEB6(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			unk_0xEB47EC4E34FB7EE1("WORLD_HUMAN_HIKER", false);
			break;
		
		case 1:
			unk_0x1A5AA1208AF5DB59(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, false, false, true);
			break;
		
		case 3:
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", false);
			unk_0x1A5AA1208AF5DB59(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, true, false, true);
			unk_0x11DB3500F042A8AA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, false, false, false, false, false, 0, 0);
			unk_0x1A5AA1208AF5DB59(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, true, false, true);
			unk_0xEB47EC4E34FB7EE1("WORLD_HUMAN_HIKER", false);
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_EMPTY", false);
			unk_0xEB47EC4E34FB7EE1("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
		
		case 4:
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", false);
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_EMPTY", true);
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
		
		case 5:
			unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			unk_0x1A5AA1208AF5DB59(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, true, false, true);
			unk_0x11DB3500F042A8AA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, false, false, false, 0, 0);
			break;
		
		case 2:
			unk_0x02C8E5B49848664E("QUARRY", false);
			unk_0x1A5AA1208AF5DB59(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, true, false, true);
			unk_0x11DB3500F042A8AA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, false, false, false, false, false, 0, 0);
			break;
	}
}

bool func_130()
{
	return ((((((((func_131(&(Local_267.f_71)) && func_131(&(Local_267.f_77))) && func_131(&(Local_267.f_99))) && unk_0xD031A9162D01088C("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0xD031A9162D01088C("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0xD031A9162D01088C("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0xD031A9162D01088C("amb@world_human_aa_smoke@male@idle_a")) && unk_0xD031A9162D01088C("random@street_race")) && unk_0xD031A9162D01088C("gestures@m@standing@casual"));
}

int func_131(var uParam0)
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

void func_132()
{
	char cVar0[64];
	
	func_134(&(Local_267.f_77), joaat("a_m_y_motox_01"));
	func_134(&(Local_267.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_134(&(Local_267.f_71), joaat("mesa"));
			func_134(&(Local_267.f_71), joaat("bjxl"));
			func_134(&(Local_267.f_71), joaat("patriot"));
			func_134(&(Local_267.f_71), joaat("dubsta2"));
			func_134(&(Local_267.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_134(&(Local_267.f_71), joaat("mesa"));
			func_134(&(Local_267.f_71), joaat("bfinjection"));
			func_134(&(Local_267.f_71), joaat("bjxl"));
			func_134(&(Local_267.f_71), joaat("sadler"));
			func_134(&(Local_267.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	unk_0xD3BD40951412FEF6("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0xD3BD40951412FEF6("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0xD3BD40951412FEF6("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0xD3BD40951412FEF6("amb@world_human_aa_smoke@male@idle_a");
	unk_0xD3BD40951412FEF6("random@street_race");
	unk_0xD3BD40951412FEF6("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		unk_0x963D27A58DF860AC(joaat("prop_fncwood_14c"));
		unk_0x963D27A58DF860AC(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0xAF514CABE74CBF15(true, &cVar0);
	func_133(&(Local_267.f_77));
	func_133(&(Local_267.f_71));
	func_133(&(Local_267.f_99));
}

void func_133(var uParam0)
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

int func_134(var uParam0, int iParam1)
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
	iVar1 = func_135(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(var uParam0)
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

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
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

int func_139()
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

int func_140()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_43052);
}

int func_143(int iParam0, int iParam1)
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

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_145()
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	unk_0x6F2135B6129620C1(true);
	bLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	func_103(&uLocal_58, 4194304);
	iLocal_61 = 51000;
	bLocal_54 = false;
	bLocal_79 = false;
	bLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_149(Local_56, &Local_81);
	iLocal_69 = func_148(iLocal_82);
	fLocal_66 = (unk_0xBBDA792448DB5A89(func_147(iLocal_69)) + 5f);
	if (func_141(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		func_84(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_113386.f_19016.f_1)
	{
		if (func_117(func_148(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		func_84(iLocal_69);
	}
	if (!func_117(func_148(iLocal_82)) && unk_0x5A859503B0C08678())
	{
		if (iLocal_69 != 263)
		{
			if (func_146(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		func_84(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		bLocal_79 = 20;
		bLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		bLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		bLocal_65 = "PLAY_OFFROAD_M";
	}
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 0);
}

int func_147(int iParam0)
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

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam1)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_150(0) };
	Var1[1 /*3*/] = { func_150(1) };
	Var1[3 /*3*/] = { func_150(3) };
	Var1[4 /*3*/] = { func_150(4) };
	Var1[5 /*3*/] = { func_150(5) };
	Var1[2 /*3*/] = { func_150(2) };
	Var1[6 /*3*/] = { func_150(6) };
	fVar2 = unk_0xB7A628320EFF8E47(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = unk_0xB7A628320EFF8E47(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_150(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_151(var uParam0, int iParam1)
{
	func_152(uParam0, iParam1);
}

void func_152(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_138(iLocal_69, 0, 0);
		}
	}
	func_92(&iLocal_60);
	if (func_144(uLocal_58, 2))
	{
		func_5();
		func_151(&uLocal_58, 2);
		func_20(&iLocal_62);
	}
	iLocal_62 = -1;
	func_154();
	unk_0x1090044AD1DA76FA();
}

void func_154()
{
	func_151(&uLocal_58, 4);
	func_155();
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

void func_155()
{
}

