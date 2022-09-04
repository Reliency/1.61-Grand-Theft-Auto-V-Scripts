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
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49[2] = { 0, 0 };
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61[2];
	float fLocal_62[2] = { 0f, 0f };
	struct<3> Local_63 = { 0, 0, 0 } ;
	bool bLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
	iLocal_18 = 3;
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
	Local_65 = { 0.0203f, -3.1441f, 0.5027f };
	Local_66 = { 90f, 0f, 0f };
	Local_68 = { 0f, 0f, 0f };
	Local_69 = { 0f, 0f, 0f };
	iLocal_95 = 1;
	iLocal_96 = 1;
	cLocal_105 = "RESECAU";
	iLocal_271 = -1;
	bLocal_275 = -3.55f;
	Local_276 = { 0.014f, -0.9111f, 1.2317f };
	Local_277 = { 0f, -3.4368f, 1.2317f };
	bLocal_286 = -1;
	bLocal_287 = -1;
	iLocal_295 = -1;
	Local_67 = { Local_67 };
	Local_67 = { ScriptParam_302.f_1[0 /*3*/] };
	if (unk_0x2A488C176D52CCA5(Local_67, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		bLocal_45 = true;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		bLocal_45 = 2;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -389f, 6061f, 31f) < 5f)
	{
		bLocal_45 = 3;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -600f, -1094f, 22.76f) < 5f)
	{
		bLocal_45 = 4;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_45 = 5;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		bLocal_45 = 6;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		bLocal_45 = 7;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		bLocal_45 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		bLocal_45 = 9;
	}
	else if (unk_0x2A488C176D52CCA5(Local_67, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		bLocal_45 = 10;
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	if (Global_3)
	{
		if (bLocal_45 != 2)
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	else
	{
		if (unk_0xC968670BFACE42D9(11))
		{
			iVar0 = 0;
			while (iVar0 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
				{
					if (unk_0x4C241E39B23DF959(bLocal_50, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(bLocal_49[iVar0], bLocal_50, false))
						{
							unk_0xC20E50AA46D09CA8(bLocal_49[iVar0], bLocal_50, -1, func_248(bLocal_50), 2f, 1, 0);
						}
					}
					else
					{
						unk_0x919BE13EED931959(bLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_67, 9, bLocal_45, 1, 0))
		{
			unk_0x1090044AD1DA76FA();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	iLocal_59 = unk_0x1B5C85C612E5256E(Local_63 + Vector(30f, 30f, 30f), Local_63 - Vector(30f, 30f, 30f), false, true, true, true);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		func_184(&uLocal_123);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0x208784099002BC30("RE_SV", 0);
			switch (iLocal_298)
			{
				case 0:
					if (unk_0xC5042CC6F5E3D450() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_44 == 3 && !(unk_0xE33D59DA70B58FDF(Local_63, 3f) && func_160(unk_0xD80958FC74E988A6(), Local_63, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!unk_0xE33D59DA70B58FDF(Local_63, 8f))
									{
										unk_0xA56F01F3765B93A0(Local_63, 4f, true, false, false, false);
									}
									iLocal_46 = 4;
									bLocal_79 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_159();
								if (unk_0x4C241E39B23DF959(bLocal_50, false) && iLocal_44 == 3)
								{
									unk_0xAB54A438726D25D5(bLocal_50, 5f);
								}
								unk_0xC1B1E9A034A63A62(false);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x4C241E39B23DF959(bLocal_50, false))
					{
						if (((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) < 10000f || !unk_0xE31C2C72B8692B64(bLocal_50)) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0xE31C2C72B8692B64(bLocal_49[0]))) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0xE31C2C72B8692B64(bLocal_49[1])))
						{
							iLocal_298++;
						}
					}
					if (func_158())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 1)
					{
						unk_0xC1B1E9A034A63A62(false);
					}
					break;
				
				case 2:
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_153();
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_50) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (iLocal_44 == 3)
						{
							func_148();
							if (!unk_0xE31C2C72B8692B64(bLocal_50) && (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0xE31C2C72B8692B64(bLocal_50) && iLocal_46 == 4) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_70, Local_71, bLocal_72, false, true, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_46 == 4 && unk_0xE31C2C72B8692B64(bLocal_50)) && iLocal_44 != 3)
						{
							if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0)
			{
				if (unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0xE31C2C72B8692B64(bLocal_50))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) > 62500f)
					{
						func_231();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) > 10000f && !unk_0xC5042CC6F5E3D450())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_57))
			{
				if (!func_138(2) && !bLocal_84)
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_52))
				{
					if (iLocal_299 != 0)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_52, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = 0;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (((bLocal_79 && !unk_0xAFC1CA75AD4074D1(iLocal_103)) && unk_0x4C241E39B23DF959(bLocal_50, false)) && !bLocal_89)
				{
					if (iLocal_299 != 1)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = 1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (unk_0xAFC1CA75AD4074D1(iLocal_103))
				{
					if (iLocal_299 != 2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x225B8B35C88029B3(iLocal_103), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = 2;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				if (iLocal_299 == 0)
				{
					if (unk_0x7239B21A38F536BA(bLocal_52))
					{
						func_128(&uLocal_111, bLocal_52, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_52, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 1)
				{
					if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, true))
					{
						func_128(&uLocal_111, bLocal_50, 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 2)
				{
					if (unk_0xAFC1CA75AD4074D1(iLocal_103))
					{
						func_105(&uLocal_111, unk_0x225B8B35C88029B3(iLocal_103), 0, 0, 1, 1, 1);
						if (unk_0xB7A628320EFF8E47(unk_0x225B8B35C88029B3(iLocal_103), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > unk_0xE3621CC40F31FE2E(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				if (((!unk_0x5F9532F3B5CC2551(bLocal_50, false) && bLocal_79) && !bLocal_81) && (!func_138(0) || (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_stickybomb"), false) && !func_138(1))))
				{
					switch (iLocal_100)
					{
						case 0:
							if (!unk_0x4D79439A6B55AC67() && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_100++;
							}
							break;
						
						case 1:
							if (!unk_0x4D79439A6B55AC67())
							{
								iLocal_101 = unk_0x9CD27B0045628463();
								iLocal_100++;
							}
							break;
						
						case 2:
							if ((unk_0x9CD27B0045628463() - iLocal_101) > 2000 && unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_stickybomb"), false))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0x8DFCED7A656F8802(true);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
					{
						if (unk_0xF6AA118530443FD2(bLocal_49[0]) != 3)
						{
							unk_0xDBA71115ED9941A6(bLocal_49[0], 3);
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
					{
						if (unk_0xF6AA118530443FD2(bLocal_49[1]) != 3)
						{
							unk_0xDBA71115ED9941A6(bLocal_49[1], 3);
						}
					}
					if (((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x5F9532F3B5CC2551(bLocal_49[0], false)) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && !unk_0x5F9532F3B5CC2551(bLocal_49[1], false))
					{
						iLocal_95 = 1;
						func_79(bLocal_49[1]);
						func_77(0, 1);
					}
					else if (iLocal_95 == 1)
					{
						if (unk_0x84A2DD9AC37C35C1(bLocal_49[1]) || unk_0x5F9532F3B5CC2551(bLocal_49[1], false))
						{
							iLocal_48 = 0;
							iLocal_95 = 0;
						}
						else
						{
							func_79(bLocal_49[1]);
						}
					}
					else if (iLocal_95 == 0)
					{
						if (unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || unk_0x5F9532F3B5CC2551(bLocal_49[0], false))
						{
							iLocal_95 = -1;
						}
						else
						{
							func_79(bLocal_49[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0xBB40DD2270B65366(bLocal_50, -1, false) == unk_0xD80958FC74E988A6()) && !bLocal_83) && iLocal_46 != 8)
			{
				if (bLocal_79)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_80)
			{
				if (unk_0x9E6B70061662AE5C(iLocal_60, joaat("player")) != 5)
				{
					unk_0xBF25EB89375A37AD(5, iLocal_60, joaat("player"));
					unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((unk_0xAFC1CA75AD4074D1(iLocal_103) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x225B8B35C88029B3(iLocal_103)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_89)
			{
				if (func_67())
				{
					bLocal_89 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x7239B21A38F536BA(bLocal_49[iVar2]))
				{
					if ((!unk_0x5F9532F3B5CC2551(bLocal_49[iVar2], false) && !unk_0x84A2DD9AC37C35C1(bLocal_49[iVar2])) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_49[0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x7239B21A38F536BA(bLocal_50))
				{
					if (unk_0x4C241E39B23DF959(bLocal_50, false))
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, false))
						{
							iVar3 = 1;
						}
					}
					if ((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 10000f && unk_0xE31C2C72B8692B64(bLocal_50)) || unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_77)
		{
			if (func_28())
			{
				iLocal_93 = unk_0x9CD27B0045628463();
				bLocal_77 = true;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((unk_0x9CD27B0045628463() - iLocal_93) > 5000)
				{
					unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
					if (func_27() < 30f)
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_78 = true;
						}
					}
					else
					{
						bLocal_78 = true;
					}
				}
			}
		}
		if (((unk_0x9CD27B0045628463() - iLocal_93) > 10000 && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) && !iLocal_92)
		{
			bVar4 = unk_0xD53343AA4FB7DD28(false, 3);
			if (bVar4 == 0)
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (bVar4 == 1)
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 1;
		}
		if (bLocal_78)
		{
			if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(func_3(), true)) < unk_0xE3621CC40F31FE2E(50f, 2f))
				{
					if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
					{
						unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
					}
					unk_0x520E541A97A13354(unk_0x4F8644AF03D0E0D6(), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
				}
			}
		}
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0 && func_2())
		{
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 2, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xFE3F9C29F7B32BD5(bLocal_50, false) > 0f || unk_0xFE3F9C29F7B32BD5(bLocal_50, true) > 0f)
			{
				if (unk_0x25BC98A59C2EA962(bLocal_50) == 3)
				{
					unk_0xB664292EAECF7FA6(bLocal_50, 1);
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, false))
				{
					bLocal_82 = true;
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xFE3F9C29F7B32BD5(bLocal_50, false) == 0f && unk_0xFE3F9C29F7B32BD5(bLocal_50, true) == 0f)
				{
					if (unk_0x25BC98A59C2EA962(bLocal_50) == 1)
					{
						unk_0xB664292EAECF7FA6(bLocal_50, 3);
					}
				}
			}
		}
		if (iLocal_97 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				unk_0x2CDA538C44C6CCE5(iLocal_97);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_52))
		{
			iVar5 = 0;
			while (iVar5 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar5]) && !unk_0x5F9532F3B5CC2551(bLocal_49[iVar5], false))
				{
					if (unk_0xEFBE71898A993728(bLocal_52, bLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_300[iVar5])
							{
								unk_0x90A43CC281FFAB46(bLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								unk_0x90A43CC281FFAB46(bLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, true);
								iLocal_300[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_301[iVar5])
							{
								unk_0x90A43CC281FFAB46(bLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								unk_0x90A43CC281FFAB46(bLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, true);
								iLocal_301[iVar5] = 1;
							}
						}
						if (unk_0x475768A975D5AD17(bLocal_49[iVar5], 4) && !iLocal_85)
						{
							unk_0x6F6981D2253C208F(bLocal_49[iVar5], true);
							iLocal_85 = 1;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 1, -8f);
							iLocal_300[iVar5] = 0;
						}
						if (iLocal_301[iVar5])
						{
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 1, -8f);
							iLocal_301[iVar5] = 0;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0;
							iLocal_301[iVar5] = 0;
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 0, -8f);
							unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 1, -8f);
						}
						if (unk_0x475768A975D5AD17(bLocal_49[iVar5], 4) && iLocal_85)
						{
							unk_0x6F6981D2253C208F(bLocal_49[iVar5], true);
							iLocal_85 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0;
						iLocal_301[iVar5] = 0;
						unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 0, -8f);
						unk_0xD8D19675ED5FBDCE(bLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((unk_0x7239B21A38F536BA(bLocal_52) && unk_0xB346476EF1A64897(bLocal_52)) && !unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96])) && !unk_0x1F0B79228E461EC9(bLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 3)) && !unk_0x1F0B79228E461EC9(bLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x1F0B79228E461EC9(bLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0xEA47FE3719165B94(bLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, false, false, false, false);
			}
		}
		if (!iLocal_86)
		{
			if (unk_0x7239B21A38F536BA(bLocal_50))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_50, unk_0xD80958FC74E988A6(), true))
				{
					iLocal_86 = 1;
				}
				unk_0xA72CD9CA74A5ECBA(bLocal_50);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = 50f;
	if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && (((unk_0x4C241E39B23DF959(bLocal_50, false) && bLocal_84) && unk_0xAFC1CA75AD4074D1(iLocal_103)) || (!unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0xAFC1CA75AD4074D1(iLocal_103)))) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) < 20f) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x225B8B35C88029B3(iLocal_103)) < 20f)
	{
		bVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x84A2DD9AC37C35C1(bVar1))
		{
			if (unk_0x9F47B058362C84B5(bVar1) == joaat("s_m_y_cop_01") || unk_0x9F47B058362C84B5(bVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		bVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x84A2DD9AC37C35C1(bVar1))
		{
			if (unk_0x9F47B058362C84B5(bVar1) == joaat("s_m_y_cop_01") || unk_0x9F47B058362C84B5(bVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		bVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, false, 1024);
		if (unk_0x4C241E39B23DF959(bVar2, false))
		{
			return 1;
		}
		bVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, false, 1024);
		if (unk_0x4C241E39B23DF959(bVar2, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
		{
			fVar0 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[0], true));
			iVar1 = 0;
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[1], true)) < fVar0)
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[1], true));
				iVar1 = 1;
			}
		}
	}
	return bLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x4F8644AF03D0E0D6()))
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

bool func_8(bool bParam0)
{
	return func_9(bParam0, 20);
}

var func_9(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
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
		Global_20266 = func_16();
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

int func_16()
{
	func_17();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_20(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_19(unk_0xD80958FC74E988A6());
			if (func_18(iVar0) && (!func_22(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_18(Global_113386.f_2363.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_27()
{
	bool bVar0;
	
	bVar0 = 999999f;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
		{
			bVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[0], true));
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[1], true)) < bVar0)
			{
				bVar0 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[1], true));
			}
		}
	}
	return unk_0x71D93B57D07F9804(bVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar1 = 0;
		while (iVar1 < bLocal_49)
		{
			if (unk_0x7239B21A38F536BA(bLocal_49[iVar1]))
			{
				if (((!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar1]) && unk_0xC86D67D52A707CF8(bLocal_49[iVar1], unk_0xD80958FC74E988A6(), true)) || unk_0x84A2DD9AC37C35C1(bLocal_49[iVar1])) || unk_0x5F9532F3B5CC2551(bLocal_49[iVar1], false))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && iLocal_86)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (unk_0x7239B21A38F536BA(bLocal_52))
			{
				if (!unk_0xB346476EF1A64897(bLocal_52))
				{
					unk_0x539E0AE3E6634B9F(&bLocal_52);
					if (!unk_0xAFC1CA75AD4074D1(iLocal_103) && !bLocal_81)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x9CD27B0045628463() - iLocal_102) > 3000)
				{
					if (unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]) || unk_0x47E4E977581C5B55(bLocal_49[iLocal_96]))
					{
						unk_0x961AC54BF0613F5D(bLocal_52, true, true);
						iLocal_102 = unk_0x9CD27B0045628463();
					}
				}
			}
			else if (!unk_0xAFC1CA75AD4074D1(iLocal_103))
			{
				if (unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]) || ((!unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]) && unk_0x47E4E977581C5B55(bLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x7239B21A38F536BA(bLocal_52))
		{
			unk_0x539E0AE3E6634B9F(&bLocal_52);
		}
		if (unk_0xAFC1CA75AD4074D1(iLocal_103))
		{
			unk_0x3288D8ACAECD2AB2(iLocal_103);
		}
	}
}

