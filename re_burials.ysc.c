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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52[2] = { 0, 0 };
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73[2];
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	bool bLocal_77 = 0;
	float fLocal_78[2] = { 0f, 0f };
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	bool bLocal_87[2] = { 0, 0 };
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
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
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
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
	var uLocal_290 = 0;
	var uLocal_291 = 0;
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
	bool bLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	Local_85 = { 154.92f, 6841.12f, 19.14f };
	bLocal_99 = 200;
	Local_113 = { -1161.199f, 934.5912f, 196.7591f };
	Local_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				unk_0xED74007FFB146BC2(bLocal_51);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (unk_0xC5042CC6F5E3D450() || iLocal_105)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0x208784099002BC30("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_60)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						func_150();
						switch (iLocal_47)
						{
							case 0:
								func_140();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_133(bLocal_52[0], &iLocal_102, &uLocal_101, uLocal_100, iLocal_103, 7f, 0) && !func_133(bLocal_52[1], &iLocal_102, &uLocal_101, uLocal_100, iLocal_103, 7f, 0)) && !func_132())
								{
									switch (iLocal_48)
									{
										case 0:
											func_131();
											if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_72, 50f, 35f, 50f, false, true, 0))
											{
												func_130();
											}
											if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_72, 80f, 65f, 50f, false, true, 0))
											{
												func_129();
											}
											if (!unk_0x5F9532F3B5CC2551(bLocal_54, false))
											{
												if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_128();
													if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
													{
														unk_0x75A16C3DA34F1245(bLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (unk_0xA6DB27D19ECBB7DA(bLocal_87[iLocal_58]))
														{
															unk_0x75A16C3DA34F1245(bLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_166())
													{
														func_119(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_133(bLocal_52[0], &iLocal_102, &uLocal_101, uLocal_100, iLocal_103, 7f, 0) || func_133(bLocal_52[1], &iLocal_102, &uLocal_101, uLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_166())
									{
										func_119(1);
									}
									if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
									{
										unk_0x75A16C3DA34F1245(bLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xA6DB27D19ECBB7DA(bLocal_87[iLocal_58]))
										{
											unk_0x75A16C3DA34F1245(bLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_118();
											break;
										
										case 1:
											func_118();
											break;
										
										case 2:
											func_118();
											break;
										
										case 3:
											func_118();
											break;
										
										case 4:
											func_118();
											break;
										
										case 5:
											func_118();
											break;
										}
								}
								if (func_132())
								{
									iLocal_69 = 1;
									if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
									{
										unk_0x75A16C3DA34F1245(bLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xA6DB27D19ECBB7DA(bLocal_87[iLocal_58]))
										{
											unk_0x75A16C3DA34F1245(bLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_117())
									{
										switch (iLocal_49)
										{
											case 1:
												func_114();
												break;
											
											case 3:
												func_113();
												break;
											
											case 4:
												func_112();
												break;
											
											case 5:
												func_110();
												unk_0x4EDE34FBADD967A6(false);
												if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
												{
													func_108(bLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
												{
													func_108(bLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_118();
												break;
											
											case 6:
												func_110();
												unk_0x4EDE34FBADD967A6(false);
												if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
												{
													func_108(bLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
												{
													func_108(bLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										unk_0x4EDE34FBADD967A6(false);
										iVar0 = 0;
										while (iVar0 < bLocal_52)
										{
											if (!unk_0x84A2DD9AC37C35C1(bLocal_52[iVar0]))
											{
												unk_0xBC9AE166038A5CEC(bLocal_52[iVar0], 5, 0, 0);
												unk_0x22B0D0E37CCB840D(bLocal_52[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
												unk_0x971D38760FBC02EF(bLocal_52[iVar0], true);
												if (unk_0x7239B21A38F536BA(bLocal_56))
												{
													if (unk_0xB346476EF1A64897(bLocal_56))
													{
														unk_0x961AC54BF0613F5D(bLocal_56, true, true);
													}
												}
												if (unk_0xA6DB27D19ECBB7DA(bLocal_87[iVar0]))
												{
													unk_0x86A652570E5F25DD(&(bLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_107();
								}
								if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
								{
									func_92();
								}
								break;
							
							case 4:
								func_91();
								if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_85, 100f, 100f, 100f, true, true, 0))
								{
									unk_0x020E5F00CDA207BA(1f);
									if (unk_0x7239B21A38F536BA(bLocal_52[0]) && unk_0x7239B21A38F536BA(bLocal_52[1]))
									{
										unk_0x2595DD4236549CE3(&(bLocal_52[0]));
										unk_0x2595DD4236549CE3(&(bLocal_52[1]));
									}
								}
								if (!unk_0x7239B21A38F536BA(bLocal_53))
								{
									if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_113, 200f, 200f, 200f, true, true, 0))
									{
										unk_0x963D27A58DF860AC(joaat("s_m_m_highsec_01"));
										unk_0x963D27A58DF860AC(joaat("granger"));
										if (unk_0x98A4EB5D89A0C952(joaat("s_m_m_highsec_01")) && unk_0x98A4EB5D89A0C952(joaat("granger")))
										{
											bLocal_55 = unk_0xAF35D0D2583051B0(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											unk_0x5927F96A78577363(bLocal_55, 200);
											unk_0x93AE6A61BE015BF1(bLocal_55, 1.5f);
											bLocal_53 = unk_0x7DD959874C1FD534(bLocal_55, 26, joaat("s_m_m_highsec_01"), -1, true, true);
											unk_0x262B14F48D29DE80(bLocal_53, 0, false, 2, 0);
											unk_0x262B14F48D29DE80(bLocal_53, 3, false, false, 0);
											unk_0x262B14F48D29DE80(bLocal_53, 4, false, false, 0);
											unk_0xBF0FD6E56C964FCB(bLocal_53, joaat("weapon_pistol"), -1, true, true);
											unk_0xC80A74AC829DDD92(bLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
								{
									if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 1)
										{
											if (!iLocal_106)
											{
												func_87(0);
												func_110();
												unk_0x4EDE34FBADD967A6(false);
												func_71(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_113, Global_22, true, true, 0) && unk_0x751B70C3D034E187(bLocal_51, unk_0xD80958FC74E988A6(), 10f, 10f, 10f, false, true, 0))
									{
										if (unk_0x5891CAC5D4ACFF74(bLocal_51))
										{
											if (unk_0xA6DB27D19ECBB7DA(bLocal_111))
											{
												unk_0x86A652570E5F25DD(&bLocal_111);
											}
											if (unk_0xA6DB27D19ECBB7DA(bLocal_112))
											{
												unk_0x86A652570E5F25DD(&bLocal_112);
											}
											if (func_70())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(Local_113))
										{
											func_87(0);
											func_110();
											unk_0x4EDE34FBADD967A6(false);
											func_71(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_110();
											unk_0x4EDE34FBADD967A6(false);
											func_71(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x7239B21A38F536BA(bLocal_56))
								{
									if (unk_0xB346476EF1A64897(bLocal_56))
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
										{
											if (unk_0x1F0B79228E461EC9(bLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x961AC54BF0613F5D(bLocal_56, true, true);
												}
											}
											else
											{
												unk_0x961AC54BF0613F5D(bLocal_56, true, true);
											}
										}
									}
								}
								if (unk_0x84A2DD9AC37C35C1(bLocal_52[0]) || unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (unk_0x4C241E39B23DF959(bLocal_54, false))
									{
										if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
										{
											unk_0xF1C03A5352243A30(bLocal_52[0]);
											if (unk_0x639431E895B9AA57(bLocal_52[0], bLocal_54, -1, false, false) || unk_0x639431E895B9AA57(bLocal_52[0], bLocal_54, 0, false, false))
											{
												if (!iLocal_124)
												{
													unk_0xE1EF3C1216AFF2CD(bLocal_52[0]);
													if (unk_0x7239B21A38F536BA(bLocal_56))
													{
														if (unk_0xB346476EF1A64897(bLocal_56))
														{
															unk_0x961AC54BF0613F5D(bLocal_56, true, true);
														}
													}
													unk_0xE8854A4326B9E12B(&iLocal_59);
													unk_0x0F804F1DB19B9689(false);
													unk_0xB2A16444EAD9AE47(false, unk_0x1899F328B0E12848(bLocal_54, -0.5f, 0.5f, 0f), unk_0xD80958FC74E988A6(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xC20E50AA46D09CA8(false, bLocal_54, -1, -1, 3f, 9, 0);
													unk_0x9454528DF15D657A(false, bLocal_54, unk_0xD80958FC74E988A6(), 8, 30f, 262144, -1f, 10f, true);
													unk_0x39E72BC99E6360CB(iLocal_59);
													unk_0x5ABA3986D90D8A3B(bLocal_52[0], iLocal_59);
													unk_0x3841422E9C488D8C(&iLocal_59);
													unk_0x971D38760FBC02EF(bLocal_52[0], true);
													unk_0x25367DE49D64CF16(bLocal_54, true);
													iLocal_124 = 1;
												}
												else if (unk_0x77F1BEB8863288D5(bLocal_52[0], 242628503) == 1)
												{
													if (unk_0x00A9010CFE1E3533(bLocal_52[0]) == 3)
													{
														if (!unk_0x751B70C3D034E187(bLocal_52[0], unk_0xD80958FC74E988A6(), 10f, 10f, 10f, false, true, 0) && !unk_0x20B60995556D004F(bLocal_52[0], Local_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x2595DD4236549CE3(&(bLocal_52[0]));
														}
													}
												}
											}
											else
											{
												unk_0xF166E48407BAC484(bLocal_52[0], unk_0xD80958FC74E988A6(), 0, 16);
												unk_0x971D38760FBC02EF(bLocal_52[0], true);
											}
										}
										if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
										{
											unk_0xF1C03A5352243A30(bLocal_52[1]);
											if (unk_0x639431E895B9AA57(bLocal_52[1], bLocal_54, -1, false, false) || unk_0x639431E895B9AA57(bLocal_52[1], bLocal_54, 0, false, false))
											{
												if (!iLocal_124)
												{
													unk_0xE1EF3C1216AFF2CD(bLocal_52[1]);
													unk_0xE8854A4326B9E12B(&iLocal_59);
													unk_0x0F804F1DB19B9689(false);
													unk_0xB2A16444EAD9AE47(false, unk_0x1899F328B0E12848(bLocal_54, -0.5f, 0.5f, 0f), unk_0xD80958FC74E988A6(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xC20E50AA46D09CA8(false, bLocal_54, -1, -1, 3f, 9, 0);
													unk_0x9454528DF15D657A(false, bLocal_54, unk_0xD80958FC74E988A6(), 8, 30f, 262144, -1f, 10f, true);
													unk_0x39E72BC99E6360CB(iLocal_59);
													unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
													unk_0x3841422E9C488D8C(&iLocal_59);
													unk_0x971D38760FBC02EF(bLocal_52[1], true);
													unk_0x25367DE49D64CF16(bLocal_54, true);
													iLocal_124 = 1;
												}
												else if (unk_0x77F1BEB8863288D5(bLocal_52[1], 242628503) == 1)
												{
													if (unk_0x00A9010CFE1E3533(bLocal_52[1]) == 3)
													{
														if (!unk_0x751B70C3D034E187(bLocal_52[1], unk_0xD80958FC74E988A6(), 10f, 10f, 10f, false, true, 0) && !unk_0x20B60995556D004F(bLocal_52[1], Local_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x2595DD4236549CE3(&(bLocal_52[1]));
														}
													}
												}
											}
											else
											{
												unk_0xF166E48407BAC484(bLocal_52[1], unk_0xD80958FC74E988A6(), 0, 16);
												unk_0x971D38760FBC02EF(bLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
							{
								if (unk_0x20B60995556D004F(bLocal_51, Local_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(false);
									func_110();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x7239B21A38F536BA(bLocal_51))
							{
								unk_0x9614299DCB53E54B(&bLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								unk_0x706D57B0F50DA710("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									unk_0xC1B1E9A034A63A62(false);
									iLocal_84 = unk_0x9CD27B0045628463() + 8500;
									iLocal_68 = 1;
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
								{
									if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 20f, 20f, 20f, false, true, 1))
									{
										if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0x77F1BEB8863288D5(bLocal_51, 1785177548) != 1 && unk_0x77F1BEB8863288D5(bLocal_51, 1785177548) != 0)
									{
										unk_0xAAA34F8A7CB32098(bLocal_51);
										bLocal_303 = unk_0x8C18E0F9080ADD73(Local_72, -2f, -4f, 18f, 2);
										unk_0xEEA929141F699854(bLocal_51, bLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1000f, 0);
										unk_0xC77720A12FE14A86(bLocal_57[0], bLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
										unk_0xC77720A12FE14A86(bLocal_57[1], bLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
										unk_0xD9A897A4C6C2974F(bLocal_303, true);
										unk_0x971D38760FBC02EF(bLocal_51, true);
									}
									if (unk_0x28D3FED7190D3A0B(bLocal_51))
									{
										unk_0xDF1AF8B5D56542FA(bLocal_51, true);
										unk_0xC52E0F855C58FC2E(bLocal_51, true);
										unk_0x6B76DC1F3AE6E6A3(bLocal_51, false, false);
									}
								}
								if ((unk_0x95EB9964FF5C5C65(bLocal_51) || unk_0xDFD5033FDBA0A9C8(bLocal_51)) || (bLocal_99 - unk_0xEEF059FAD016D209(bLocal_51)) >= 50)
								{
									unk_0xDF1AF8B5D56542FA(bLocal_51, true);
									unk_0xC52E0F855C58FC2E(bLocal_51, true);
									unk_0x6B76DC1F3AE6E6A3(bLocal_51, false, false);
								}
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
								{
									if (unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 5f)
									{
									}
									else if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), bLocal_51))
									{
										unk_0xDF1AF8B5D56542FA(bLocal_51, true);
										unk_0xC52E0F855C58FC2E(bLocal_51, true);
										unk_0x6B76DC1F3AE6E6A3(bLocal_51, false, false);
									}
								}
								if (!unk_0x5F9532F3B5CC2551(bLocal_54, false))
								{
									if (unk_0x17FFC1B2BA35A494(bLocal_54, bLocal_51))
									{
										unk_0xDF1AF8B5D56542FA(bLocal_51, true);
										unk_0xC52E0F855C58FC2E(bLocal_51, true);
										unk_0x6B76DC1F3AE6E6A3(bLocal_51, false, false);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	if (!bLocal_104)
	{
		if (!unk_0x7239B21A38F536BA(bLocal_52[0]) && !unk_0x7239B21A38F536BA(bLocal_52[1]))
		{
			return 1;
		}
		if (unk_0x7239B21A38F536BA(bLocal_52[0]) && unk_0x7239B21A38F536BA(bLocal_52[1]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				return 1;
			}
			if (unk_0x5983BB449D7FDB12(bLocal_52[0]) && unk_0x5983BB449D7FDB12(bLocal_52[1]))
			{
				return 1;
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_52[0]) && !unk_0x7239B21A38F536BA(bLocal_52[1]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
			{
				return 1;
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_52[1]) && !unk_0x7239B21A38F536BA(bLocal_52[0]))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_87[0]))
		{
			if (unk_0x7239B21A38F536BA(bLocal_56))
			{
				if (unk_0xB346476EF1A64897(bLocal_56))
				{
					unk_0x961AC54BF0613F5D(bLocal_56, true, true);
				}
			}
			func_3(&uLocal_138, 4);
			unk_0x86A652570E5F25DD(&(bLocal_87[0]));
		}
	}
	if (unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			unk_0x86A652570E5F25DD(&(bLocal_87[1]));
		}
	}
	if (unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
		{
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
		{
			func_3(&uLocal_138, 5);
			unk_0x86A652570E5F25DD(&bLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x706D57B0F50DA710("RE6_END");
	func_212();
}

int func_5()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_32198)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_113372 = iParam0;
}

void func_8(int iParam0)
{
	Global_22616 = iParam0;
}

int func_9()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_32197;
}

void func_11()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) || !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < unk_0x9CD27B0045628463())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < unk_0x9CD27B0045628463())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < unk_0x9CD27B0045628463())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < unk_0x9CD27B0045628463())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_46())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0x3DACA8DDC6FD4980(unk_0x4F8644AF03D0E0D6(), true, 0);
	func_17(-1, 0);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

int func_16(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_17(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_39(iParam0))
	{
		func_38(iParam0, bParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_24(iParam0, bParam1) != 322)
		{
			func_18(func_24(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
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

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_20() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_31959;
}

int func_21(int iParam0, bool bParam1)
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

void func_22(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_23();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_23()
{
	return Global_1574918;
}

int func_24(int iParam0, bool bParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_35(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_34(unk_0xD80958FC74E988A6());
			if (func_33(iVar0) && (!func_32(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_33(Global_113386.f_2363.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_37(int iParam0)
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

void func_38(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar1;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
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
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xE80492A9AC099A93(&(Var0.f_1), true);
		unk_0xE80492A9AC099A93(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam2, bVar1))
			{
				func_43(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

void func_43(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(bParam0))
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

int func_44(int iParam0)
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

int func_45()
{
	func_31();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_46()
{
	return 1;
}

void func_47()
{
	switch (iLocal_110)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51) && unk_0x4C241E39B23DF959(bLocal_55, false))
			{
				if (unk_0x5891CAC5D4ACFF74(bLocal_51))
				{
					unk_0xED74007FFB146BC2(bLocal_51);
				}
				unk_0x9F8AA94D6D97DBF4(bLocal_51, false);
				unk_0x63F58F7C80513AAD(bLocal_51, true);
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 5000, 2048, 2);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
				unk_0xC20E50AA46D09CA8(false, bLocal_55, -1, false, 1f, 1, 0);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				unk_0x971D38760FBC02EF(bLocal_51, true);
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(bLocal_55, false))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
					{
						unk_0x480142959D337D00(bLocal_53, bLocal_54, 10f, 786599);
						unk_0x971D38760FBC02EF(bLocal_53, true);
					}
					unk_0x25367DE49D64CF16(bLocal_55, true);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			unk_0xC1B1E9A034A63A62(false);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_110)
	{
		case 0:
			unk_0xBF25EB89375A37AD(255, iLocal_137, joaat("player"));
			unk_0xBF25EB89375A37AD(255, joaat("player"), iLocal_137);
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 5f, 2, false);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_51) && unk_0x4C241E39B23DF959(bLocal_55, false))
				{
					if (unk_0x5891CAC5D4ACFF74(bLocal_51))
					{
						unk_0xED74007FFB146BC2(bLocal_51);
					}
					unk_0x9F8AA94D6D97DBF4(bLocal_51, false);
					unk_0x63F58F7C80513AAD(bLocal_51, true);
					unk_0xE8854A4326B9E12B(&iLocal_59);
					unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 5000, 2048, 2);
					unk_0xC20E50AA46D09CA8(false, bLocal_55, -1, false, 1f, 1, 0);
					unk_0x39E72BC99E6360CB(iLocal_59);
					unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_59);
					unk_0x3841422E9C488D8C(&iLocal_59);
					unk_0x971D38760FBC02EF(bLocal_51, true);
					func_110();
					unk_0x4EDE34FBADD967A6(false);
					func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (!unk_0xB8E181E559464527(unk_0xB6997A7EB3F5C8C0(), true))
					{
						if (unk_0xFE3F9C29F7B32BD5(unk_0xB6997A7EB3F5C8C0(), true) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (unk_0x4C241E39B23DF959(bLocal_55, false))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_51, bLocal_55, false))
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
					{
						unk_0x480142959D337D00(bLocal_53, bLocal_55, 10f, 786599);
						unk_0x971D38760FBC02EF(bLocal_53, true);
					}
					unk_0x25367DE49D64CF16(bLocal_55, true);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
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

int func_50()
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				if (!Global_32202)
				{
					unk_0x706D57B0F50DA710("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				unk_0x706D57B0F50DA710("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0)
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_32200)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0) > (fLocal_45 + 200f) || unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_52()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			unk_0xBD2A8EC3AF4DE7DB(bLocal_51, 1, 1);
			unk_0x0F804F1DB19B9689(bLocal_51);
		}
		if (func_56("REBU2_LV2_9") || iLocal_66 > 1)
		{
			unk_0xBD2A8EC3AF4DE7DB(bLocal_51, 0, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_71(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = unk_0x9CD27B0045628463() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < unk_0x9CD27B0045628463())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = unk_0x9CD27B0045628463() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < unk_0x9CD27B0045628463())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = unk_0x9CD27B0045628463() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < unk_0x9CD27B0045628463())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = unk_0x9CD27B0045628463() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < unk_0x9CD27B0045628463())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_54(bool bParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_55()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_56(bool bParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_57()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = unk_0x480357EE890C295A();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_58()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), true) && unk_0xA3EE4A07279BB9DB(bLocal_51, unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_110();
						unk_0x4EDE34FBADD967A6(false);
						func_71(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false) && unk_0xA3EE4A07279BB9DB(bLocal_51, unk_0xB6997A7EB3F5C8C0(), false))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
			{
				func_87(0);
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				func_87(0);
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_59()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (!func_62())
			{
				if (unk_0x5891CAC5D4ACFF74(bLocal_51))
				{
					unk_0xED74007FFB146BC2(bLocal_51);
				}
				if (unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) != 1 && unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(bLocal_51, unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(bLocal_51, false))
				{
					unk_0x504D54DF3F6F2247(bLocal_51, false, 4194304);
				}
				if (!iLocal_106)
				{
					func_87(0);
					func_110();
					unk_0x4EDE34FBADD967A6(false);
					iLocal_106 = 1;
					if (!func_61())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) == 1 || unk_0x77F1BEB8863288D5(bLocal_51, 1227113341) == 0) || unk_0x77F1BEB8863288D5(bLocal_51, 242628503) == 1) || unk_0x77F1BEB8863288D5(bLocal_51, 242628503) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_51);
				}
			}
		}
		else if (((!unk_0x5891CAC5D4ACFF74(bLocal_51) && !unk_0x997ABD671D25CA0B(bLocal_51, false)) && unk_0x77F1BEB8863288D5(bLocal_51, 242628503) != 1) && unk_0x77F1BEB8863288D5(bLocal_51, 242628503) != 0)
		{
			unk_0x9F3480FE65DB31B5(bLocal_51, func_60());
			unk_0x3DBFC55D5C9BB447(bLocal_51, true);
			unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
		}
	}
}

int func_60()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_61()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true))
		{
			if ((unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true)))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (((((!unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()), false))
		{
			if ((((!unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x01FEE67DB37F59B2(bLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0x9CD27B0045628463();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = unk_0x9CD27B0045628463();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				unk_0xED74007FFB146BC2(bLocal_51);
				if (unk_0x20B60995556D004F(bLocal_51, Local_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x15D3A79D4E44B913(bLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 0.25f, false, 1193033728);
					unk_0x971D38760FBC02EF(bLocal_51, true);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0x9CD27B0045628463();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = unk_0x9CD27B0045628463();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_51))
			{
				unk_0xED74007FFB146BC2(bLocal_51);
				if (unk_0x20B60995556D004F(bLocal_51, Local_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x15D3A79D4E44B913(bLocal_51, Local_113, 1f, -1, 0.25f, false, 1193033728);
					unk_0x971D38760FBC02EF(bLocal_51, true);
				}
				else
				{
					unk_0x504D54DF3F6F2247(bLocal_51, false, 4194304);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 8f, 8f, 8f, false, true, 0) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
		{
			if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0xA3EE4A07279BB9DB(bLocal_51, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && !unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
				{
					bLocal_88 = func_68(bLocal_51, 0, 145);
				}
				if (unk_0xA6DB27D19ECBB7DA(bLocal_111))
				{
					unk_0x86A652570E5F25DD(&bLocal_111);
				}
			}
			else
			{
				if (!unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
					{
						unk_0x86A652570E5F25DD(&bLocal_88);
					}
				}
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_111))
				{
					bLocal_111 = func_66(Local_113, 1);
				}
			}
		}
		else if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
		{
			bLocal_88 = func_68(bLocal_51, 0, 145);
		}
		if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 8f, 8f, 8f, false, true, 0))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_51);
				unk_0x9F3480FE65DB31B5(bLocal_51, func_60());
				unk_0x3DBFC55D5C9BB447(bLocal_51, true);
				unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_51);
				unk_0x9F3480FE65DB31B5(bLocal_51, func_60());
				unk_0x3DBFC55D5C9BB447(bLocal_51, true);
				unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
			}
		}
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 150f, 150f, 150f, false, true, 0))
		{
			func_4();
		}
	}
}

bool func_66(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_67(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_68(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_69(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_69(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_67(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_67(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_67(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

int func_70()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bLocal_129 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(bLocal_129, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				if (unk_0xA808AA1D79230FC2(bLocal_51, bLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_77())
	{
		return 0;
	}
	if (func_75(unk_0x4F8644AF03D0E0D6()))
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

bool func_75(bool bParam0)
{
	return func_76(bParam0, 20);
}

var func_76(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_32(14))
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
		Global_20266 = func_45();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0xCA042B6957743895(&Local_121))
			{
				if (func_90(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_53())
	{
		Local_121 = { func_55() };
		Local_120 = { func_57() };
		func_88();
		iLocal_119 = 1;
	}
}

void func_88()
{
	Global_20471 = 0;
	func_89();
}

void func_89()
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

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_72(sParam2, iParam4, 0);
}

void func_91()
{
	if (unk_0x7239B21A38F536BA(bLocal_51))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			unk_0xC1E8A365BF3B29F2(bLocal_51, 394, true);
		}
		if (unk_0xC86D67D52A707CF8(bLocal_51, unk_0xD80958FC74E988A6(), true))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				unk_0x22B0D0E37CCB840D(bLocal_51, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
				unk_0x971D38760FBC02EF(bLocal_51, true);
			}
			if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
			{
				unk_0xBF25EB89375A37AD(5, iLocal_137, joaat("player"));
				unk_0xF166E48407BAC484(bLocal_53, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x971D38760FBC02EF(bLocal_53, true);
			}
			func_110();
			unk_0x4EDE34FBADD967A6(false);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (unk_0x7239B21A38F536BA(bLocal_53))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_53, unk_0xD80958FC74E988A6(), true))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
				{
					unk_0x22B0D0E37CCB840D(bLocal_51, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x971D38760FBC02EF(bLocal_51, true);
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_53))
				{
					unk_0xBF25EB89375A37AD(5, iLocal_137, joaat("player"));
					unk_0xF166E48407BAC484(bLocal_53, unk_0xD80958FC74E988A6(), 0, 16);
					unk_0x971D38760FBC02EF(bLocal_53, true);
				}
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 1)
		{
			unk_0x22B0D0E37CCB840D(bLocal_51, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
			unk_0x971D38760FBC02EF(bLocal_51, true);
			func_110();
			unk_0x4EDE34FBADD967A6(false);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_51, 1.2f, 1.2f, 5f, false, true, 0) && unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6())) && !unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_99(1, 1, 1, 0, 0, 0, 0);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 24);
					unk_0x8DFCED7A656F8802(true);
					unk_0xA6294919E56FF02A(false);
					unk_0xA0EBB943C300E693(false);
					unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
					if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
					{
						unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
						if (unk_0x28D3FED7190D3A0B(unk_0xB6997A7EB3F5C8C0()))
						{
							func_98(unk_0xB6997A7EB3F5C8C0());
							unk_0x45F6D8EEF34ABEF1(unk_0xB6997A7EB3F5C8C0(), 200f);
						}
						if (unk_0x751B70C3D034E187(unk_0xB6997A7EB3F5C8C0(), bLocal_51, 5f, 5f, 5f, false, true, 0) || unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), Local_74, 5f, 5f, 5f, false, true, 0))
						{
							unk_0x06843DA7060A026B(unk_0xB6997A7EB3F5C8C0(), unk_0x3FEF770D40960D5A(bLocal_51, true) - Vector(0f, 3f, 5f), false, false, false, true);
							if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
							{
								unk_0x49733E92263139D1(unk_0xB6997A7EB3F5C8C0(), 5f);
							}
						}
					}
					if (unk_0x7239B21A38F536BA(bLocal_54))
					{
						if (unk_0x28D3FED7190D3A0B(bLocal_54))
						{
							func_98(bLocal_54);
							unk_0x45F6D8EEF34ABEF1(bLocal_54, 200f);
						}
						if (unk_0x751B70C3D034E187(bLocal_54, bLocal_51, 8f, 8f, 8f, false, true, 0))
						{
							unk_0x06843DA7060A026B(bLocal_54, Local_74, false, false, false, true);
							if (!unk_0x5F9532F3B5CC2551(bLocal_54, false))
							{
								unk_0x49733E92263139D1(bLocal_54, 5f);
							}
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
					{
						bLocal_129 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(bLocal_51, true), 5f, false, 2);
						if (!unk_0x5F9532F3B5CC2551(bLocal_129, false))
						{
							if (unk_0x28D3FED7190D3A0B(bLocal_129))
							{
								func_98(bLocal_129);
								unk_0x45F6D8EEF34ABEF1(bLocal_129, 200f);
							}
							unk_0x06843DA7060A026B(bLocal_129, unk_0x3FEF770D40960D5A(bLocal_51, true) + Vector(0f, 5f, 5f), true, false, false, true);
						}
					}
					unk_0x056A8A219B8E829F(Local_72, 10f);
					unk_0x0A1CB9094635D1A6(Local_72, 10f, 0);
					unk_0x01C7B9B38428AEB6(Local_72, 4.5f, false, false, false, false, false, false, 0);
					unk_0x06843DA7060A026B(bLocal_51, Local_72, true, false, false, true);
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Local_72, true, false, false, true);
					if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < bLocal_52)
					{
						if (unk_0x7239B21A38F536BA(bLocal_52[iVar0]))
						{
							if (unk_0x20B60995556D004F(bLocal_52[iVar0], unk_0x3FEF770D40960D5A(bLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								unk_0x9614299DCB53E54B(&(bLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
					{
						bLocal_303 = unk_0x8C18E0F9080ADD73(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						bLocal_71 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xE32EFE9AB4A9AA0C(bLocal_71, bLocal_303, "untie_cam", "random@burial");
						unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), 162.6699f, 6839.238f, 18.8314f, false, false, false, true);
						unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 18.2311f);
						unk_0x6B76DC1F3AE6E6A3(bLocal_51, 200, false);
						unk_0xDF1AF8B5D56542FA(bLocal_51, false);
						unk_0xC52E0F855C58FC2E(bLocal_51, false);
						unk_0xAAA34F8A7CB32098(bLocal_51);
						unk_0xEEA929141F699854(bLocal_51, bLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
						unk_0x2208438012482A1A(bLocal_51, false, false);
						unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), bLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
						unk_0xC77720A12FE14A86(bLocal_57[0], bLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1000f);
						unk_0xC77720A12FE14A86(bLocal_57[1], bLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1000f);
						unk_0x026FB97D0A425F84(bLocal_71, true);
						unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
						iLocal_94 = unk_0x9CD27B0045628463();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0x719FF505F097FD20();
		if (unk_0x25D39B935A038A26(bLocal_303))
		{
			if ((unk_0xE4A310B1D7FA73CC(bLocal_303) > 0.115f && unk_0xE4A310B1D7FA73CC(bLocal_303) < 0.12f) || (unk_0xE4A310B1D7FA73CC(bLocal_303) > 0.355f && unk_0xE4A310B1D7FA73CC(bLocal_303) < 0.36f))
			{
				unk_0x67C540AA08E4A6F5(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (unk_0xE4A310B1D7FA73CC(bLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_110();
					unk_0x4EDE34FBADD967A6(false);
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = unk_0x9CD27B0045628463();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && unk_0x8D4D46230B2C353A() == 4)
		{
			unk_0x2206BF9A37B7F724("CamPushInNeutral", false, false);
			unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_96(1000))
		{
			func_110();
			unk_0x891B5B39AC6302AF(800);
			while (unk_0x797AC7CB535BA28F())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0xA6294919E56FF02A(true);
		unk_0xA0EBB943C300E693(true);
		unk_0x734292F4F0ABF6D0(bLocal_303, 1f);
		unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
		unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), 162.5284f, 6839.658f, 18.8198f, true, false, false, true);
		unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 256.7693f);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			unk_0xAAA34F8A7CB32098(bLocal_51);
			unk_0x2208438012482A1A(bLocal_51, false, false);
			unk_0xB128377056A54E2A(bLocal_51, true);
			unk_0x06843DA7060A026B(bLocal_51, 164.4963f, 6839.333f, 18.9657f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(bLocal_51, 73.449f);
		}
		unk_0xB4EC2312F4E5B1F1(26.1578f);
		unk_0x6D0858B8EDFD2B7D(-8.1198f, 1f);
		unk_0x026FB97D0A425F84(bLocal_71, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x865908C81A2C22E9(bLocal_71, false);
		unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
		if (bLocal_92)
		{
			unk_0xD4E8E24955024033(800);
			while (unk_0x5C544BC6C57AC575())
			{
				unk_0x4EDE34FBADD967A6(false);
			}
		}
		bLocal_96 = true;
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xBF25EB89375A37AD(1, iLocal_137, joaat("player"));
					unk_0xBF25EB89375A37AD(1, joaat("player"), iLocal_137);
					unk_0xE8854A4326B9E12B(&iLocal_59);
					unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 4000);
					if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
					{
						if (unk_0x751B70C3D034E187(bLocal_51, unk_0xB6997A7EB3F5C8C0(), 20f, 20f, 20f, false, true, 0) && unk_0xA7C4F2C6E744A550(unk_0xB6997A7EB3F5C8C0()) > 0)
						{
							unk_0xC20E50AA46D09CA8(false, unk_0xB6997A7EB3F5C8C0(), -1, false, 1f, 1, 0);
						}
						else if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
						{
							unk_0x9F3480FE65DB31B5(bLocal_51, func_60());
							unk_0x3DBFC55D5C9BB447(bLocal_51, true);
							unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
						}
					}
					else if (!unk_0x5891CAC5D4ACFF74(bLocal_51))
					{
						unk_0x9F3480FE65DB31B5(bLocal_51, func_60());
						unk_0x3DBFC55D5C9BB447(bLocal_51, true);
						unk_0x0BDDB8D9EC6BCF3C(bLocal_51, false);
					}
					unk_0x39E72BC99E6360CB(iLocal_59);
					unk_0x5ABA3986D90D8A3B(bLocal_51, iLocal_59);
					unk_0x3841422E9C488D8C(&iLocal_59);
					if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
					{
						unk_0x86A652570E5F25DD(&bLocal_88);
					}
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_111))
					{
						bLocal_111 = func_66(Local_113, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!unk_0xA6DB27D19ECBB7DA(bLocal_112))
						{
							bLocal_112 = func_66(Local_114, 0);
							unk_0xDF735600A4696DAF(bLocal_112, 269);
							func_94();
						}
					}
					func_93();
					iLocal_105 = 1;
					iLocal_95 = 1;
					unk_0xC1B1E9A034A63A62(false);
					unk_0x46A1E1A299EC4BBA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0xC12321827687FE4D(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, true);
					func_99(0, 1, 1, 0, 0, 0, 0);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 4);
					unk_0xA72CD9CA74A5ECBA(unk_0xD80958FC74E988A6());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_32197 = 1;
		}
	}
}

void func_94()
{
	if (func_45() == 2)
	{
		if (!Global_32199)
		{
			func_95("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_95(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_96(int iParam0)
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
			if (func_97())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
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

void func_98(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (unk_0x28D3FED7190D3A0B(bParam0))
			{
				unk_0x7F0DD2EBBB651AFF(bParam0);
				unk_0x6B76DC1F3AE6E6A3(bParam0, unk_0xEEF059FAD016D209(bParam0) + 200, false);
				unk_0x45F6D8EEF34ABEF1(bParam0, (unk_0xC45D23BAF168AAB8(bParam0) + 200f));
				unk_0x70DB57649FA8D0D8(bParam0, (unk_0x7D5DABE888D2D074(bParam0) + 200f));
				unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(bParam0, true), 5f);
				unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(bParam0, true), 2.5f, true, false, false, false);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_106(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_80())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_105(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_106(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_105(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_103(unk_0x4F8644AF03D0E0D6())) && !func_101(unk_0x4F8644AF03D0E0D6(), 0)) && !func_100()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_103(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_100()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_101(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_103(bool bParam0)
{
	if (func_101(bParam0, 0))
	{
		return 1;
	}
	if (func_104())
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

bool func_104()
{
	return BitTest(Global_2621446, 3);
}

int func_105(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_106(int iParam0)
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

void func_107()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_108(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_109(iParam2), true);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_20471 = 0;
	func_111();
}

void func_111()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_112()
{
	if (!iLocal_61 && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (unk_0x4C241E39B23DF959(bLocal_54, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
		{
			unk_0x9454528DF15D657A(bLocal_52[0], bLocal_54, unk_0xD80958FC74E988A6(), 8, 30f, 262144, -1f, 10f, true);
			unk_0x971D38760FBC02EF(bLocal_52[0], true);
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
		{
			unk_0xC20E50AA46D09CA8(bLocal_52[1], bLocal_54, -1, false, 3f, 1, 0);
			unk_0x971D38760FBC02EF(bLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[iLocal_58]))
			{
				unk_0x22B0D0E37CCB840D(bLocal_52[iLocal_58], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
				unk_0x971D38760FBC02EF(bLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	unk_0x4EDE34FBADD967A6(false);
	func_4();
}

void func_113()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
	{
		if (!unk_0x605F5A140F202491(bLocal_52[0]) && !unk_0x605F5A140F202491(bLocal_52[1]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x34616828CD07F1A1(bLocal_52[1]))
				{
					unk_0xE1EF3C1216AFF2CD(bLocal_52[1]);
					unk_0x08DA95E8298AE772(bLocal_52[1], unk_0xD80958FC74E988A6(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_114()
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				iLocal_62 = 1;
			}
			if (unk_0xD71649DB0A545AA3(bLocal_52[1], unk_0xD80958FC74E988A6(), 90f))
			{
				func_110();
				unk_0x4EDE34FBADD967A6(false);
				func_71(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
				{
					fVar0 = func_116(bLocal_52[0], unk_0xD80958FC74E988A6(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x961AC54BF0613F5D(bLocal_56, false, true);
					unk_0x6B9BBD38AB0796DF(bLocal_56, bLocal_52[0], unk_0x3F428D08BE5AAE31(bLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					unk_0xE1EF3C1216AFF2CD(bLocal_52[0]);
					unk_0xE8854A4326B9E12B(&iLocal_59);
					unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0xEA47FE3719165B94(false, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, false, false, false, false);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
					unk_0x39E72BC99E6360CB(iLocal_59);
					unk_0x5ABA3986D90D8A3B(bLocal_52[0], iLocal_59);
					unk_0x3841422E9C488D8C(&iLocal_59);
					unk_0xADF692B254977C0C(bLocal_52[1], joaat("weapon_sawnoffshotgun"), true);
					unk_0xE1EF3C1216AFF2CD(bLocal_52[1]);
					unk_0xE8854A4326B9E12B(&iLocal_59);
					unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0x6A071245EB0D1882(false, unk_0xD80958FC74E988A6(), -1, fVar0, 1f, 2f, 0);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
					unk_0x39E72BC99E6360CB(iLocal_59);
					unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
					unk_0x3841422E9C488D8C(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (unk_0x7239B21A38F536BA(bLocal_56))
		{
			if (unk_0xB346476EF1A64897(bLocal_56))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x961AC54BF0613F5D(bLocal_56, true, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x97465886D35210E9(0, unk_0xD80958FC74E988A6(), unk_0xD80958FC74E988A6(), 1f, false, 3.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x9B53BB6E8943AF53(false, unk_0xD80958FC74E988A6(), -1, false);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				unk_0x706D57B0F50DA710("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[0], 30f, 30f, 30f, false, true, 0) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[1], 30f, 30f, 30f, false, true, 0))
				{
					unk_0x9B53BB6E8943AF53(bLocal_52[0], unk_0xD80958FC74E988A6(), -1, false);
				}
				iLocal_126 = 1;
				unk_0x5AE11BC36633DE4E(false);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[0], 30f, 30f, 30f, false, true, 0) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[1], 30f, 30f, 30f, false, true, 0))
				{
					unk_0x5AD23D40115353AC(bLocal_52[0], unk_0xD80958FC74E988A6(), false);
					unk_0x5AD23D40115353AC(bLocal_52[1], unk_0xD80958FC74E988A6(), false);
					func_71(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0x84A2DD9AC37C35C1(bLocal_52[0])) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[0], 30f, 30f, 30f, false, true, 0) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_52[1], 30f, 30f, 30f, false, true, 0))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x6A071245EB0D1882(false, bLocal_52[1], -1, 2f, 1f, 2f, 0);
				unk_0x5AD23D40115353AC(false, bLocal_52[1], false);
				unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_52[0], iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x6A071245EB0D1882(false, bLocal_52[0], -1, 2f, 1f, 2f, 0);
				unk_0x5AD23D40115353AC(false, bLocal_52[0], false);
				unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_118();
		}
		if (((unk_0x6CD5A433374D4CFB(bLocal_52[0], unk_0xD80958FC74E988A6()) || unk_0x6CD5A433374D4CFB(bLocal_52[1], unk_0xD80958FC74E988A6())) || unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), bLocal_52[0])) || unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), bLocal_52[1]))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 3))
			{
				if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					if (!iLocal_70)
					{
						func_110();
						unk_0x4EDE34FBADD967A6(false);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 3) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
			{
				if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
				{
					if (!iLocal_70)
					{
						func_110();
						unk_0x4EDE34FBADD967A6(false);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()) || unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				func_118();
			}
		}
	}
}

int func_115()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_116(bool bParam0, bool bParam1, bool bParam2)
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

int func_117()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				if ((((unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")) || unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6())) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("annihilator"))) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("buzzard"))) || unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_118()
{
	func_11();
	unk_0x706D57B0F50DA710("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0x7239B21A38F536BA(bLocal_52[0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
			{
				unk_0xC1E8A365BF3B29F2(bLocal_52[0], 156, true);
				if (unk_0x7239B21A38F536BA(bLocal_56))
				{
					unk_0xF1C03A5352243A30(bLocal_52[0]);
					if (unk_0xB346476EF1A64897(bLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0x961AC54BF0613F5D(bLocal_56, false, true);
							unk_0x6B9BBD38AB0796DF(bLocal_56, bLocal_52[0], unk_0x3F428D08BE5AAE31(bLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							unk_0xE1EF3C1216AFF2CD(bLocal_52[0]);
							unk_0xE8854A4326B9E12B(&iLocal_59);
							unk_0x0F804F1DB19B9689(false);
							unk_0xEA47FE3719165B94(false, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, false, false, false, false);
							unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_59);
							unk_0x5ABA3986D90D8A3B(bLocal_52[0], iLocal_59);
							unk_0x3841422E9C488D8C(&iLocal_59);
							unk_0x971D38760FBC02EF(bLocal_52[0], true);
							unk_0x2208438012482A1A(bLocal_52[0], false, false);
							iLocal_115 = 1;
						}
					}
					else
					{
						unk_0xE8854A4326B9E12B(&iLocal_59);
						unk_0x0F804F1DB19B9689(false);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_59);
						unk_0x5ABA3986D90D8A3B(bLocal_52[0], iLocal_59);
						unk_0x3841422E9C488D8C(&iLocal_59);
						unk_0x971D38760FBC02EF(bLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_56))
	{
		if (unk_0xB346476EF1A64897(bLocal_56))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x961AC54BF0613F5D(bLocal_56, true, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0x7239B21A38F536BA(bLocal_52[1]))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				unk_0xC1E8A365BF3B29F2(bLocal_52[1], 156, true);
				unk_0xF1C03A5352243A30(bLocal_52[1]);
				unk_0xE8854A4326B9E12B(&iLocal_59);
				unk_0x0F804F1DB19B9689(false);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 500);
				unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x39E72BC99E6360CB(iLocal_59);
				unk_0x5ABA3986D90D8A3B(bLocal_52[1], iLocal_59);
				unk_0x3841422E9C488D8C(&iLocal_59);
				unk_0x971D38760FBC02EF(bLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0x9CD27B0045628463() + 8500;
		unk_0xC1B1E9A034A63A62(false);
		iLocal_47 = 7;
	}
}

int func_119(int iParam0)
{
	if (func_122())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_25(Global_113375))
		{
			func_120(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_25(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_43052);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
	{
		unk_0x86A652570E5F25DD(&bLocal_123);
	}
	if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
		{
			bLocal_88 = func_68(bLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_87[iLocal_58]))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_52[iLocal_58], false))
			{
				bLocal_87[iLocal_58] = func_68(bLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_129()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x9CD27B0045628463())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_130()
{
	switch (iLocal_86)
	{
		case 0:
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = unk_0x9CD27B0045628463() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_131()
{
	if (unk_0x7239B21A38F536BA(bLocal_56))
	{
		if (unk_0xB346476EF1A64897(bLocal_56))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]))
			{
				if (unk_0x1F0B79228E461EC9(bLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0x0D53A3B8DA0809D2("scr_burial_dirt", bLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, false, false, false);
					}
				}
				if (unk_0x1F0B79228E461EC9(bLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") > 0.04f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.043f) || (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") > 0.24f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") > 0.44f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") > 0.64f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") > 0.84f && unk_0x346D81500D088F42(bLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0x0D53A3B8DA0809D2("scr_burial_dirt", bLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, false, false, false);
					}
				}
			}
		}
	}
}

int func_132()
{
	if (!iLocal_103)
	{
		if (unk_0x3F2023999AD51C1F(Local_74, 100f, true) || unk_0x3F2023999AD51C1F(Local_74, 100f, true))
		{
			if (unk_0x84A2DD9AC37C35C1(bLocal_52[0]) || unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!unk_0x3F2023999AD51C1F(Local_74, 100f, true) || !unk_0x3F2023999AD51C1F(Local_74, 100f, true))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), true) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), true)) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), true)) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), true)) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), true)) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), true)) || unk_0xF0BC12401061DEA0(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), true)) || unk_0x2E2EBA0EE7CED0E0(2, Local_74 - Vector(100f, 100f, 100f), Local_74 + Vector(100f, 100f, 100f))) || unk_0x2E2EBA0EE7CED0E0(4, Local_74 - Vector(100f, 100f, 100f), Local_74 + Vector(100f, 100f, 100f))) || unk_0x2E2EBA0EE7CED0E0(0, Local_74 - Vector(100f, 100f, 100f), Local_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (unk_0x7239B21A38F536BA(bLocal_54))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_54, false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_54, unk_0xD80958FC74E988A6(), true) || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_54, false))
				{
					unk_0xA72CD9CA74A5ECBA(bLocal_54);
					func_118();
					iLocal_49 = 3;
					return 1;
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck")) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck2")))
					{
						if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), bLocal_54))
						{
							func_118();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				if ((((unk_0x6CD5A433374D4CFB(bLocal_52[0], unk_0xD80958FC74E988A6()) || unk_0x6CD5A433374D4CFB(bLocal_52[1], unk_0xD80958FC74E988A6())) || unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), bLocal_52[0])) || unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), bLocal_52[1])) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_52[1]))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (unk_0x17FFC1B2BA35A494(unk_0xB6997A7EB3F5C8C0(), bLocal_52[0]) || unk_0x17FFC1B2BA35A494(unk_0xB6997A7EB3F5C8C0(), bLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_51, unk_0xD80958FC74E988A6(), false) || unk_0x131D401334815E94(bLocal_51, joaat("weapon_stungun"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (unk_0x5F9532F3B5CC2551(bLocal_52[0], false) || unk_0x5F9532F3B5CC2551(bLocal_52[1], false))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_133(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !bParam4)
	{
		if (unk_0x01FEE67DB37F59B2(bParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !bParam4)
		{
			Var3 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			Var4 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			fVar5 = unk_0x2A488C176D52CCA5(Var3, Var4);
			if (!BitTest(uParam3, 3))
			{
				if (func_139(bParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_137(bParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x3F2023999AD51C1F(Var4, fParam5, true))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(bParam0);
					return 1;
				}
				if (unk_0x5270A8FBC098C3F8(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(bParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = unk_0x840F03E9041E2C9C(unk_0xD80958FC74E988A6());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
				{
					if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xFCDFF7B72D23A1AC(bParam0, unk_0xD80958FC74E988A6(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (unk_0x9CD27B0045628463() - iLocal_19));
								func_138("\n");
								bVar2 = true;
								if (unk_0x9CD27B0045628463() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_137(bParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_137(bParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x9CD27B0045628463();
	}
	return 0;
}

void func_134(bool bParam0, int iParam1)
{
	func_136(bParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_136(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92(bParam0, bParam0))
	{
	}
}

void func_137(bool bParam0)
{
	unk_0xB8BEC0CA6F0EDB0F(bParam0);
}

void func_138(bool bParam0)
{
	func_136(bParam0);
}

int func_139(bool bParam0, int iParam1)
{
	if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	else if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
	{
		if ((unk_0x4700A416E8324EF3(bParam0) - unk_0xEEF059FAD016D209(bParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_140()
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_142(39, 1);
	func_142(40, 1);
	func_142(41, 1);
	func_142(42, 1);
	func_142(43, 1);
	func_142(44, 1);
	unk_0x1B5C85C612E5256E(Local_113 - Vector(20f, 40f, 40f), Local_113 + Vector(20f, 40f, 40f), false, true, true, true);
	unk_0x1B5C85C612E5256E(Local_72 - Vector(20f, 50f, 60f), Local_72 + Vector(20f, 50f, 50f), false, true, true, true);
	unk_0x0FC2D89AC25A5814(bLocal_83, true);
	unk_0xDC0F817884CDD856(5, false);
	unk_0xDC0F817884CDD856(3, false);
	unk_0x020E5F00CDA207BA(0f);
	bLocal_51 = unk_0xD49F9B0955C367DE(26, bLocal_80, Local_72, bLocal_77, true, true);
	unk_0x9F8AA94D6D97DBF4(bLocal_51, true);
	unk_0x63F58F7C80513AAD(bLocal_51, false);
	unk_0x70A2D1137C8ED7C9(bLocal_51, 2, false);
	unk_0x70A2D1137C8ED7C9(bLocal_51, 128, true);
	unk_0x9F7794730795E019(bLocal_51, 1, false);
	unk_0x9F7794730795E019(bLocal_51, 6, false);
	unk_0x1913FE4CBF41C463(bLocal_51, 206, true);
	unk_0x1913FE4CBF41C463(bLocal_51, 318, false);
	unk_0x1913FE4CBF41C463(bLocal_51, 118, false);
	unk_0x1913FE4CBF41C463(bLocal_51, 208, true);
	unk_0xE532F5D78798DAAB(bLocal_80);
	unk_0x6B76DC1F3AE6E6A3(bLocal_51, bLocal_99, false);
	unk_0xDF993EE5E90ABA25(unk_0xD80958FC74E988A6(), false);
	unk_0xF372BC22FCB88606("rghKidnappers", &iLocal_136);
	unk_0xF372BC22FCB88606("rghVictim", &iLocal_137);
	unk_0xC80A74AC829DDD92(bLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		bLocal_52[iLocal_58] = unk_0xD49F9B0955C367DE(26, bLocal_81, Local_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], true, true);
		unk_0x9F8AA94D6D97DBF4(bLocal_52[iLocal_58], true);
		unk_0x02A0C9720B854BFA(bLocal_52[iLocal_58], true);
		unk_0x9F7794730795E019(bLocal_52[iLocal_58], 0, true);
		unk_0x70A2D1137C8ED7C9(bLocal_52[iLocal_58], 2, false);
		unk_0x70A2D1137C8ED7C9(bLocal_52[iLocal_58], 128, true);
		unk_0x1913FE4CBF41C463(bLocal_52[iLocal_58], 42, true);
		unk_0x4D9CA1009AFBD057(bLocal_52[0], 2);
		unk_0x9F7794730795E019(bLocal_52[0], 50, true);
		unk_0x614DA022990752DC(bLocal_52[iLocal_58], 50);
		unk_0x7AEFB85C1D49DEB6(bLocal_52[iLocal_58], 13);
		unk_0x0DC7CABAB1E9B67E(bLocal_52[iLocal_58], true, 1);
		unk_0xC80A74AC829DDD92(bLocal_52[iLocal_58], iLocal_136);
		unk_0xA9C8960E8684C1B5(bLocal_52[iLocal_58], unk_0xD53343AA4FB7DD28(800, 2000));
		iLocal_58++;
	}
	unk_0xE532F5D78798DAAB(bLocal_82);
	unk_0xE532F5D78798DAAB(bLocal_81);
	unk_0x614DA022990752DC(bLocal_52[1], 100);
	unk_0x9AC577F5A12AD8A9(bLocal_52[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0xBF25EB89375A37AD(5, iLocal_136, joaat("player"));
	unk_0xBF0FD6E56C964FCB(bLocal_52[0], joaat("weapon_pistol"), -1, false, true);
	unk_0xBF0FD6E56C964FCB(bLocal_52[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	bLocal_54 = unk_0xAF35D0D2583051B0(bLocal_83, Local_74, bLocal_79, true, true, false);
	unk_0x49733E92263139D1(bLocal_54, 5f);
	unk_0x34E710FF01247C5A(bLocal_54, 3);
	unk_0x7C65DAC73C35C862(bLocal_54, 5, false, false);
	unk_0xE532F5D78798DAAB(bLocal_83);
	bLocal_56 = unk_0x509D5878EB39E842(joaat("prop_ld_shovel"), Local_85, true, true, false);
	unk_0xE532F5D78798DAAB(joaat("prop_ld_shovel"));
	bLocal_57[0] = unk_0x509D5878EB39E842(joaat("p_arm_bind_cut_s"), Local_85, true, true, false);
	bLocal_57[1] = unk_0x509D5878EB39E842(joaat("p_arm_bind_cut_s"), Local_85 + Vector(1f, 1f, 1f), true, true, false);
	unk_0x963D27A58DF860AC(joaat("p_arm_bind_cut_s"));
	unk_0x6B9BBD38AB0796DF(bLocal_56, bLocal_52[0], unk_0x3F428D08BE5AAE31(bLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	unk_0x262B14F48D29DE80(bLocal_52[0], 0, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_52[0], 3, false, true, 0);
	unk_0x262B14F48D29DE80(bLocal_52[0], 4, true, false, 0);
	unk_0x262B14F48D29DE80(bLocal_52[1], 0, false, 2, 0);
	unk_0x262B14F48D29DE80(bLocal_52[1], 3, 2, true, 0);
	unk_0x262B14F48D29DE80(bLocal_52[1], 4, true, true, 0);
	Var0 = { Local_72 };
	Var1 = { -2f, -4f, 18f };
	bLocal_303 = unk_0x8C18E0F9080ADD73(Var0, Var1, 2);
	unk_0xEEA929141F699854(bLocal_51, bLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1000f, 0);
	unk_0xC77720A12FE14A86(bLocal_57[0], bLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
	unk_0xC77720A12FE14A86(bLocal_57[1], bLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
	unk_0xD9A897A4C6C2974F(bLocal_303, true);
	unk_0x971D38760FBC02EF(bLocal_51, true);
	unk_0xEA47FE3719165B94(bLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, false, false, false, false);
	unk_0xEA47FE3719165B94(bLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, false, false, false, false);
	unk_0xC7F76DF27A5045A1(bLocal_52[0], Local_75, Local_76, 2.75f, false, false);
	unk_0xC7F76DF27A5045A1(bLocal_52[1], Local_75, Local_76, 2.75f, false, false);
	if (func_45() == 0)
	{
		func_141(&uLocal_138, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_141(&uLocal_138, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_141(&uLocal_138, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	unk_0x6C8065A3B780185B(bLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x6C8065A3B780185B(bLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x6C8065A3B780185B(bLocal_51, "KIDNAPPEDFEMALE");
	func_141(&uLocal_138, 4, bLocal_52[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_138, 3, bLocal_52[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_138, 5, bLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_141(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_143(iParam0, 2, 1);
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			bVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_144(func_147(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_144(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_145(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0)
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

void func_148(int iParam0, bool bParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			bVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_144(func_147(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return BitTest(func_146(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_150()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			bVar1 = unk_0xBB40DD2270B65366(bVar0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar1))
			{
				if (bVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(bVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(bVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(bVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_151()
{
	unk_0x963D27A58DF860AC(bLocal_80);
	unk_0x963D27A58DF860AC(bLocal_82);
	unk_0x963D27A58DF860AC(bLocal_81);
	unk_0x963D27A58DF860AC(bLocal_83);
	unk_0x963D27A58DF860AC(joaat("prop_ld_shovel"));
	unk_0x963D27A58DF860AC(joaat("p_arm_bind_cut_s"));
	unk_0xD3BD40951412FEF6("random@burial");
	unk_0x944955FB2A3935C8();
	unk_0x2F844A8B08D76685("ROPE_CUT", false, -1);
	unk_0x1E5185B72EF5158A("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x98A4EB5D89A0C952(bLocal_80) && unk_0x98A4EB5D89A0C952(bLocal_82)) && unk_0x98A4EB5D89A0C952(bLocal_81)) && unk_0x98A4EB5D89A0C952(bLocal_83)) && unk_0x98A4EB5D89A0C952(joaat("prop_ld_shovel"))) && unk_0x98A4EB5D89A0C952(joaat("p_arm_bind_cut_s"))) && unk_0xD031A9162D01088C("random@burial")) && unk_0xCA7D9B86ECA7481B()) && unk_0x2F844A8B08D76685("ROPE_CUT", false, -1)) && unk_0x1E5185B72EF5158A("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0x963D27A58DF860AC(bLocal_80);
		unk_0x963D27A58DF860AC(bLocal_82);
		unk_0x963D27A58DF860AC(bLocal_81);
		unk_0x963D27A58DF860AC(bLocal_83);
		unk_0x963D27A58DF860AC(joaat("prop_ld_shovel"));
		unk_0x963D27A58DF860AC(joaat("p_arm_bind_cut_s"));
		unk_0xD3BD40951412FEF6("random@burial");
		unk_0x944955FB2A3935C8();
		unk_0x2F844A8B08D76685("ROPE_CUT", false, -1);
		unk_0x1E5185B72EF5158A("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	bLocal_80 = joaat("u_f_y_mistress");
	bLocal_81 = joaat("a_m_m_salton_01");
	bLocal_82 = joaat("a_m_m_salton_01");
	bLocal_83 = joaat("bison");
	Local_72 = { 163.4486f, 6839.993f, 18.86f };
	bLocal_77 = 0f;
	Local_73[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0] = 297.0056f;
	Local_73[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[1] = 193.3866f;
	Local_74 = { 169.3462f, 6837.805f, 19.1421f };
	bLocal_79 = 265.6862f;
	Local_75 = { 164.0896f, 6836.923f, 19.03899f };
	Local_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 1;
}

int func_153()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_33(func_45()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_155(iVar1, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_113104 > 0;
}

int func_162()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_125(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_113375 == func_40() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_168();
}

void func_168()
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

void func_169(int iParam0)
{
	Global_113375 = iParam0;
}

int func_170(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam1))
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_205())
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
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_125(5))
		{
			return 0;
		}
		if (func_195(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam1 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				bVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_194(bVar4))
				{
					if (func_172(iVar2))
					{
						if (!func_171(Var3, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3) < (210f * 210f))
							{
								if (func_45() != iVar2)
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

bool func_171(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_172(int iParam0)
{
	bool bVar0;
	
	bVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_173(bVar0);
}

int func_173(bool bParam0)
{
	return func_174(bParam0, 1);
}

int func_174(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(bParam0))
	{
		return 0;
	}
	func_175(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), bParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(bParam0, bParam1))
	{
		bVar0 = func_185(bParam1);
		iVar1 = func_183(bParam0);
		iVar2 = (func_183(bParam0) - func_183(bParam1));
		iVar3 = (func_185(bParam0) - func_185(bParam1));
		iVar4 = (func_182(bParam0) - func_182(bParam1));
		iVar5 = (func_181(bParam0) - func_181(bParam1));
		iVar6 = (func_180(bParam0) - func_180(bParam1));
		iVar7 = (func_179(bParam0) - func_179(bParam1));
	}
	else
	{
		bVar0 = func_185(bParam0);
		iVar1 = func_183(bParam1);
		iVar2 = (func_183(bParam1) - func_183(bParam0));
		iVar3 = (func_185(bParam1) - func_185(bParam0));
		iVar4 = (func_182(bParam1) - func_182(bParam0));
		iVar5 = (func_181(bParam1) - func_181(bParam0));
		iVar6 = (func_180(bParam1) - func_180(bParam0));
		iVar7 = (func_179(bParam1) - func_179(bParam0));
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
		iVar4 = (iVar4 + func_178(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = unk_0xF2DB717A73826179(func_177(unk_0xBBDA792448DB5A89(bVar0 + 1), 0f, 12f));
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

bool func_177(bool bParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_180(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_181(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_182(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

int func_183(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_184(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_185(bool bParam0)
{
	return (bParam0 && 15);
}

int func_186(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(bParam1) || !func_194(bParam0))
	{
		return 1;
	}
	iVar0 = func_183(bParam0);
	iVar1 = func_183(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(bParam0);
	iVar1 = func_185(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(bParam0);
	iVar1 = func_182(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(bParam0);
	iVar1 = func_181(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(bParam0);
	iVar1 = func_180(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(bParam0);
	iVar1 = func_179(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x494E97C2EF27C470());
	func_192(&uVar0, unk_0x13D2B8ADD79640F2());
	func_191(&uVar0, unk_0x25223CA6B4D20B7F());
	func_190(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_189(&uVar0, unk_0xBBC72712E80257A1());
	func_188(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (bParam1 < 1 || bParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_191(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_194(bool bParam0)
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
	iVar0 = func_179(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(bParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_204()) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_204()) || Global_31962) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_204()) || func_201()) || Global_112433) || Global_31962) || func_203()) || Global_44238) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), false) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_100480.f_1;
}

int func_198()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_100493.f_376 > 0;
}

bool func_202()
{
	return Global_100493.f_375 > 0;
}

var func_203()
{
	return Global_1575058;
}

int func_204()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(bool bParam0)
{
	return func_186(func_187(), bParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_208(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
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

int func_210()
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

int func_211()
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

void func_212()
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_225(0);
		unk_0xD37401D78A929A49();
		unk_0x5B17A90291133DA5("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_32201)
			{
				unk_0x706D57B0F50DA710("AC_STOP");
			}
			else
			{
				unk_0x706D57B0F50DA710("RE6_END");
			}
		}
		func_224();
		unk_0xBF25EB89375A37AD(255, iLocal_137, joaat("player"));
		unk_0xBF25EB89375A37AD(255, joaat("player"), iLocal_137);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_51))
			{
				unk_0x1913FE4CBF41C463(bLocal_51, 317, true);
				if (!unk_0x997ABD671D25CA0B(bLocal_51, false))
				{
					unk_0xBB8DE8CF6A8DD8BB(bLocal_51);
				}
				if (unk_0x5891CAC5D4ACFF74(bLocal_51))
				{
					unk_0xED74007FFB146BC2(bLocal_51);
				}
				unk_0x9F8AA94D6D97DBF4(bLocal_51, false);
				unk_0x63F58F7C80513AAD(bLocal_51, true);
			}
			else if (!unk_0x5F9532F3B5CC2551(bLocal_51, false))
			{
				unk_0xDF1AF8B5D56542FA(bLocal_51, true);
				unk_0xC52E0F855C58FC2E(bLocal_51, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < bLocal_52)
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_52[iVar0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0xF1C03A5352243A30(bLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0xF166E48407BAC484(bLocal_52[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(bLocal_52[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					func_110();
				}
				unk_0x971D38760FBC02EF(bLocal_52[iVar0], true);
			}
			iVar0++;
		}
		unk_0x539E0AE3E6634B9F(&(bLocal_57[0]));
		unk_0x539E0AE3E6634B9F(&(bLocal_57[1]));
		if (unk_0x7239B21A38F536BA(bLocal_54))
		{
			unk_0x629BFA74418D6239(&bLocal_54);
		}
		if (unk_0x7239B21A38F536BA(bLocal_56))
		{
			if (unk_0xB346476EF1A64897(bLocal_56))
			{
				unk_0x961AC54BF0613F5D(bLocal_56, true, true);
			}
			unk_0x3AE22DEB5BA5A3E6(&bLocal_56);
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_123))
		{
			unk_0x86A652570E5F25DD(&bLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_87[iLocal_58]))
			{
				unk_0x86A652570E5F25DD(&(bLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
		{
			unk_0x86A652570E5F25DD(&bLocal_88);
		}
		if (unk_0xA7A932170592B50E(bLocal_71))
		{
			unk_0x865908C81A2C22E9(bLocal_71, false);
		}
		unk_0xDC0F817884CDD856(5, true);
		unk_0xDC0F817884CDD856(3, true);
		unk_0x020E5F00CDA207BA(1f);
		unk_0xC12321827687FE4D(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, true);
	}
	func_213(-1);
	unk_0x1090044AD1DA76FA();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_113375, 1), 64);
		if (func_39(Global_113375) > 0)
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
	func_214(&Global_32019);
	Global_113376 = 0;
	func_169(-1);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	bVar2 = func_182(*uParam0);
	bVar3 = func_181(*uParam0);
	bVar4 = func_180(*uParam0);
	bVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_193(uParam0, bParam1);
	func_192(uParam0, bParam2);
	func_191(uParam0, bParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, bParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_225(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

