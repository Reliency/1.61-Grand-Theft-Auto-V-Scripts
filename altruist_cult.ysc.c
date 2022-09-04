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
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int* iLocal_109 = NULL;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	Local_53 = { -1109.213f, 4914.744f, 216.101f };
	Local_54 = { -1034.6f, 4918.6f, 205.9f };
	Local_55 = { -1066.963f, 4873.13f, 207.3281f };
	Local_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	Local_58 = { -1138.386f, 4872.04f, 207.5488f };
	Local_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	Local_61 = { -1171.648f, 4888.658f, 211.0756f };
	Local_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	Local_64 = { -1177.981f, 4903.231f, 212.477f };
	Local_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	Local_67 = { -1175.693f, 4904.839f, 207.5207f };
	Local_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	Local_70 = { -1106.212f, 4860.086f, 206.1207f };
	Local_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	Local_73 = { -1044.268f, 4916.587f, 209.8365f };
	Local_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	cLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0xC968670BFACE42D9(26))
	{
		func_194();
	}
	if (unk_0x9689123E3F213AA5())
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC5042CC6F5E3D450() || iLocal_77)
		{
			unk_0x020E5F00CDA207BA(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (Global_113386.f_24995.f_5 >= iLocal_96 && !func_193())
						{
							iLocal_50 = 2;
						}
						func_190();
						func_187();
					}
					break;
				
				case 1:
					unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_186();
							}
							else if (iLocal_91 == 2)
							{
								func_159();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_78)
						{
							func_144(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						func_116();
					}
					unk_0x6BAB9442830C7F53(Global_41748[9 /*31*/], 0, false, true);
					unk_0x6BAB9442830C7F53(Global_41748[10 /*31*/], 0, false, true);
					break;
				
				case 4:
					if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0x020E5F00CDA207BA(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0x84A2DD9AC37C35C1(iLocal_98[iVar0]))
						{
							if (unk_0xA6DB27D19ECBB7DA(uLocal_105[iVar0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0xDEB6D52126E7D640(iLocal_98[iVar0]))
							{
								if (unk_0xA6DB27D19ECBB7DA(uLocal_105[iVar0]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x751B70C3D034E187(iLocal_98[iVar0], unk_0xD80958FC74E988A6(), 30f, 30f, 30f, false, true, 0))
							{
								if (!func_115())
								{
									if (iLocal_95 < unk_0x9CD27B0045628463())
									{
										iVar1 = unk_0xD53343AA4FB7DD28(0, 3);
										if (iVar1 == 0)
										{
											func_100(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_99(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_99(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_63();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						iLocal_109 = func_62();
						if (!unk_0x85F01B8D5B90570E(iLocal_109))
						{
							break;
						}
						func_61(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_32(&uLocal_114, &uLocal_120, &iLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0xB6BA2444AB393DA2(iLocal_270);
						unk_0xAE287C923D891715(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0x7239B21A38F536BA(iLocal_98[iVar0]))
							{
								unk_0x9614299DCB53E54B(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0x7239B21A38F536BA(iLocal_103[iVar0]))
							{
								unk_0x539E0AE3E6634B9F(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0xA7A932170592B50E(iLocal_106))
						{
							unk_0x026FB97D0A425F84(iLocal_106, false);
						}
						if (unk_0x7239B21A38F536BA(iLocal_101))
						{
							unk_0x539E0AE3E6634B9F(&iLocal_101);
						}
						if (unk_0x7239B21A38F536BA(iLocal_101))
						{
							unk_0x539E0AE3E6634B9F(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_194();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_194();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDA66D2796BA33F12(false);
		unk_0x2C2B3493FBF51C71(true);
		unk_0x4A18E01DF2C87B86(false);
		func_2(1);
		Global_95699 = 1;
	}
	else
	{
		unk_0xDA66D2796BA33F12(true);
		unk_0x2C2B3493FBF51C71(false);
		unk_0x4A18E01DF2C87B86(true);
		func_2(0);
		Global_95699 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_43052 == 9 || Global_43052 == 10) || Global_43052 == 5)
	{
		Global_112035 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112035 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return BitTest(Global_1958711, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		unk_0x2206BF9A37B7F724("DeathFailOut", 0, false);
		unk_0x933D6A9EEC1BACD0(&iLocal_48, true);
		func_13(1, 2, 0);
		unk_0x80C8B1846639BB19(2);
	}
	else
	{
		if (BitTest(iLocal_48, 1) || iParam1)
		{
			unk_0x068E835A1D0DC0E3("DeathFailOut");
			func_13(0, 2, 1);
			unk_0x80C8B1846639BB19(0);
		}
		unk_0xE80492A9AC099A93(&iLocal_48, true);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&iLocal_48, 2);
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (iParam1 == 1)
			{
				unk_0x1D408577D440E81E(0.2f);
			}
			else
			{
				unk_0x1D408577D440E81E(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x10FAB35428CCC9D7())
			{
				unk_0x1D408577D440E81E(1f);
			}
		}
		unk_0xE80492A9AC099A93(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_48, 0) || iParam1)
		{
			unk_0x2206BF9A37B7F724(sVar0, 0, false);
			unk_0x933D6A9EEC1BACD0(&iLocal_48, false);
			func_13(1, 1, 0);
			unk_0x80C8B1846639BB19(1);
		}
	}
	else
	{
		if (BitTest(iLocal_48, 0) || iParam1)
		{
			unk_0x068E835A1D0DC0E3(sVar0);
			func_13(0, 1, 1);
			unk_0x80C8B1846639BB19(0);
		}
		unk_0xE80492A9AC099A93(&iLocal_48, false);
	}
}

int func_15()
{
	func_16();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_20(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_19(unk_0xD80958FC74E988A6());
			if (func_18(iVar0) && (!func_17(14) || Global_112337))
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

bool func_17(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
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

void func_22()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6(), 0);
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_31(1);
		unk_0xA8FDB297A8D25FBA();
		unk_0xFDB423997FA30340();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_5())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_30(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_31(0);
		unk_0xE1CD1E48E025E661();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_30(0, bParam3, iParam2, 0);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (((((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_28(unk_0x4F8644AF03D0E0D6())) && !func_25(unk_0x4F8644AF03D0E0D6(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
			}
		}
		else if (((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_28(unk_0x4F8644AF03D0E0D6())) && !bParam4) && !bParam5)
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_78317 = 0;
	}
}

bool func_24()
{
	return BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_36.f_18, 14);
}

bool func_25(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
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

int func_27()
{
	return Global_1574918;
}

int func_28(bool bParam0)
{
	if (func_25(bParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return BitTest(Global_2621446, 3);
}

int func_30(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, int* iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x013A80FC08F6E4F2("DEATH_SCENE");
			unk_0x67C540AA08E4A6F5(-1, "ScreenFlash", "WastedSounds", true);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x5262CC1995D07E09(true);
			break;
		
		case 1:
			if (func_57() || unk_0xB16FCE9DDC7BA182())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (unk_0x2F844A8B08D76685("OFFMISSION_WASTED", false, -1))
				{
					unk_0x67C540AA08E4A6F5(-1, "Bed", "WastedSounds", true);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					unk_0x67C540AA08E4A6F5(-1, "TextHit", "WastedSounds", true);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_33(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					unk_0x21FFB63D8C615361(true);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x5262CC1995D07E09(false);
				unk_0x2C2B3493FBF51C71(false);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0xDA66D2796BA33F12(true);
				func_14(0, 1);
				func_12(0, 1);
				unk_0xDFE8422B3B94E688("DEATH_SCENE");
				unk_0x5262CC1995D07E09(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x5262CC1995D07E09(false);
			return 1;
			break;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xB16FCE9DDC7BA182() || unk_0x797AC7CB535BA28F())
			{
				unk_0x891B5B39AC6302AF(2500);
				unk_0xEB2D525B57F42B40();
			}
			if (bParam9)
			{
				unk_0x5262CC1995D07E09(true);
			}
			unk_0x1D408577D440E81E(0.2f);
			if (func_53(iParam5, 4))
			{
				if (unk_0x2F844A8B08D76685("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xF6E48914C7A8694E(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x80338406F3475E55("STRING");
			unk_0x39BBF623FC803EAC(6);
			unk_0xC63CD5D2920ACBE7(sParam2);
			unk_0x362E2D3FE93A9959();
			func_52(sParam3);
			unk_0xC3D0841A0CC546A6(100);
			unk_0xC58424BA936EB458(true);
			unk_0xC50AA39A577AF886();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6E48914C7A8694E(*uParam0, "TRANSITION_UP");
					unk_0xD69736AAE04DB51A(uParam1->f_134);
					unk_0xC6796A8FFA375E53();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				unk_0x5F4B6931816E599B(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				unk_0x67C540AA08E4A6F5(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0x2206BF9A37B7F724("MinigameEndMichael", 500, false);
						break;
					
					case 1:
						unk_0x2206BF9A37B7F724("MinigameEndFranklin", 500, false);
						break;
					
					case 2:
						unk_0x2206BF9A37B7F724("MinigameEndTrevor", 500, false);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x4B0311D3CDC4648F();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6E48914C7A8694E(*uParam0, "TRANSITION_UP");
					unk_0xD69736AAE04DB51A(uParam1->f_134);
					unk_0xC6796A8FFA375E53();
					uParam1->f_136 = 1;
				}
			}
			unk_0x61BB1D9B3A95D802(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xB16FCE9DDC7BA182()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xAAE7CE1D63167423();
				if (unk_0x50F940259D3841E6(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x67C540AA08E4A6F5(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						unk_0xA5FFE9B05F199DE7(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x50F940259D3841E6(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x67C540AA08E4A6F5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						unk_0xA5FFE9B05F199DE7(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x67C540AA08E4A6F5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						unk_0xA5FFE9B05F199DE7(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			unk_0x1D408577D440E81E(1f);
			if (uParam1->f_138 || !((unk_0x0C515FAB3FF9EA92("stunt_plane_races", unk_0x442E0A7EDE4A738A()) || unk_0x0C515FAB3FF9EA92("pilot_school", unk_0x442E0A7EDE4A738A())) || (unk_0x0C515FAB3FF9EA92("bj", unk_0x442E0A7EDE4A738A()) && unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))))
			{
				unk_0xD4E8E24955024033(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				unk_0x891B5B39AC6302AF(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x5262CC1995D07E09(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(int* iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(BitTest(*iParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, true);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar2 = unk_0x7A5487FE9FAA6B48();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

void func_37(int* iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0x1D132D614DD86811(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x797AC7CB535BA28F() || unk_0x5C544BC6C57AC575()) || unk_0xB16FCE9DDC7BA182()) || unk_0x7EA2B6AF97ECA6ED())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	unk_0x4B0311D3CDC4648F();
	unk_0x61BB1D9B3A95D802(iParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0x6CD79468A1E595C6(2)))
	{
		unk_0xF6E48914C7A8694E(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD69736AAE04DB51A(fParam1);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fParam5);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xC6796A8FFA375E53();
		if (unk_0x48AF36444B965238())
		{
			unk_0xF6E48914C7A8694E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xC58424BA936EB458(func_53(uParam0->f_1, 4096));
			unk_0xC6796A8FFA375E53();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xA571D46727E2B718(2);
					break;
				
				case 2:
					bVar4 = !unk_0xA571D46727E2B718(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xF6E48914C7A8694E(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xC3D0841A0CC546A6(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = unk_0x0499D7B09FC9B407(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!unk_0xCA042B6957743895(sVar3))
						{
							func_42(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xCA042B6957743895(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x48AF36444B965238())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xC58424BA936EB458(true);
								unk_0xC3D0841A0CC546A6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xC58424BA936EB458(false);
								unk_0xC3D0841A0CC546A6(-1);
							}
						}
					}
					unk_0xC6796A8FFA375E53();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF6E48914C7A8694E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD69736AAE04DB51A(fVar8);
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(0f);
		unk_0xD69736AAE04DB51A(80f);
		unk_0xC6796A8FFA375E53();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return BitTest(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	if (!bParam2)
	{
		unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x0DF606929C105BE1(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_44(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int* iParam0)
{
	if (!func_49(iParam0))
	{
		func_34(iParam0);
	}
}

bool func_49(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC514489CFB8AF806("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (unk_0x85F01B8D5B90570E(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6D8EB211944DCE08(*uParam0, true);
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57()
{
	if (!BitTest(iLocal_48, 0) && !BitTest(iLocal_48, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_14(1, 0);
	}
	if (!unk_0xD3C2E180A40F031E())
	{
		unk_0xCC33FA791322B9D9();
	}
	unk_0xFE99B66D079CF6BC(2, 199, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	unk_0xFE99B66D079CF6BC(0, 37, true);
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0x5A7F62FDA59759BD();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_48, 1))
		{
			func_12(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xB16FCE9DDC7BA182())
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				if (!unk_0x797AC7CB535BA28F())
				{
					unk_0x891B5B39AC6302AF(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x9CD27B0045628463() + 1000;
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				unk_0x745711A75AB09277(false);
				unk_0xDF47FC56C71569CF(false);
				unk_0x8DFCED7A656F8802(true);
				unk_0xCC33FA791322B9D9();
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (unk_0x9CD27B0045628463() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_48, 3))
			{
				unk_0x577D1284D6873711(true);
				unk_0x933D6A9EEC1BACD0(&iLocal_48, 3);
			}
		}
		else if (BitTest(iLocal_48, 3))
		{
			unk_0x577D1284D6873711(false);
			unk_0xE80492A9AC099A93(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(int* iParam0)
{
	if (!func_49(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_34(iParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x2F844A8B08D76685("OFFMISSION_WASTED", false, -1);
}

int func_62()
{
	return unk_0x11FE353CF9733E6F("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_80)
	{
		unk_0x399D2D3B33F1B8EB("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		Global_113386.f_24995.f_5 = 1000;
		unk_0xB165AB7C248B2DC1(64);
		Global_113386.f_20564.f_472 = 54;
		iLocal_259 = unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
		func_98(1);
		while (!unk_0x85F01B8D5B90570E(iLocal_259))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF6E48914C7A8694E(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0xC50AA39A577AF886();
		while (!func_97())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_96();
		unk_0xC1B1E9A034A63A62(0);
		unk_0x67C540AA08E4A6F5(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", true);
		iLocal_80 = 1;
	}
	unk_0x0DF606929C105BE1(iLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0xF6E48914C7A8694E(iLocal_259, "SHARD_ANIM_OUT");
			unk_0xC3D0841A0CC546A6(1);
			unk_0xD69736AAE04DB51A(0.33f);
			unk_0xC6796A8FFA375E53();
			iLocal_82 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x85F01B8D5B90570E(iLocal_259))
		{
			unk_0x1D132D614DD86811(&iLocal_259);
			func_98(0);
		}
		while (unk_0xF1B760881820C952(func_95(unk_0x4F8644AF03D0E0D6()), Local_53, true) < 209f && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_64(18);
		func_194();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_113377 = unk_0x9CD27B0045628463();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_113375, 1), 64);
		if (func_67(Global_113375) > 0)
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
	func_66(&Global_32019);
	Global_113376 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_113375 = iParam0;
}

void func_66(var uParam0)
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

int func_67(int iParam0)
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

char* func_68(int iParam0, bool bParam1)
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

void func_69(int iParam0)
{
	Global_43603 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_79(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_78(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_74(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 15;
}

int func_76(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
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
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
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

var func_90()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x494E97C2EF27C470());
	func_87(&uVar0, unk_0x13D2B8ADD79640F2());
	func_86(&uVar0, unk_0x25223CA6B4D20B7F());
	func_84(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_85(&uVar0, unk_0xBBC72712E80257A1());
	func_83(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

int func_91(int iParam0)
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

int func_92()
{
	if ((Global_113375 == func_93() && unk_0xD2D57F1D764117B1()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar1 = func_94(Var0);
	return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_95(bool bParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(bParam0), false);
}

void func_96()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_106())
	{
		return 0;
	}
	if (func_104(unk_0x4F8644AF03D0E0D6()))
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

bool func_104(bool bParam0)
{
	return func_105(bParam0, 20);
}

var func_105(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_20266 = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0xFB5045B7C42B75BF("THUNDER", 20f);
			if (!unk_0x991251AFC3981F84())
			{
				unk_0x7A86743F475D9E09("ac_ig_3_p3_b", 8);
			}
			unk_0x963D27A58DF860AC(joaat("a_m_o_acult_02"));
			unk_0x963D27A58DF860AC(joaat("a_m_y_acult_02"));
			unk_0x963D27A58DF860AC(joaat("prop_box_wood03a"));
			unk_0x963D27A58DF860AC(joaat("prop_box_wood04a"));
			unk_0x963D27A58DF860AC(joaat("prop_box_wood05a"));
			unk_0x963D27A58DF860AC(joaat("prop_security_case_01"));
			while ((((((!func_143() || !unk_0x98A4EB5D89A0C952(joaat("a_m_o_acult_02"))) || !unk_0x98A4EB5D89A0C952(joaat("a_m_y_acult_02"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_box_wood03a"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_box_wood04a"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_box_wood05a"))) || !unk_0x98A4EB5D89A0C952(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_436 = func_136(unk_0xD80958FC74E988A6(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x7239B21A38F536BA(iLocal_436))
			{
				unk_0xE40C1C56DF95C2E8(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xE40C1C56DF95C2E8(0, "Rifle_Mag1^1", 3, unk_0x0DB57B41EC1DB083(joaat("component_assaultrifle_clip_01")), 0);
			if (func_143() && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "TREVOR", 0, 0, 0);
				unk_0xE40C1C56DF95C2E8(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE40C1C56DF95C2E8(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE40C1C56DF95C2E8(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE40C1C56DF95C2E8(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xE40C1C56DF95C2E8(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x186D5CB5E7B0FF7B(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_76 && Global_113386.f_24995.f_5 != 1000)
			{
				func_135();
			}
			if (unk_0x7239B21A38F536BA(iLocal_98[0]))
			{
				unk_0x9614299DCB53E54B(&(iLocal_98[0]));
			}
			if (unk_0x7239B21A38F536BA(iLocal_98[1]))
			{
				unk_0x9614299DCB53E54B(&(iLocal_98[1]));
			}
			if (unk_0xA7A932170592B50E(iLocal_106))
			{
				unk_0x026FB97D0A425F84(iLocal_106, false);
			}
			if (unk_0x7239B21A38F536BA(iLocal_101))
			{
				unk_0x539E0AE3E6634B9F(&iLocal_101);
			}
			if (unk_0x7239B21A38F536BA(iLocal_101))
			{
				unk_0x539E0AE3E6634B9F(&iLocal_101);
			}
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
			{
				unk_0x86A652570E5F25DD(&iLocal_104);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
			unk_0x8DFCED7A656F8802(true);
			unk_0xA6294919E56FF02A(false);
			unk_0xA0EBB943C300E693(false);
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
			}
			unk_0xA56F01F3765B93A0(Local_53, 100f, true, false, false, false);
			unk_0x1B5C85C612E5256E(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), false, true, true, true);
			unk_0x020E5F00CDA207BA(0f);
			unk_0xDC0F817884CDD856(3, false);
			unk_0xDC0F817884CDD856(5, false);
			iLocal_108 = unk_0xD5C12A75C7B9497F(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, true);
			unk_0x963D27A58DF860AC(joaat("a_m_o_acult_01"));
			while (!unk_0x98A4EB5D89A0C952(joaat("a_m_o_acult_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0xB2CBCD0930DFB420(false))
			{
				if (unk_0x4C6A6451C79E4662("CULT_MASTER", 0))
				{
					if (!unk_0x7239B21A38F536BA(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("CULT_MASTER", 0));
					}
				}
				if (unk_0x4C6A6451C79E4662("REAR_CULT", 0))
				{
					if (!unk_0x7239B21A38F536BA(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("REAR_CULT", 0));
					}
				}
				if (unk_0x4C6A6451C79E4662("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x7239B21A38F536BA(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x4C6A6451C79E4662("CARBINE_CULT", 0))
				{
					if (!unk_0x7239B21A38F536BA(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("CARBINE_CULT", 0));
					}
				}
				if (unk_0x4C6A6451C79E4662("SHOTGUN_CULT", 0))
				{
					if (!unk_0x7239B21A38F536BA(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x4C6A6451C79E4662("TREVOR", 0))
				{
					unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1173.531f, 4924.357f, 222.2101f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 188.9369f);
					unk_0x4172393E6BE1FECE(unk_0xD80958FC74E988A6(), -1173.509f, 4924.365f, 222.21f, -1, false, 0f, true, false, iLocal_108, false);
					unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), true, false);
				}
				if (unk_0x4C6A6451C79E4662("Trevors_weapon", 0))
				{
					unk_0xB1FA61371AF7C4B7(iLocal_436, unk_0xD80958FC74E988A6());
				}
				unk_0xB4EC2312F4E5B1F1(91.3878f);
				unk_0x6D0858B8EDFD2B7D(4.4337f, 1f);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				unk_0xA6294919E56FF02A(true);
				unk_0xA0EBB943C300E693(true);
				Local_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				unk_0xF372BC22FCB88606("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						unk_0xC8A9481A01E63C28(iLocal_98[iVar1], 0);
						unk_0xBF0FD6E56C964FCB(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, true, true);
						unk_0x4D9CA1009AFBD057(iLocal_98[iVar1], 0);
						unk_0xC7622C0D36B2FDA8(iLocal_98[iVar1], 2);
						unk_0x112942C6E708F70B(iLocal_98[iVar1], 50f, 20);
						unk_0x7AEFB85C1D49DEB6(iLocal_98[iVar1], 5);
						unk_0x33A8F7F7D5F7F33C(iLocal_98[iVar1], 100f);
						unk_0xF29CF591C4BF6CEE(iLocal_98[iVar1], 100f);
						unk_0x6B76DC1F3AE6E6A3(iLocal_98[iVar1], 150, 0);
						unk_0x614DA022990752DC(iLocal_98[iVar1], unk_0xD53343AA4FB7DD28(40, 60));
						unk_0xF166E48407BAC484(iLocal_98[iVar1], unk_0xD80958FC74E988A6(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						unk_0xC8A9481A01E63C28(iLocal_98[iVar1], 0);
						unk_0xBF0FD6E56C964FCB(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, true, true);
						unk_0x9F7794730795E019(iLocal_98[iVar1], 50, true);
						unk_0x4D9CA1009AFBD057(iLocal_98[iVar1], 2);
						unk_0xC7622C0D36B2FDA8(iLocal_98[iVar1], 1);
						unk_0x112942C6E708F70B(iLocal_98[iVar1], 50f, 20);
						unk_0x7AEFB85C1D49DEB6(iLocal_98[iVar1], 5);
						unk_0x33A8F7F7D5F7F33C(iLocal_98[iVar1], 100f);
						unk_0xF29CF591C4BF6CEE(iLocal_98[iVar1], 100f);
						unk_0x614DA022990752DC(iLocal_98[iVar1], unk_0xD53343AA4FB7DD28(40, 60));
						unk_0xF166E48407BAC484(iLocal_98[iVar1], unk_0xD80958FC74E988A6(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x84A2DD9AC37C35C1(iLocal_98[iVar1]) && !unk_0x84A2DD9AC37C35C1(iLocal_98[11])) && !unk_0x84A2DD9AC37C35C1(iLocal_98[12])) && !unk_0x84A2DD9AC37C35C1(iLocal_98[13])) && !unk_0x84A2DD9AC37C35C1(iLocal_98[14])) && !unk_0x84A2DD9AC37C35C1(iLocal_98[15]))
						{
							unk_0xBF0FD6E56C964FCB(iLocal_98[11], joaat("weapon_pistol"), -1, true, true);
							unk_0xBF0FD6E56C964FCB(iLocal_98[12], joaat("weapon_assaultrifle"), -1, true, true);
							unk_0xBF0FD6E56C964FCB(iLocal_98[13], joaat("weapon_assaultrifle"), -1, true, true);
							unk_0xBF0FD6E56C964FCB(iLocal_98[14], joaat("weapon_carbinerifle"), -1, true, true);
							unk_0xBF0FD6E56C964FCB(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, true, true);
							unk_0x9F7794730795E019(iLocal_98[iVar1], 0, true);
							unk_0x4D9CA1009AFBD057(iLocal_98[iVar1], 3);
							unk_0xC7622C0D36B2FDA8(iLocal_98[iVar1], 0);
							unk_0x7AEFB85C1D49DEB6(iLocal_98[iVar1], 0);
							unk_0x8378627201D5497D(iLocal_98[iVar1], 1f, 1f);
							unk_0xE8854A4326B9E12B(&iLocal_107);
							unk_0xB2A16444EAD9AE47(0, -1159.33f, 4924.412f, 221.6576f, unk_0xD80958FC74E988A6(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 6000, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_107);
							unk_0x5ABA3986D90D8A3B(iLocal_98[15], iLocal_107);
							unk_0x3841422E9C488D8C(&iLocal_107);
							unk_0xE8854A4326B9E12B(&iLocal_107);
							unk_0xB2A16444EAD9AE47(0, -1163.279f, 4932.933f, 222.541f, unk_0xD80958FC74E988A6(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x84D32B3BEC531324(0, unk_0xD80958FC74E988A6(), 5000, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 7500, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_107);
							unk_0x5ABA3986D90D8A3B(iLocal_98[14], iLocal_107);
							unk_0x3841422E9C488D8C(&iLocal_107);
							unk_0xE8854A4326B9E12B(&iLocal_107);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 2500, false);
							unk_0x84D32B3BEC531324(0, unk_0xD80958FC74E988A6(), 5000, false);
							unk_0xB2A16444EAD9AE47(0, -1156.175f, 4926.073f, 221.3447f, unk_0xD80958FC74E988A6(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 6500, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_107);
							unk_0x5ABA3986D90D8A3B(iLocal_98[13], iLocal_107);
							unk_0x3841422E9C488D8C(&iLocal_107);
							unk_0xE8854A4326B9E12B(&iLocal_107);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 3000, false);
							unk_0xB2A16444EAD9AE47(0, -1157.962f, 4922.196f, 221.309f, unk_0xD80958FC74E988A6(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 5500, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_107);
							unk_0x5ABA3986D90D8A3B(iLocal_98[12], iLocal_107);
							unk_0x3841422E9C488D8C(&iLocal_107);
							unk_0xE8854A4326B9E12B(&iLocal_107);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0x84D32B3BEC531324(0, unk_0xD80958FC74E988A6(), 10000, false);
							unk_0xB2A16444EAD9AE47(0, -1161.475f, 4916.061f, 220.5658f, unk_0xD80958FC74E988A6(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 4500, false);
							unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_107);
							unk_0x5ABA3986D90D8A3B(iLocal_98[11], iLocal_107);
							unk_0x3841422E9C488D8C(&iLocal_107);
							unk_0x971D38760FBC02EF(iLocal_98[iVar1], true);
							unk_0xC1E8A365BF3B29F2(iLocal_98[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], true, true);
						unk_0xC8A9481A01E63C28(iLocal_98[iVar1], 0);
						unk_0xBF0FD6E56C964FCB(iLocal_98[iVar1], joaat("weapon_pistol"), -1, true, true);
						unk_0x9F7794730795E019(iLocal_98[iVar1], 50, true);
						unk_0x4D9CA1009AFBD057(iLocal_98[iVar1], 2);
						unk_0xC7622C0D36B2FDA8(iLocal_98[iVar1], 0);
						unk_0x112942C6E708F70B(iLocal_98[iVar1], 50f, 20);
						unk_0x3C606747B23E497B(iLocal_98[iVar1], 1);
						unk_0x7AEFB85C1D49DEB6(iLocal_98[iVar1], 5);
						unk_0x33A8F7F7D5F7F33C(iLocal_98[iVar1], 100f);
						unk_0xF29CF591C4BF6CEE(iLocal_98[iVar1], 100f);
						unk_0x614DA022990752DC(iLocal_98[iVar1], unk_0xD53343AA4FB7DD28(40, 60));
						unk_0xF166E48407BAC484(iLocal_98[iVar1], unk_0xD80958FC74E988A6(), 0, 16);
					}
					unk_0xC80A74AC829DDD92(iLocal_98[iVar1], iLocal_270);
					unk_0x8E2530AA8ADA980E(iLocal_98[iVar1], func_134(unk_0x3FEF770D40960D5A(iLocal_98[iVar1], true), func_95(unk_0x4F8644AF03D0E0D6())));
					unk_0x9F8AA94D6D97DBF4(iLocal_98[iVar1], true);
					unk_0x1913FE4CBF41C463(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_132(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_271, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
				func_99(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0x933D6A9EEC1BACD0(&iVar0, true);
				unk_0x933D6A9EEC1BACD0(&iVar0, 3);
				unk_0x933D6A9EEC1BACD0(&iVar0, 4);
				if (!bLocal_76)
				{
					iLocal_102[0] = unk_0x891804727E0A98B7(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[1] = unk_0x891804727E0A98B7(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[2] = unk_0x891804727E0A98B7(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_102[3] = unk_0x891804727E0A98B7(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
				}
				iLocal_102[0] = iLocal_102[0];
				iLocal_102[1] = iLocal_102[1];
				iLocal_102[2] = iLocal_102[2];
				iLocal_102[3] = iLocal_102[3];
				iLocal_103[0] = unk_0x509D5878EB39E842(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, true, true, false);
				iLocal_103[1] = unk_0x509D5878EB39E842(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, true, true, false);
				iLocal_103[2] = unk_0x509D5878EB39E842(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, true, true, false);
				iLocal_103[3] = unk_0x509D5878EB39E842(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, true, true, false);
				iLocal_103[4] = unk_0x509D5878EB39E842(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, true, true, false);
				iLocal_103[5] = unk_0x509D5878EB39E842(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, true, true, false);
				unk_0x8524A8B0171D5E07(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, true);
				unk_0x8524A8B0171D5E07(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, true);
				unk_0x8524A8B0171D5E07(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, true);
				unk_0x8524A8B0171D5E07(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, true);
				unk_0x8524A8B0171D5E07(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, true);
				unk_0x8524A8B0171D5E07(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, true);
				if (func_131() < 50)
				{
					unk_0xA0696A65F009EE18(unk_0x4F8644AF03D0E0D6(), 0.5f, true, 0);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x9CD27B0045628463();
		if (func_121(Global_113375))
		{
			func_118(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_121(Global_113375))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_119(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_120(int iParam0)
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

int func_121(int iParam0)
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

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_113372 = 0;
	func_129();
}

void func_129()
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

int func_130()
{
	return Global_113375;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_41(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_41(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_41(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0x2FFB6B224F4B2926((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_135()
{
	Global_32198 = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar2 = iParam1;
	if (!unk_0x8DECB02F88F428BC(iParam0, iParam1, false))
	{
		bVar0 = true;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			iVar3 = unk_0x015A522136D7F951(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x583BE370B1EC6EB4(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xDC16122C7A20C933(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0x3FEF770D40960D5A(iParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar6) != 0)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			if (unk_0xC593212475FAE340(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				if (func_139(func_140(iVar2, iVar6)))
				{
					iVar7 = unk_0x0DB57B41EC1DB083(func_140(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0x9541D3CF0D398F36(iVar2, iVar3, Var5, bVar0, 1f, iVar7, iParam7, iParam8);
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			if (unk_0xC593212475FAE340(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				unk_0x33E179436C0B31DB(iVar1, func_140(iVar2, iVar8));
				func_137(iVar1, func_140(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		if (unk_0x8DECB02F88F428BC(iParam0, iVar2, false))
		{
			unk_0xF827589017D4E4A9(iVar1, unk_0x2B9EEDC07BD06B9F(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		unk_0x33E179436C0B31DB(iParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade")) || iParam0 == joaat("component_appistol_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_security")) || iParam0 == joaat("component_microsmg_varmod_security"))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x405425358A7D61FE(iVar1))
					{
						if (unk_0x6CF598A2957C2BF8(iVar1, iVar2, &Var5))
						{
							if (!func_141(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_141(int iParam0)
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

int func_142(int iParam0, var* uParam1)
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

bool func_143()
{
	bool bVar0;
	
	bVar0 = unk_0xC59F528E9AB9F339();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
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
	if (func_155(&Global_4541529))
	{
		if (func_153(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4541529, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4541528 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_156(int iParam0)
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

void func_157()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x15C40837039FFAF7())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0xB6E6FBA95C7324AC(Global_41748[10 /*31*/], fLocal_87, false, true);
		unk_0x6BAB9442830C7F53(Global_41748[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x15C40837039FFAF7())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0xB6E6FBA95C7324AC(Global_41748[9 /*31*/], fLocal_86, false, true);
		unk_0x6BAB9442830C7F53(Global_41748[9 /*31*/], 4, false, true);
	}
}

void func_158()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x15C40837039FFAF7())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0xB6E6FBA95C7324AC(Global_41748[10 /*31*/], fLocal_87, false, true);
		unk_0x6BAB9442830C7F53(Global_41748[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x15C40837039FFAF7())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0xB6E6FBA95C7324AC(Global_41748[9 /*31*/], fLocal_86, false, true);
		unk_0x6BAB9442830C7F53(Global_41748[9 /*31*/], 4, false, true);
	}
}

void func_159()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x963D27A58DF860AC(joaat("a_m_o_acult_02"));
			unk_0x963D27A58DF860AC(joaat("prop_anim_cash_pile_02"));
			unk_0xD3BD40951412FEF6("random@altruist_cult");
			unk_0x1E5185B72EF5158A("AC_DELIVERED");
			unk_0x5443438F033E29C3(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x98A4EB5D89A0C952(joaat("a_m_o_acult_02")) && unk_0x98A4EB5D89A0C952(joaat("prop_anim_cash_pile_02"))) && unk_0xD031A9162D01088C("random@altruist_cult")) && unk_0x1E5185B72EF5158A("AC_DELIVERED")) && unk_0x36E353271F0E90EE(joaat("weapon_assaultrifle")))
			{
				if (Global_113386.f_24995.f_5 < 2)
				{
					if (Global_113386.f_24995.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x963D27A58DF860AC(joaat("prop_box_wood03a"));
					unk_0x963D27A58DF860AC(joaat("prop_box_wood04a"));
					unk_0x963D27A58DF860AC(joaat("prop_box_wood05a"));
					unk_0x963D27A58DF860AC(joaat("prop_security_case_01"));
					if (!unk_0x991251AFC3981F84())
					{
						unk_0x7A86743F475D9E09("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
				{
					unk_0x86A652570E5F25DD(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				unk_0x8DFCED7A656F8802(true);
				unk_0xA6294919E56FF02A(false);
				unk_0xA0EBB943C300E693(false);
				unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
				unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
				unk_0x706D57B0F50DA710("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_99 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_99, false))
					{
						if (unk_0x5721B434AD84D57A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xB6997A7EB3F5C8C0();
					if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_97[1]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_97[0]);
						unk_0xED74007FFB146BC2(iLocal_97[0]);
						unk_0xE1EF3C1216AFF2CD(iLocal_97[1]);
						unk_0xED74007FFB146BC2(iLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(iLocal_99))
			{
				if (!unk_0x0A7B270912999B3C(iLocal_99))
				{
					unk_0xAD738C3085FE7E11(iLocal_99, true, false);
				}
				if (unk_0x20B60995556D004F(iLocal_99, Local_54, 13f, 13f, 13f, false, true, 0))
				{
					unk_0x06843DA7060A026B(iLocal_99, -1028.415f, 4924.863f, 205.9386f, false, false, false, true);
					if (!unk_0x5F9532F3B5CC2551(iLocal_99, false))
					{
						unk_0x8E2530AA8ADA980E(iLocal_99, 149.8882f);
						unk_0x49733E92263139D1(iLocal_99, 5f);
					}
				}
			}
			unk_0xA56F01F3765B93A0(Local_54, 12f, true, false, false, false);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1035.625f, 4915.152f, 205.5761f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 128.2065f);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_97[1]))
			{
				unk_0x06843DA7060A026B(iLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), true, false, false, true);
				unk_0x8E2530AA8ADA980E(iLocal_97[0], 128.2065f);
				unk_0x06843DA7060A026B(iLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), true, false, false, true);
				unk_0x8E2530AA8ADA980E(iLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, true, true);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				iLocal_98[1] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, true, true);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x9F8AA94D6D97DBF4(iLocal_98[0], true);
			iLocal_101 = unk_0x9541D3CF0D398F36(joaat("weapon_assaultrifle"), -1, unk_0x3FEF770D40960D5A(iLocal_98[0], true), true, 1f, 0, 0, 1);
			unk_0x6B9BBD38AB0796DF(iLocal_101, iLocal_98[0], unk_0x3F428D08BE5AAE31(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_113386.f_24995.f_5 < 2)
			{
				iLocal_100 = unk_0x509D5878EB39E842(joaat("prop_anim_cash_pile_02"), Local_53, true, true, false);
				unk_0x6B9BBD38AB0796DF(iLocal_100, unk_0xD80958FC74E988A6(), unk_0x3F428D08BE5AAE31(unk_0xD80958FC74E988A6(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			else if (Global_113386.f_24995.f_5 >= 2)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_106 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = unk_0x8C18E0F9080ADD73(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1000f, 0);
			unk_0xEEA929141F699854(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_113386.f_24995.f_5 >= 2)
			{
				unk_0xEEA929141F699854(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1000f, 0);
			}
			unk_0xE32EFE9AB4A9AA0C(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_97[1]))
			{
				unk_0xEEA929141F699854(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1000f, 0);
				unk_0xEEA929141F699854(iLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[0]))
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[1]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[1]))
				{
					func_180(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xE4A310B1D7FA73CC(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[0]))
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[1]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[1]))
				{
					func_180(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xE4A310B1D7FA73CC(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_113386.f_24995.f_5 < 2)
			{
				func_135();
				if (unk_0x7239B21A38F536BA(iLocal_98[0]))
				{
					unk_0x9614299DCB53E54B(&(iLocal_98[0]));
				}
				if (unk_0x7239B21A38F536BA(iLocal_98[1]))
				{
					unk_0x9614299DCB53E54B(&(iLocal_98[1]));
				}
				if (unk_0x7239B21A38F536BA(iLocal_100))
				{
					unk_0x539E0AE3E6634B9F(&iLocal_100);
				}
				if (unk_0x7239B21A38F536BA(iLocal_101))
				{
					unk_0x539E0AE3E6634B9F(&iLocal_101);
				}
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
				unk_0x026FB97D0A425F84(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				unk_0xA6294919E56FF02A(true);
				unk_0xA0EBB943C300E693(true);
				unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
				unk_0xB4EC2312F4E5B1F1(0f);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			unk_0x706D57B0F50DA710("AC_DONE");
			Global_113386.f_24995.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_179(iParam0) == 3)
	{
		return;
	}
	if (func_179(iParam0) == 4)
	{
		return;
	}
	func_161(func_179(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
	}
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_178();
	if (iParam3 < 1)
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
					func_177(99, 1);
					func_176(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_174(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
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
							func_176(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_176(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_property"), iParam3);
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
									func_176(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_177(95, iParam3);
					break;
				
				case 1:
					func_177(97, iParam3);
					break;
				
				case 2:
					func_177(96, iParam3);
					break;
			}
			func_177(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_176(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_163(iParam0);
	if (Global_43052 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_164(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_169(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_169(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_169(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_169(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_167(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_167(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_167(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_167(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_166() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_166() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_165(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_165(bool bParam0)
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

int func_166()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_168(var uParam0)
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

void func_169(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_170(int iParam0)
{
	func_177(93, iParam0);
	func_177(29, iParam0);
	func_177(30, iParam0);
}

int func_171(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_173(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_172(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_172(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_172(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_172(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_172(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_172(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_166() /*5567*/].f_681.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_168(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_173(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_174(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_175(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_175(int iParam0, int iParam1)
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
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
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
		unk_0x767FBC2AC802EF3D(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_178()
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

int func_179(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

void func_180(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_181(iParam3), false);
}

int func_181(int iParam0)
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

void func_182()
{
	Global_20471 = 0;
	func_183();
}

void func_183()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_184(int iParam0)
{
	Global_22616 = iParam0;
}

int func_185()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_186()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x963D27A58DF860AC(joaat("a_m_o_acult_02"));
			unk_0x963D27A58DF860AC(joaat("prop_anim_cash_pile_02"));
			unk_0xD3BD40951412FEF6("random@altruist_cult");
			unk_0x1E5185B72EF5158A("AC_DELIVERED");
			unk_0x5443438F033E29C3(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x98A4EB5D89A0C952(joaat("a_m_o_acult_02")) && unk_0x98A4EB5D89A0C952(joaat("prop_anim_cash_pile_02"))) && unk_0xD031A9162D01088C("random@altruist_cult")) && unk_0x1E5185B72EF5158A("AC_DELIVERED")) && unk_0x36E353271F0E90EE(joaat("weapon_assaultrifle")))
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_113386.f_24995.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_113386.f_24995.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x963D27A58DF860AC(joaat("prop_box_wood03a"));
					unk_0x963D27A58DF860AC(joaat("prop_box_wood04a"));
					unk_0x963D27A58DF860AC(joaat("prop_box_wood05a"));
					unk_0x963D27A58DF860AC(joaat("prop_security_case_01"));
					if (!unk_0x991251AFC3981F84())
					{
						unk_0x7A86743F475D9E09("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
				{
					unk_0x86A652570E5F25DD(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				unk_0x8DFCED7A656F8802(true);
				unk_0xA6294919E56FF02A(false);
				unk_0xA0EBB943C300E693(false);
				unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
				unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
				unk_0x706D57B0F50DA710("AC_DELIVERED");
				if (func_185())
				{
					func_184(0);
				}
				func_182();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_99 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_99, false))
					{
						if (unk_0x5721B434AD84D57A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xB6997A7EB3F5C8C0();
					if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_97[0]);
						unk_0xED74007FFB146BC2(iLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(iLocal_99))
			{
				if (!unk_0x0A7B270912999B3C(iLocal_99))
				{
					unk_0xAD738C3085FE7E11(iLocal_99, true, false);
				}
				if (unk_0x20B60995556D004F(iLocal_99, Local_54, 13f, 13f, 13f, false, true, 0))
				{
					unk_0x06843DA7060A026B(iLocal_99, -1028.415f, 4924.863f, 205.9386f, false, false, false, true);
					if (!unk_0x5F9532F3B5CC2551(iLocal_99, false))
					{
						unk_0x8E2530AA8ADA980E(iLocal_99, 149.8882f);
						unk_0x49733E92263139D1(iLocal_99, 5f);
					}
				}
			}
			unk_0xA56F01F3765B93A0(Local_54, 12f, true, false, false, false);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1035.625f, 4915.152f, 205.5761f, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 128.2065f);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				unk_0x06843DA7060A026B(iLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), true, false, false, true);
				unk_0x8E2530AA8ADA980E(iLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, true, true);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				iLocal_98[1] = unk_0xD49F9B0955C367DE(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, true, true);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x9F8AA94D6D97DBF4(iLocal_98[0], true);
			iLocal_100 = unk_0x509D5878EB39E842(joaat("prop_anim_cash_pile_02"), Local_53, true, true, false);
			iLocal_101 = unk_0x9541D3CF0D398F36(joaat("weapon_assaultrifle"), -1, unk_0x3FEF770D40960D5A(iLocal_98[0], true), true, 1f, 0, 0, 1);
			unk_0x6B9BBD38AB0796DF(iLocal_101, iLocal_98[0], unk_0x3F428D08BE5AAE31(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 == 0)
				{
					unk_0x6B9BBD38AB0796DF(iLocal_100, unk_0xD80958FC74E988A6(), unk_0x3F428D08BE5AAE31(unk_0xD80958FC74E988A6(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				else
				{
					unk_0x6B9BBD38AB0796DF(iLocal_100, unk_0xD80958FC74E988A6(), unk_0x3F428D08BE5AAE31(unk_0xD80958FC74E988A6(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			else if (Global_113386.f_24995.f_5 >= 3)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_106 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = unk_0x8C18E0F9080ADD73(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1000f, 0);
			unk_0xEEA929141F699854(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_113386.f_24995.f_5 >= 3)
			{
				unk_0xEEA929141F699854(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1000f, 0);
			}
			unk_0xE32EFE9AB4A9AA0C(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				unk_0xEEA929141F699854(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[0]))
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0xE4A310B1D7FA73CC(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_97[0]))
			{
				if (unk_0x6D9F5FAA7488BA46(iLocal_97[0]))
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_180(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_113386.f_24995.f_5 == 1 || Global_113386.f_24995.f_5 == 2)
			{
				if ((unk_0xE4A310B1D7FA73CC(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0x8D4D46230B2C353A() == 4)
				{
					unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
					unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_85 = 1;
				}
			}
			if (unk_0xE4A310B1D7FA73CC(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_113386.f_24995.f_5 < 3)
			{
				if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
				{
					func_135();
					if (unk_0x7239B21A38F536BA(iLocal_98[0]))
					{
						unk_0x9614299DCB53E54B(&(iLocal_98[0]));
					}
					if (unk_0x7239B21A38F536BA(iLocal_98[1]))
					{
						unk_0x9614299DCB53E54B(&(iLocal_98[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0x7239B21A38F536BA(iLocal_98[0]))
					{
						unk_0xEA1C610A04DB6BBB(iLocal_98[0], false, false);
					}
					if (unk_0x7239B21A38F536BA(iLocal_98[1]))
					{
						unk_0xEA1C610A04DB6BBB(iLocal_98[1], false, false);
					}
					if (unk_0x7239B21A38F536BA(iLocal_97[0]))
					{
						unk_0xEA1C610A04DB6BBB(iLocal_97[0], false, false);
					}
					iLocal_93++;
				}
				if (unk_0x7239B21A38F536BA(iLocal_100))
				{
					unk_0x539E0AE3E6634B9F(&iLocal_100);
				}
				if (unk_0x7239B21A38F536BA(iLocal_101))
				{
					unk_0x539E0AE3E6634B9F(&iLocal_101);
				}
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				if (Global_113386.f_24995.f_5 == 0)
				{
					unk_0xF28965D04F570DCA(unk_0xD80958FC74E988A6(), joaat("MotionState_Walk"), false, 0, false);
					unk_0x477D5D63E63ECA5D(unk_0x4F8644AF03D0E0D6(), 1f, 750, 0f, true, false);
				}
				if (unk_0x0C515FAB3FF9EA92(sLocal_268, "cult_p4_cam"))
				{
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
				else
				{
					unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
				}
				unk_0x026FB97D0A425F84(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				unk_0xA6294919E56FF02A(true);
				unk_0xA0EBB943C300E693(true);
				unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
				unk_0xB4EC2312F4E5B1F1(0f);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_113386.f_24995.f_5 != 1 && Global_113386.f_24995.f_5 != 2)
			{
				unk_0x706D57B0F50DA710("AC_DONE");
				Global_113386.f_24995.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_135();
				if (unk_0x7239B21A38F536BA(iLocal_98[0]))
				{
					unk_0x9614299DCB53E54B(&(iLocal_98[0]));
				}
				if (unk_0x7239B21A38F536BA(iLocal_98[1]))
				{
					unk_0x9614299DCB53E54B(&(iLocal_98[1]));
				}
				unk_0x706D57B0F50DA710("AC_DONE");
				Global_113386.f_24995.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_187()
{
	if (func_189())
	{
		if (func_15() == 2)
		{
			if (unk_0x7C6B0C22F9F40BBE(func_188()))
			{
				unk_0x8DE69FE35CA09A45(func_188(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					iLocal_97[0] = unk_0x51455483CF23ED97(func_188(), 0);
					if (unk_0x20B60995556D004F(iLocal_97[0], Local_54, 5f, 5f, 5f, false, true, 0))
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
							{
								unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 5, false);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					iLocal_97[0] = unk_0x51455483CF23ED97(func_188(), 0);
					iLocal_97[1] = unk_0x51455483CF23ED97(func_188(), 1);
					if (unk_0x20B60995556D004F(iLocal_97[0], Local_54, 5f, 5f, 5f, false, true, 0) && unk_0x20B60995556D004F(iLocal_97[1], Local_54, 5f, 5f, 5f, false, true, 0))
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0(), false))
							{
								unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 5, false);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

int func_188()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

bool func_189()
{
	return Global_32197;
}

void func_190()
{
	if (func_193())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0x1B5C85C612E5256E(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), false, true, true, true);
		}
		while (unk_0xF1B760881820C952(func_95(unk_0x4F8644AF03D0E0D6()), Local_53, true) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x9E6B70061662AE5C(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				unk_0xBF25EB89375A37AD(5, 2017343592, joaat("player"));
			}
			else if (func_191())
			{
				unk_0xBF25EB89375A37AD(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x9E6B70061662AE5C(2017343592, joaat("player")) != 5)
		{
			if (func_192())
			{
				if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()) || (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()) && unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6())))
				{
					unk_0xBF25EB89375A37AD(5, 2017343592, joaat("player"));
				}
			}
			else if (func_191())
			{
				unk_0xBF25EB89375A37AD(5, 2017343592, joaat("player"));
			}
			else if (unk_0x9E6B70061662AE5C(2017343592, joaat("player")) != 1)
			{
				unk_0xBF25EB89375A37AD(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_192())
	{
		if (iLocal_83)
		{
			if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 3))
			{
				unk_0x706D57B0F50DA710("AC_START");
			}
			unk_0x020E5F00CDA207BA(0f);
			unk_0x399D2D3B33F1B8EB("COUNTRYSIDE_ALTRUIST_CULT_01", true);
			if (unk_0xBFA48E2FF417213F(Global_41748[9 /*31*/].f_2, 6f, Global_41748[9 /*31*/].f_5, false))
			{
				unk_0xF82D8F1926A02C3D(Global_41748[9 /*31*/].f_5, Global_41748[9 /*31*/].f_2, false, 0f, false);
			}
			if (unk_0xBFA48E2FF417213F(Global_41748[10 /*31*/].f_2, 6f, Global_41748[10 /*31*/].f_5, false))
			{
				unk_0xF82D8F1926A02C3D(Global_41748[10 /*31*/].f_5, Global_41748[10 /*31*/].f_2, false, 0f, false);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x845FFC3A4FEEFA3E())
		{
			unk_0x706D57B0F50DA710("AC_END");
		}
		unk_0x020E5F00CDA207BA(1f);
		unk_0x399D2D3B33F1B8EB("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		if (!bLocal_84)
		{
			func_157();
		}
		iLocal_83 = 1;
	}
}

int func_191()
{
	if ((((((unk_0x1A8B5F3C01E2B477(Local_55, Local_56, fLocal_57, true) || unk_0x1A8B5F3C01E2B477(Local_58, Local_59, fLocal_60, true)) || unk_0x1A8B5F3C01E2B477(Local_61, Local_62, fLocal_63, true)) || unk_0x1A8B5F3C01E2B477(Local_64, Local_65, fLocal_66, true)) || unk_0x1A8B5F3C01E2B477(Local_67, Local_68, fLocal_69, true)) || unk_0x1A8B5F3C01E2B477(Local_70, Local_71, fLocal_72, true)) || unk_0x1A8B5F3C01E2B477(Local_73, Local_74, fLocal_75, true))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if ((((((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_55, Local_56, fLocal_57, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_58, Local_59, fLocal_60, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_61, Local_62, fLocal_63, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_64, Local_65, fLocal_66, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_67, Local_68, fLocal_69, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_70, Local_71, fLocal_72, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_73, Local_74, fLocal_75, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	unk_0xBF25EB89375A37AD(255, 2017343592, joaat("player"));
	if (Global_113386.f_24995.f_5 >= iLocal_96 && Global_113386.f_24995.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_195(&iLocal_109);
			Global_95698 = 0;
			Global_95699 = 0;
			Global_95700 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0x4A18E01DF2C87B86(true);
			unk_0x2C2B3493FBF51C71(false);
			unk_0x21FFB63D8C615361(false);
			func_3(0);
			unk_0x020E5F00CDA207BA(1f);
			unk_0xDC0F817884CDD856(3, true);
			unk_0xDC0F817884CDD856(5, true);
			unk_0xCCC39339BEF76CF5();
			iLocal_83 = 0;
			func_96();
			Global_113386.f_24995.f_5 = (iLocal_96 - 1);
			unk_0x1090044AD1DA76FA();
		}
	}
	else
	{
		unk_0xD37401D78A929A49();
		func_195(&iLocal_109);
		Global_95698 = 0;
		Global_95699 = 0;
		Global_95700 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0x4A18E01DF2C87B86(true);
		unk_0x2C2B3493FBF51C71(false);
		unk_0x21FFB63D8C615361(false);
		func_3(0);
		if (unk_0x85F01B8D5B90570E(iLocal_259))
		{
			unk_0x1D132D614DD86811(&iLocal_259);
			func_98(0);
		}
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDC0F817884CDD856(3, true);
		unk_0xDC0F817884CDD856(5, true);
		unk_0xCCC39339BEF76CF5();
		iLocal_83 = 0;
		unk_0x1090044AD1DA76FA();
	}
}

void func_195(int* iParam0)
{
	if (unk_0x85F01B8D5B90570E(*iParam0))
	{
		unk_0x1D132D614DD86811(iParam0);
		*iParam0 = 0;
	}
}