void func_30(struct<3> Param0, bool bParam1)
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				Param0 = { unk_0x6E16BC2503FF1FF0(unk_0x1899F328B0E12848(bLocal_50, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { unk_0x6E16BC2503FF1FF0(unk_0x3FEF770D40960D5A(bLocal_49[iLocal_96], false), 1.2f, 1.5f) };
			}
		}
		unk_0x933D6A9EEC1BACD0(&bLocal_104, 3);
		unk_0x933D6A9EEC1BACD0(&bLocal_104, 4);
		unk_0x933D6A9EEC1BACD0(&bLocal_104, true);
		if (bParam1)
		{
			iLocal_103 = unk_0x891804727E0A98B7(joaat("pickup_money_security_case"), Param0, unk_0xAFBD61CC738D9EB9(bLocal_52, 2), false, bLocal_94, 2, true, false);
		}
		else
		{
			iLocal_103 = unk_0xFBA08C503DD5FA58(joaat("pickup_money_security_case"), Param0, bLocal_104, bLocal_94, true, false);
		}
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_58))
		{
			bLocal_58 = func_31(iLocal_103);
		}
		if (unk_0x7239B21A38F536BA(bLocal_52))
		{
			unk_0x539E0AE3E6634B9F(&bLocal_52);
		}
		bLocal_81 = true;
	}
}

bool func_31(int iParam0)
{
	return func_32(iParam0);
}

bool func_32(int iParam0)
{
	bool bVar0;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	bVar0 = unk_0xBE339365C863BD36(iParam0);
	unk_0xD38744167B2FA257(bVar0, func_33(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	return bVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0x7239B21A38F536BA(bLocal_53))
		{
			unk_0x7C65DAC73C35C862(bLocal_50, 2, false, false);
			unk_0x7C65DAC73C35C862(bLocal_50, 3, false, false);
			if (unk_0x7239B21A38F536BA(bLocal_53))
			{
				unk_0x539E0AE3E6634B9F(&bLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_79)
			{
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFE3F9C29F7B32BD5(bLocal_50, 2) == 0f && unk_0xFE3F9C29F7B32BD5(bLocal_50, 3) == 0f)
			{
				if (unk_0x7239B21A38F536BA(bLocal_52))
				{
					if (unk_0xB346476EF1A64897(bLocal_52))
					{
						unk_0x961AC54BF0613F5D(bLocal_52, true, true);
					}
					unk_0x6B9BBD38AB0796DF(bLocal_52, bLocal_50, false, Local_65, Local_66, false, false, false, false, 2, true, 0);
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_50, false))
				{
					if (((unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0xFE3F9C29F7B32BD5(bLocal_50, 2) > 0.25f) && unk_0xFE3F9C29F7B32BD5(bLocal_50, 3) > 0.25f) || !unk_0x4C241E39B23DF959(bLocal_50, false))
					{
						if (unk_0x7239B21A38F536BA(bLocal_52))
						{
							if (unk_0xB346476EF1A64897(bLocal_52))
							{
								unk_0x8D8686B622B88120(unk_0x430386FE9BF80B45(), "DOORS_BLOWN", unk_0x44A8FCB8ED227738(bLocal_50, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								unk_0x961AC54BF0613F5D(bLocal_52, true, false);
								unk_0x1A9205C1B9EE827F(bLocal_52, true, false);
								unk_0x710311ADF0E20730(bLocal_52);
								unk_0x406137F8EF90EAF5(bLocal_52, true);
								Local_279 = { unk_0x3FEF770D40960D5A(bLocal_52, true) - unk_0x3FEF770D40960D5A(bLocal_50, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (unk_0x652D2EEEF1D3E62C(Local_279) > 10f)
								{
									Local_279 = { func_35(Local_279) };
									Local_279 = { Local_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 100)
								{
									iLocal_87 = 1;
								}
								unk_0xC5F68BE9613E2D18(bLocal_52, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_278 = unk_0x9CD27B0045628463();
							}
							else if (unk_0x7F8F6405F4777AF6(unk_0x3FEF770D40960D5A(bLocal_52, true), unk_0x1899F328B0E12848(bLocal_50, Local_276), unk_0x1899F328B0E12848(bLocal_50, Local_277), false) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_91[0] = 0;
								iLocal_91[1] = 0;
							}
							else if ((unk_0x9CD27B0045628463() - iLocal_278) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x7239B21A38F536BA(bLocal_50))
				{
					unk_0x7C65DAC73C35C862(bLocal_50, 2, false, false);
					unk_0x7C65DAC73C35C862(bLocal_50, 3, false, false);
					func_30(unk_0x1899F328B0E12848(bLocal_50, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_46 != 8)
			{
				func_68(8);
			}
			if (unk_0x7239B21A38F536BA(bLocal_52) && !unk_0xAFC1CA75AD4074D1(iLocal_103))
			{
				if (unk_0xD5037BA82E12416F(bLocal_52) == 0f && (unk_0x9CD27B0045628463() - iLocal_278) > 1000)
				{
					func_30(unk_0x3FEF770D40960D5A(bLocal_52, true), 1);
					unk_0x539E0AE3E6634B9F(&bLocal_52);
				}
				else if ((unk_0x9CD27B0045628463() - iLocal_278) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bLocal_53) && unk_0xB346476EF1A64897(bLocal_53))
	{
		if (!iLocal_272)
		{
			if (unk_0x34318593248C8FB2(unk_0x3FEF770D40960D5A(bLocal_53, true), joaat("weapon_stickybomb"), 0.25f, false) || unk_0xBFA48E2FF417213F(unk_0x3FEF770D40960D5A(bLocal_53, true), 0.3f, unk_0xF46CDC33180FDA94(joaat("weapon_stickybomb")), false))
			{
				iLocal_272 = 1;
			}
		}
		iVar0 = 0;
		unk_0xAAD68E1AB39DA632(unk_0x3FEF770D40960D5A(bLocal_53, true), 0.1f, 255, false, false, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_53, true), 1f, 1) || (unk_0xAB0F816885B0E483(2, unk_0x3FEF770D40960D5A(bLocal_53, true), 0.3f) && iLocal_272))
		{
			iLocal_87 = 1;
			iVar0 = 1;
		}
		if (unk_0xEEF059FAD016D209(bLocal_53) < bLocal_98 && unk_0xC86D67D52A707CF8(bLocal_53, unk_0xD80958FC74E988A6(), false))
		{
			iLocal_99 = (iLocal_99 + (bLocal_98 - unk_0xEEF059FAD016D209(bLocal_53)));
			unk_0xA72CD9CA74A5ECBA(bLocal_53);
		}
		if ((unk_0x9CD27B0045628463() - iLocal_273) > 200 && unk_0x7239B21A38F536BA(bLocal_50))
		{
			if (unk_0x1A8B5F3C01E2B477(unk_0x1899F328B0E12848(bLocal_50, 0f, 0f, (1.2195f - 0.27f)), unk_0x1899F328B0E12848(bLocal_50, 0f, bLocal_275, (1.2195f + 0.09f)), 0.45f, true))
			{
				iLocal_273 = unk_0x9CD27B0045628463();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 5)
		{
			return 1;
		}
		if (iLocal_99 > 100 || iVar0)
		{
			return 1;
		}
		bLocal_98 = unk_0xEEF059FAD016D209(bLocal_53);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param1))
	{
		if ((((((((((((((((((((((unk_0x2E2EBA0EE7CED0E0(5, Param1, Param0) || (unk_0x2E2EBA0EE7CED0E0(2, Param1, Param0) && !bParam4)) || (unk_0x2E2EBA0EE7CED0E0(20, Param1, Param0) && !bParam4)) || unk_0x2E2EBA0EE7CED0E0(4, Param1, Param0)) || (unk_0x2E2EBA0EE7CED0E0(28, Param1, Param0) && !bParam4)) || unk_0x2E2EBA0EE7CED0E0(32, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(25, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(9, Param1, Param0)) || (unk_0x2E2EBA0EE7CED0E0(3, Param1, Param0) && !bParam4)) || (unk_0x2E2EBA0EE7CED0E0(6, Param1, Param0) && !bParam4)) || unk_0x2E2EBA0EE7CED0E0(0, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(1, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(23, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(34, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(14, Param1, Param0)) || (unk_0x2E2EBA0EE7CED0E0(30, Param1, Param0) && !bParam4)) || (unk_0x2E2EBA0EE7CED0E0(12, Param1, Param0) && !bParam4)) || unk_0x2E2EBA0EE7CED0E0(7, Param1, Param0)) || (unk_0x2E2EBA0EE7CED0E0(21, Param1, Param0) && !bParam4)) || (unk_0x2E2EBA0EE7CED0E0(18, Param1, Param0) && !bParam4)) || unk_0x2E2EBA0EE7CED0E0(15, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(10, Param1, Param0)) || unk_0x2E2EBA0EE7CED0E0(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xAB0F816885B0E483(5, Param2, fParam3) || (unk_0xAB0F816885B0E483(2, Param2, fParam3) && !bParam4)) || (unk_0xAB0F816885B0E483(20, Param2, fParam3) && !bParam4)) || unk_0xAB0F816885B0E483(4, Param2, fParam3)) || (unk_0xAB0F816885B0E483(28, Param2, fParam3) && !bParam4)) || unk_0xAB0F816885B0E483(32, Param2, fParam3)) || unk_0xAB0F816885B0E483(25, Param2, fParam3)) || unk_0xAB0F816885B0E483(9, Param2, fParam3)) || (unk_0xAB0F816885B0E483(3, Param2, fParam3) && !bParam4)) || (unk_0xAB0F816885B0E483(6, Param2, fParam3) && !bParam4)) || unk_0xAB0F816885B0E483(0, Param2, fParam3)) || unk_0xAB0F816885B0E483(1, Param2, fParam3)) || unk_0xAB0F816885B0E483(23, Param2, fParam3)) || unk_0xAB0F816885B0E483(34, Param2, fParam3)) || unk_0xAB0F816885B0E483(14, Param2, fParam3)) || (unk_0xAB0F816885B0E483(30, Param2, fParam3) && !bParam4)) || (unk_0xAB0F816885B0E483(12, Param2, fParam3) && !bParam4)) || unk_0xAB0F816885B0E483(7, Param2, fParam3)) || (unk_0xAB0F816885B0E483(21, Param2, fParam3) && !bParam4)) || (unk_0xAB0F816885B0E483(18, Param2, fParam3) && !bParam4)) || unk_0xAB0F816885B0E483(15, Param2, fParam3)) || unk_0xAB0F816885B0E483(10, Param2, fParam3)) || unk_0xAB0F816885B0E483(27, Param2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0xA6DB27D19ECBB7DA(bLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && unk_0x4C241E39B23DF959(bLocal_50, false)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_56[1]))
					{
						uLocal_56[1] = func_42(bLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xA6DB27D19ECBB7DA(uLocal_56[1]))
					{
						unk_0x86A652570E5F25DD(&(uLocal_56[1]));
					}
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_55))
					{
						bLocal_55 = func_40(bLocal_50, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_56[1]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_56[1]));
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_55))
				{
					unk_0x86A652570E5F25DD(&bLocal_55);
				}
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(uLocal_56[0]) && unk_0x729B5F1EFBC0AAEE(uLocal_56[0]) != 119)
			{
				unk_0x86A652570E5F25DD(&(uLocal_56[0]));
			}
			if (unk_0xA6DB27D19ECBB7DA(uLocal_56[1]) && unk_0x729B5F1EFBC0AAEE(uLocal_56[1]) != 119)
			{
				unk_0x86A652570E5F25DD(&(uLocal_56[1]));
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_55) && unk_0x729B5F1EFBC0AAEE(bLocal_55) != 119)
			{
				unk_0x86A652570E5F25DD(&bLocal_55);
			}
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				iVar0 = 0;
				while (iVar0 < bLocal_49)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
					{
						if (unk_0xA3EE4A07279BB9DB(bLocal_49[iVar0], bLocal_50, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_55))
				{
					bLocal_55 = func_40(bLocal_50, 1, 0);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(bLocal_55))
			{
				unk_0x86A652570E5F25DD(&bLocal_55);
			}
			if ((unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0xA6DB27D19ECBB7DA(bLocal_55)) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, false))
				{
					if (unk_0x970F608F0EE6C885(bLocal_55) != 0)
					{
						unk_0x45FF974EEE1C8734(bLocal_55, false);
					}
				}
				else if (unk_0x970F608F0EE6C885(bLocal_55) != 255)
				{
					unk_0x45FF974EEE1C8734(bLocal_55, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0xAFC1CA75AD4074D1(iLocal_103) && !unk_0x997ABD671D25CA0B(bLocal_49[iVar0], false))
					{
						if (!unk_0xBBCCE00B381F8482(bLocal_49[iVar0]) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !unk_0x997ABD671D25CA0B(bLocal_49[iVar0], false))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = func_42(bLocal_49[iVar0], 1, 145);
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uLocal_56[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xAFC1CA75AD4074D1(iLocal_103) && !bLocal_89)
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_58))
				{
					bLocal_58 = func_32(iLocal_103);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(bLocal_58))
			{
				unk_0x86A652570E5F25DD(&bLocal_58);
			}
		}
	}
	else if ((unk_0x7239B21A38F536BA(bLocal_50) && unk_0x7239B21A38F536BA(bLocal_49[0])) && unk_0x7239B21A38F536BA(bLocal_49[1]))
	{
		if ((((((!unk_0xE31C2C72B8692B64(bLocal_50) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50, 100f, 100f, 30f, false, true, 0)) || (!unk_0xE31C2C72B8692B64(bLocal_49[0]) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[0], 100f, 100f, 30f, false, true, 0))) || (!unk_0xE31C2C72B8692B64(bLocal_49[1]) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[1], 100f, 100f, 30f, false, true, 0))) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50, 50f, 50f, 20f, false, true, 0)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[0], 50f, 50f, 20f, false, true, 0)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[1], 50f, 50f, 20f, false, true, 0))
		{
			unk_0x86A652570E5F25DD(&bLocal_57);
		}
	}
	if (unk_0xA6DB27D19ECBB7DA(uLocal_56[0]))
	{
		unk_0x75A16C3DA34F1245(uLocal_56[0], iLocal_90);
	}
	if (unk_0xA6DB27D19ECBB7DA(uLocal_56[1]))
	{
		unk_0x75A16C3DA34F1245(uLocal_56[1], bLocal_90);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_55))
	{
		unk_0x75A16C3DA34F1245(bLocal_55, bLocal_90);
	}
	if (unk_0xA6DB27D19ECBB7DA(bLocal_58))
	{
		unk_0x75A16C3DA34F1245(bLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 3)
		{
			bLocal_90 = false;
		}
	}
}

