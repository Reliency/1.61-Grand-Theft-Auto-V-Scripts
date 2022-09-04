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
	bool bLocal_50[2] = { 0, 0 };
	struct<3> Local_51[2];
	float fLocal_52[2] = { 0f, 0f };
	bool bLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89[2] = { 0, 0 };
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 16;
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
	struct<2> Local_285 = { 0, 5 } ;
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
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	StringCopy(&Local_62, "", 24);
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_58))
			{
				unk_0xED74007FFB146BC2(bLocal_58);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
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
		if ((unk_0xC5042CC6F5E3D450() || iLocal_76) || iLocal_103)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_71)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_144();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_143())
								{
									if ((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_59, 75f, 75f, 75f, false, true, 0) && !unk_0xE31C2C72B8692B64(bLocal_58)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 15f, 15f, 15f, false, true, 0))
									{
										if (!func_166())
										{
											unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_58, -1, 0, 2);
											unk_0x020E5F00CDA207BA(0.1f);
											func_142();
											func_133(1);
										}
										bLocal_79 = true;
									}
									if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
									{
										if (unk_0xC86D67D52A707CF8(bLocal_50[0], unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(bLocal_50[1], unk_0xD80958FC74E988A6(), true))
										{
											func_142();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_127();
									}
									if (!unk_0x84A2DD9AC37C35C1(bLocal_58) && unk_0x4C241E39B23DF959(bLocal_53, false))
									{
										if (unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_53, false))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (unk_0x4C241E39B23DF959(bLocal_53, false))
										{
											if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_53, 150f, 150f, 150f, false, true, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_126())
								{
									func_142();
									iLocal_47 = 3;
								}
								else if (func_143())
								{
									func_142();
									func_124();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_143())
								{
									switch (iLocal_48)
									{
										case 2:
											func_123();
											break;
										
										case 4:
											func_122();
											break;
										
										case 5:
											func_121();
											break;
										}
								}
								break;
							
							case 3:
								func_118();
								unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
								if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
								{
									unk_0xBC9AE166038A5CEC(bLocal_58, 3, 0, 0);
									if (!unk_0x997ABD671D25CA0B(bLocal_58, false))
									{
										if (!iLocal_85)
										{
											if (unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x47E4E977581C5B55(bLocal_58))
											{
												unk_0x26695EC767728D84(bLocal_58, 16);
												unk_0xE8854A4326B9E12B(&iLocal_102);
												unk_0xEA47FE3719165B94(false, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, false, false, false, false);
												unk_0xEA47FE3719165B94(false, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, false, false, false, false);
												unk_0x39E72BC99E6360CB(iLocal_102);
												unk_0x5ABA3986D90D8A3B(bLocal_58, iLocal_102);
												unk_0x3841422E9C488D8C(&iLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												unk_0x3EB1FE9E8E908E15(bLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0x77F1BEB8863288D5(bLocal_58, 474215631) != 0) && unk_0x77F1BEB8863288D5(bLocal_58, 474215631) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (unk_0x4C241E39B23DF959(bLocal_53, false))
									{
										if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_53, false))
										{
											if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
											{
												unk_0x86A652570E5F25DD(&bLocal_88);
											}
										}
									}
								}
								else
								{
									func_117();
								}
								if (!func_116())
								{
									if (iLocal_95 < unk_0x9CD27B0045628463())
									{
										if (func_115())
										{
											if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
											{
												func_114(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 5000));
									}
								}
								if (unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
								{
									if (unk_0xA6DB27D19ECBB7DA(bLocal_89[0]))
									{
										unk_0x86A652570E5F25DD(&(bLocal_89[0]));
									}
									func_113(&uLocal_120, 5);
								}
								else if (unk_0x6CD5A433374D4CFB(bLocal_50[0], unk_0xD80958FC74E988A6()) || unk_0x751B70C3D034E187(bLocal_50[0], unk_0xD80958FC74E988A6(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (unk_0xA6DB27D19ECBB7DA(bLocal_89[0]))
								{
									unk_0x86A652570E5F25DD(&(bLocal_89[0]));
								}
								if (unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
								{
									if (unk_0xA6DB27D19ECBB7DA(bLocal_89[1]))
									{
										unk_0x86A652570E5F25DD(&(bLocal_89[1]));
									}
									func_113(&uLocal_120, 4);
								}
								else if (unk_0x6CD5A433374D4CFB(bLocal_50[1], unk_0xD80958FC74E988A6()) || unk_0x751B70C3D034E187(bLocal_50[1], unk_0xD80958FC74E988A6(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (unk_0xA6DB27D19ECBB7DA(bLocal_89[1]))
								{
									unk_0x86A652570E5F25DD(&(bLocal_89[1]));
								}
								if (unk_0x7239B21A38F536BA(bLocal_50[0]) && unk_0x7239B21A38F536BA(bLocal_50[1]))
								{
									if (((unk_0x131D401334815E94(bLocal_50[0], joaat("weapon_stungun"), 0) && unk_0x131D401334815E94(bLocal_50[1], joaat("weapon_stungun"), 0)) || (unk_0x3317DEDB88C95038(bLocal_50[0], true) && unk_0x3317DEDB88C95038(bLocal_50[1], true))) || func_112())
									{
										if (unk_0xA6DB27D19ECBB7DA(bLocal_89[0]))
										{
											unk_0x86A652570E5F25DD(&(bLocal_89[0]));
										}
										if (unk_0xA6DB27D19ECBB7DA(bLocal_89[1]))
										{
											unk_0x86A652570E5F25DD(&(bLocal_89[1]));
										}
										if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
										{
											if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 15f, 15f, 15f, false, true, 0))
											{
												if (!func_116())
												{
													func_114(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													unk_0xD86D101FCFD00A4B(bLocal_58, 16);
													unk_0xA72CD9CA74A5ECBA(bLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_64)
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
									{
										if ((unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x47E4E977581C5B55(bLocal_58))
										{
											unk_0xEA47FE3719165B94(bLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, false, false, false);
										}
										else
										{
											unk_0xE1EF3C1216AFF2CD(bLocal_58);
										}
										unk_0x0BDDB8D9EC6BCF3C(bLocal_58, false);
										unk_0x9F3480FE65DB31B5(bLocal_58, func_111());
										unk_0x3DBFC55D5C9BB447(bLocal_58, true);
										func_110();
										bLocal_64 = true;
									}
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
								{
									if (unk_0x1F0B79228E461EC9(bLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x346D81500D088F42(bLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0xE1EF3C1216AFF2CD(bLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!func_116())
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!func_116())
									{
										if (func_109() == 0)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_109() == 1)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
									{
										if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 8f, 8f, 8f, false, true, 0) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
										{
											if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
											{
												unk_0x86A652570E5F25DD(&bLocal_88);
											}
										}
										else if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
										{
											bLocal_88 = func_107(bLocal_58, 0, 145);
										}
									}
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
								{
									if (unk_0x6CD5A433374D4CFB(bLocal_50[0], unk_0xD80958FC74E988A6()))
									{
										if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) < 2)
										{
										}
									}
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
								{
									if (unk_0x6CD5A433374D4CFB(bLocal_50[1], unk_0xD80958FC74E988A6()))
									{
										if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_106())
								{
									if (!func_116())
									{
										func_104();
										unk_0x4EDE34FBADD967A6(false);
										func_114(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0x2595DD4236549CE3(&(bLocal_50[0]));
										unk_0x2595DD4236549CE3(&(bLocal_50[1]));
										if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
										{
											if (unk_0x5891CAC5D4ACFF74(bLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < bLocal_50)
												{
													if (unk_0x7239B21A38F536BA(bLocal_50[iVar0]))
													{
														unk_0x2595DD4236549CE3(&(bLocal_50[iVar0]));
													}
													iVar0++;
												}
												unk_0x020E5F00CDA207BA(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_98();
								func_93();
								func_92();
								func_89();
								func_88();
								if (func_87(Local_67))
								{
									func_68(0);
									func_104();
									unk_0x4EDE34FBADD967A6(false);
									func_114(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_66())
								{
									func_68(0);
									func_104();
									unk_0x4EDE34FBADD967A6(false);
									func_114(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
								{
									if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_67, Global_22, true, true, 0) && unk_0x751B70C3D034E187(bLocal_58, unk_0xD80958FC74E988A6(), 8f, 8f, 8f, false, true, 0))
									{
										if (unk_0x5891CAC5D4ACFF74(bLocal_58))
										{
											if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
											{
												unk_0x86A652570E5F25DD(&bLocal_88);
											}
											if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
											{
												unk_0x86A652570E5F25DD(&bLocal_90);
											}
											if (unk_0xA6DB27D19ECBB7DA(bLocal_91))
											{
												unk_0x86A652570E5F25DD(&bLocal_91);
											}
											if (unk_0x5891CAC5D4ACFF74(bLocal_58))
											{
												unk_0xED74007FFB146BC2(bLocal_58);
											}
											if (func_106())
											{
												if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
												{
													unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 5f, 2, false);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_104();
												unk_0x4EDE34FBADD967A6(false);
												func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
												{
													unk_0xE8854A4326B9E12B(&iLocal_102);
													unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 5000, 2052, 2);
													unk_0x15D3A79D4E44B913(false, Local_68, 1f, -1, 0.25f, false, 38.9844f);
													unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
													unk_0x39E72BC99E6360CB(iLocal_102);
													unk_0x5ABA3986D90D8A3B(bLocal_58, iLocal_102);
													unk_0x3841422E9C488D8C(&iLocal_102);
													unk_0x971D38760FBC02EF(bLocal_58, true);
												}
												func_35(func_109(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_34();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_117();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (unk_0x25D39B935A038A26(bLocal_115))
								{
									if (unk_0xE4A310B1D7FA73CC(bLocal_115) > 0.85f)
									{
										if (unk_0x4C241E39B23DF959(bLocal_53, false))
										{
											if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
											{
												if (!unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_53, false))
												{
													if (!unk_0x47E4E977581C5B55(bLocal_58))
													{
														unk_0xE1EF3C1216AFF2CD(bLocal_58);
														unk_0xF75B0D629E1C063D(bLocal_58, bLocal_53, 2);
														unk_0x971D38760FBC02EF(bLocal_58, true);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0x7239B21A38F536BA(bLocal_58))
							{
								unk_0x9614299DCB53E54B(&bLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
							{
								if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 150f, 150f, 150f, false, true, 0) || unk_0xC86D67D52A707CF8(bLocal_58, unk_0xD80958FC74E988A6(), true))
								{
									unk_0x22B0D0E37CCB840D(bLocal_58, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
									func_104();
									func_117();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
						}
						if (unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
						{
							if (unk_0xA6DB27D19ECBB7DA(bLocal_89[0]))
							{
								unk_0x86A652570E5F25DD(&(bLocal_89[0]));
							}
						}
						if (unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
						{
							if (unk_0xA6DB27D19ECBB7DA(bLocal_89[1]))
							{
								unk_0x86A652570E5F25DD(&(bLocal_89[1]));
							}
						}
						if (unk_0x84A2DD9AC37C35C1(bLocal_58))
						{
							if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
							{
								unk_0x86A652570E5F25DD(&bLocal_88);
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
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0x7239B21A38F536BA(bLocal_50[0]))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_50[1]))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_58))
	{
		if (unk_0x84A2DD9AC37C35C1(bLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_32198)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_113372 = iParam0;
}

void func_4()
{
	while (func_116())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (!func_33())
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	func_8(-1, 0);
	func_5();
	func_212();
}

void func_5()
{
	func_6();
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

void func_8(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_30(iParam0))
	{
		func_29(iParam0, bParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_15(iParam0, bParam1) != 322)
		{
			func_9(func_15(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_3(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_10();
	}
}

void func_10()
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
		func_12(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_11() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_31959;
}

int func_12(int iParam0, bool bParam1)
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

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_14();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

int func_14()
{
	return Global_1574918;
}

int func_15(int iParam0, bool bParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(bool bParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
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

void func_22()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_26(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_25(unk_0xD80958FC74E988A6());
			if (func_24(iVar0) && (!func_23(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_24(Global_113386.f_2363.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_28(int iParam0)
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

void func_29(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_113386.f_24995.f_8[iParam0]), bParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_32(Var0);
	return uVar1;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_33()
{
	return 1;
}

void func_34()
{
	switch (iLocal_118)
	{
		case 0:
			func_104();
			unk_0x4EDE34FBADD967A6(false);
			func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		
		case 1:
			iLocal_118++;
			break;
		
		case 2:
			iLocal_118++;
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
			{
				unk_0xE8854A4326B9E12B(&iLocal_102);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 5000, 2052, 2);
				unk_0x15D3A79D4E44B913(false, Local_68, 1f, -1, 0.25f, false, 38.9844f);
				unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
				unk_0x39E72BC99E6360CB(iLocal_102);
				unk_0x5ABA3986D90D8A3B(bLocal_58, iLocal_102);
				unk_0x3841422E9C488D8C(&iLocal_102);
				unk_0x971D38760FBC02EF(bLocal_58, true);
			}
			iLocal_118++;
			break;
		
		case 4:
			func_35(func_109(), 1, 80, 0, 1);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_65(iParam0) == 3)
	{
		return;
	}
	if (func_65(iParam0) == 4)
	{
		return;
	}
	func_36(func_65(iParam0), 1, iParam1, bParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x767FBC2AC802EF3D(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + bParam2);
		unk_0xB3271D7AB655B441(iVar1, bVar0, true);
	}
}

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_64();
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
					func_63(99, 1);
					func_62(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_48(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_45(5))
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
							func_62(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_45(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_62(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_property"), bParam3);
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
									func_62(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_45(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_44(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_63(95, bParam3);
					break;
				
				case 1:
					func_63(97, bParam3);
					break;
				
				case 2:
					func_63(96, bParam3);
					break;
			}
			func_63(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
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
					func_62(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_total_cash_earned"), bParam3);
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
	func_38(iParam0);
	if (Global_43052 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)
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

void func_38(int iParam0)
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

void func_39(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_41() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_41() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_40(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_40(bool bParam0)
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

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_43(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

void func_44(int iParam0)
{
	func_63(93, iParam0);
	func_63(29, iParam0);
	func_63(30, iParam0);
}

int func_45(int iParam0)
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
		return func_47(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_47(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_47(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_47(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_46(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_46(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_46(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_46(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_46(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_46(8277, -1, 0);
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
	return BitTest(Global_2359296[func_41() /*5567*/].f_681.f_10, iParam0);
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_43(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_47(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_48(bool bParam0)
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
		func_12(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_49(27, 1);
	return 1;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_50(iParam0, iParam1);
}

int func_50(int iParam0, int iParam1)
{
	if (func_23(14) && !func_61(iParam0))
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
	if (func_60(&Global_4541529))
	{
		if (func_58(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_51(&Global_4541529, iParam0))
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

int func_51(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	func_54(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_52(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_53(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_53(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_54(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_55(uParam0, iVar0);
		iVar0++;
	}
	func_56(uParam0, (Global_4541528 - 0.5f));
}

void func_55(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_56(var uParam0, float fParam1)
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

float func_57(var uParam0)
{
	return uParam0->f_80;
}

bool func_58(var uParam0, int iParam1)
{
	return func_59(uParam0, iParam1) != -1;
}

int func_59(var uParam0, int iParam1)
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

bool func_60(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_61(int iParam0)
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

void func_62(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_63(int iParam0, int iParam1)
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

void func_64()
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

int func_65(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_66()
{
	if (func_109() == 2)
	{
		if (func_67())
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

bool func_67()
{
	return Global_32197;
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (func_71(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && unk_0x16754C556D2EDE3D())
	{
		Local_63 = { func_70() };
		Local_62 = { func_69() };
		func_124();
		iLocal_61 = 1;
	}
}

struct<6> func_69()
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

struct<6> func_70()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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
	if (func_23(14))
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
		Global_20266 = func_109();
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

int func_87(struct<3> Param0)
{
	if (func_109() == 2)
	{
		if (func_67() && !Global_32200)
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

void func_88()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
	{
		if (!iLocal_73)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), true) && unk_0xA3EE4A07279BB9DB(bLocal_58, unk_0xB6997A7EB3F5C8C0(), false))
				{
					func_68(0);
					func_104();
					unk_0x4EDE34FBADD967A6(false);
					func_114(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false) && unk_0xA3EE4A07279BB9DB(bLocal_58, unk_0xB6997A7EB3F5C8C0(), false))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
			{
				func_68(0);
				func_104();
				unk_0x4EDE34FBADD967A6(false);
				func_114(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				func_68(0);
				func_104();
				unk_0x4EDE34FBADD967A6(false);
				func_114(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_89()
{
	if (!func_90())
	{
		func_68(1);
	}
	if (!func_116())
	{
		switch (iLocal_96)
		{
			case 0:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 1:
				func_114(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 2:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 3:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 4:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 5:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 6:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 7:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 8:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 9:
				func_114(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_90()
{
	if (((((((((func_91("REHOM_QM") || func_91("REHOM_GETOUT")) || func_91("REHOM_SHOOT")) || func_91("REHOM_JACK")) || func_91("REHOM_WRONG")) || func_91("REHOM_CULT")) || func_91("REHOM_STOP")) || func_91("REHOM_NOVEH")) || func_91("REHOM_UNS1")) || func_91("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_91(bool bParam0)
{
	var uVar0;
	
	if (func_116())
	{
		MemCopy(&uVar0, {func_70()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
	{
		if (unk_0x01FEE67DB37F59B2(bLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = unk_0x9CD27B0045628463();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = unk_0x9CD27B0045628463();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (unk_0x5891CAC5D4ACFF74(bLocal_58))
			{
				unk_0xED74007FFB146BC2(bLocal_58);
				func_114(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_117();
			}
		}
	}
}

void func_93()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = unk_0x9CD27B0045628463();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = unk_0x9CD27B0045628463();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_68(0);
		func_104();
		unk_0x4EDE34FBADD967A6(false);
		func_114(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
		{
			unk_0x22B0D0E37CCB840D(bLocal_58, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
			func_94(bLocal_58, 120000, 0);
			unk_0x971D38760FBC02EF(bLocal_58, true);
			if (unk_0x5891CAC5D4ACFF74(bLocal_58))
			{
				unk_0xED74007FFB146BC2(bLocal_58);
			}
		}
		func_117();
	}
}

int func_94(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	iVar0 = func_97(bParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_96(bParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_95();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = bParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (bParam0 == unk_0xD80958FC74E988A6())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_96(bool bParam0)
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

int func_97(bool bParam0)
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
		if (bParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_98()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 8f, 8f, 8f, false, true, 0) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xA6DB27D19ECBB7DA(bLocal_88))
			{
				unk_0x86A652570E5F25DD(&bLocal_88);
			}
			if (!unk_0x5891CAC5D4ACFF74(bLocal_58))
			{
				unk_0x9F3480FE65DB31B5(bLocal_58, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
				unk_0x0BDDB8D9EC6BCF3C(bLocal_58, false);
			}
			if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				if (!unk_0xA6DB27D19ECBB7DA(bLocal_90))
				{
					bLocal_90 = func_102(Local_67, 1);
				}
				if (unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_90))
					{
						bLocal_90 = func_102(Local_67, 1);
					}
				}
				if (func_109() == 2 && !func_101())
				{
					if (!unk_0xA6DB27D19ECBB7DA(bLocal_91))
					{
						bLocal_91 = func_102(Local_69, 0);
						unk_0xDF735600A4696DAF(bLocal_91, 269);
						func_99();
					}
				}
			}
		}
		else
		{
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
			{
				bLocal_88 = func_107(bLocal_58, 0, 145);
			}
			if (unk_0xA6DB27D19ECBB7DA(bLocal_90))
			{
				unk_0x86A652570E5F25DD(&bLocal_90);
			}
		}
	}
}

void func_99()
{
	if (func_109() == 2)
	{
		if (!Global_32199)
		{
			func_100("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_100(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_101()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_102(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_103(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_104()
{
	Global_20471 = 0;
	func_105();
}

void func_105()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

int func_106()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(bLocal_86, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
			{
				if (unk_0xA808AA1D79230FC2(bLocal_58, bLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_107(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_108(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(bVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(bVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return bVar0;
}

bool func_108(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_103(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_103(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_103(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

int func_109()
{
	func_22();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_110()
{
	if (!func_101())
	{
		if (func_109() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_111()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_112()
{
	if (unk_0x7239B21A38F536BA(bLocal_53))
	{
		if (((unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_53, false) && unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_53, false)) && !unk_0xA3EE4A07279BB9DB(bLocal_50[0], bLocal_53, false)) && !unk_0xA3EE4A07279BB9DB(bLocal_50[1], bLocal_53, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_114(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_115()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	func_212();
}

void func_118()
{
	if (!iLocal_77)
	{
		if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
		{
			unk_0x4D9CA1009AFBD057(bLocal_50[0], 0);
			unk_0xE1EF3C1216AFF2CD(bLocal_50[0]);
			unk_0xE8854A4326B9E12B(&iLocal_102);
			unk_0x0F804F1DB19B9689(false);
			unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x39E72BC99E6360CB(iLocal_102);
			unk_0x5ABA3986D90D8A3B(bLocal_50[0], iLocal_102);
			unk_0x3841422E9C488D8C(&iLocal_102);
			unk_0x971D38760FBC02EF(bLocal_50[0], true);
			if (unk_0xA6DB27D19ECBB7DA(bLocal_89[0]))
			{
				unk_0x6F6F290102C02AB4(bLocal_89[0], false);
			}
			unk_0x5AE11BC36633DE4E(false);
			iLocal_77 = 1;
		}
		else
		{
			unk_0x5AE11BC36633DE4E(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (unk_0xA6DB27D19ECBB7DA(bLocal_89[1]))
		{
			unk_0x6F6F290102C02AB4(bLocal_89[1], false);
		}
		func_104();
		unk_0x4EDE34FBADD967A6(false);
		if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
		{
			func_119(bLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			unk_0x4D9CA1009AFBD057(bLocal_50[1], 2);
			if ((unk_0x1F0B79228E461EC9(bLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x25D39B935A038A26(bLocal_115)) && !unk_0x47E4E977581C5B55(bLocal_50[1]))
			{
				unk_0x26695EC767728D84(bLocal_50[1], 16);
				unk_0xE8854A4326B9E12B(&iLocal_102);
				unk_0xEA47FE3719165B94(false, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, false, false, false, false);
				unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x39E72BC99E6360CB(iLocal_102);
				unk_0x5ABA3986D90D8A3B(bLocal_50[1], iLocal_102);
				unk_0x3841422E9C488D8C(&iLocal_102);
				unk_0x971D38760FBC02EF(bLocal_50[1], true);
				iLocal_78 = 1;
			}
			else
			{
				unk_0xF166E48407BAC484(bLocal_50[1], unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x971D38760FBC02EF(bLocal_50[1], true);
				iLocal_78 = 1;
			}
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
	{
		if (((!unk_0x1F0B79228E461EC9(bLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x1F0B79228E461EC9(bLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0x77F1BEB8863288D5(bLocal_50[1], 780511057) != 0) && unk_0x77F1BEB8863288D5(bLocal_50[1], 780511057) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_119(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_120(iParam2), true);
}

int func_120(int iParam0)
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

void func_121()
{
	iLocal_47 = 3;
}

void func_122()
{
	func_104();
	unk_0x4EDE34FBADD967A6(false);
	func_114(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_123()
{
	iLocal_47 = 3;
}

void func_124()
{
	Global_20471 = 0;
	func_125();
}

void func_125()
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

int func_126()
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (unk_0x5F9532F3B5CC2551(bLocal_50[iLocal_92], false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_50[iLocal_92], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_127()
{
	iLocal_94 = unk_0x9CD27B0045628463();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x9CD27B0045628463();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x9CD27B0045628463();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x9CD27B0045628463();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x9CD27B0045628463();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x9CD27B0045628463();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && unk_0x83666F9FB8FEBD4B() > 5000)
				{
					unk_0xE8854A4326B9E12B(&iLocal_102);
					unk_0x69F4BE8C8CC4796C(false, bLocal_58, -1, 2054, 2);
					unk_0x5AD23D40115353AC(false, bLocal_58, -1);
					unk_0x39E72BC99E6360CB(iLocal_102);
					unk_0x5ABA3986D90D8A3B(bLocal_50[0], iLocal_102);
					unk_0x971D38760FBC02EF(bLocal_50[0], true);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((unk_0x4C241E39B23DF959(bLocal_53, false) && !unk_0x84A2DD9AC37C35C1(bLocal_50[0])) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(bLocal_58))
					{
						if (unk_0x25D39B935A038A26(bLocal_115))
						{
							if (unk_0xE4A310B1D7FA73CC(bLocal_115) > 0.98f)
							{
								if (!func_116())
								{
									if (unk_0xD71649DB0A545AA3(bLocal_50[0], bLocal_58, 10f))
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0x0F804F1DB19B9689(bLocal_50[0]);
											bLocal_115 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x272E4723B56A3B96(bLocal_115, bLocal_53, 0);
											unk_0xEEA929141F699854(bLocal_58, bLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
											unk_0xEEA929141F699854(bLocal_50[0], bLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
											unk_0xEEA929141F699854(bLocal_50[1], bLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
											unk_0x7FB218262B810701(bLocal_53, "exit_car", "random@homelandsecurity", 4f, false, false, false, 0f, 0);
											iLocal_116 = 1;
											iLocal_93 = unk_0x9CD27B0045628463();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_130())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((unk_0x4C241E39B23DF959(bLocal_53, false) && !unk_0x84A2DD9AC37C35C1(bLocal_50[0])) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(bLocal_58))
				{
					if (unk_0x25D39B935A038A26(bLocal_115))
					{
						if (!func_116())
						{
							if (unk_0xD71649DB0A545AA3(bLocal_50[0], bLocal_58, 10f))
							{
								if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0x0F804F1DB19B9689(bLocal_50[0]);
									bLocal_115 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x272E4723B56A3B96(bLocal_115, bLocal_53, 0);
									unk_0xEEA929141F699854(bLocal_58, bLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
									unk_0xEEA929141F699854(bLocal_50[0], bLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
									unk_0xEEA929141F699854(bLocal_50[1], bLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
									unk_0x7FB218262B810701(bLocal_53, "exit_car", "random@homelandsecurity", 2f, false, false, false, 0f, 0);
									iLocal_116 = 1;
									iLocal_93 = unk_0x9CD27B0045628463();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_128();
				if (unk_0x25D39B935A038A26(bLocal_115))
				{
					if (unk_0xE4A310B1D7FA73CC(bLocal_115) > 0.45f)
					{
						if ((unk_0x4C241E39B23DF959(bLocal_53, false) && !unk_0x84A2DD9AC37C35C1(bLocal_58)) && !unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
						{
						}
					}
				}
				if (unk_0x25D39B935A038A26(bLocal_115))
				{
					if (unk_0xE4A310B1D7FA73CC(bLocal_115) > 0.9f)
					{
						if (unk_0x4C241E39B23DF959(bLocal_53, false))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
							{
								unk_0xC20E50AA46D09CA8(bLocal_50[0], bLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_128();
				if (unk_0x25D39B935A038A26(bLocal_115))
				{
					if (unk_0xE4A310B1D7FA73CC(bLocal_115) > 0.95f)
					{
						if (unk_0x4C241E39B23DF959(bLocal_53, false))
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
							{
								unk_0xC20E50AA46D09CA8(bLocal_50[1], bLocal_53, -1, false, 1f, 9, 0);
								unk_0x971D38760FBC02EF(bLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_128();
				if ((unk_0x4C241E39B23DF959(bLocal_53, false) && !unk_0x84A2DD9AC37C35C1(bLocal_50[0])) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
				{
					if ((unk_0xA808AA1D79230FC2(bLocal_58, bLocal_53) && unk_0xA808AA1D79230FC2(bLocal_50[0], bLocal_53)) && unk_0xA808AA1D79230FC2(bLocal_50[1], bLocal_53))
					{
						unk_0x480142959D337D00(bLocal_50[0], bLocal_53, 15f, 786468);
						unk_0xF4924635A19EB37D(bLocal_53, true);
						bLocal_104 = true;
					}
				}
				break;
			
			case 9:
				unk_0xE8854A4326B9E12B(&iLocal_102);
				unk_0x0F804F1DB19B9689(false);
				unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 20000, 0, 2);
				unk_0x9B53BB6E8943AF53(false, unk_0xD80958FC74E988A6(), -1, false);
				unk_0x39E72BC99E6360CB(iLocal_102);
				if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
				{
					unk_0x5ABA3986D90D8A3B(bLocal_50[0], iLocal_102);
				}
				unk_0x3841422E9C488D8C(&iLocal_102);
				if (!iLocal_80)
				{
					if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 3))
					{
						func_104();
						unk_0x4EDE34FBADD967A6(false);
						func_114(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 3) && !unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
					{
						func_104();
						unk_0x4EDE34FBADD967A6(false);
						if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
						{
							func_119(bLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = unk_0x9CD27B0045628463();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = unk_0x9CD27B0045628463();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) && !iLocal_81)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = unk_0x9CD27B0045628463();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = unk_0x9CD27B0045628463();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)) || iLocal_106)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
				{
					iLocal_101 = unk_0x9CD27B0045628463();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
				{
					unk_0xE8854A4326B9E12B(&iLocal_102);
					unk_0x0F804F1DB19B9689(false);
					unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), -1, 2052, 4);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
					unk_0x39E72BC99E6360CB(iLocal_102);
					unk_0x5ABA3986D90D8A3B(bLocal_50[0], iLocal_102);
					unk_0x3841422E9C488D8C(&iLocal_102);
				}
				if (iLocal_107)
				{
					if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
					{
						if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
						{
							if (unk_0x77F1BEB8863288D5(bLocal_50[1], 1785177548) != 1)
							{
								unk_0xE8854A4326B9E12B(&iLocal_102);
								unk_0x0F804F1DB19B9689(false);
								unk_0x5AD23D40115353AC(false, bLocal_58, false);
								unk_0x69F4BE8C8CC4796C(false, bLocal_58, 20000, 0, 2);
								unk_0x304AE42E357B8C7E(false, bLocal_58, -1f, 0f, 0f, 1f, -1, 0.1f, true);
								unk_0x39E72BC99E6360CB(iLocal_102);
								unk_0x5ABA3986D90D8A3B(bLocal_50[1], iLocal_102);
								unk_0x3841422E9C488D8C(&iLocal_102);
							}
						}
						else if (unk_0x77F1BEB8863288D5(bLocal_50[1], 1785177548) != 1)
						{
							unk_0xE8854A4326B9E12B(&iLocal_102);
							unk_0x0F804F1DB19B9689(false);
							unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
							unk_0x69F4BE8C8CC4796C(false, unk_0xD80958FC74E988A6(), 20000, 0, 2);
							unk_0x39E72BC99E6360CB(iLocal_102);
							unk_0x5ABA3986D90D8A3B(bLocal_50[1], iLocal_102);
							unk_0x3841422E9C488D8C(&iLocal_102);
						}
					}
					if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
					{
						if (unk_0x77F1BEB8863288D5(bLocal_58, 1785177548) != 1)
						{
							unk_0x84D32B3BEC531324(bLocal_58, unk_0xD80958FC74E988A6(), -1, false);
							unk_0x971D38760FBC02EF(bLocal_58, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_130())
				{
					if (unk_0x25D39B935A038A26(bLocal_115))
					{
						if (!iLocal_107)
						{
							if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
							{
							}
							if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
							{
								unk_0x84D32B3BEC531324(bLocal_58, unk_0xD80958FC74E988A6(), -1, false);
								unk_0x971D38760FBC02EF(bLocal_58, true);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
				{
					if (!func_116() && !iLocal_82)
					{
						if (func_115())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					unk_0xC1B1E9A034A63A62(false);
					iLocal_93 = (unk_0x9CD27B0045628463() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_128()
{
	if (!func_116())
	{
		if (unk_0x4C241E39B23DF959(bLocal_53, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_58, bLocal_53, false))
				{
					if (func_129(bLocal_58, 0) == 2)
					{
						if (iLocal_95 < unk_0x9CD27B0045628463())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(3500, 4000));
						}
					}
				}
			}
		}
	}
}

bool func_129(bool bParam0, bool bParam1)
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

int func_130()
{
	if ((!unk_0x84A2DD9AC37C35C1(bLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1])) && !unk_0x84A2DD9AC37C35C1(bLocal_58))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 1.5f, 1.5f, 5f, false, true, 2) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[1], 2.5f, 2.5f, 5f, false, true, 2)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 1.5f, 1.5f, 5f, false, true, 2))
			{
				return 1;
			}
		}
		else if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 0.5f, 0.5f, 5f, false, true, 1) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[1], 0.5f, 0.5f, 5f, false, true, 1)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_58, 0.5f, 0.5f, 5f, false, true, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[1], 6f, 6f, 6f, false, true, 0))
		{
			if (unk_0xD71649DB0A545AA3(bLocal_50[1], unk_0xD80958FC74E988A6(), 120f))
			{
				if (!unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 6f, 6f, 6f, false, true, 0))
		{
			if (!unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[1], 6f, 6f, 6f, false, true, 1))
		{
			if (unk_0xD71649DB0A545AA3(bLocal_50[1], unk_0xD80958FC74E988A6(), 120f))
			{
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bLocal_50[0], 6f, 6f, 6f, false, true, 1))
		{
			if (unk_0xD71649DB0A545AA3(bLocal_50[0], unk_0xD80958FC74E988A6(), 120f))
			{
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_16(Global_113375))
		{
			func_134(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_16(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_100(func_135(iParam0), -1);
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
					func_100(func_135(iParam0), -1);
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
					func_100(func_135(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
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

int func_136()
{
	switch (func_137(&Global_32019, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_141(0))
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
		if (!func_139(iParam2))
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
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
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

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_43052);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142()
{
	if (unk_0xA6DB27D19ECBB7DA(bLocal_87))
	{
		unk_0x86A652570E5F25DD(&bLocal_87);
	}
	if (!unk_0xA6DB27D19ECBB7DA(bLocal_88))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_58, false))
		{
			bLocal_88 = func_107(bLocal_58, 0, 145);
			unk_0x75A16C3DA34F1245(bLocal_88, false);
		}
	}
	else
	{
		unk_0x75A16C3DA34F1245(bLocal_88, true);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!unk_0xA6DB27D19ECBB7DA(bLocal_89[iLocal_92]))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_50[iLocal_92], false))
			{
				bLocal_89[iLocal_92] = func_107(bLocal_50[iLocal_92], 0, 145);
				unk_0x75A16C3DA34F1245(bLocal_89[iLocal_92], false);
			}
		}
		else
		{
			unk_0x75A16C3DA34F1245(bLocal_89[iLocal_92], true);
		}
		iLocal_92++;
	}
}

int func_143()
{
	bool bVar0;
	bool bVar1;
	
	if (!bLocal_99)
	{
		if (unk_0x5270A8FBC098C3F8(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true) || unk_0xDE0F6D7450D37351(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]) && !unk_0x84A2DD9AC37C35C1(bLocal_50[1]))
		{
			if (unk_0x751B70C3D034E187(bLocal_50[0], unk_0xD80958FC74E988A6(), 20f, 20f, 20f, false, true, 0))
			{
				if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7) || (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()) && unk_0x751B70C3D034E187(bLocal_50[0], unk_0xD80958FC74E988A6(), 6f, 6f, 6f, false, true, 0)))
				{
					if (((unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_50[0]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_50[0])) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bLocal_50[1])) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bLocal_50[1]))
					{
						if (unk_0x6CD5A433374D4CFB(bLocal_50[0], unk_0xD80958FC74E988A6()) || unk_0x6CD5A433374D4CFB(bLocal_50[1], unk_0xD80958FC74E988A6()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (unk_0x7239B21A38F536BA(bLocal_53))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_53, false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_53, unk_0xD80958FC74E988A6(), true))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xEC5F66E459AF3BB2(unk_0xD80958FC74E988A6(), bLocal_53) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_53, false))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0x4C241E39B23DF959(bVar0, false))
				{
					if (unk_0xC86D67D52A707CF8(bLocal_53, bVar0, true))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (unk_0xC86D67D52A707CF8(bLocal_53, unk_0xD80958FC74E988A6(), true))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck")) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("towtruck2")))
			{
				bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x5F9532F3B5CC2551(bLocal_53, false))
				{
					if (unk_0x146DF9EC4C4B9FD4(bVar1, bLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_50[0]) || unk_0x5F9532F3B5CC2551(bLocal_50[0], false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_50[0], unk_0xD80958FC74E988A6(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_50[0]) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_50[0], bVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_50[1]) || unk_0x5F9532F3B5CC2551(bLocal_50[1], false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_50[1], unk_0xD80958FC74E988A6(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_50[1]) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_50[1], bVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(bLocal_58, false))
		{
			if (unk_0xC86D67D52A707CF8(bLocal_58, unk_0xD80958FC74E988A6(), true))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0xC86D67D52A707CF8(bLocal_58, bVar0, true))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (unk_0xC86D67D52A707CF8(bLocal_58, unk_0xD80958FC74E988A6(), true))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	func_146(39, 1);
	func_146(40, 1);
	func_146(41, 1);
	func_146(42, 1);
	func_146(43, 1);
	func_146(44, 1);
	unk_0x1B5C85C612E5256E(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, false, true, true, true);
	unk_0x1B5C85C612E5256E(Local_68 - Vector(20f, 20f, 20f), Local_68 + Vector(20f, 20f, 20f), false, true, true, true);
	unk_0xBE31FD6CE464AC59(Local_59, 50f, 0);
	unk_0x34F060F4BF92E018(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	unk_0x933D6A9EEC1BACD0(&uLocal_97, 5);
	bLocal_58 = unk_0xD49F9B0955C367DE(26, bLocal_60, Local_59, false, true, true);
	unk_0x9F8AA94D6D97DBF4(bLocal_58, true);
	unk_0xE532F5D78798DAAB(bLocal_60);
	unk_0x63F58F7C80513AAD(bLocal_58, false);
	unk_0x1913FE4CBF41C463(bLocal_58, 185, true);
	unk_0x1913FE4CBF41C463(bLocal_58, 206, true);
	unk_0x70A2D1137C8ED7C9(bLocal_58, 2, false);
	unk_0x9D64D7405520E3D3(bLocal_58, true);
	unk_0x6C8065A3B780185B(bLocal_58, "REHOMGirl");
	unk_0x262B14F48D29DE80(bLocal_58, 0, 2, true, 0);
	unk_0x262B14F48D29DE80(bLocal_58, 2, false, false, 0);
	unk_0x262B14F48D29DE80(bLocal_58, 3, true, 4, 0);
	unk_0x262B14F48D29DE80(bLocal_58, 4, false, 5, 0);
	unk_0x262B14F48D29DE80(bLocal_58, 6, true, false, 0);
	unk_0xF372BC22FCB88606("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		bLocal_50[iLocal_92] = unk_0xD49F9B0955C367DE(6, bLocal_56, Local_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], true, true);
		unk_0x9F8AA94D6D97DBF4(bLocal_50[iLocal_92], true);
		unk_0xE532F5D78798DAAB(bLocal_56);
		unk_0xC80A74AC829DDD92(bLocal_50[iLocal_92], iLocal_119);
		unk_0x1913FE4CBF41C463(bLocal_50[iLocal_92], 42, true);
		iLocal_92++;
	}
	unk_0xBF0FD6E56C964FCB(bLocal_50[0], joaat("weapon_pistol"), -1, true, true);
	unk_0xBF0FD6E56C964FCB(bLocal_50[1], joaat("weapon_pistol"), -1, false, true);
	unk_0xBF25EB89375A37AD(5, iLocal_119, joaat("player"));
	unk_0xBF25EB89375A37AD(1, iLocal_119, joaat("COP"));
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_119);
	bLocal_53 = unk_0xAF35D0D2583051B0(bLocal_57, Local_54, bLocal_55, true, true, false);
	unk_0x0FC2D89AC25A5814(bLocal_57, true);
	unk_0x49733E92263139D1(bLocal_53, 5f);
	unk_0xF4924635A19EB37D(bLocal_53, true);
	func_145(&uLocal_120, 5, bLocal_50[0], "ACULTMember1", 0, 1);
	func_145(&uLocal_120, 4, bLocal_50[1], "ACULTMember2", 0, 1);
	func_145(&uLocal_120, 3, bLocal_58, "REHOMGirl", 0, 1);
	if (func_109() == 0)
	{
		func_145(&uLocal_120, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (func_109() == 1)
	{
		func_145(&uLocal_120, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	bLocal_115 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x272E4723B56A3B96(bLocal_115, bLocal_53, 0);
	unk_0xEEA929141F699854(bLocal_58, bLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1000f, 0);
	unk_0xEEA929141F699854(bLocal_50[0], bLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1000f, 0);
	unk_0xEEA929141F699854(bLocal_50[1], bLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1000f, 0);
	unk_0xD9A897A4C6C2974F(bLocal_115, true);
}

void func_145(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_150(iParam0, 2, 1))
		{
			func_149(iParam0, 2, 1);
		}
	}
	else if (func_150(iParam0, 2, 1))
	{
		func_147(iParam0, 2, 1);
	}
}

void func_147(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			bVar0 = func_46(func_148(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_42(func_148(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_148(int iParam0)
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

void func_149(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			bVar0 = func_46(func_148(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_42(func_148(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			return BitTest(func_46(func_148(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_151()
{
	unk_0x963D27A58DF860AC(bLocal_60);
	unk_0x963D27A58DF860AC(bLocal_56);
	unk_0x963D27A58DF860AC(bLocal_57);
	unk_0xD3BD40951412FEF6("random@homelandsecurity");
	if (((unk_0x98A4EB5D89A0C952(bLocal_60) && unk_0x98A4EB5D89A0C952(bLocal_56)) && unk_0x98A4EB5D89A0C952(bLocal_57)) && unk_0xD031A9162D01088C("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		unk_0x963D27A58DF860AC(bLocal_60);
		unk_0x963D27A58DF860AC(bLocal_56);
		unk_0x963D27A58DF860AC(bLocal_57);
		unk_0xD3BD40951412FEF6("random@homelandsecurity");
	}
}

void func_152()
{
	bLocal_60 = joaat("a_f_y_tourist_01");
	bLocal_56 = joaat("a_m_o_acult_01");
	bLocal_57 = joaat("fugitive");
	Local_59 = { -174.0522f, 1905.611f, 197.0466f };
	Local_51[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_52[0] = 147.8596f;
	Local_51[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_52[1] = 164.5974f;
	Local_54 = { -172.4207f, 1905.183f, 197.1163f };
	bLocal_55 = 187.3899f;
	Local_67 = { 469.8768f, 2617.532f, 42.2566f };
	Local_68 = { 472.2393f, 2611.611f, 42.2676f };
	Local_69 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_71 = 1;
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
		if (func_24(func_109()))
		{
			iVar5 = func_21();
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
	if (!func_139(5))
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
	if ((Global_113375 == func_31() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
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
		iParam1 = func_31();
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
		if (func_7(0))
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
		if (func_24(func_109()))
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
		if (func_24(func_109()))
		{
			if (func_208(func_109()) == 4 || func_208(func_109()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_109()))
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
		if (!func_139(5))
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
		if (func_24(func_109()))
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
								if (func_109() != iVar2)
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
				iVar0 = func_109();
				if (!func_24(iVar0))
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
	iVar1 = func_109();
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
	if (!func_24(iParam0))
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
	
	if (iLocal_70)
	{
		func_226(0);
		if (Global_32201)
		{
			unk_0x706D57B0F50DA710("AC_STOP");
		}
		func_225();
		unk_0xD37401D78A929A49();
		unk_0xE04B48F2CC926253(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		unk_0x020E5F00CDA207BA(1f);
		func_104();
		if (iLocal_71)
		{
			unk_0xE532F5D78798DAAB(bLocal_60);
			unk_0xE532F5D78798DAAB(bLocal_56);
			unk_0xE532F5D78798DAAB(bLocal_57);
			unk_0x0FC2D89AC25A5814(bLocal_57, false);
		}
		iVar0 = 0;
		while (iVar0 < bLocal_50)
		{
			if (unk_0x7239B21A38F536BA(bLocal_50[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(bLocal_50[iVar0]))
				{
					if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						unk_0x6671F3EEC681BDA1(bLocal_50[iVar0], func_224(unk_0x4F8644AF03D0E0D6()), -1, false, false);
						unk_0x971D38760FBC02EF(bLocal_50[iVar0], true);
						if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
						{
							unk_0x3EB1FE9E8E908E15(bLocal_58, -1);
							unk_0x971D38760FBC02EF(bLocal_58, true);
						}
					}
					unk_0x9F8AA94D6D97DBF4(bLocal_50[iVar0], false);
				}
				unk_0x2595DD4236549CE3(&(bLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x7239B21A38F536BA(bLocal_58))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_58))
			{
				unk_0x1913FE4CBF41C463(bLocal_58, 317, true);
				if (unk_0x5891CAC5D4ACFF74(bLocal_58))
				{
					unk_0xED74007FFB146BC2(bLocal_58);
				}
				if (!unk_0x997ABD671D25CA0B(bLocal_58, false))
				{
					unk_0xBB8DE8CF6A8DD8BB(bLocal_58);
				}
				unk_0x9F8AA94D6D97DBF4(bLocal_58, false);
			}
			unk_0x2595DD4236549CE3(&bLocal_58);
		}
		if (unk_0x7239B21A38F536BA(bLocal_53))
		{
			unk_0x629BFA74418D6239(&bLocal_53);
		}
		unk_0xDC0F817884CDD856(5, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
	}
	func_213(-1);
	unk_0x1090044AD1DA76FA();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
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
		if (func_30(Global_113375) > 0)
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

Vector3 func_224(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_225()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_226(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_146(iVar0, bParam0);
		iVar0++;
	}
}