bool func_40(bool bParam0, bool bParam1, bool bParam2)
{
	return func_41(bParam0, !bParam1, bParam2);
}

bool func_41(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_33(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_33(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_33(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

bool func_42(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_41(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

void func_43()
{
	func_45(9, bLocal_45);
	while (!func_44())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_64(iParam0))
	{
		func_63(iParam0, bParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_55(iParam0, bParam1) != 322)
		{
			func_47(func_55(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_46(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_113372 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1);
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
		func_48();
	}
}

void func_48()
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
		func_52(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_51() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

int func_50(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_51()
{
	return Global_31959;
}

int func_52(int iParam0, bool bParam1)
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

void func_53(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_54();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_54()
{
	return Global_1574918;
}

int func_55(int iParam0, bool bParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	if (bLocal_81)
	{
		if (unk_0x80EC48E6679313F9(iLocal_103))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_69()
{
	if (!unk_0xAFC1CA75AD4074D1(iLocal_103))
	{
		if (bLocal_79)
		{
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				if (!func_70(bLocal_50))
				{
					if (iLocal_271 == -1)
					{
						iLocal_271 = unk_0x9CD27B0045628463();
					}
				}
				else if (iLocal_271 != -1)
				{
					iLocal_271 = -1;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != -1)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]))
				{
					if (!func_70(bLocal_50))
					{
						if (iLocal_271 == -1)
						{
							iLocal_271 = unk_0x9CD27B0045628463();
						}
					}
					else if (iLocal_271 != -1)
					{
						iLocal_271 = -1;
					}
				}
			}
		}
		if (iLocal_271 != -1)
		{
			if ((unk_0x9CD27B0045628463() - iLocal_271) > 3000)
			{
				unk_0x2595DD4236549CE3(&(bLocal_49[0]));
				unk_0x2595DD4236549CE3(&(bLocal_49[1]));
				unk_0x43D3807C077261E3(bLocal_50, -1000f, true);
				unk_0x1A9205C1B9EE827F(bLocal_50, true, false);
				unk_0x629BFA74418D6239(&bLocal_50);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_271 != -1)
		{
			iLocal_271 = -1;
		}
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x2A488C176D52CCA5(unk_0x225B8B35C88029B3(iLocal_103), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xE31C2C72B8692B64(bParam0) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_295 == -1)
	{
		iLocal_295 = unk_0x9CD27B0045628463();
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_80 = true;
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
				{
					if (func_27() < 30f && !unk_0x84A2DD9AC37C35C1(Local_106[3 /*10*/]))
					{
						func_4(&Local_106, cLocal_105, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < bLocal_49)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && unk_0x7239B21A38F536BA(bLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !unk_0xEFBE71898A993728(bLocal_52, bLocal_49[iVar0]))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_49[iVar0]);
							unk_0xE8854A4326B9E12B(&iLocal_54);
							if (unk_0x997ABD671D25CA0B(bLocal_49[iVar0], false))
							{
								if (iLocal_87)
								{
									if (unk_0x318234F4F3738AF3("move_injured_generic"))
									{
										unk_0xAF8A94EDE7712BEF(bLocal_49[iVar0], "move_injured_generic", 0.25f);
										iLocal_88[iVar0] = 1;
									}
								}
								unk_0x504D54DF3F6F2247(false, false, 256);
							}
							unk_0x0F804F1DB19B9689(false);
							if (iLocal_88[iVar0])
							{
								unk_0x919BE13EED931959(false, unk_0xD53343AA4FB7DD28(1000, 3000));
							}
							unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_54);
							unk_0x5ABA3986D90D8A3B(bLocal_49[iVar0], iLocal_54);
							unk_0x3841422E9C488D8C(&iLocal_54);
						}
						unk_0x9F7794730795E019(bLocal_49[iVar0], 6, false);
						unk_0x9F7794730795E019(bLocal_49[iVar0], 0, true);
						unk_0x9F7794730795E019(bLocal_49[iVar0], 1, false);
						unk_0x4D9CA1009AFBD057(bLocal_49[iVar0], 1);
						unk_0x0703B9079823DA4A(bLocal_49[iVar0], 1);
						unk_0x9F8AA94D6D97DBF4(bLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0x7239B21A38F536BA(bLocal_52) && unk_0xB346476EF1A64897(bLocal_52)) && !unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_49[iLocal_96]);
				}
				unk_0xC1B1E9A034A63A62(false);
				iLocal_48++;
				break;
			
			case 1:
				if (func_76(iLocal_96))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_49[iLocal_96]);
						unk_0xE8854A4326B9E12B(&iLocal_54);
						if (unk_0x997ABD671D25CA0B(bLocal_49[iLocal_96], false))
						{
							unk_0x504D54DF3F6F2247(false, false, 256);
						}
						unk_0x0F804F1DB19B9689(false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_54);
						unk_0x5ABA3986D90D8A3B(bLocal_49[iLocal_96], iLocal_54);
						unk_0x3841422E9C488D8C(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
				{
					if (unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
					{
						if (Local_106[3 /*10*/] != bLocal_49[1])
						{
							func_75(&Local_106, 3);
							func_75(&Local_106, 4);
							func_74(&Local_106, 3, bLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < bLocal_49)
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_91[iVar0]) && !unk_0x5F9532F3B5CC2551(bLocal_50, false))
							{
								unk_0xE4723DB6E736CCFF(bLocal_49[iVar0], bLocal_50, unk_0x1899F328B0E12848(bLocal_50, 0f, -4f, 0f), 5f, false);
								iLocal_91[iVar0] = 1;
							}
							if (((unk_0xAFC1CA75AD4074D1(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 3) && !bLocal_89)
							{
								unk_0xE4723DB6E736CCFF(bLocal_49[iVar0], bLocal_50, unk_0x225B8B35C88029B3(iLocal_103), 5f, false);
								iLocal_91[iVar0] = 1;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									unk_0x74D4E028107450A9(bLocal_49[iVar0], false);
									iLocal_91[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x9CD27B0045628463() - iLocal_292)) > unk_0x313CE5879CEB6FCD(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
							{
								if (func_4(&Local_106, cLocal_105, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_292 = unk_0x9CD27B0045628463();
								}
							}
						}
					}
					if (unk_0x4C241E39B23DF959(bLocal_50, false))
					{
						if (!bLocal_79)
						{
							if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, false) && (unk_0x9CD27B0045628463() - iLocal_295) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_79)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_91[0] = 0;
									iLocal_91[1] = 0;
									iLocal_295 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < bLocal_49)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (unk_0x83666F9FB8FEBD4B() > iVar1 && iLocal_88[iVar0])
				{
					unk_0xAA74EC0CB0AAEA2C(bLocal_49[iVar0], 0.25f);
					iLocal_88[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0x9CD27B0045628463() - iLocal_282) > 250)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			iVar0 = 0;
			while (iVar0 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
				{
					if (unk_0xFCDFF7B72D23A1AC(bLocal_49[iVar0], unk_0xD80958FC74E988A6(), 19) && unk_0x0267D00AF114F17A(bLocal_49[iVar0], unk_0xD80958FC74E988A6()))
					{
						iLocal_281[iVar0] = 1;
					}
					else
					{
						iLocal_281[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0] || iLocal_281[1]);
}

int func_73()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bLocal_52))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iParam0]))
		{
			if (unk_0xEFBE71898A993728(bLocal_52, bLocal_49[iParam0]))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x961AC54BF0613F5D(bLocal_52, true, true);
						unk_0x539E0AE3E6634B9F(&bLocal_52);
					}
				}
				else
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_49[iParam0], true);
					unk_0xEA47FE3719165B94(bLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, false, false, false, false);
				}
			}
		}
	}
	bVar0 = (!unk_0x7239B21A38F536BA(bLocal_52) || (unk_0x7239B21A38F536BA(bLocal_52) && !unk_0xEFBE71898A993728(bLocal_52, bLocal_49[iParam0])));
	if (bVar0)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iParam0]))
		{
			unk_0x9F8AA94D6D97DBF4(bLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		Var0 = { func_35(unk_0x2274BC1C4885E333(bLocal_50, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true))) };
		bVar1 = ((unk_0xE83D4F9BA2A38914(bLocal_50) + unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1)) + 45f);
		bVar2 = ((unk_0xE83D4F9BA2A38914(bLocal_50) + unk_0x2FFB6B224F4B2926(Var0.f_0, Var0.f_1)) - 45f);
		Var3[0 /*3*/] = { unk_0x163E252DE035A133(unk_0x3FEF770D40960D5A(bLocal_50, true), bVar1, 0f, 4.5f, 0f) };
		Var3[1 /*3*/] = { unk_0x163E252DE035A133(unk_0x3FEF770D40960D5A(bLocal_50, true), bVar2, 0f, 4.5f, 0f) };
		func_78(&bVar1);
		func_78(&bVar2);
		if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_293) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < bLocal_49)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar4]))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < bLocal_49)
			{
				if ((((((!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar4]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f) && (unk_0x9CD27B0045628463() - iLocal_294[iVar4]) > 1000) && !unk_0x997ABD671D25CA0B(bLocal_49[iVar4], false)) && !iLocal_281[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_293 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
						}
						unk_0xE8854A4326B9E12B(&iVar6);
						if (func_72() || func_38(Local_293))
						{
							unk_0xB2A16444EAD9AE47(false, Var3[iVar4 /*3*/], unk_0xD80958FC74E988A6(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(false, unk_0xD80958FC74E988A6(), -1, true);
						}
						else
						{
							unk_0x11315AB3385B8AC0(false, Var3[iVar4 /*3*/], Local_293, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							unk_0x6671F3EEC681BDA1(false, Local_293, -1, true, false);
						}
						unk_0x39E72BC99E6360CB(iVar6);
						unk_0x5ABA3986D90D8A3B(bLocal_49[iVar4], iVar6);
						unk_0x3841422E9C488D8C(&iVar6);
					}
					iLocal_294[iVar4] = unk_0x9CD27B0045628463();
				}
				iVar4++;
			}
		}
	}
}

void func_78(bool bParam0)
{
	if (*bParam0 > 180f)
	{
		*bParam0 = (*bParam0 - 360f);
	}
	else if (*bParam0 < -180f)
	{
		*bParam0 = (*bParam0 + 360f);
	}
}

void func_79(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_79)
				{
					unk_0x9F8AA94D6D97DBF4(bParam0, true);
					unk_0xE1EF3C1216AFF2CD(bParam0);
					Local_283 = { unk_0x44A8FCB8ED227738(bLocal_50, false) };
					Local_284 = { unk_0xAFBD61CC738D9EB9(bLocal_50, 2) };
					Local_285 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_panic", Local_283, Local_284, 0f, 2) };
					if (((!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0x5F9532F3B5CC2551(bLocal_49[1], false)) && !unk_0x84A2DD9AC37C35C1(bLocal_49[0])) && !unk_0x5F9532F3B5CC2551(bLocal_49[0], false))
					{
						if (func_27() < 20f)
						{
							if (bLocal_80)
							{
								func_4(&Local_106, cLocal_105, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xAFC1CA75AD4074D1(iLocal_103))
						{
							if (bLocal_80)
							{
								unk_0x15D3A79D4E44B913(bParam0, unk_0x225B8B35C88029B3(iLocal_103), 2f, -1, 0.25f, false, 1193033728);
							}
							else
							{
								unk_0x15D3A79D4E44B913(bParam0, unk_0x225B8B35C88029B3(iLocal_103), 1f, -1, 0.25f, false, 1193033728);
							}
							iLocal_48++;
						}
						else
						{
							func_85(bParam0);
							iLocal_48 = 2;
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(bParam0))
					{
						if (unk_0xAFC1CA75AD4074D1(iLocal_103))
						{
							unk_0x15D3A79D4E44B913(bParam0, unk_0x225B8B35C88029B3(iLocal_103), 2f, -1, 0.25f, false, 1193033728);
							iLocal_48++;
						}
						else
						{
							func_85(bParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x84A2DD9AC37C35C1(bParam0) && unk_0xAFC1CA75AD4074D1(iLocal_103))
				{
					if ((unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x225B8B35C88029B3(iLocal_103), true) < 2f && !unk_0x47E4E977581C5B55(bParam0)) && (unk_0x9CD27B0045628463() - iLocal_102) > 3000)
					{
						if (unk_0x475768A975D5AD17(bParam0, 4))
						{
							unk_0xADF692B254977C0C(bParam0, joaat("weapon_unarmed"), true);
						}
						unk_0x3288D8ACAECD2AB2(iLocal_103);
						func_85(bParam0);
						unk_0xADF692B254977C0C(bParam0, joaat("weapon_unarmed"), true);
						bLocal_81 = false;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(bParam0) && unk_0x4C241E39B23DF959(bLocal_50, false))
				{
					if (unk_0x77F1BEB8863288D5(bParam0, 713668775) != 1)
					{
						if (bLocal_80)
						{
							unk_0x15D3A79D4E44B913(bParam0, Local_285, 2f, -1, 0.1f, 512, Local_284.f_2);
						}
						else
						{
							unk_0x15D3A79D4E44B913(bParam0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x84A2DD9AC37C35C1(bParam0))
				{
					if (unk_0xAFC1CA75AD4074D1(iLocal_103))
					{
						iLocal_48 = 0;
					}
					else
					{
						bVar0 = unk_0xE83D4F9BA2A38914(bParam0);
						if (bVar0 > 180f)
						{
							bVar0 = (bVar0 - 360f);
						}
						if (bVar0 <= -180f)
						{
							bVar0 = (bVar0 + 360f);
						}
						if (Local_284.f_2 > 180f)
						{
							Local_284.f_2 = (Local_284.f_2 - 360f);
						}
						if (Local_284.f_2 <= -180f)
						{
							Local_284.f_2 = (Local_284.f_2 + 360f);
						}
						if (unk_0x2A488C176D52CCA5(Local_285, unk_0x3FEF770D40960D5A(bParam0, true)) < 0.3f)
						{
							if (unk_0x73D57CFFDD12C355((bVar0 - Local_284.f_2)) < 15f)
							{
								unk_0x8844BBFCE30AA9E9(bParam0, -8f);
								unk_0xE1EF3C1216AFF2CD(bParam0);
								bLocal_288 = true;
								bLocal_286 = unk_0x8C18E0F9080ADD73(Local_283, Local_284, 2);
								if (bLocal_80)
								{
									unk_0xEEA929141F699854(bParam0, bLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xC77720A12FE14A86(bLocal_50, bLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xEEA929141F699854(bParam0, bLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xC77720A12FE14A86(bLocal_50, bLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x2208438012482A1A(bParam0, false, false);
								iLocal_48++;
							}
						}
						else if (unk_0xE31C2C72B8692B64(bParam0) && !unk_0xE33D59DA70B58FDF(Local_283, 2f))
						{
							unk_0x06843DA7060A026B(bParam0, Local_283, true, false, false, true);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x25D39B935A038A26(bLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0.42f;
					}
					else
					{
						fLocal_296 = 0.3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0.52f;
					}
					else
					{
						fLocal_297 = 0.546243f;
					}
					if (!bLocal_79)
					{
						if ((unk_0x7239B21A38F536BA(bLocal_52) && unk_0xEFBE71898A993728(bLocal_52, bParam0)) && unk_0xE4A310B1D7FA73CC(bLocal_286) > fLocal_296)
						{
							if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_50))
							{
								unk_0x961AC54BF0613F5D(bLocal_52, true, true);
								unk_0x1A9205C1B9EE827F(bLocal_52, false, false);
								unk_0x6B9BBD38AB0796DF(bLocal_52, bLocal_50, false, unk_0x2274BC1C4885E333(bLocal_50, unk_0x3FEF770D40960D5A(bLocal_52, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0xE4A310B1D7FA73CC(bLocal_286) > fLocal_297)
					{
						unk_0x43D3807C077261E3(bLocal_50, -4f, true);
						unk_0xE1EF3C1216AFF2CD(bParam0);
						if (unk_0x7239B21A38F536BA(bLocal_52))
						{
							iLocal_76 = 0;
							unk_0x93D9BD300D7789E5(bLocal_50, 2, true);
							unk_0x93D9BD300D7789E5(bLocal_50, 3, true);
							unk_0x9F8AA94D6D97DBF4(bParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x25D39B935A038A26(bLocal_286) && unk_0xE4A310B1D7FA73CC(bLocal_286) > fLocal_297) || !unk_0x25D39B935A038A26(bLocal_286))
				{
					if (!bLocal_80)
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
						{
							unk_0xC20E50AA46D09CA8(bLocal_49[0], bLocal_50, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 6:
				if (unk_0x4C241E39B23DF959(bLocal_50, false))
				{
					if (bLocal_80)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!bLocal_79)
		{
			if ((((((func_27() < 10f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && func_72()) || ((func_27() < 20f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))) || (func_27() < 5f && bLocal_80)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && func_80(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))) || ((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && func_80(unk_0xB6997A7EB3F5C8C0())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_79)
		{
			if (unk_0x25D39B935A038A26(bLocal_286))
			{
				unk_0x43D3807C077261E3(bLocal_50, -8f, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bParam0))
		{
			unk_0x9F8AA94D6D97DBF4(bParam0, false);
		}
	}
	if ((unk_0x4C241E39B23DF959(bLocal_50, false) && iLocal_46 != 7) && unk_0x25D39B935A038A26(bLocal_286))
	{
		unk_0x43D3807C077261E3(bLocal_50, -8f, true);
	}
}

int func_80(bool bParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<3> Var3[4];
	struct<3> Var4[4];
	struct<3> Var5[4];
	struct<3> Var6[4];
	var uVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x7239B21A38F536BA(bLocal_50))
	{
		uVar7 = 4;
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bParam0), &Var1, &Var2);
		Var3[0 /*3*/] = { unk_0x1899F328B0E12848(bParam0, Var1.f_0, Var2.f_1, 0f) };
		Var3[1 /*3*/] = { unk_0x1899F328B0E12848(bParam0, Var2.f_0, Var2.f_1, 0f) };
		Var3[2 /*3*/] = { unk_0x1899F328B0E12848(bParam0, Var2.f_0, Var1.f_1, 0f) };
		Var3[3 /*3*/] = { unk_0x1899F328B0E12848(bParam0, Var1.f_0, Var1.f_1, 0f) };
		bVar8 = -3.7f;
		bVar9 = 1.35f;
		Var4[0 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (-bVar9 - 0.25f), bVar8, 0f) };
		Var4[1 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (bVar9 + 0.25f), bVar8, 0f) };
		Var4[2 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (bVar9 - 0.25f), (bVar8 - 1.55f), 0f) };
		Var4[3 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (-bVar9 + 0.25f), (bVar8 - 1.55f), 0f) };
		Var5[0 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, -bVar9, 0.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (-bVar9 - 0.75f), 0.5f, 0f) };
		Var5[2 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (-bVar9 - 0.75f), 1.5f, 0f) };
		Var5[3 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, -bVar9, 1.5f, 0f) };
		Var6[0 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, bVar9, 0.5f, 0f) };
		Var6[1 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (bVar9 + 0.75f), 0.5f, 0f) };
		Var6[2 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, (bVar9 + 0.75f), 1.5f, 0f) };
		Var6[3 /*3*/] = { unk_0x1899F328B0E12848(bLocal_50, bVar9, 1.5f, 0f) };
		if (!bLocal_79)
		{
			if (func_81(&Var4, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, true))
		{
			if (func_81(&Var5, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0xA3EE4A07279BB9DB(bLocal_49[1], bLocal_50, true))
		{
			if (func_81(&Var6, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param1.f_0;
	fVar2 = Param3.f_0;
	fVar3 = Param5.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x7239B21A38F536BA(bLocal_52))
		{
			bLocal_52 = unk_0x509D5878EB39E842(bLocal_75, Local_63, true, true, false);
			unk_0x1760FFA8AB074D66(bLocal_52, false);
		}
		if (unk_0x7239B21A38F536BA(bLocal_52))
		{
			unk_0x6B9BBD38AB0796DF(bLocal_52, bParam0, unk_0x3F428D08BE5AAE31(bParam0, 28422), Local_68, Local_69, true, false, false, false, 2, true, 0);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < bLocal_49)
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_80 = true;
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				if (unk_0x7239B21A38F536BA(func_89()))
				{
					if (!unk_0x84A2DD9AC37C35C1(func_89()))
					{
						if (unk_0xBB40DD2270B65366(bLocal_50, -1, false) != func_89() && unk_0x22AC59A870E6A669(bLocal_50, -1, false))
						{
							unk_0xC20E50AA46D09CA8(func_89(), bLocal_50, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && func_89() != bLocal_49[1])
				{
					if (unk_0xBB40DD2270B65366(bLocal_50, false, false) != bLocal_49[1] && unk_0x22AC59A870E6A669(bLocal_50, false, false))
					{
						unk_0xC20E50AA46D09CA8(bLocal_49[1], bLocal_50, -1, false, 2f, 1, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0x7239B21A38F536BA(func_89()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0x9454528DF15D657A(func_89(), bLocal_50, unk_0xD80958FC74E988A6(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0x7239B21A38F536BA(func_89()))
				{
					unk_0x659427E0EF36BCDE(func_89(), bLocal_50, false, 5, 0f, 786484, 100f, 100f, true);
					iLocal_48++;
				}
			}
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				if (unk_0xD5037BA82E12416F(bLocal_50) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0x7239B21A38F536BA(bLocal_50) && unk_0x7239B21A38F536BA(unk_0xBB40DD2270B65366(bLocal_50, -1, false))) && (unk_0x5F9532F3B5CC2551(unk_0xBB40DD2270B65366(bLocal_50, -1, false), false) || unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(bLocal_50, -1, false))))
	{
		iVar1 = 0;
		if (unk_0xBB40DD2270B65366(bLocal_50, -1, false) == bLocal_49[0])
		{
			iVar1 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_50, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) > 100f)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar1]) && unk_0x77F1BEB8863288D5(bLocal_49[iVar1], 242628503) != 1)
			{
				unk_0x70A2D1137C8ED7C9(bLocal_49[iVar1], 2, true);
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0x7AA80209BDA643EB(false, bLocal_50, 0);
				unk_0x9454528DF15D657A(false, bLocal_50, unk_0xD80958FC74E988A6(), 8, 50f, 786484, 100f, 5f, true);
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(bLocal_49[iVar1], iVar2);
				unk_0x3841422E9C488D8C(&iVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0x4C241E39B23DF959(bLocal_50, false) || unk_0xAFC1CA75AD4074D1(iLocal_103)) || iLocal_47 == 3) || unk_0x679BE1DAF71DA874(bLocal_50, 0, 7000)) || unk_0x679BE1DAF71DA874(bLocal_50, 3, 30000)) || unk_0x679BE1DAF71DA874(bLocal_50, 2, 30000)) || unk_0x679BE1DAF71DA874(bLocal_50, 1, 40000)) || (iLocal_48 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0x7239B21A38F536BA(bLocal_50))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_50, false))
		{
			if (((((unk_0xEEF059FAD016D209(bLocal_50) < 300 || unk_0xC45D23BAF168AAB8(bLocal_50) < 200f) || (unk_0xBA291848A0815CA9(bLocal_50, false, false) && unk_0xBA291848A0815CA9(bLocal_50, true, false))) || (unk_0xBA291848A0815CA9(bLocal_50, 4, false) && unk_0xBA291848A0815CA9(bLocal_50, 5, false))) || (unk_0xBA291848A0815CA9(bLocal_50, false, false) && unk_0xBA291848A0815CA9(bLocal_50, 4, false))) || (unk_0xBA291848A0815CA9(bLocal_50, true, false) && unk_0xBA291848A0815CA9(bLocal_50, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x5F9532F3B5CC2551(bLocal_49[0], false))
		{
			if (!unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, false))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0x5F9532F3B5CC2551(bLocal_49[1], false))
		{
			if (!unk_0xA3EE4A07279BB9DB(bLocal_49[1], bLocal_50, false))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x5F9532F3B5CC2551(bLocal_49[0], false))
	{
		return bLocal_49[0];
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0x5F9532F3B5CC2551(bLocal_49[1], false))
	{
		return bLocal_49[1];
	}
	return 0;
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_79)
			{
				if (unk_0x7239B21A38F536BA(bLocal_52) && unk_0xB346476EF1A64897(bLocal_52))
				{
					unk_0x961AC54BF0613F5D(bLocal_52, true, true);
				}
			}
			if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_106, cLocal_105, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < bLocal_49)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
					{
						unk_0x9F7794730795E019(bLocal_49[iVar0], 17, true);
						unk_0x70A2D1137C8ED7C9(bLocal_49[iVar0], 128, true);
						unk_0x70A2D1137C8ED7C9(bLocal_49[iVar0], 16, true);
						unk_0x9F7794730795E019(bLocal_49[iVar0], 1, false);
						unk_0xE8854A4326B9E12B(&iVar1);
						if (unk_0x997ABD671D25CA0B(bLocal_49[iVar0], true))
						{
							unk_0x504D54DF3F6F2247(bLocal_49[iVar0], false, 256);
						}
						unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
						unk_0x39E72BC99E6360CB(iVar1);
						unk_0x5ABA3986D90D8A3B(bLocal_49[iVar0], iVar1);
						unk_0x3841422E9C488D8C(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = true;
			iLocal_48++;
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				if (func_91(bLocal_50, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_91(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar1 = unk_0xA7C4F2C6E744A550(bParam0) + 1;
	if (iParam4 || !unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_93(bParam0, (iVar0 - 1), bParam6, bParam7);
			if (unk_0x7239B21A38F536BA(bVar2))
			{
				if (iParam3 && bVar2 == unk_0xD80958FC74E988A6())
				{
				}
				else if (bParam2)
				{
					if (unk_0x12534C348C6CB68B(bVar2))
					{
						bVar3 = unk_0x6C0E2E0125610278(bVar2);
						if (((!unk_0x84A2DD9AC37C35C1(bVar2) && bVar3 != func_10()) && func_92(bVar3, 1, 1)) || iParam8)
						{
							if (unk_0xE28E54788CE8F12D(unk_0x6C0E2E0125610278(bVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x84A2DD9AC37C35C1(bVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(bool bParam0, bool bParam1, bool bParam2)
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

bool func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (!unk_0x22AC59A870E6A669(bParam0, bParam1, bParam3))
	{
		bVar0 = unk_0xBB40DD2270B65366(bParam0, bParam1, bParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7239B21A38F536BA(bVar0) && !unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			bVar0 = unk_0x83F969AA1EE2A664(bParam0, bParam1);
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0x77F1BEB8863288D5(bVar0, 451360105) == 1 || unk_0x77F1BEB8863288D5(bVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, false), unk_0x3FEF770D40960D5A(bVar0, false)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

void func_94()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_4(&Local_106, cLocal_105, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x7239B21A38F536BA(bLocal_52) && unk_0xB346476EF1A64897(bLocal_52))
					{
						if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_49[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_49[0]);
						}
						if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_49[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_48 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_96))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]))
					{
						func_95(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_106, cLocal_105, "RESEC_CAR2", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(false);
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if ((unk_0x83666F9FB8FEBD4B() > 12000 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR3", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					iLocal_48++;
				}
				break;
			
			case 4:
				if ((unk_0x83666F9FB8FEBD4B() > 7000 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR4", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_51, false) && unk_0x4C241E39B23DF959(bLocal_50, false))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bLocal_51, true), unk_0x3FEF770D40960D5A(bLocal_50, true)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0x5F9532F3B5CC2551(bLocal_51, false) || !unk_0x4C241E39B23DF959(bLocal_51, false)) || (!unk_0x5333F526F6AB19AA(bLocal_51, 90f) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_51, true)))
		{
			if (!func_80(bLocal_51))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xC86D67D52A707CF8(bLocal_49[0], unk_0xD80958FC74E988A6(), true))
		{
			func_68(8);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xC86D67D52A707CF8(bLocal_49[1], unk_0xD80958FC74E988A6(), true))
		{
			func_68(8);
		}
	}
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (iLocal_86)
		{
			func_68(8);
		}
	}
	if (bLocal_89)
	{
		func_68(8);
	}
	if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && func_72()) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7))
	{
		func_68(2);
	}
	if (!unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iParam0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_49[iParam0]);
		unk_0xE8854A4326B9E12B(&iLocal_54);
		if (unk_0x997ABD671D25CA0B(bLocal_49[iParam0], false))
		{
			unk_0x504D54DF3F6F2247(false, false, 256);
		}
		unk_0x0F804F1DB19B9689(false);
		unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 0, 2);
		unk_0x9B53BB6E8943AF53(false, unk_0xD80958FC74E988A6(), -1, false);
		unk_0x39E72BC99E6360CB(iLocal_54);
		unk_0x5ABA3986D90D8A3B(bLocal_49[iParam0], iLocal_54);
		unk_0x3841422E9C488D8C(&iLocal_54);
		if (iLocal_97 == 0)
		{
			iLocal_97 = unk_0xD9F8455409B525E9(118, unk_0x3FEF770D40960D5A(bLocal_49[iParam0], true), -1f);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
			{
				unk_0x9F8AA94D6D97DBF4(bLocal_49[0], true);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
			{
				unk_0x9F8AA94D6D97DBF4(bLocal_49[1], true);
			}
			if (func_103())
			{
				if (func_4(&Local_106, cLocal_105, "RESEC_ATT1", 8, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(false);
					func_68(8);
				}
			}
			else if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_106, cLocal_105, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
				{
					func_4(&Local_106, cLocal_105, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0);
				}
				unk_0xC1B1E9A034A63A62(false);
				if (unk_0x7239B21A38F536BA(bLocal_52) && unk_0xB346476EF1A64897(bLocal_52))
				{
					if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_49[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_49[0]);
					}
					if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_49[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_96))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iLocal_96]))
				{
					func_95(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(bLocal_50, 1000) && unk_0x83666F9FB8FEBD4B() > 10000)
				{
					bVar0 = true;
				}
				else if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					unk_0xC1B1E9A034A63A62(7000);
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < bLocal_49)
				{
					if (!func_99(bLocal_49[iVar1], 1000) && (func_27() < 2f && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x5F9532F3B5CC2551(bLocal_49[iVar1], false))
					{
						if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_49[iVar1]) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0x9CD27B0045628463() - iLocal_292)) > unk_0x313CE5879CEB6FCD(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_292 = unk_0x9CD27B0045628463();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < bLocal_49)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x7239B21A38F536BA(bLocal_49[iVar2]))
		{
			if ((unk_0x84A2DD9AC37C35C1(bLocal_49[iVar2]) || unk_0x5F9532F3B5CC2551(bLocal_49[iVar2], false)) && unk_0xC86D67D52A707CF8(bLocal_49[iVar2], unk_0xD80958FC74E988A6(), false))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || unk_0x84A2DD9AC37C35C1(bLocal_49[1])) || bLocal_89)
	{
		func_68(8);
	}
	if ((unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && func_72())
	{
		if (unk_0xC86D67D52A707CF8(bLocal_50, unk_0xD80958FC74E988A6(), true))
		{
			func_68(8);
		}
	}
	if (!unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		func_68(5);
	}
	if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_281[0] && !iLocal_281[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_20471 = 0;
	func_98();
}

void func_98()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_99(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x7239B21A38F536BA(bParam0))
		{
			if ((unk_0x524AC5ECEA15343E(bParam0) && !unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam0))) || (unk_0x6AC7003FA6E5575E(bParam0) && unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam0), false)))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam0, true)) > fLocal_290)
				{
					iVar0 = 1;
				}
				if ((unk_0x9CD27B0045628463() - iLocal_291) > iParam1)
				{
					fLocal_290 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bParam0, true));
					iLocal_291 = unk_0x9CD27B0045628463();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50, 20f, 20f, 5f, false, true, 0) && !unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, 0f, 1.7532f, 0.5984f), unk_0x1899F328B0E12848(bLocal_50, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < bLocal_49)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
			{
				if ((!unk_0xA3EE4A07279BB9DB(bLocal_49[iVar0], bLocal_50, false) && unk_0xEC5F66E459AF3BB2(unk_0xD80958FC74E988A6(), bLocal_50)) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()) == bLocal_50)
		{
			if (unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && unk_0x751B70C3D034E187(bLocal_49[0], unk_0xD80958FC74E988A6(), 20f, 20f, 5f, false, true, 0)) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && unk_0x751B70C3D034E187(bLocal_49[1], unk_0xD80958FC74E988A6(), 20f, 20f, 5f, false, true, 0)))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4) && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_106(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = uParam2;
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
	if (func_104(bVar0))
	{
		func_127();
	}
	if (!unk_0xE520FF1AD2785B40())
	{
		if (func_122(uParam0, bParam4, bParam6, 0))
		{
			func_121(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(bVar0))
			{
				if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && uParam5)
					{
						if (!func_104(bVar0))
						{
							func_137(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(bVar0))
		{
			if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
			{
				if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && uParam5)
				{
					if (!func_104(bVar0))
					{
						func_137(bVar0, -1);
						uParam0->f_3 = bVar0;
						if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xF22B6C47C6EAB066(bVar0))
		{
			if (func_104(bVar0) && unk_0x4D79439A6B55AC67())
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
					func_135(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					func_135(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					func_135(uParam0, bVar0, 1);
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					func_135(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					func_135(uParam0, bVar0, 1);
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				func_135(uParam0, bVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0xD80958FC74E988A6()))
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

int func_108(bool bParam0)
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

int func_109(var uParam0)
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

int func_110(bool bParam0)
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

int func_111(bool bParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(bParam0) && func_104(bParam0)) || func_104("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
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
	if ((func_118() || func_117(Global_4718592.f_168757)) || func_116())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_115(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_114(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_113(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_113(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_92(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_92(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1)
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

bool func_115(bool bParam0, bool bParam1)
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

var func_116()
{
	return Global_2714762.f_19;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2714762.f_18;
}

bool func_119()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x51669F7D1FB53D9F(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0xD51ADCD2D8BC0FB3(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Param1, -1, iVar2, iVar3);
	unk_0x2206BF9A37B7F724("FocusIn", false, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
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

void func_127()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

void func_128(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_130(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_104(bVar0))
	{
		func_127();
	}
	if (func_108(bParam1) && unk_0x47D6F43D77935C75(bParam1))
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
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_131(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(bVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam6)
						{
							if (!func_104(bVar0))
							{
								func_137(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(bVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
				{
					if (((unk_0xE659E47AF827484B(bParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam6)
					{
						if (!func_104(bVar0))
						{
							func_137(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_110(1);
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
				if (func_104(bParam3))
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
						func_135(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_135(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_135(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_135(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_135(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_135(uParam0, bVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, bVar0, 0);
	}
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
		func_135(uParam0, 0, 0);
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

void func_135(var uParam0, bool bParam1, bool bParam2)
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
		if (func_104(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_104(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

void func_136(bool bParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_6), bParam0);
}

void func_137(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_138(int iParam0)
{
	return BitTest(Global_113386.f_24995.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_56(Global_113375))
		{
			func_140(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_56(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
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

int func_142()
{
	switch (func_143(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_43052);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(bLocal_50, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
				{
					unk_0x9F7794730795E019(bLocal_49[0], 6, true);
					unk_0x9F7794730795E019(bLocal_49[1], 6, true);
					unk_0x9F8AA94D6D97DBF4(bLocal_49[0], true);
					unk_0x9F8AA94D6D97DBF4(bLocal_49[1], true);
					if (unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, false) && unk_0xA3EE4A07279BB9DB(bLocal_49[1], bLocal_50, false))
					{
						if (bLocal_45 == 2)
						{
							unk_0xE8854A4326B9E12B(&iVar0);
							unk_0xE2A2AA2F659D77A7(false, bLocal_50, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(false, bLocal_50, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar0);
							unk_0x5ABA3986D90D8A3B(bLocal_49[0], iVar0);
							unk_0x3841422E9C488D8C(&iVar0);
							iLocal_48++;
						}
						else if (bLocal_45 == 4)
						{
							unk_0xE8854A4326B9E12B(&iVar1);
							unk_0xE2A2AA2F659D77A7(false, bLocal_50, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(false, bLocal_50, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar1);
							unk_0x5ABA3986D90D8A3B(bLocal_49[0], iVar1);
							unk_0x3841422E9C488D8C(&iVar1);
							iLocal_48++;
						}
						else if (bLocal_45 == 7)
						{
							unk_0xE8854A4326B9E12B(&iVar2);
							unk_0xE2A2AA2F659D77A7(false, bLocal_50, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x480142959D337D00(false, bLocal_50, 10f, 786603);
							unk_0x39E72BC99E6360CB(iVar2);
							unk_0x5ABA3986D90D8A3B(bLocal_49[0], iVar2);
							unk_0x3841422E9C488D8C(&iVar2);
							iLocal_48++;
						}
						else
						{
							unk_0x480142959D337D00(bLocal_49[0], bLocal_50, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, false) && unk_0x77F1BEB8863288D5(bLocal_49[0], -1794415470) != 1)
						{
							unk_0xC20E50AA46D09CA8(bLocal_49[0], bLocal_50, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xA3EE4A07279BB9DB(bLocal_49[1], bLocal_50, false) && unk_0x77F1BEB8863288D5(bLocal_49[1], -1794415470) != 1)
						{
							unk_0xC20E50AA46D09CA8(bLocal_49[1], bLocal_50, -1, false, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_106, cLocal_105, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar3 = 0;
				while (iVar3 < bLocal_49)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar3]) && !unk_0x5F9532F3B5CC2551(bLocal_49[iVar3], false))
					{
						if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()) && unk_0x9A497FE2DF198913(bLocal_49[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, true))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar4, true);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x3903E216620488E8("PLAYER HAS PROJECTILE WEAPON", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 0, 0, 255, 255);
				if ((unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, 0f, -3.44f, -3f), unk_0x1899F328B0E12848(bLocal_50, 0f, -13.44f, 3f), 2.3f, false, true, 0)) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) < 225f)
				{
					func_68(6);
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, 0f, -3.44f, -3f), unk_0x1899F328B0E12848(bLocal_50, 0f, -13.44f, 3f), 2.3f, false, true, 0))
				{
					unk_0xA3BB2E9555C05A8F("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_50, true)) < 225f)
				{
					unk_0xA3BB2E9555C05A8F("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
				{
				}
			}
		}
		if (((unk_0x4C241E39B23DF959(bLocal_50, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_50, true), 25f, 0)) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_49[0], true), 20f, 0))) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_49[1], true), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_46 != 4)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
			{
				unk_0x9F7794730795E019(bLocal_49[0], 6, false);
				unk_0x9F8AA94D6D97DBF4(bLocal_49[0], false);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
			{
				unk_0x9F7794730795E019(bLocal_49[1], 6, false);
				unk_0x9F8AA94D6D97DBF4(bLocal_49[1], false);
			}
		}
	}
}

int func_149()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(bLocal_50, true) };
		Var1 = { unk_0x0A794A5A57F8DF91(bLocal_50) };
		Var2 = { unk_0x2274BC1C4885E333(bLocal_50, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
		if (((Var2.f_1 > 1f && (((unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_50) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_50)) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_49[0])) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_49[1]))) && unk_0x73D57CFFDD12C355(unk_0x186FC4BE848E1C92(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1)) < 60f) && unk_0x186FC4BE848E1C92(Var1.f_2, Var1.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, 2.7f, 7f, -2f), unk_0x1899F328B0E12848(bLocal_50, 2.7f, -3.25f, 3f), 3f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, -2.7f, 7f, -2f), unk_0x1899F328B0E12848(bLocal_50, -2.7f, -3.25f, 3f), 3f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(bLocal_50, 0f, 7f, -2f), unk_0x1899F328B0E12848(bLocal_50, 0f, 0f, 3f), 2.4f, false, true, 0))
		{
			if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	bool bVar0;
	
	if (unk_0x4C241E39B23DF959(bLocal_50, false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
		{
			bVar0 = unk_0xB6997A7EB3F5C8C0();
		}
		if (unk_0x7239B21A38F536BA(bVar0) && unk_0x7239B21A38F536BA(bLocal_50))
		{
			return ((unk_0x4C241E39B23DF959(bVar0, false) && unk_0x17FFC1B2BA35A494(bVar0, bLocal_50)) && unk_0xD5037BA82E12416F(bVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (iLocal_86)
		{
			return 1;
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) || unk_0x5F9532F3B5CC2551(bLocal_49[0], false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_49[0], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) || unk_0x5F9532F3B5CC2551(bLocal_49[1], false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_49[1], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	bool bVar0;
	
	if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1])) && unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		switch (iLocal_48)
		{
			case 0:
				Local_283 = { unk_0x44A8FCB8ED227738(bLocal_50, false) };
				Local_284 = { unk_0xAFBD61CC738D9EB9(bLocal_50, 2) };
				Local_285 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0f, 2) };
				bLocal_288 = false;
				iLocal_289 = 0;
				unk_0x49733E92263139D1(bLocal_50, 5f);
				unk_0xE8854A4326B9E12B(&iLocal_54);
				unk_0x919BE13EED931959(false, 5000);
				unk_0x15D3A79D4E44B913(false, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
				unk_0x93B93A37987F1F3D(false, Local_284.f_2, 0);
				unk_0x39E72BC99E6360CB(iLocal_54);
				unk_0x5ABA3986D90D8A3B(bLocal_49[1], iLocal_54);
				unk_0x3841422E9C488D8C(&iLocal_54);
				iLocal_48++;
				break;
			
			case 1:
				Local_283 = { unk_0x44A8FCB8ED227738(bLocal_50, false) };
				Local_284 = { unk_0xAFBD61CC738D9EB9(bLocal_50, 2) };
				Local_285 = { unk_0xBE22B26DD764C040("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0f, 2) };
				if (!unk_0x25D39B935A038A26(bLocal_287))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_63) < 22500f && unk_0xE9676F61BC0B3321(bLocal_50))
					{
						bLocal_287 = unk_0x8C18E0F9080ADD73(Local_283, Local_284, 2);
						unk_0xEEA929141F699854(bLocal_49[0], bLocal_287, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						unk_0xD9A897A4C6C2974F(bLocal_287, true);
					}
				}
				if (unk_0x77F1BEB8863288D5(bLocal_49[1], 242628503) != 1)
				{
					unk_0xE8854A4326B9E12B(&iLocal_54);
					unk_0x15D3A79D4E44B913(false, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
					unk_0x93B93A37987F1F3D(false, Local_284.f_2, 0);
					unk_0x39E72BC99E6360CB(iLocal_54);
					unk_0x5ABA3986D90D8A3B(bLocal_49[1], iLocal_54);
					unk_0x3841422E9C488D8C(&iLocal_54);
				}
				bVar0 = unk_0xE83D4F9BA2A38914(bLocal_49[1]);
				if (bVar0 > 180f)
				{
					bVar0 = (bVar0 - 360f);
				}
				if (bVar0 <= -180f)
				{
					bVar0 = (bVar0 + 360f);
				}
				if (Local_284.f_2 > 180f)
				{
					Local_284.f_2 = (Local_284.f_2 - 360f);
				}
				if (Local_284.f_2 <= -180f)
				{
					Local_284.f_2 = (Local_284.f_2 + 360f);
				}
				if (unk_0x73D57CFFDD12C355((bVar0 - Local_284.f_2)) < 15f && unk_0x2A488C176D52CCA5(Local_285, unk_0x3FEF770D40960D5A(bLocal_49[1], true)) < 0.2f)
				{
					unk_0x8844BBFCE30AA9E9(bLocal_49[1], -8f);
					unk_0xE1EF3C1216AFF2CD(bLocal_49[1]);
					bLocal_288 = true;
					bLocal_286 = unk_0x8C18E0F9080ADD73(Local_283, Local_284, 2);
					unk_0xEEA929141F699854(bLocal_49[1], bLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xC77720A12FE14A86(bLocal_50, bLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!iLocal_76)
				{
					if (((unk_0x25D39B935A038A26(bLocal_286) && unk_0xE4A310B1D7FA73CC(bLocal_286) > 0.09f) && unk_0xE4A310B1D7FA73CC(bLocal_286) < 0.11f) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[1], 20f, 20f, 5f, false, true, 0))
						{
							if (func_4(&Local_106, cLocal_105, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
					}
				}
				if (unk_0x25D39B935A038A26(bLocal_286))
				{
					if (!bLocal_79)
					{
						if ((unk_0x7239B21A38F536BA(bLocal_52) && unk_0xEFBE71898A993728(bLocal_52, bLocal_49[1])) && unk_0xE4A310B1D7FA73CC(bLocal_286) > 0.3793f)
						{
							if (!unk_0xEFBE71898A993728(bLocal_52, bLocal_50))
							{
								unk_0x961AC54BF0613F5D(bLocal_52, true, true);
								unk_0x1A9205C1B9EE827F(bLocal_52, false, false);
								unk_0x6B9BBD38AB0796DF(bLocal_52, bLocal_50, false, unk_0x2274BC1C4885E333(bLocal_50, unk_0x3FEF770D40960D5A(bLocal_52, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0xE4A310B1D7FA73CC(bLocal_286) > 0.546243f)
					{
						unk_0x43D3807C077261E3(bLocal_50, -4f, true);
						if (unk_0x7239B21A38F536BA(bLocal_52))
						{
							iLocal_76 = 0;
							unk_0x93D9BD300D7789E5(bLocal_50, 2, true);
							unk_0x93D9BD300D7789E5(bLocal_50, 3, true);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_76)
				{
					if (((unk_0x25D39B935A038A26(bLocal_286) && unk_0xE4A310B1D7FA73CC(bLocal_286) > 0.56f) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_49[1], 20f, 20f, 5f, false, true, 0))
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((unk_0x25D39B935A038A26(bLocal_286) && unk_0xE4A310B1D7FA73CC(bLocal_286) > 0.6f) || !unk_0x25D39B935A038A26(bLocal_286))
					{
						if (unk_0x25D39B935A038A26(bLocal_287))
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_49[0]);
							bLocal_287 = unk_0x8C18E0F9080ADD73(Local_283, Local_284, 2);
							unk_0xEEA929141F699854(bLocal_49[0], bLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_289 = 1;
					}
				}
				else if ((unk_0x25D39B935A038A26(bLocal_287) && unk_0xE4A310B1D7FA73CC(bLocal_287) >= 0.92f) || !unk_0x25D39B935A038A26(bLocal_287))
				{
					if (!unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, false) && unk_0x77F1BEB8863288D5(bLocal_49[0], -1794415470) != 1)
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_49[0]);
						unk_0xC20E50AA46D09CA8(bLocal_49[0], bLocal_50, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0x25D39B935A038A26(bLocal_286) && unk_0xEAF4CD9EA3E7E922(bLocal_49[1], unk_0xD24D37CC275948CC("ENDS_IN_WALK")))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_49[1]);
					unk_0xC20E50AA46D09CA8(bLocal_49[1], bLocal_50, -1, false, 1f, 1, 0);
					unk_0xC1B1E9A034A63A62(false);
				}
				if ((func_88() && unk_0xFE3F9C29F7B32BD5(bLocal_50, false) == 0f) && unk_0xFE3F9C29F7B32BD5(bLocal_50, true) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 15000)
				{
					unk_0x93D9BD300D7789E5(bLocal_50, false, true);
					unk_0x93D9BD300D7789E5(bLocal_50, true, true);
				}
				break;
		}
		if (((!unk_0x84A2DD9AC37C35C1(func_3()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(func_3(), true)) < 30f) && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
	{
		if (unk_0xAFC1CA75AD4074D1(iLocal_103))
		{
			func_68(7);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_97();
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_45 != 2)
					{
						unk_0x83CDB10EA29B370B(bLocal_49[0], "random@security_van", "driver_exit_panic", Local_283, Local_284, 1000f, -8f, -1, 4096, 0f, 2, false);
					}
					else
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_49[0]);
						unk_0xEA47FE3719165B94(bLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, false, false, false, false);
					}
				}
			}
			if ((unk_0x4C241E39B23DF959(bLocal_50, false) && unk_0x25D39B935A038A26(bLocal_286)) && !unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
			{
				unk_0x43D3807C077261E3(bLocal_50, -1000f, true);
				unk_0xE1EF3C1216AFF2CD(bLocal_49[1]);
			}
		}
		if (bLocal_79 && !unk_0xAFC1CA75AD4074D1(iLocal_103))
		{
			unk_0x93D9BD300D7789E5(bLocal_50, 2, true);
			unk_0x93D9BD300D7789E5(bLocal_50, 3, true);
		}
	}
}

int func_154()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (func_80(unk_0xB6997A7EB3F5C8C0()))
				{
					bLocal_51 = unk_0xB6997A7EB3F5C8C0();
					return 1;
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (func_80(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				fLocal_280 = (fLocal_280 + unk_0x15C40837039FFAF7());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (unk_0x15C40837039FFAF7() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				bLocal_51 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < bLocal_49)
	{
		if ((((((!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) && (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_49[iVar0]) || unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true)) < 9f) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0x47E4E977581C5B55(bLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xA3EE4A07279BB9DB(bLocal_49[0], bLocal_50, false) || !unk_0xA3EE4A07279BB9DB(bLocal_49[1], bLocal_50, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true);
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6())))
		{
			if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]))
				{
					if (unk_0x751B70C3D034E187(bLocal_49[0], unk_0xD80958FC74E988A6(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]))
				{
					if (unk_0x751B70C3D034E187(bLocal_49[1], unk_0xD80958FC74E988A6(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < bLocal_49)
	{
		if ((((((!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && unk_0xC86D67D52A707CF8(bLocal_49[iVar0], unk_0xD80958FC74E988A6(), true)) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && unk_0x4859F1FC66A6278E(bLocal_49[iVar0], unk_0xD80958FC74E988A6()))) || unk_0xC86D67D52A707CF8(bLocal_49[iVar0], unk_0xD80958FC74E988A6(), true)) || (unk_0xC86D67D52A707CF8(bLocal_50, unk_0xD80958FC74E988A6(), true) && func_72())) || unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0])) || unk_0x5F9532F3B5CC2551(bLocal_49[iVar0], false))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0x4C241E39B23DF959(bLocal_50, false))
	{
		iVar0 = 0;
		while (iVar0 < bLocal_49)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]))
			{
				if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()) && unk_0x9A497FE2DF198913(bLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_50, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_63, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0x4C241E39B23DF959(bLocal_50, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_50, true), 25f, 0)) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_49[0], true), 20f, 0))) || (!unk_0x84A2DD9AC37C35C1(bLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3FEF770D40960D5A(bLocal_49[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < bLocal_49)
	{
		if (unk_0x7239B21A38F536BA(bLocal_49[iVar0]))
		{
			if ((!unk_0x84A2DD9AC37C35C1(bLocal_49[iVar0]) && !unk_0x5F9532F3B5CC2551(bLocal_49[iVar0], false)) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true), 5f, true) || func_37(unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true) + Vector(5f, 10f, 10f), unk_0x3FEF770D40960D5A(bLocal_49[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xC86D67D52A707CF8(bLocal_49[iVar0], unk_0xD80958FC74E988A6(), true))
				{
					bLocal_80 = true;
					return 1;
				}
			}
			else
			{
				bLocal_80 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	bLocal_50 = unk_0xAF35D0D2583051B0(bLocal_74, Local_63, bLocal_64, true, true, false);
	bLocal_53 = unk_0x509D5878EB39E842(joaat("prop_security_case_01"), Local_63, true, true, false);
	unk_0x6B9BBD38AB0796DF(bLocal_53, bLocal_50, false, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	unk_0xEA1C610A04DB6BBB(bLocal_53, false, false);
	unk_0xA53ED5520C07654A(bLocal_53, bLocal_50, false);
	unk_0x49733E92263139D1(bLocal_50, 5f);
	unk_0xB664292EAECF7FA6(bLocal_50, 3);
	unk_0xFAEE099C6F890BB8(bLocal_53, false, true, true, true, true, true, false, false);
	unk_0xEA02E132F5C68722(bLocal_50, true, 0f);
	unk_0x6B76DC1F3AE6E6A3(bLocal_50, 700, false);
	unk_0x8BA6F76BC53A1493(bLocal_50, false, 0);
	unk_0x0DC7CABAB1E9B67E(bLocal_50, true, 1);
	unk_0x068F64F2470F9656(bLocal_50, false);
	unk_0x5AFEEDD9BB2899D7(bLocal_50, true);
	unk_0x07FB139B592FA687((Local_63.f_0 - 200f), (Local_63.f_1 - 200f), (Local_63.f_0 + 200f), (Local_63.f_1 + 200f));
	if (iLocal_44 == 3)
	{
		bLocal_49[0] = unk_0x7DD959874C1FD534(bLocal_50, 26, bLocal_73, -1, true, true);
		bLocal_49[1] = unk_0x7DD959874C1FD534(bLocal_50, 26, bLocal_73, false, true, true);
		unk_0x2497C4717C8B881E(bLocal_50, true, true, false);
		unk_0x0DC7CABAB1E9B67E(bLocal_50, true, 1);
	}
	else
	{
		bLocal_49[1] = unk_0xD49F9B0955C367DE(26, bLocal_73, Local_61[1 /*3*/], fLocal_62[1], true, true);
		bLocal_49[0] = unk_0xD49F9B0955C367DE(26, bLocal_73, Local_61[0 /*3*/], fLocal_62[0], true, true);
		unk_0x69F4BE8C8CC4796C(bLocal_49[1], bLocal_49[0], -1, 0, 2);
	}
	func_85(bLocal_49[1]);
	unk_0xF372BC22FCB88606("Security_guards", &iLocal_60);
	iVar0 = 0;
	while (iVar0 < bLocal_49)
	{
		unk_0xA9C8960E8684C1B5(bLocal_49[iVar0], false);
		unk_0x9F7794730795E019(bLocal_49[iVar0], 1, false);
		unk_0x9F7794730795E019(bLocal_49[iVar0], 13, false);
		unk_0x9F7794730795E019(bLocal_49[iVar0], 6, true);
		unk_0x9F7794730795E019(bLocal_49[iVar0], 8, false);
		unk_0x9F7794730795E019(bLocal_49[iVar0], 10, true);
		unk_0x70A2D1137C8ED7C9(bLocal_49[iVar0], 512, true);
		unk_0x1913FE4CBF41C463(bLocal_49[iVar0], 118, false);
		unk_0x70A2D1137C8ED7C9(bLocal_49[iVar0], 128, true);
		unk_0xDF993EE5E90ABA25(bLocal_49[iVar0], false);
		unk_0xEA02E132F5C68722(bLocal_49[iVar0], true, 0f);
		unk_0xBC0ED94165A48BC2(bLocal_49[iVar0], true);
		unk_0x94D94BF1A75AED3D(bLocal_49[iVar0], true);
		unk_0xBF0FD6E56C964FCB(bLocal_49[iVar0], joaat("weapon_pistol"), -1, false, true);
		unk_0xC80A74AC829DDD92(bLocal_49[iVar0], iLocal_60);
		unk_0x971D38760FBC02EF(bLocal_49[iVar0], true);
		unk_0x5927F96A78577363(bLocal_49[iVar0], 250);
		iVar0++;
	}
	unk_0x0DC7CABAB1E9B67E(bLocal_49[1], true, 1);
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_60);
	unk_0xBF25EB89375A37AD(1, iLocal_60, joaat("COP"));
	unk_0xBF25EB89375A37AD(2, iLocal_60, joaat("player"));
	unk_0xBF25EB89375A37AD(2, joaat("player"), iLocal_60);
	if (iLocal_44 == 1)
	{
		unk_0x93376B65A266EB5F(bLocal_49[0], 0, true, false, false);
		unk_0xEBD76F2359F190AC(bLocal_49[0], false);
		unk_0x93376B65A266EB5F(bLocal_49[1], 0, true, false, false);
		unk_0xEBD76F2359F190AC(bLocal_49[1], false);
	}
	if (func_16() == 0 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_74(&Local_106, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_74(&Local_106, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_74(&Local_106, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	func_74(&Local_106, 3, bLocal_49[0], "SECVANGUY1", 0, 1);
	func_74(&Local_106, 4, bLocal_49[1], "SECVANGUY2", 0, 1);
	unk_0x0FC2D89AC25A5814(bLocal_74, true);
	unk_0xE163A4BCE4DE6F11(bLocal_73, true);
	if (iLocal_44 != 3)
	{
	}
}

float func_160(bool bParam0, struct<3> Param1, bool bParam2)
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

bool func_161()
{
	func_169(&uLocal_123, bLocal_73);
	func_169(&uLocal_123, bLocal_74);
	func_169(&uLocal_123, bLocal_75);
	func_167(&uLocal_123, "random@security_van");
	func_167(&uLocal_123, "weapons@holster_1h");
	func_167(&uLocal_123, "move_injured_generic");
	func_166(&uLocal_123, 3);
	return func_162(&uLocal_123);
}

int func_162(var uParam0)
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
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_165(bParam0))
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

int func_165(var uParam0)
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

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar5 = func_61();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_172(iVar1, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_113104 > 0;
}

int func_179()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_113375 == func_65() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
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
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(bool bParam0)
{
	func_186(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_186(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_165(*bParam0))
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

void func_187()
{
	bLocal_75 = joaat("prop_security_case_01");
	bLocal_74 = joaat("stockade");
	bLocal_73 = joaat("s_m_m_armoured_01");
	bLocal_94 = unk_0xD53343AA4FB7DD28(3000, 8000);
	switch (bLocal_45)
	{
		case 1:
			Local_70 = { -315.889f, -1550.554f, 7.233013f };
			Local_71 = { -315.2352f, -1366.581f, 45.29617f };
			bLocal_72 = 180f;
			Local_63 = { -331.8429f, -1461.042f, 30.153f };
			bLocal_64 = -64.3539f;
			Local_61[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_62[0] = 158.3857f;
			Local_61[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_62[1] = 290.3041f;
			iLocal_44 = 1;
			break;
		
		case 2:
			Local_70 = { -538.2149f, -868.7426f, 17.96054f };
			Local_71 = { -663.8162f, -867.9987f, 53.66249f };
			bLocal_72 = 121.5f;
			Local_63 = { -588.5128f, -866.9584f, 25.32786f };
			bLocal_64 = -89.02679f;
			Local_61[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_62[0] = 12.5464f;
			Local_61[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_62[1] = 352.4951f;
			iLocal_44 = 1;
			break;
		
		case 3:
			Local_70 = { -468.6309f, 6101.907f, 14.8912f };
			Local_71 = { -359.9734f, 5994.152f, 50.36843f };
			bLocal_72 = 152.25f;
			Local_63 = { -395.6852f, 6056.967f, 30.5001f };
			bLocal_64 = 188.9862f;
			Local_61[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_62[0] = 251.7138f;
			Local_61[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_62[1] = 154.0836f;
			iLocal_44 = 2;
			break;
		
		case 4:
			Local_70 = { -631.3408f, -1105.581f, 7.220509f };
			Local_71 = { -462.1721f, -1103.597f, 62.53583f };
			bLocal_72 = 177.25f;
			Local_63 = { -595.7766f, -1094.089f, 21.1785f };
			bLocal_64 = 263.4662f;
			Local_61[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_62[0] = 338.8304f;
			Local_61[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_62[1] = 151.297f;
			iLocal_44 = 1;
			break;
		
		case 5:
			Local_63 = { -1042.768f, -1049.296f, 1.0825f };
			bLocal_64 = 26.9919f;
			iLocal_44 = 3;
			break;
		
		case 6:
			Local_63 = { -595.5618f, -667.7325f, 31.0544f };
			bLocal_64 = 271.1543f;
			iLocal_44 = 3;
			break;
		
		case 7:
			Local_63 = { 3018.384f, 3634.017f, 70.4076f };
			bLocal_64 = 335.9052f;
			iLocal_44 = 3;
			break;
		
		case 8:
			Local_63 = { -2815.661f, 2208.171f, 27.8382f };
			bLocal_64 = 119.1519f;
			iLocal_44 = 3;
			break;
		
		case 9:
			Local_63 = { 856.7742f, -2067.845f, 29.0704f };
			bLocal_64 = 83.1204f;
			iLocal_44 = 3;
			break;
		
		case 10:
			Local_63 = { 805.1932f, -703.1327f, 28.1632f };
			bLocal_64 = 248.8625f;
			iLocal_44 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_189();
}

void func_189()
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

void func_190(int iParam0)
{
	Global_113375 = iParam0;
}

int func_191(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_65();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_230())
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
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
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
		if (!func_228(iParam1))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_214(bVar4))
				{
					if (func_192(iVar2))
					{
						if (!func_134(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_16() != iVar2)
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

bool func_192(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_193(bVar0);
}

int func_193(bool bParam0)
{
	return func_194(bParam0, 1);
}

int func_194(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(bParam0))
	{
		return 0;
	}
	func_195(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(bParam0, bParam1))
	{
		bVar0 = func_205(bParam1);
		iVar1 = func_203(bParam0);
		iVar2 = (func_203(bParam0) - func_203(bParam1));
		iVar3 = (func_205(bParam0) - func_205(bParam1));
		iVar4 = (func_202(bParam0) - func_202(bParam1));
		iVar5 = (func_201(bParam0) - func_201(bParam1));
		iVar6 = (func_200(bParam0) - func_200(bParam1));
		iVar7 = (func_199(bParam0) - func_199(bParam1));
	}
	else
	{
		bVar0 = func_205(bParam0);
		iVar1 = func_203(bParam1);
		iVar2 = (func_203(bParam1) - func_203(bParam0));
		iVar3 = (func_205(bParam1) - func_205(bParam0));
		iVar4 = (func_202(bParam1) - func_202(bParam0));
		iVar5 = (func_201(bParam1) - func_201(bParam0));
		iVar6 = (func_200(bParam1) - func_200(bParam0));
		iVar7 = (func_199(bParam1) - func_199(bParam0));
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
		iVar4 = (iVar4 + func_198(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_197(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_197(bool bParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_200(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_201(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_202(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_203(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_204(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_205(bool bParam0)
{
	return (bParam0 && 15);
}

int func_206(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(bParam1) || !func_214(bParam0))
	{
		return 1;
	}
	iVar0 = func_203(bParam0);
	iVar1 = func_203(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(bParam0);
	iVar1 = func_205(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(bParam0);
	iVar1 = func_202(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(bParam0);
	iVar1 = func_201(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(bParam0);
	iVar1 = func_200(bParam1);
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
	return 0;
}

bool func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x494E97C2EF27C470());
	func_212(&uVar0, unk_0x13D2B8ADD79640F2());
	func_211(&uVar0, unk_0x25223CA6B4D20B7F());
	func_210(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_209(&uVar0, unk_0xBBC72712E80257A1());
	func_208(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (bParam1 < 1 || bParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_211(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_213(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_214(bool bParam0)
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
	iVar0 = func_199(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(bParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_1()) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_1()) || Global_31962) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_1()) || func_221()) || Global_112433) || Global_31962) || func_223()) || Global_44238) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_1()) || Global_112433) || Global_31962) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_100480.f_1;
}

int func_218()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_100493.f_376 > 0;
}

bool func_222()
{
	return Global_100493.f_375 > 0;
}

var func_223()
{
	return Global_1575058;
}

int func_224()
{
	func_15();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(bool bParam0)
{
	return func_206(func_207(), bParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
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

int func_229()
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

int func_230()
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

void func_231()
{
	if (func_183())
	{
		if (unk_0xAFC1CA75AD4074D1(iLocal_103))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_58))
			{
				unk_0x86A652570E5F25DD(&bLocal_58);
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_53))
		{
			unk_0x539E0AE3E6634B9F(&bLocal_53);
		}
		if (unk_0x7239B21A38F536BA(bLocal_52))
		{
			if (unk_0xE31C2C72B8692B64(bLocal_52))
			{
				unk_0x539E0AE3E6634B9F(&bLocal_52);
			}
			else
			{
				unk_0x3AE22DEB5BA5A3E6(&bLocal_52);
			}
		}
		unk_0xE532F5D78798DAAB(bLocal_74);
		unk_0xE532F5D78798DAAB(bLocal_73);
		unk_0xE532F5D78798DAAB(bLocal_75);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0xE163A4BCE4DE6F11(bLocal_73, false);
		unk_0x0FC2D89AC25A5814(bLocal_74, false);
	}
	if (iLocal_97 != 0)
	{
		unk_0x2CDA538C44C6CCE5(iLocal_97);
	}
	unk_0x31D16B74C6E29D66(iLocal_59, false);
	func_135(&uLocal_111, 0, 0);
	func_237(-1);
	func_232(&uLocal_123, 0);
	unk_0x1090044AD1DA76FA();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		switch (func_165(bParam0))
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

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_113375, 1), 64);
		if (func_64(Global_113375) > 0)
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
	func_238(&Global_32019);
	Global_113376 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	bVar2 = func_202(*uParam0);
	bVar3 = func_201(*uParam0);
	bVar4 = func_200(*uParam0);
	bVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_246(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_213(uParam0, bParam1);
	func_212(uParam0, bParam2);
	func_211(uParam0, bParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, bParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
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

int func_248(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x22AC59A870E6A669(bParam0, -1, false))
		{
			return -1;
		}
		if (unk_0x22AC59A870E6A669(bParam0, false, false))
		{
			return 0;
		}
		if (unk_0x22AC59A870E6A669(bParam0, true, false))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 2, false))
		{
			return 2;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 3, false))
		{
			return 3;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 4, false))
		{
			return 4;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 5, false))
		{
			return 5;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 6, false))
		{
			return 6;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 7, false))
		{
			return 7;
		}
		if (unk_0x22AC59A870E6A669(bParam0, 8, false))
		{
			return 8;
		}
	}
	return -2;
}

