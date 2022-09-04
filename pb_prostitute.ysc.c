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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	bool bLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	bool bLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	float fLocal_319 = 0f;
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
	var uLocal_348 = 15;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 1;
	bool bLocal_622 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	Local_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	bLocal_74 = -1;
	bLocal_75 = -1;
	bLocal_76 = -1;
	bLocal_77 = -1;
	bLocal_78 = -1;
	bLocal_79 = -1;
	bLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_319 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_554(unk_0x4F8644AF03D0E0D6(), 1))
		{
			unk_0x1090044AD1DA76FA();
		}
		if (func_553(unk_0x4F8644AF03D0E0D6(), 1))
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	if (func_552(13) || func_552(14))
	{
		unk_0x1090044AD1DA76FA();
	}
	if (!func_551() && !unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xC968670BFACE42D9(35))
		{
			func_542();
			func_541(1);
			func_536(&uLocal_348);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	bLocal_90 = bScriptParam_622;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_535();
		unk_0x1CA59E306ECB80A5(2, false, unk_0x4F8644AF03D0E0D6());
		func_530(0, -1, 0);
		unk_0xAA391C728106F7AF(false);
	}
	func_529();
	func_528(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_525(&uLocal_348);
		if (func_551())
		{
			if (func_524(1024))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0x654CD0A825161131(unk_0xD80958FC74E988A6()) && unk_0x7350823473013C02(unk_0xD80958FC74E988A6()))
					{
						func_528(1024);
						unk_0x4668D80430D6C299(unk_0xD80958FC74E988A6());
					}
				}
			}
			if (!func_524(1024) && func_524(2048))
			{
				unk_0x1090044AD1DA76FA();
			}
			if (!unk_0x7239B21A38F536BA(bLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0x01BF60A500E28887(bLocal_90))
			{
				bVar0 = false;
				unk_0xB69317BF5E782347(bLocal_90);
			}
		}
		if (!func_551() || !func_524(2048))
		{
			func_517();
			if (func_551())
			{
				func_516();
				if (func_524(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_511())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_506(&uLocal_348);
					}
					func_504();
					func_502();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0xAA135F9482C82CC3(bLocal_90))
								{
									iLocal_284 = func_501();
								}
								else if (func_499())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_494())
							{
								if (func_493())
								{
									if (func_551())
									{
										if (unk_0x01BF60A500E28887(bLocal_90))
										{
											unk_0x142A02425FF02BD9(bLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										}
										else
										{
											unk_0xB69317BF5E782347(bLocal_90);
										}
									}
									else
									{
										unk_0x142A02425FF02BD9(bLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
									}
								}
								iLocal_285 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_491(iLocal_49, 4096))
							{
								func_490();
							}
							if (func_489())
							{
								iLocal_285 = 2;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_484())
							{
								iLocal_285 = 3;
								func_482(&iLocal_49, 64);
								Global_32112 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_98(&uLocal_348);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_491(iLocal_49, 2))
	{
	}
	func_492(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_542();
	func_536(&uLocal_348);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_286 > 0)
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
			{
				if (!unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
				{
					func_97();
				}
			}
		}
	}
	if (!unk_0x7239B21A38F536BA(bLocal_91) || unk_0x5F9532F3B5CC2551(bLocal_91, false))
	{
		func_96(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_71();
			break;
		
		case 4:
			func_62();
			break;
		
		case 5:
			func_59();
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0x9CD27B0045628463();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0x751B70C3D034E187(bLocal_90, bLocal_91, 12f, 12f, 5f, false, true, 0))
					{
						func_492("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 7:
			if (!unk_0xF7B79A50B905A30D(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				unk_0x07FB139B592FA687(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				unk_0xE2A2AA2F659D77A7(bLocal_91, bLocal_92, Local_88, (unk_0x53AF99BAA671CA47(bLocal_92) * 0.65f), 0, false, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_88, unk_0x3FEF770D40960D5A(bLocal_90, true)) < 25f && unk_0x77F1BEB8863288D5(bLocal_91, -1817882002) != 1)
			{
				bLocal_288 = unk_0xD53343AA4FB7DD28(true, 3);
				iLocal_286 = 11;
			}
			if (func_55(bLocal_91))
			{
				func_96(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_96(15);
			break;
		
		case 15:
			if (unk_0x7239B21A38F536BA(bLocal_90) && unk_0x7239B21A38F536BA(bLocal_92))
			{
				if (unk_0xA3EE4A07279BB9DB(bLocal_90, bLocal_92, false))
				{
					if (!unk_0x5F9532F3B5CC2551(bLocal_91, false))
					{
						if (unk_0x77F1BEB8863288D5(bLocal_91, -828834893) != 1)
						{
							unk_0x504D54DF3F6F2247(bLocal_90, false, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0:
			unk_0x5917BBA32D06C230(bLocal_90, 0.916f);
			if (func_42(bLocal_91))
			{
				func_40(&bLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(bLocal_90, false)) < 22500f)
			{
				func_38();
			}
			func_35(bLocal_92);
			if (func_33(bLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (func_7(&bLocal_113) > 1f)
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_96(15);
			break;
		
		case 5:
			func_96(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(bool bParam0)
{
	return BitTest(*bParam0, 2);
}

bool func_10(bool bParam0)
{
	return BitTest(*bParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_29();
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
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_18();
		func_13();
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
		func_31();
	}
	return 0;
}

void func_13()
{
	if (!func_14())
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

int func_14()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_17())
	{
		return 0;
	}
	if (func_15(unk_0x4F8644AF03D0E0D6()))
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

bool func_15(bool bParam0)
{
	return func_16(bParam0, 20);
}

var func_16(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_17()
{
	return -1;
}

void func_18()
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

void func_19()
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

int func_20()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
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

void func_22()
{
	if (func_552(14))
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
		Global_20266 = func_23();
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

int func_23()
{
	func_24();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_27(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_26(unk_0xD80958FC74E988A6());
			if (func_25(iVar0) && (!func_552(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_25(Global_113386.f_2363.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_33(bool bParam0)
{
	if (func_34())
	{
		if (!unk_0xEE5D2A122E09EC42(unk_0x9F47B058362C84B5(bParam0), unk_0x3FEF770D40960D5A(bParam0, true), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (Global_22641)
	{
		return 1;
	}
	return 0;
}

void func_35(bool bParam0)
{
	if (bLocal_288 != 1 && bLocal_288 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&bParam0);
	}
}

void func_36(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0x4C241E39B23DF959(*uParam0, false))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var1 = { 0f, 0f, 0f };
		unk_0xC5F68BE9613E2D18(*uParam0, 1, Var0, Var1, 0, true, true, true, true, false);
	}
}

bool func_37()
{
	return unk_0xEAF4CD9EA3E7E922(bLocal_90, 876132797);
}

void func_38()
{
	unk_0xEB2D525B57F42B40();
	func_39();
}

void func_39()
{
	Global_23011.f_134 = 1;
}

void func_40(bool bParam0)
{
	func_41(bParam0, 0f);
}

void func_41(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_8(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

int func_42(bool bParam0)
{
	if (unk_0xCA042B6957743895(bLocal_61))
	{
		bLocal_61 = func_50(bParam0, 0, 0);
		return 0;
	}
	if (!unk_0xD031A9162D01088C(bLocal_61))
	{
		return 0;
	}
	else
	{
		func_43(bLocal_90, func_49(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(bLocal_70) / 2f)))), 1);
		if (bParam0 == unk_0xD80958FC74E988A6())
		{
			func_43(bParam0, func_49(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(bLocal_70) / 2f)))), 1);
		}
		func_492("anim_dict has loaded, triggering anims?");
		func_482(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(bParam0, true);
	if (!unk_0x4C241E39B23DF959(bVar0, false))
	{
		return;
	}
	iLocal_48 = unk_0x8D4D46230B2C353A();
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && func_48(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x5A4F9EDF1673F704(4);
		}
	}
	bVar1 = func_47(bVar0);
	bVar2 = func_50(bParam0, 0, 0);
	if (!unk_0xD031A9162D01088C(bVar2))
	{
		unk_0xD3BD40951412FEF6(bVar2);
	}
	else
	{
		unk_0xE8854A4326B9E12B(&iVar3);
		unk_0xEA47FE3719165B94(false, bVar2, func_44(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_44(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_44(2, bParam2, bParam1, bVar1), 8f, -4f, bParam3, 1, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_44(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, false, false, false, false);
		unk_0xEA47FE3719165B94(false, bVar2, func_44(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, false, false, false, false);
		unk_0x39E72BC99E6360CB(iVar3);
		unk_0x5ABA3986D90D8A3B(bParam0, iVar3);
		if (bParam4)
		{
			unk_0x3841422E9C488D8C(&iVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(18);
					}
					else
					{
						sVar0 = func_46(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(8);
				}
				else
				{
					sVar0 = func_46(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(18);
				}
				else
				{
					sVar0 = func_45(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(8);
			}
			else
			{
				sVar0 = func_45(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(19);
					}
					else
					{
						sVar0 = func_46(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(9);
				}
				else
				{
					sVar0 = func_46(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(19);
				}
				else
				{
					sVar0 = func_45(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(9);
			}
			else
			{
				sVar0 = func_45(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(21);
					}
					else
					{
						sVar0 = func_46(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(11);
				}
				else
				{
					sVar0 = func_46(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(21);
				}
				else
				{
					sVar0 = func_45(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(11);
			}
			else
			{
				sVar0 = func_45(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(22);
					}
					else
					{
						sVar0 = func_46(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(12);
				}
				else
				{
					sVar0 = func_46(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(22);
				}
				else
				{
					sVar0 = func_45(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(12);
			}
			else
			{
				sVar0 = func_45(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(3);
				}
				else
				{
					sVar0 = func_46(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(3);
			}
			else
			{
				sVar0 = func_45(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

bool func_49()
{
	return bLocal_288 == 0;
}

char* func_50(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(bParam0, true);
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			if (func_47(bVar0))
			{
				if ((!func_48(0, 1) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0, 1) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x9A497FE2DF198913(bParam0) || !func_57(bParam0, bLocal_92, -1))
		{
			Var0 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			unk_0x70A2D1137C8ED7C9(bParam0, 196624, true);
			if (func_56())
			{
				unk_0x94587F17E9C365D5(bParam0, Var0, 300f, -1, true, true);
			}
			else if (!unk_0x5F9532F3B5CC2551(unk_0x9B128DC36C1E04CF(bParam0), false))
			{
				unk_0xF166E48407BAC484(bParam0, unk_0x9B128DC36C1E04CF(bParam0), 0, 16);
			}
			else
			{
				unk_0x94587F17E9C365D5(bParam0, Var0, 300f, -1, true, true);
			}
		}
	}
	return 0;
}

int func_56()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
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

float func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
	Var1 = { Local_88 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var1.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var1.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var1.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var1.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var1.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var1.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var1.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var1.f_1 + 20f);
}

void func_59()
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 1)
				{
					if (unk_0x00A9010CFE1E3533(bLocal_90) > 0)
					{
						if (unk_0xA3EE4A07279BB9DB(bLocal_90, bLocal_92, false))
						{
							func_492("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xE8854A4326B9E12B(&iLocal_95);
							unk_0x480142959D337D00(false, bLocal_92, 10f, 786603);
							unk_0x39E72BC99E6360CB(iLocal_95);
							unk_0x5ABA3986D90D8A3B(bLocal_91, iLocal_95);
							unk_0x3841422E9C488D8C(&iLocal_95);
							Local_88 = { func_60(unk_0x3FEF770D40960D5A(bLocal_90, true)) };
							unk_0xD3BD40951412FEF6(func_50(bLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0x9CD27B0045628463();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xB7A628320EFF8E47(Param0, func_61(iVar1)) < unk_0xB7A628320EFF8E47(Param0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_62()
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
			{
				fVar0 = unk_0xD5037BA82E12416F(bLocal_92);
				if (unk_0x751B70C3D034E187(bLocal_91, bLocal_90, 15f, 15f, 5f, false, true, 0) && fVar0 <= 1f)
				{
					func_69(bLocal_90);
					iLocal_63 = unk_0x9CD27B0045628463();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= bLocal_66)
					{
						if (func_551())
						{
							if (unk_0x01BF60A500E28887(bLocal_91))
							{
								unk_0x0F804F1DB19B9689(bLocal_91);
							}
						}
						else
						{
							unk_0x0F804F1DB19B9689(bLocal_91);
						}
						bLocal_66 = unk_0xD53343AA4FB7DD28(false, 10000);
						if (bLocal_66 > 2500)
						{
							unk_0xE1EF3C1216AFF2CD(bLocal_90);
							unk_0x3841422E9C488D8C(&iLocal_95);
							unk_0xE8854A4326B9E12B(&iLocal_95);
							unk_0xC20E50AA46D09CA8(false, bLocal_92, -1, false, 1f, 8388609, 0);
							unk_0x919BE13EED931959(false, -1);
							unk_0x39E72BC99E6360CB(iLocal_95);
							unk_0x5ABA3986D90D8A3B(bLocal_90, iLocal_95);
							unk_0x3841422E9C488D8C(&iLocal_95);
							func_492("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
							{
								if (unk_0x4C241E39B23DF959(bLocal_92, false))
								{
									if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
									{
										unk_0x3841422E9C488D8C(&iLocal_95);
										unk_0xE8854A4326B9E12B(&iLocal_95);
										unk_0x919BE13EED931959(false, unk_0xD53343AA4FB7DD28(500, 2000));
										unk_0x480142959D337D00(false, bLocal_92, 10f, 786603);
										unk_0x39E72BC99E6360CB(iLocal_95);
										unk_0x5ABA3986D90D8A3B(bLocal_91, iLocal_95);
										unk_0x3841422E9C488D8C(&iLocal_95);
										iLocal_62 = unk_0x9CD27B0045628463();
									}
								}
							}
							func_492("prostitute REFUSED MONEY 2");
							if (func_551())
							{
								if (unk_0x01BF60A500E28887(bLocal_91))
								{
									unk_0x0F804F1DB19B9689(bLocal_91);
								}
							}
							else
							{
								unk_0x0F804F1DB19B9689(bLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_551())
					{
						if (unk_0x01BF60A500E28887(bLocal_91))
						{
							unk_0x0F804F1DB19B9689(bLocal_91);
						}
					}
					else
					{
						unk_0x0F804F1DB19B9689(bLocal_91);
					}
					func_97();
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_551())
				{
					if (unk_0x01BF60A500E28887(bLocal_91))
					{
						unk_0x0F804F1DB19B9689(bLocal_91);
					}
				}
				else
				{
					unk_0x0F804F1DB19B9689(bLocal_91);
				}
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bLocal_90) || unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return 1;
	}
	if (!func_551())
	{
		if (unk_0x997ABD671D25CA0B(bLocal_90, true))
		{
			unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			unk_0xE8854A4326B9E12B(&iVar0);
			if (func_491(iLocal_73, 524288))
			{
				unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, false, false, false, false);
			}
			func_64(1);
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(bLocal_90, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
			func_482(&iLocal_49, 16384);
			func_40(&bLocal_107);
		}
		return 1;
	}
	if (unk_0x997ABD671D25CA0B(bLocal_90, true))
	{
		if (unk_0x01BF60A500E28887(bLocal_90))
		{
			unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xB69317BF5E782347(bLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_491(iLocal_73, 524288))
			{
				if (unk_0x01BF60A500E28887(bLocal_90))
				{
					unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, false, false, false, false);
				}
				else
				{
					unk_0xB69317BF5E782347(bLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_491(iLocal_73, 524288))
			{
				if (unk_0x01BF60A500E28887(bLocal_90))
				{
					if (unk_0x77F1BEB8863288D5(bLocal_90, -2017877118) == 7)
					{
						func_64(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xB69317BF5E782347(bLocal_90);
				}
			}
			else if (unk_0x01BF60A500E28887(bLocal_90))
			{
				func_64(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xB69317BF5E782347(bLocal_90);
			}
			break;
		
		case 3:
			func_482(&iLocal_49, 16384);
			func_40(&bLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0x295E3CCEC879CCD7(bLocal_90) || unk_0xAA135F9482C82CC3(bLocal_90)) || unk_0x1BF094736DD62C2E(bLocal_90, func_65(0))) || unk_0x1BF094736DD62C2E(bLocal_90, func_65(1)))
	{
		return;
	}
	Var0 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
	if (!unk_0x0A9D0C2A3BBC86C1(Var0, func_65(0), 20f, true) && !unk_0x0A9D0C2A3BBC86C1(Var0, func_65(1), 20f, true))
	{
		if (bParam0)
		{
			unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
		}
		else
		{
			unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x277F471BA9DB000B(bLocal_90, Var0, 20f, 0);
	}
	else
	{
		unk_0x277F471BA9DB000B(false, Var0, 20f, 0);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		if (func_23() == 2)
		{
			unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
		}
		else
		{
			unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
		}
	}
}

void func_69(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (func_70(bParam0))
		{
			unk_0xC1E8A365BF3B29F2(bParam0, 109, true);
		}
	}
}

int func_70(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if ((unk_0x1F0B79228E461EC9(bParam0, func_67(iLocal_284), func_66(1), 3) || unk_0x1F0B79228E461EC9(bParam0, func_67(iLocal_284), func_66(2), 3)) || unk_0x1F0B79228E461EC9(bParam0, func_67(iLocal_284), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 1)
				{
					if (unk_0x00A9010CFE1E3533(bLocal_90) > 1)
					{
						if (unk_0x751B70C3D034E187(bLocal_90, bLocal_91, 20f, 20f, 10f, false, true, 0))
						{
							fVar0 = unk_0xD5037BA82E12416F(bLocal_92);
							if (fVar0 <= 1f)
							{
								func_72(0);
								iLocal_62 = unk_0x9CD27B0045628463();
								bLocal_66 = unk_0xD53343AA4FB7DD28(4000, 8000);
								func_492("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_492("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_551())
	{
		if (bParam0)
		{
			unk_0x153973AB99FE8980(bLocal_90, "PROSTITUTE_GROUP", 0f);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_491(iLocal_49, 4194304))
		{
			bVar0 = unk_0xD53343AA4FB7DD28(true, 4);
			unk_0xE8854A4326B9E12B(&iVar1);
			unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, false, false, false, false);
			unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(bVar0), 2f, -2f, -1, 0, false, false, false, false);
			unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, false, false, false, false);
			unk_0x39E72BC99E6360CB(iVar1);
			unk_0x5ABA3986D90D8A3B(bLocal_90, iVar1);
			unk_0x3841422E9C488D8C(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x153973AB99FE8980(bLocal_90, "PROSTITUTE_GROUP", 0f);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_491(iLocal_49, 4194304))
			{
				if (unk_0x01BF60A500E28887(bLocal_90))
				{
					unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, false, false, false, false);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xB69317BF5E782347(bLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, -2017877118) == 7)
				{
					bVar0 = unk_0xD53343AA4FB7DD28(true, 4);
					unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(bVar0), 2f, -2f, -1, 0, false, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xB69317BF5E782347(bLocal_90);
			}
			break;
		
		case 3:
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, -2017877118) == 7)
				{
					unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, false, false, false, false);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xB69317BF5E782347(bLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(bLocal_90))
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				else
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				break;
			
			case 1:
				if (!func_74(bLocal_90))
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				else
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				break;
			
			case 2:
				if (!func_74(bLocal_90))
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				else
				{
					unk_0x8E04FEDD28D42462(bLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				}
				break;
			}
	}
}

bool func_74(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][0];
	}
	else if (func_23() == 1)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][1];
	}
	else if (func_23() == 2)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(bParam0, iVar0) && func_79(bParam0, iVar0)) && func_78(bParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(bool bParam0, int iParam1)
{
	if (unk_0xC9D55B1A358A5BF7(bParam0, Global_113386.f_10049.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(bParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	return unk_0x04A355E041E004E6(bParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_113386.f_10049.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(bParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam2);
	return unk_0x67F3780DD425D4FC(bParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_113386.f_10049.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_87(bool bParam0)
{
	if (!unk_0xB65B60556E2A9225(bParam0))
	{
		unk_0x013A80FC08F6E4F2(bParam0);
	}
}

void func_88()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
			{
				fVar0 = unk_0xD5037BA82E12416F(bLocal_92);
				if (unk_0x77F1BEB8863288D5(bLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bLocal_92), &Var2, &Var1);
					Var3 = { Var1 - Var2 };
					Var3 = { Var3 / Vector(2f, 2f, 2f) };
					Var4 = { unk_0x1899F328B0E12848(bLocal_92, 0.2f, 0.2f, 0f) };
					Var5 = { unk_0x1899F328B0E12848(bLocal_92, 0.2f, 0.2f, 0f) };
					Var6 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
					if (unk_0x2A488C176D52CCA5(Var6, Var5) < unk_0x2A488C176D52CCA5(Var6, Var4))
					{
						Var4 = { Var5 };
					}
					unk_0xE8854A4326B9E12B(&iLocal_95);
					unk_0x15D3A79D4E44B913(false, Var4.f_0, Var4.f_1, Var4.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x5AD23D40115353AC(false, bLocal_91, false);
					unk_0x919BE13EED931959(false, -1);
					unk_0x39E72BC99E6360CB(iLocal_95);
					unk_0x5ABA3986D90D8A3B(bLocal_90, iLocal_95);
					unk_0x3841422E9C488D8C(&iLocal_95);
					func_492("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_492("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	struct<3> Var0;
	
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_91, bLocal_92, false))
			{
				if (func_91(&bLocal_92))
				{
					if (func_90(unk_0x3FEF770D40960D5A(bLocal_91, true), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
					if (unk_0x240A18690AE96513(Var0, &Var0, 8, 3f, 0f))
					{
						unk_0xB195FFA8042FC5C3(bLocal_91, 1f);
						unk_0xDED5AF5A0EA4B297(bLocal_91, 0.2f);
						unk_0xA731F608CA104E3C(bLocal_91, 0.05f);
						unk_0x0F3E34E968EA374E(bLocal_91, bLocal_92, Var0, 0f, 3, 360f, true);
						unk_0x69F4BE8C8CC4796C(bLocal_91, bLocal_90, -1, 2048, 4);
						func_492("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_492("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(struct<3> Param0, int iParam1)
{
	if (func_551())
	{
		return unk_0x16EC4839969F9F5E(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x7EEF65D5F153E26A(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)) || unk_0x16EC4839969F9F5E(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)));
}

int func_91(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x4C241E39B23DF959(*bParam0, false))
	{
		bVar0 = unk_0x9F47B058362C84B5(*bParam0);
		if (func_94(bVar0, 0) && func_93(*bParam0))
		{
			if (unk_0xA7C4F2C6E744A550(*bParam0) > 0)
			{
				iVar1 = unk_0x24CB2137731FFE89(*bParam0, false, true);
				if (((iVar1 == 0 && unk_0x22AC59A870E6A669(*bParam0, false, false)) && (!unk_0xB8E181E559464527(*bParam0, true) && !unk_0xB8E181E559464527(*bParam0, false))) || unk_0xBB40DD2270B65366(*bParam0, false, false) == bLocal_90)
				{
					if (func_47(*bParam0))
					{
						if (!func_491(iLocal_49, 32768))
						{
							func_482(&iLocal_49, 32768);
							if (!func_491(iLocal_49, 8))
							{
								unk_0xD2A71E1A77418A49(func_92());
								func_482(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_491(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_491(iLocal_49, 8))
						{
							if (unk_0x318234F4F3738AF3(func_92()))
							{
								unk_0x01F73A131C18CD94(func_92());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[16];
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				bVar1 = iVar0;
				if (((((bVar1 != 17 && bVar1 != 18) && bVar1 != 19) && bVar1 != 20) && bVar1 != 21) && bVar1 != 22)
				{
					if (unk_0x772960298DA26FDB(bParam0, bVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x8935624F8C5592CC(bParam0, bVar1, unk_0x772960298DA26FDB(bParam0, bVar1)), 16);
						bVar2 = unk_0xD24D37CC275948CC(&cVar3);
						if (bVar2 != 0)
						{
							if (bVar2 == unk_0xD24D37CC275948CC("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x9F47B058362C84B5(bParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0xD2E6822DBFD6C8BD(bParam0, 2) && !unk_0xD2E6822DBFD6C8BD(bParam0, 3)) && !unk_0xD2E6822DBFD6C8BD(bParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0xD2E6822DBFD6C8BD(bParam0, 2) && !unk_0xD2E6822DBFD6C8BD(bParam0, 3)) && !unk_0xD2E6822DBFD6C8BD(bParam0, 4)) && !unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0x772960298DA26FDB(bParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0xD2E6822DBFD6C8BD(bParam0, true))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (unk_0x772960298DA26FDB(bParam0, 10) == -1 || unk_0x772960298DA26FDB(bParam0, 10) == 3)
				{
					return 0;
				}
				break;
		}
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
				return 1;
				break;
		}
		if (unk_0x28D37D4F71AC5C58(bParam0) == 931866387 && unk_0x9F47B058362C84B5(bParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0x28D37D4F71AC5C58(bParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x9F47B058362C84B5(bParam0) == joaat("weevil")) || unk_0x9F47B058362C84B5(bParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (unk_0x28D37D4F71AC5C58(bParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x9F47B058362C84B5(bParam0) == 15214558)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1)
{
	if ((((unk_0x45A9187928F4B9E3(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)) || unk_0xDCE4334788AF94EA(bParam0)) || unk_0xAB935175B22E822B(bParam0)) || unk_0xB50C0B0CEDC6CE84(bParam0))
	{
		return 0;
	}
	if (func_95(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((bParam0 == joaat("police") || bParam0 == joaat("police2")) || bParam0 == joaat("police3")) || bParam0 == joaat("police4")) || bParam0 == joaat("fbi")) || bParam0 == joaat("fbi2")) || bParam0 == joaat("caddy")) || bParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((bParam0 == joaat("issi2") || bParam0 == joaat("hotknife")) || bParam0 == joaat("jb700")) || bParam0 == joaat("jester")) || bParam0 == joaat("jester2")) || bParam0 == joaat("stromberg")) || bParam0 == joaat("barrage")) || bParam0 == joaat("kamacho")) || bParam0 == joaat("gb200")) || bParam0 == joaat("fagaloa")) || bParam0 == joaat("tezeract")) || bParam0 == joaat("swinger")) || bParam0 == joaat("imperator")) || bParam0 == joaat("locust")) || bParam0 == joaat("schlagen")) || bParam0 == joaat("outlaw")) || bParam0 == joaat("comet7")) || bParam0 == joaat("youga4")) || bParam0 == 775514032)
	{
		return 0;
	}
	return 1;
}

int func_95(bool bParam0)
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

void func_96(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_97()
{
	if (func_551())
	{
		if (unk_0x01BF60A500E28887(bLocal_90))
		{
			unk_0xE1EF3C1216AFF2CD(bLocal_90);
			unk_0x0F804F1DB19B9689(bLocal_90);
		}
	}
	else
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_90);
		unk_0x0F804F1DB19B9689(bLocal_90);
	}
	bLocal_91 = false;
	bLocal_92 = false;
	unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, unk_0x313CE5879CEB6FCD(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_98(var uParam0)
{
	if (!func_491(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_491(iLocal_49, 33554432))
		{
			if (func_551())
			{
				if (Global_1922954 || func_474())
				{
					func_473(0);
					func_482(&iLocal_49, 33554432);
				}
			}
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				if (func_491(iLocal_49, 1048576) || func_491(iLocal_49, 8192))
				{
					func_473(0);
					func_482(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_491(iLocal_49, 16384) || func_491(iLocal_49, 8388608))
			{
				if (!func_10(&bLocal_107))
				{
					func_472(&bLocal_107);
				}
				if (func_471(&bLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_470("PROS_NO_MONEY"))
			{
				func_64(0);
				switch (func_23())
				{
					case 0:
						func_469(&uLocal_116, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_469(&uLocal_116, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_469(&uLocal_116, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_468();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_455(uParam0);
			break;
		
		case 2:
			func_442(uParam0);
			break;
		
		case 3:
			func_441();
			break;
		
		case 4:
			func_429(uParam0);
			break;
		
		case 5:
			func_411();
			break;
		
		case 6:
			func_410(uParam0);
			break;
		
		case 7:
			func_389();
			func_381();
			break;
		
		case 8:
			func_378();
			unk_0xFE99B66D079CF6BC(0, 80, true);
			unk_0xFE99B66D079CF6BC(0, 0, true);
			unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_551())
			{
				func_226(uParam0);
			}
			break;
		
		case 9:
			func_223();
			break;
		
		case 10:
			func_220();
			break;
		
		case 11:
			unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
			unk_0xFE99B66D079CF6BC(0, 0, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_551())
			{
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 433, true);
				func_226(uParam0);
			}
			break;
		
		case 12:
			func_490();
			break;
		
		case 13:
			unk_0xFE99B66D079CF6BC(0, 80, true);
			unk_0xFE99B66D079CF6BC(0, 0, true);
			func_103();
			break;
		
		case 14:
			func_102();
			break;
		
		case 15:
			unk_0xFE99B66D079CF6BC(0, 80, true);
			unk_0xFE99B66D079CF6BC(0, 0, true);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_551())
	{
		if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), func_50(unk_0xD80958FC74E988A6(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (func_491(iLocal_49, 16))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_491(iLocal_49, 2))
	{
		func_100(1);
		func_492("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(6);
		}
		else
		{
			return func_45(7);
		}
	}
	if (bParam0)
	{
		return func_46(6);
	}
	return func_46(7);
}

void func_102()
{
	if (!unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()))
	{
		if (bLocal_70 == 0)
		{
			if (func_491(iLocal_49, 134217728))
			{
				unk_0x70A2D1137C8ED7C9(bLocal_90, 32768, false);
				unk_0x70A2D1137C8ED7C9(bLocal_90, 196624, true);
			}
			unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			func_96(15);
		}
	}
}

void func_103()
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0x729072355FA39EC9(bLocal_90) || func_121(&bLocal_101) > 4f)
			{
				func_116(bLocal_90);
				if (func_76(func_77(bLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_115(&bLocal_101);
					func_114("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_113();
			if (unk_0x729072355FA39EC9(bLocal_90) || func_112())
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 256);
				func_482(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&bLocal_101))
				{
					func_40(&bLocal_101);
				}
				if (func_121(&bLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0x8DFCED7A656F8802(true);
					func_111();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_112())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_106(0);
			func_104();
			func_96(15);
			break;
	}
}

int func_104()
{
	if (func_105(0))
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

int func_105(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_106(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		if (unk_0xB16FCE9DDC7BA182())
		{
			unk_0x9614299DCB53E54B(&bLocal_90);
		}
		else
		{
			func_107(bLocal_90, bParam0);
		}
	}
}

void func_107(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), func_50(unk_0xD80958FC74E988A6(), 0, 0), func_110(1), 3))
	{
		unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), func_50(unk_0xD80958FC74E988A6(), 0, 0), func_101(1), 4f, -8f, -1, 0, false, false, false, false);
	}
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (func_551())
		{
			if (unk_0x01BF60A500E28887(bParam0))
			{
				unk_0x22EF8FF8778030EB(bParam0);
			}
		}
		else
		{
			unk_0x22EF8FF8778030EB(bParam0);
		}
		if (func_491(iLocal_49, 33554432))
		{
			unk_0xE1EF3C1216AFF2CD(bParam0);
		}
		if (bParam1)
		{
			bVar1 = unk_0x313CE5879CEB6FCD(0.1f, 2f);
			if (bVar1 <= 0.25f)
			{
				func_482(&iLocal_49, 134217728);
			}
		}
		if (func_491(iLocal_49, 134217728))
		{
			unk_0x70A2D1137C8ED7C9(bParam0, 32768, true);
			unk_0x22B0D0E37CCB840D(bParam0, unk_0xD80958FC74E988A6(), 300f, -1, true, false);
		}
		else
		{
			unk_0x70A2D1137C8ED7C9(bParam0, 196624, true);
			unk_0x3841422E9C488D8C(&iVar0);
			unk_0xE8854A4326B9E12B(&iVar0);
			unk_0x90D2156198831D69(false, true);
			if (unk_0x997ABD671D25CA0B(bParam0, false))
			{
				if (!unk_0x5721B434AD84D57A(unk_0x9A9112A0FE9A4713(bParam0, false)))
				{
					func_109(bParam0, 1);
				}
				else
				{
					if (unk_0x1F0B79228E461EC9(bParam0, func_50(bParam0, 0, 0), func_110(0), 3))
					{
						if (bLocal_70 > 0)
						{
							unk_0xEA47FE3719165B94(false, func_50(bParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, false, false, false, false);
						}
						else
						{
							unk_0xEA47FE3719165B94(false, func_50(bParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, false, false, false, false);
						}
					}
					func_109(bParam0, 1);
				}
			}
			unk_0x90D2156198831D69(false, false);
			unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
			unk_0x39E72BC99E6360CB(iVar0);
			unk_0x5ABA3986D90D8A3B(bParam0, iVar0);
			unk_0x3841422E9C488D8C(&iVar0);
		}
		if (func_551())
		{
			if (unk_0xB07D3185E11657A5(bLocal_90))
			{
				if (unk_0xA1607996431332DF(unk_0xA11700682F3AD45C(bLocal_90)))
				{
					unk_0x971D38760FBC02EF(bParam0, true);
				}
			}
		}
		else
		{
			unk_0x971D38760FBC02EF(bParam0, true);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(4);
		}
		else
		{
			return func_45(5);
		}
	}
	if (bParam0)
	{
		return func_46(4);
	}
	return func_46(5);
}

void func_109(bool bParam0, int iParam1)
{
	if (!unk_0x639431E895B9AA57(bParam0, unk_0x9A9112A0FE9A4713(bParam0, false), 0, false, false))
	{
		unk_0x504D54DF3F6F2247(false, false, 16842752);
	}
	else
	{
		unk_0x504D54DF3F6F2247(false, false, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(2);
		}
		else
		{
			return func_45(3);
		}
	}
	if (bParam0)
	{
		return func_46(2);
	}
	return func_46(3);
}

void func_111()
{
	bool bVar0;
	
	bVar0 = unk_0xD53343AA4FB7DD28(false, 1000);
	if ((bVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
	else if (((bVar0 > 333 && bVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
}

int func_112()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	if (iLocal_297 == 0)
	{
		unk_0x51669F7D1FB53D9F(false);
		unk_0xFE99B66D079CF6BC(0, 99, true);
		unk_0xFE99B66D079CF6BC(0, 76, true);
		unk_0xFE99B66D079CF6BC(0, 80, true);
		unk_0xEDE476E5EE29EDB1(2, 203);
		unk_0xEDE476E5EE29EDB1(2, 201);
		unk_0xEDE476E5EE29EDB1(2, 202);
		if (unk_0x50F940259D3841E6(2, 203))
		{
			unk_0x8DFCED7A656F8802(true);
			unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0x50F940259D3841E6(2, 201))
		{
			unk_0x8DFCED7A656F8802(true);
			unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0x50F940259D3841E6(2, 202))
		{
			unk_0x8DFCED7A656F8802(true);
			unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_114(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_115(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_116(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 > -1)
	{
		if (unk_0x729072355FA39EC9(bParam0))
		{
			unk_0xB8BEC0CA6F0EDB0F(bParam0);
		}
		if (!unk_0x729072355FA39EC9(bParam0))
		{
			func_118(bParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_118(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 > -1)
	{
		func_120(&uLocal_116, 4);
		func_469(&uLocal_116, 6, bParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_121(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (func_9(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_551())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(bVar1))
			{
				if (unk_0xBB40DD2270B65366(bVar1, -1, false) != unk_0xD80958FC74E988A6())
				{
					bVar0 = true;
				}
				if (unk_0xBB40DD2270B65366(bVar1, false, false) != bLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0x24CB2137731FFE89(bVar1, false, true) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { unk_0xAFBD61CC738D9EB9(bLocal_93, 2) };
		unk_0xB4EC2312F4E5B1F1(180f);
		unk_0x6D0858B8EDFD2B7D((-5.5f - Var0.f_0), 1f);
	}
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	func_124(&(Local_300[0 /*7*/]));
	func_124(&(Local_300[3 /*7*/]));
	func_124(&(Local_300[2 /*7*/]));
	func_124(&(Local_300[1 /*7*/]));
	if (func_470("PROS_CAM_TOG") || func_470("PROS_CAM_OC"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

void func_124(var uParam0)
{
	if (unk_0xA7A932170592B50E(*uParam0))
	{
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		if (unk_0xDFB2B516207D3534(*uParam0))
		{
			unk_0x026FB97D0A425F84(*uParam0, false);
		}
		unk_0x865908C81A2C22E9(*uParam0, false);
	}
}

void func_125()
{
	if (unk_0x4C241E39B23DF959(bLocal_93, false))
	{
		unk_0x92B35082E0B42F66(bLocal_93, true);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_219(bLocal_74) && !func_219(bLocal_75)) && !func_219(bLocal_76)) && !func_219(bLocal_77)) && !func_219(bLocal_78)) && !func_219(bLocal_79)) && !func_219(bLocal_80))
		{
			if (!unk_0x826AA586EDB9FEF8(bLocal_90) || unk_0x605F5A140F202491(unk_0xD80958FC74E988A6()))
			{
				iLocal_293 = 5;
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (!unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x6806C51AD12B83B8(2);
	unk_0xFE99B66D079CF6BC(2, 19, true);
	unk_0xFE99B66D079CF6BC(2, 37, true);
	func_213(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_551())
			{
				func_210(1089, -1);
			}
			func_40(&bLocal_113);
			func_209(func_49(), func_491(iLocal_49, 32768));
			iLocal_293 = 1;
			func_492("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0xFE99B66D079CF6BC(0, 48, true);
			unk_0xFE99B66D079CF6BC(0, 0, true);
			func_202();
			func_195();
			func_134();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_7(&bLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (bLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
					}
					else
					{
						func_129();
						unk_0x5A4F9EDF1673F704(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0xFE99B66D079CF6BC(0, 48, true);
			func_202();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_48(0, 1))
			{
				unk_0xFE99B66D079CF6BC(0, 0, true);
			}
			if (func_7(&bLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					bLocal_70 = 3;
					if (bLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
						func_115(&bLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0xFE99B66D079CF6BC(0, 0, true);
			if (!unk_0x729072355FA39EC9(bLocal_90))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_128();
				unk_0x5A4F9EDF1673F704(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0xFE99B66D079CF6BC(0, 0, true);
			if (!unk_0x729072355FA39EC9(bLocal_90))
			{
				if (bLocal_70 > 0)
				{
					if (func_127(bLocal_90))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
				}
				else
				{
					func_492("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_473(1);
				}
			}
			break;
	}
}

void func_126()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()))
	{
		if (bLocal_70 == 0)
		{
			unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
		}
		else if (func_127(bLocal_90))
		{
			func_40(&bLocal_101);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 768);
			func_482(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_127(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_77(bParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_128()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_129()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		unk_0x8E04FEDD28D42462(bLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
}

void func_130()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
}

void func_131(bool bParam0)
{
	if (unk_0xB65B60556E2A9225(bParam0))
	{
		unk_0xDFE8422B3B94E688(bParam0);
	}
}

int func_132()
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	unk_0xADFF1B2A555F5FBA();
	unk_0x62ECFCFDEE7885D6();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xCA042B6957743895(func_50(unk_0xD80958FC74E988A6(), 0, 0)))
	{
		return;
	}
	if (!unk_0xD031A9162D01088C(func_50(unk_0xD80958FC74E988A6(), 0, 0)))
	{
		return;
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
	}
	bVar1 = func_49();
	bVar2 = func_491(iLocal_49, 32768);
	if (!func_48(0, 1))
	{
		func_189(&iLocal_81);
	}
	unk_0xFE99B66D079CF6BC(2, 19, true);
	unk_0xFE99B66D079CF6BC(2, 37, true);
	func_188(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_48(0, 1))
			{
				func_183(&iLocal_81);
			}
			func_182(bLocal_90, 0);
			if (!func_551())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_179(bLocal_74);
			if (func_219(bLocal_75))
			{
				if (!func_491(iLocal_50, 4))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_75) >= fVar0)
					{
						func_482(&iLocal_50, 4);
					}
				}
			}
			if (func_219(bLocal_74))
			{
				if (!func_491(iLocal_50, 8))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_74) >= fVar0)
					{
						func_482(&iLocal_50, 8);
					}
				}
			}
			if (func_491(iLocal_50, 4) && func_491(iLocal_50, 8))
			{
				if (!func_551())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_179(bLocal_76);
			if (func_219(bLocal_76))
			{
				if (!func_491(iLocal_50, 16))
				{
					if (!func_551())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_76) >= fVar0)
					{
						func_482(&iLocal_50, 16);
					}
				}
			}
			if (func_491(iLocal_50, 16))
			{
				if (!func_551())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_179(bLocal_77);
			if (func_219(bLocal_77))
			{
				if (!func_491(iLocal_50, 64))
				{
					if (!func_491(iLocal_49, 16777216))
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(bLocal_77) >= fVar0)
						{
							func_482(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(bLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_167(func_551(), func_173(), func_168()))
					{
						func_482(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_491(iLocal_50, 64))
			{
				func_482(&iLocal_50, 64);
			}
			if (func_491(iLocal_50, 64))
			{
				if (!func_551())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_179(bLocal_78);
			if (func_219(bLocal_78))
			{
				if (!func_491(iLocal_50, 256))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_78) >= fVar0)
					{
						func_482(&iLocal_50, 256);
					}
				}
			}
			else if (!func_491(iLocal_50, 256))
			{
				func_482(&iLocal_50, 256);
			}
			if (func_491(iLocal_50, 256))
			{
				if (!func_551())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_179(bLocal_79);
			if (func_219(bLocal_79))
			{
				if (!func_491(iLocal_50, 1024))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_79) >= fVar0)
					{
						func_482(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_491(iLocal_50, 1024))
			{
				func_482(&iLocal_50, 1024);
			}
			if (func_219(bLocal_80))
			{
				if (!func_491(iLocal_50, 2048))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(bLocal_80) >= fVar0)
					{
						func_482(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_491(iLocal_50, 2048))
			{
				func_482(&iLocal_50, 2048);
			}
			if (func_491(iLocal_50, 1024) && func_491(iLocal_50, 2048))
			{
				func_182(bLocal_90, 0);
				unk_0xEA47FE3719165B94(bLocal_90, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, false, false, false, false);
				func_182(unk_0xD80958FC74E988A6(), -1);
				unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, false, false, false, false);
				func_123(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (bLocal_70 == 0 && !func_551())
	{
		if (func_26(unk_0xD80958FC74E988A6()) == 0)
		{
			func_156();
		}
		func_151(296, 0, 0);
		iVar0 = func_77(bLocal_90);
		if (iVar0 > -1)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(bLocal_90);
		}
	}
	bLocal_70++;
	func_136();
}

void func_136()
{
	switch (func_26(unk_0xD80958FC74E988A6()))
	{
		case 0:
			Global_113386.f_10049.f_90[0]++;
			func_137(0, 1, 1);
			break;
		
		case 1:
			Global_113386.f_10049.f_90[1]++;
			func_137(1, 1, 1);
			break;
		
		case 2:
			Global_113386.f_10049.f_90[2]++;
			func_137(2, 1, 1);
			break;
		
		case 3:
			func_137(3, 1, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				bVar0 = func_141(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_138(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_140();
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

int func_140()
{
	return Global_1574918;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_139(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_142(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == -1)
	{
		return;
	}
	func_150(iVar0);
	unk_0x98EFA132A4117BE1(bParam0, func_147(iVar0));
	Global_113386.f_10049.f_1[iVar0 /*11*/].f_10 = unk_0x9F47B058362C84B5(bParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_146(bParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_144(bParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_113386.f_10049.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(bool bParam0, int iParam1)
{
	return unk_0x04A355E041E004E6(bParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_113386.f_10049.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(bool bParam0, int iParam1)
{
	return unk_0x67F3780DD425D4FC(bParam0, func_86(iParam1));
}

var func_147(int iParam0)
{
	return func_148(iParam0);
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_150(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23() == 0)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_23() == 1)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_23() == 2)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
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
		func_155((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_152();
	}
}

void func_152()
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
		func_154(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_78319)
		{
			if (func_153() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_104();
				}
			}
		}
	}
}

int func_153()
{
	return Global_31959;
}

int func_154(int iParam0, bool bParam1)
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

void func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_140();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_96903[iVar0] = Global_96903[iVar0 + 1];
		}
		else
		{
			Global_96903[iVar0] = unk_0x9CD27B0045628463();
		}
		iVar0++;
	}
}

void func_157(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, bLocal_79, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xD80958FC74E988A6(), bLocal_80, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_551())
	{
		unk_0x9A1B3FCDB36C8697(bParam1);
	}
	else
	{
		unk_0xEEA929141F699854(bParam0, bParam1, bParam2, bParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&bLocal_79, 1, 0, 0);
	func_160(bLocal_90, bLocal_79, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(&bLocal_80, 0, 0, 0);
	func_160(unk_0xD80958FC74E988A6(), bLocal_80, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	if (func_551())
	{
		unk_0x742A637471BCECD9(bParam0, bParam1, bParam2, bParam3, fParam4, fParam5, iParam6, iParam7, fParam8, 0);
	}
}

void func_161(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*bParam0 = func_164(Var0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_163(*bParam0, bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_163(*bParam0, bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "seat_pside_f"));
	}
	func_162(*bParam0, Var0, 0f, 0f, 0f, 0);
}

void func_162(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3)
{
	if (!func_551())
	{
		unk_0x6ACF6B7225801CD7(bParam0, Param1, Param2, bParam3);
	}
}

void func_163(bool bParam0, bool bParam1, int iParam2)
{
	if (unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		return;
	}
	if (func_551())
	{
		unk_0x478DCBD2A98B705A(bParam0, bParam1, iParam2);
	}
	else
	{
		unk_0x272E4723B56A3B96(bParam0, bParam1, iParam2);
	}
}

bool func_164(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	
	if (func_551())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bVar0 = unk_0x7CD6BC4C2BBDD526(Param0, Param1, iParam4, bParam2, bParam3, 1f, 0f, 1f);
	}
	else
	{
		bVar0 = unk_0x8C18E0F9080ADD73(Param0, Param1, iParam4);
		unk_0x394B9CD12435C981(bVar0, bParam2);
		unk_0xD9A897A4C6C2974F(bVar0, bParam3);
	}
	return bVar0;
}

void func_165(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, bLocal_78, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xD80958FC74E988A6(), bLocal_78, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&bLocal_78, 0, 0, 1);
	func_160(bLocal_90, bLocal_78, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0xD80958FC74E988A6(), bLocal_78, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_169()
{
	if (func_551())
	{
		return func_141(65, -1, 0);
	}
	return func_170(func_26(unk_0xD80958FC74E988A6()), 1);
}

var func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0, iParam1);
	unk_0x767FBC2AC802EF3D(iVar1, &uVar0, -1);
	return uVar0;
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_172(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_173()
{
	int iVar0;
	
	if (bLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, bLocal_77, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xD80958FC74E988A6(), bLocal_77, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&bLocal_77, 0, 1, 0);
	func_160(bLocal_90, bLocal_77, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_160(unk_0xD80958FC74E988A6(), bLocal_77, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, bLocal_76, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xD80958FC74E988A6(), bLocal_76, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&bLocal_76, 0, 0, 1);
	func_160(bLocal_90, bLocal_76, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0xD80958FC74E988A6(), bLocal_76, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_178(bool bParam0)
{
	float fVar0;
	
	if (func_551())
	{
		fVar0 = unk_0xE4A310B1D7FA73CC(unk_0x02C40BF885C567B6(bParam0));
	}
	else
	{
		fVar0 = unk_0xE4A310B1D7FA73CC(bParam0);
	}
	return fVar0;
}

void func_179(bool bParam0)
{
	if (!func_219(bParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(bLocal_90, bLocal_74, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_158(unk_0xD80958FC74E988A6(), bLocal_75, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&bLocal_74, 1, 0, 1);
	func_160(bLocal_90, bLocal_74, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_161(&bLocal_75, 0, 0, 1);
	func_160(unk_0xD80958FC74E988A6(), bLocal_75, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_44(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_182(bool bParam0, bool bParam1)
{
	if (!unk_0xA3EE4A07279BB9DB(bParam0, bLocal_93, false))
	{
		if (!func_551())
		{
			unk_0xF75B0D629E1C063D(bParam0, bLocal_93, bParam1);
		}
		else if (!unk_0xA3EE4A07279BB9DB(bParam0, bLocal_93, false))
		{
			unk_0xC20E50AA46D09CA8(bParam0, bLocal_93, -1, bParam1, 2f, 16, 0);
		}
	}
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_185(func_186(2), unk_0x44A8FCB8ED227738(bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "windscreen")));
	uVar1 = func_185(func_186(1), unk_0x44A8FCB8ED227738(bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "windscreen")));
	Var2 = { unk_0xAFBD61CC738D9EB9(bLocal_93, 2) };
	bVar3 = unk_0xE83D4F9BA2A38914(bLocal_93);
	if (bVar3 >= 180f)
	{
		fVar4 = (bVar3 - 180f);
	}
	else
	{
		fVar4 = (bVar3 + 180f);
	}
	fVar5 = (-7f - Var2.f_1);
	fVar6 = (-5f - Var2.f_0);
	fVar7 = (-2.5f + Var2.f_0);
	fVar8 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!unk_0xA7A932170592B50E(Local_300[2 /*7*/]))
	{
		func_184(&(Local_300[2 /*7*/]), func_186(2), fVar5, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0xA7A932170592B50E(Local_300[1 /*7*/]))
	{
		func_184(&(Local_300[1 /*7*/]), func_186(1), fVar8, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0xA7A932170592B50E(Local_300[0 /*7*/]))
	{
		func_184(&(Local_300[0 /*7*/]), func_186(0), fVar6, -Var2.f_1, fVar4, 50f);
	}
	if (!unk_0xA7A932170592B50E(Local_300[3 /*7*/]))
	{
		func_184(&(Local_300[3 /*7*/]), func_186(3), fVar7, Var2.f_1, bVar3, 45f);
	}
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	unk_0x026FB97D0A425F84(Local_300[*iParam0 /*7*/], true);
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x026FB97D0A425F84(*uParam0, true);
	unk_0xBFD8727AEA3CCEBA(*uParam0, Param1, uParam0->f_1, fParam3, false, 1, 1, 2);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
}

float func_185(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0x2FFB6B224F4B2926((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_186(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	struct<2> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
	}
	if (!unk_0x4C241E39B23DF959(bLocal_93, false))
	{
	}
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bLocal_93), &uVar1, &Var2);
	Var3 = { unk_0x44A8FCB8ED227738(bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "windscreen")) };
	Var4 = { unk_0x2274BC1C4885E333(bLocal_93, Var3) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x1899F328B0E12848(bLocal_93, 0f, (Var2.f_1 + 1.4f), Var4.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x1899F328B0E12848(bLocal_93, 1.5f, (Var2.f_1 + 1.2f), (Var4.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x1899F328B0E12848(bLocal_93, -3.7f, 0.7f, Var4.f_2) };
			break;
		
		case 3:
			Var0 = { func_187() };
			break;
	}
	return Var0;
}

Vector3 func_187()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<2> Var2;
	var uVar3;
	
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bLocal_93), &Var2, &uVar3);
	Var0 = { unk_0x44A8FCB8ED227738(bLocal_93, unk_0xFB71170B7E76ACBA(bLocal_93, "windscreen")) };
	Var1 = { unk_0x2274BC1C4885E333(bLocal_93, Var0) };
	Var1.f_2 = (Var1.f_2 + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x1899F328B0E12848(bLocal_93, 0f, -unk_0x73D57CFFDD12C355(Var2.f_1), Var1.f_2);
}

void func_188(bool bParam0, bool bParam1)
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

void func_189(int iParam0)
{
	if (!unk_0xA7A932170592B50E(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x02EC0AF5C5A49B7A(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x6A25241C340D3822(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xB0034A223497FFCB())
	{
		func_192(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_551())
		{
			if (!func_470("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_551())
		{
			if (!func_470("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((unk_0x91AEF906BCA88877(2, 0) && !unk_0xB0034A223497FFCB()) && !func_48(0, 1))
		{
			func_190(iParam0);
			unk_0x026FB97D0A425F84(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_190(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_491(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_491(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_491(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_191()
{
	if ((func_491(iLocal_51, 16) && func_491(iLocal_51, 64)) && func_491(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0)
{
	var uVar0[4];
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	
	unk_0x7F4724035FDCA1DD(2);
	func_194(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var1.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var1.f_1 = ((-Var1.f_2 * 3f) / 10f);
	if (unk_0x77B612531280010D())
	{
		Var1.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var1.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * unk_0x0000000050597EE2());
	Var3 = { Var1 };
	if (unk_0xA571D46727E2B718(0))
	{
		uParam0->f_4 = func_193((uParam0->f_4 + (Var3.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_193((uParam0->f_4.f_1 + (Var3.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_193((uParam0->f_4.f_2 + (Var3.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_193((((Var3.f_0 - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_193((((Var3.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_193((((Var3.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0x85973643155D0B07(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_193(float fParam0, float fParam1, float fParam2)
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

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x1CEA6BFDF248E5D9(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!unk_0x1CEA6BFDF248E5D9(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (bParam5)
		{
			if (unk_0x77B612531280010D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_195()
{
	bool bVar0;
	float fVar1;
	
	if (!func_200())
	{
		if (func_199(bLocal_90))
		{
			if (!func_491(iLocal_49, 256))
			{
				unk_0xB8BEC0CA6F0EDB0F(unk_0xD80958FC74E988A6());
				unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
				if (bLocal_70 == 1)
				{
					if (!func_551())
					{
						unk_0xB7B0870EB531D08D(unk_0x4F8644AF03D0E0D6(), 15, true, 0);
					}
					unk_0x48B3886C1358D0D5(0, 4000, 252);
				}
				else if (bLocal_70 == 2)
				{
					if (!func_551())
					{
						unk_0xB7B0870EB531D08D(unk_0x4F8644AF03D0E0D6(), 10, true, 0);
					}
					unk_0x48B3886C1358D0D5(0, 4000, 210);
				}
				else
				{
					if (!func_551())
					{
						unk_0xB7B0870EB531D08D(unk_0x4F8644AF03D0E0D6(), 5, true, 0);
					}
					unk_0x48B3886C1358D0D5(0, 3000, 168);
				}
				func_482(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0xEAF4CD9EA3E7E922(bLocal_90, 876132797))
				{
					unk_0x48B3886C1358D0D5(0, 200, 84);
					unk_0xC5F68BE9613E2D18(bLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			
			case 1:
			case 2:
				if (func_491(iLocal_49, 32768))
				{
					if (func_551())
					{
						bVar0 = unk_0x02C40BF885C567B6(bLocal_77);
					}
					else
					{
						bVar0 = bLocal_77;
					}
					if (unk_0x25D39B935A038A26(bVar0))
					{
						fVar1 = unk_0xE4A310B1D7FA73CC(bVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_524(512))
							{
								unk_0x48B3886C1358D0D5(0, 200, 252);
								unk_0xC5F68BE9613E2D18(bLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_528(512);
						}
					}
				}
				else if (unk_0xEAF4CD9EA3E7E922(bLocal_90, 876132797))
				{
					unk_0x48B3886C1358D0D5(0, 200, 252);
					unk_0xC5F68BE9613E2D18(bLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)
{
	if (!func_491(iLocal_52, iParam0))
	{
		func_482(&iLocal_52, iParam0);
	}
}

void func_197()
{
	bool bVar0;
	
	bVar0 = unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6());
	bVar0 = (bVar0 + (1 + bLocal_288));
	if (bVar0 > unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6()))
	{
		bVar0 = unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6());
	}
	unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), bVar0, false);
	func_198();
}

void func_198()
{
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		bLocal_57 = unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6());
	}
}

bool func_199(bool bParam0)
{
	return (((unk_0x1F0B79228E461EC9(bParam0, func_54(), func_46(11), 3) || unk_0x1F0B79228E461EC9(bParam0, func_54(), func_46(21), 3)) || unk_0x1F0B79228E461EC9(bParam0, func_52(), func_45(11), 3)) || unk_0x1F0B79228E461EC9(bParam0, func_52(), func_45(21), 3));
}

bool func_200()
{
	return unk_0x1F0B79228E461EC9(bLocal_90, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_201(bLocal_90, func_49(), 1), 3);
}

char* func_201(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = "";
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		bVar1 = unk_0x9A9112A0FE9A4713(bParam0, true);
		if (unk_0x4C241E39B23DF959(bVar1, false))
		{
			if (func_47(bVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
		}
	}
	return sVar0;
}

void func_202()
{
	if (!func_200())
	{
		return;
	}
	if (func_551())
	{
		func_206();
	}
	if (unk_0x729072355FA39EC9(bLocal_90) || unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (unk_0xD53343AA4FB7DD28(false, 5000) > 2500)
	{
		func_203();
	}
}

void func_203()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90) && !unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()))
	{
		if (bLocal_288 == 0)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&bLocal_101))
		{
			func_472(&bLocal_101);
		}
		else if (func_7(&bLocal_101) > unk_0x313CE5879CEB6FCD(2f, 5f))
		{
			if (!func_491(iLocal_49, 65536))
			{
				func_482(&iLocal_49, 65536);
				unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", true);
				func_204(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_40(&bLocal_101);
			}
		}
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_205(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8E04FEDD28D42462(bLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			}
			else
			{
				unk_0x8E04FEDD28D42462(bLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			}
			break;
		
		case 1:
		case 2:
			if (func_205(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8E04FEDD28D42462(bLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			}
			else
			{
				unk_0x8E04FEDD28D42462(bLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			}
			break;
	}
}

int func_205(bool bParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return 1;
	}
	return Global_2689235[bParam0 /*453*/].f_238;
}

void func_206()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(4);
	}
	if (func_524(4))
	{
		if (!func_10(&bLocal_104))
		{
			func_472(&bLocal_104);
		}
		else if (func_7(&bLocal_104) > 2f)
		{
			if (!func_524(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_59++;
			}
			else if (func_524(16))
			{
				if (!unk_0x729072355FA39EC9(bLocal_90))
				{
					func_528(4);
					func_528(16);
					func_40(&bLocal_104);
				}
			}
		}
	}
}

int func_207(float fParam0)
{
	float fVar0;
	
	if (func_208(unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		fVar0 = unk_0x21A1684A25C2867F(unk_0x4F8644AF03D0E0D6());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
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

void func_209(bool bParam0, bool bParam1)
{
	if (!func_551())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

void func_210(int iParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_141(iParam0, func_139(iParam1), 0);
	bVar0++;
	if (!func_212(iParam0))
	{
		func_138(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_211(iParam0, bVar0, iParam1, 1);
	}
}

void func_211(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_139(iParam2)] = bParam1;
			break;
		
		case 789:
			Global_1659693[func_139(iParam2)] = bParam1;
			break;
		
		case 790:
			Global_1659699[func_139(iParam2)] = bParam1;
			break;
		
		case 791:
			Global_1659705[func_139(iParam2)] = bParam1;
			break;
		
		case 8729:
			Global_1659711[func_139(iParam2)] = bParam1;
			break;
		
		case 778:
			Global_1659657[func_139(iParam2)] = bParam1;
			break;
		
		case 779:
			Global_1659663[func_139(iParam2)] = bParam1;
			break;
		
		case 780:
			Global_1659669[func_139(iParam2)] = bParam1;
			break;
		
		case 781:
			Global_1659675[func_139(iParam2)] = bParam1;
			break;
		
		case 8731:
			Global_1659681[func_139(iParam2)] = bParam1;
			break;
		
		case 768:
			Global_1659627[func_139(iParam2)] = bParam1;
			break;
		
		case 769:
			Global_1659633[func_139(iParam2)] = bParam1;
			break;
		
		case 770:
			Global_1659639[func_139(iParam2)] = bParam1;
			break;
		
		case 771:
			Global_1659645[func_139(iParam2)] = bParam1;
			break;
		
		case 8733:
			Global_1659651[func_139(iParam2)] = bParam1;
			break;
		
		case 758:
			Global_1659717[func_139(iParam2)] = bParam1;
			break;
		
		case 759:
			Global_1659723[func_139(iParam2)] = bParam1;
			break;
		
		case 760:
			Global_1659729[func_139(iParam2)] = bParam1;
			break;
		
		case 761:
			Global_1659735[func_139(iParam2)] = bParam1;
			break;
		
		case 8735:
			Global_1659741[func_139(iParam2)] = bParam1;
			break;
		
		case 1304:
			Global_1659747[func_139(iParam2)] = bParam1;
			break;
		
		case 7236:
			Global_1659753[func_139(iParam2)] = bParam1;
			break;
		
		case 640:
			Global_1659759[func_139(iParam2)] = bParam1;
			break;
		
		case 1279:
			Global_1659765[func_139(iParam2)] = bParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 11391:
			Global_2869950[func_139(iParam2)] = bParam1;
			break;
		
		case 765:
			Global_1659771[func_139(iParam2)] = bParam1;
			break;
		
		case 766:
			Global_1659777[func_139(iParam2)] = bParam1;
			break;
		
		case 767:
			Global_1659783[func_139(iParam2)] = bParam1;
			break;
		
		case 8734:
			Global_1659789[func_139(iParam2)] = bParam1;
			break;
		
		case 9538:
			Global_1659795[func_139(iParam2)] = bParam1;
			break;
		
		case 1237:
			Global_1659801[func_139(iParam2)] = bParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3666:
			Global_2869985[func_139(iParam2)] = bParam1;
			break;
		
		case 3667:
			Global_2869994[func_139(iParam2)] = bParam1;
			break;
		
		case 3668:
			Global_2869988[func_139(iParam2)] = bParam1;
			break;
		
		case 3669:
			Global_2869997[func_139(iParam2)] = bParam1;
			break;
		
		case 3670:
			Global_2869991[func_139(iParam2)] = bParam1;
			break;
		
		case 3671:
			Global_2870000[func_139(iParam2)] = bParam1;
			break;
		
		case 3692:
			Global_2870003[func_139(iParam2)] = bParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8285:
			Global_2870006[func_139(iParam2)] = bParam1;
			break;
		
		case 8286:
			Global_2870009[func_139(iParam2)] = bParam1;
			break;
		
		case 8287:
			Global_2870012[func_139(iParam2)] = bParam1;
			break;
		
		case 8288:
			Global_2870015[func_139(iParam2)] = bParam1;
			break;
		
		case 8289:
			Global_2870018[func_139(iParam2)] = bParam1;
			break;
		
		case 8290:
			Global_2870021[func_139(iParam2)] = bParam1;
			break;
		
		case 8291:
			Global_2870024[func_139(iParam2)] = bParam1;
			break;
		
		case 8292:
			Global_2870027[func_139(iParam2)] = bParam1;
			break;
		
		case 8293:
			Global_2870030[func_139(iParam2)] = bParam1;
			break;
		
		case 8294:
			Global_2870033[func_139(iParam2)] = bParam1;
			break;
		
		case 8295:
			Global_2870036[func_139(iParam2)] = bParam1;
			break;
		
		case 8296:
			Global_2870039[func_139(iParam2)] = bParam1;
			break;
		
		case 8297:
			Global_2870042[func_139(iParam2)] = bParam1;
			break;
		
		case 8905:
			Global_2870045[func_139(iParam2)] = bParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_139(iParam2)] = bParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0)
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

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_217(0))
		{
			func_214(iParam0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_8137, 2);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_216())
		{
			func_215(1, 1);
		}
		else
		{
			func_215(0, 0);
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
	if (!func_20())
	{
		Global_20266.f_1 = 3;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
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

bool func_216()
{
	return BitTest(Global_1958711, 5);
}

int func_217(int iParam0)
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

bool func_218()
{
	return BitTest(Global_1958711, 19);
}

bool func_219(bool bParam0)
{
	bool bVar0;
	
	if (func_551())
	{
		bVar0 = unk_0x25D39B935A038A26(unk_0x02C40BF885C567B6(bParam0));
	}
	else
	{
		bVar0 = unk_0x25D39B935A038A26(bParam0);
	}
	return bVar0;
}

void func_220()
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		unk_0xD4E8E24955024033(1000);
		unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), func_222(), true, false, false, true);
		unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), func_221());
		func_542();
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x9614299DCB53E54B(&bLocal_90);
	}
}

float func_221()
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()
{
	bool bVar0;
	
	if (func_225(&bLocal_98, 3f) && !unk_0xDFB2B516207D3534(bLocal_97))
	{
		bVar0 = unk_0xF34EE736CF047844(((func_224() - 2f) * 1000f));
		unk_0x026FB97D0A425F84(bLocal_96, false);
		unk_0x9FBDA379383A52A4(bLocal_97, bLocal_96, bVar0, 1, 1);
	}
	if (func_225(&bLocal_98, func_224()))
	{
		unk_0x891B5B39AC6302AF(1000);
		iLocal_286 = 10;
	}
}

float func_224()
{
	switch (func_23())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_225(bool bParam0, float fParam1)
{
	if (func_10(bParam0))
	{
		if (func_7(bParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &uVar0, 13))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(*uParam0))
	{
		if (unk_0x6AC7003FA6E5575E(*uParam0))
		{
			if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == unk_0x4B53F92932ADFAC0(*uParam0))
					{
						func_123(0);
						unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
						func_542();
						func_536(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	bool bVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(bLocal_90))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			bVar0 = unk_0xEEF059FAD016D209(bLocal_90);
			if ((bVar0 - bLocal_58) < 0)
			{
				func_123(0);
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_230(var uParam0)
{
	bool bVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			bVar0 = unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6());
			if ((bVar0 - bLocal_57) < 0)
			{
				func_123(0);
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				Var1 = { unk_0x3FEF770D40960D5A(bVar0, true) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_123(0);
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_491(iLocal_49, 16))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), false);
		}
		func_482(&iLocal_49, 16);
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_551())
		{
			if (unk_0x01BF60A500E28887(bLocal_93))
			{
				unk_0x684785568EF26A22(bLocal_93, true);
				unk_0x34E710FF01247C5A(bLocal_93, 4);
				unk_0xBC2042F090AF6AD3(bLocal_93, true);
				unk_0x8BA6F76BC53A1493(bLocal_93, false, 0);
			}
		}
		else
		{
			unk_0x684785568EF26A22(bLocal_93, true);
			unk_0x34E710FF01247C5A(bLocal_93, 4);
			unk_0xBC2042F090AF6AD3(bLocal_93, true);
		}
		if (!func_377() || !unk_0xA3EE4A07279BB9DB(bLocal_90, bLocal_93, false))
		{
			func_473(0);
			return;
		}
	}
	else
	{
		func_473(0);
		return;
	}
	func_213(0);
	if ((!unk_0x5721B434AD84D57A(bLocal_93) && unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) && !func_491(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_375(1, -1);
		unk_0x2F844A8B08D76685("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_492("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x6806C51AD12B83B8(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_551())
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0x7239B21A38F536BA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						if (unk_0xC7827959479DCC78(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
						{
							if (unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -1, false) == unk_0xD80958FC74E988A6())
							{
								if (unk_0x01BF60A500E28887(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
								{
									if (!unk_0x0A7B270912999B3C(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
									{
										unk_0xAD738C3085FE7E11(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, false);
									}
								}
								else
								{
									unk_0xB69317BF5E782347(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
									return;
								}
							}
						}
						else
						{
							unk_0x06FAACD625D80CAA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
							return;
						}
					}
				}
			}
			func_374();
			func_373();
			func_198();
			if (func_370())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_369();
				if (func_551())
				{
					func_196(2);
					if (func_551())
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (unk_0xC7827959479DCC78(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
							{
								if (unk_0x01BF60A500E28887(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
								{
									unk_0xA2F80B8D040727CC(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true);
									unk_0xB664292EAECF7FA6(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 4);
									unk_0x2311DD7159F00582(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true);
								}
							}
						}
					}
				}
				unk_0x22EF8FF8778030EB(bLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_368(bLocal_295))
			{
				func_367(&bLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_365(bLocal_90, 0);
			if (func_365(unk_0xD80958FC74E988A6(), 1))
			{
				if (func_363(&bVar1, 0))
				{
					iLocal_48 = unk_0xA4FF579AC0E3AAAE();
					iVar2 = unk_0x8D4D46230B2C353A();
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0x5A4F9EDF1673F704(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0x5A4F9EDF1673F704(1);
						}
					}
					func_351();
					iLocal_292 = 3;
					func_492("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_350(&bVar1, -1);
					func_40(&bLocal_107);
					bLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xB0034A223497FFCB())
			{
				return;
			}
			unk_0x0B4DF1FA60C0E664(3);
			func_331();
			func_295(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_294(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0xFE99B66D079CF6BC(0, 48, true);
			unk_0xEDE476E5EE29EDB1(2, 187);
			unk_0xEDE476E5EE29EDB1(2, 188);
			unk_0xEDE476E5EE29EDB1(2, 201);
			iVar0 = 0;
			if (unk_0x48AF36444B965238())
			{
				if (unk_0x13337B38DB572509(2))
				{
					unk_0xFE99B66D079CF6BC(0, 1, true);
					unk_0xFE99B66D079CF6BC(0, 2, true);
					unk_0x351220255D64C155(0, 237, true);
					unk_0x351220255D64C155(0, 238, true);
					unk_0x351220255D64C155(0, 241, true);
					unk_0x351220255D64C155(0, 242, true);
					func_290(0, 0, 0, 1);
					func_289(0, -1, 1);
					if (func_288())
					{
						if (Global_4539961 != iLocal_68)
						{
							unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4539961;
							func_492("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x580417101DDB492F(2, 187) || (unk_0xA571D46727E2B718(2) && unk_0x580417101DDB492F(2, 242))) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(0, 33))) || (((unk_0x48AF36444B965238() && !unk_0xA571D46727E2B718(2)) && iVar4 > 100) && (unk_0x9CD27B0045628463() - iLocal_87) > 300))
			{
				unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0x9CD27B0045628463();
			}
			else if (((unk_0x580417101DDB492F(2, 188) || (unk_0xA571D46727E2B718(2) && unk_0x580417101DDB492F(2, 241))) || (unk_0xA571D46727E2B718(2) && unk_0x91AEF906BCA88877(0, 32))) || (((unk_0x48AF36444B965238() && !unk_0xA571D46727E2B718(2)) && iVar4 < -100) && (unk_0x9CD27B0045628463() - iLocal_87) > 300))
			{
				unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0x9CD27B0045628463();
			}
			else if (unk_0x50F940259D3841E6(2, 201) || iVar0 == 1)
			{
				unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0x6806C51AD12B83B8(3);
				func_284();
				unk_0xA72CD9CA74A5ECBA(unk_0xD80958FC74E988A6());
				iLocal_292 = 4;
			}
			func_283(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0x3F69145BBA87BAE7(bLocal_90);
			if (bLocal_288 == 3)
			{
				func_375(1, -1);
				func_282();
				func_281(0);
				iLocal_62 = unk_0x9CD27B0045628463();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_492("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (bLocal_70 > 0)
				{
					if (func_127(bLocal_90))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
					return;
				}
				else
				{
					if (func_276() >= 20)
					{
						iVar7 += 20;
						func_234(20);
						unk_0xA9C8960E8684C1B5(bLocal_90, iVar7);
					}
					func_473(1);
					return;
				}
			}
			if (!unk_0xD031A9162D01088C(func_50(unk_0xD80958FC74E988A6(), 0, 0)))
			{
			}
			else
			{
				func_375(1, -1);
				func_282();
				if (unk_0x9F1935CA1F724008())
				{
					func_482(&iLocal_49, 1024);
					bLocal_288 = 3;
					func_492("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (bLocal_288 != 3)
				{
					if (func_276() > func_233(bLocal_288))
					{
						func_234(func_233(bLocal_288));
						iVar7 = (iVar7 + func_233(bLocal_288));
					}
					func_41(&bLocal_101, (14f - 4f));
					func_492("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_286 = 11;
				}
				unk_0xA9C8960E8684C1B5(bLocal_90, iVar7);
				iLocal_62 = unk_0x9CD27B0045628463();
			}
			break;
	}
}

int func_233(int iParam0)
{
	if (unk_0x9F1935CA1F724008())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_234(bool bParam0)
{
	var uVar0;
	
	if (!func_551())
	{
		func_248(func_23(), 1, bParam0);
	}
	else if (!func_247())
	{
		unk_0xB21B89501CFAC79E(bParam0, false, false);
	}
	else
	{
		func_235(-1359375127, bParam0, &uVar0, 0, 0, 0);
	}
}

void func_235(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
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
			if (bParam1 > 0 || Global_262145.f_28363)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
			if (bParam1 > 0 || Global_262145.f_28363)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_140()) || unk_0x810E8431C0614BF9())
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
	if ((bVar0 || iVar1) || unk_0x3C5FD37B5499582E(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x39BE7CEA8D9CC8E6(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
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
			Global_4535610 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_242(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
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
		func_239(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_239(var uParam0)
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
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
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

void func_240(var uParam0)
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

int func_241(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = bParam5;
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
				func_244(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_244(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	bool bVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	bVar1 = func_246(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!bVar1 == 0)
	{
		func_245();
		unk_0xA40CC53DF8E50837(1, &Var0, 36, bVar1);
	}
}

void func_245()
{
	unk_0x6EB5F71AA68F2E8E("AM_ARENA_SHP");
}

var func_246(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x933D6A9EEC1BACD0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_247()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_248(int iParam0, int iParam1, bool bParam2)
{
	if (func_275(iParam0) == 3)
	{
		return 0;
	}
	if (func_275(iParam0) == 4)
	{
		return 0;
	}
	return func_249(func_275(iParam0), 0, iParam1, bParam2, 0);
}

int func_249(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_274();
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
					func_273(99, 1);
					func_272(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_272(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_272(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_258(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
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
							func_272(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_256(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_272(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_property"), bParam3);
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
									func_272(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_256(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_255(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_273(95, bParam3);
					break;
				
				case 1:
					func_273(97, bParam3);
					break;
				
				case 2:
					func_273(96, bParam3);
					break;
			}
			func_273(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_252(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_252(bVar1);
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
					func_272(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_272(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_272(joaat("sp2_total_cash_earned"), bParam3);
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
	func_251(iParam0);
	if (Global_43052 == 15)
	{
		func_250(0);
	}
	return 1;
}

void func_250(bool bParam0)
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

void func_251(int iParam0)
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

void func_252(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_155(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_155(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_155(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_155(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_138(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_138(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_138(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_138(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_138(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_138(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_254() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_254() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_253(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_253(bool bParam0)
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

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_255(int iParam0)
{
	func_273(93, iParam0);
	func_273(29, iParam0);
	func_273(30, iParam0);
}

int func_256(int iParam0)
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
		return func_257(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_257(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_257(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_257(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_141(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_141(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_141(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_141(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_141(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_141(8277, -1, 0);
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
	return BitTest(Global_2359296[func_254() /*5567*/].f_681.f_10, iParam0);
}

bool func_257(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_140();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_258(bool bParam0)
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
		func_154(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_259(27, 1);
	return 1;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_260(iParam0, iParam1);
}

int func_260(int iParam0, int iParam1)
{
	if (func_552(14) && !func_271(iParam0))
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
	if (func_270(&Global_4541529))
	{
		if (func_268(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_261(&Global_4541529, iParam0))
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

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_552(14) && !func_271(iParam1))
	{
		return 0;
	}
	if (func_268(uParam0, iParam1))
	{
		return 0;
	}
	if (func_267(uParam0) < 0f)
	{
		func_266(uParam0, 0);
	}
	func_264(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_262(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_262(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_552(14) && !func_271(iParam1))
	{
		return 0;
	}
	if (func_268(uParam0, iParam1))
	{
		return 0;
	}
	if (func_267(uParam0) < 0f)
	{
		func_266(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_263(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_263(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_264(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_265(uParam0, iVar0);
		iVar0++;
	}
	func_266(uParam0, (Global_4541528 - 0.5f));
}

void func_265(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_266(var uParam0, float fParam1)
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

float func_267(var uParam0)
{
	return uParam0->f_80;
}

bool func_268(var uParam0, int iParam1)
{
	return func_269(uParam0, iParam1) != -1;
}

int func_269(var uParam0, int iParam1)
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

bool func_270(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_271(int iParam0)
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

void func_272(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_273(int iParam0, int iParam1)
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

void func_274()
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

int func_275(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_276()
{
	if (func_551())
	{
		return func_278(unk_0x4F8644AF03D0E0D6());
	}
	return func_277(func_23());
}

int func_277(int iParam0)
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

var func_278(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_279(bParam0);
	return uVar0;
}

int func_279(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return unk_0xA40F9C2623F6A8B5(-1);
		}
		else if (func_280(iParam0))
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

int func_280(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_281(bool bParam0)
{
	if (unk_0xE8AF77C4C06ADC93() != 255)
	{
		unk_0x1098355A16064BB3(bParam0);
		unk_0xBF286C554784F3DF(bParam0);
	}
}

void func_282()
{
	Global_23011.f_5 = 0;
}

void func_283(int iParam0, bool bParam1, int iParam2)
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

void func_284()
{
	if (iLocal_68 == iLocal_69)
	{
		bLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_285();
		if (iLocal_289 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			unk_0x2F844A8B08D76685("PROSTITUTE_BLOWJOB", false, -1);
			bLocal_288 = false;
		}
		else if (iLocal_289 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			bLocal_288 = true;
		}
		else if (iLocal_289 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			bLocal_288 = 2;
		}
	}
}

void func_285()
{
	switch (iLocal_289)
	{
		case 0:
			func_287();
			break;
		
		case 1:
		case 2:
			func_286();
			break;
	}
}

void func_286()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_287()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_288()
{
	if (unk_0xA571D46727E2B718(2))
	{
		if (Global_4539961 > -1)
		{
			if (unk_0x580417101DDB492F(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xAAE7CE1D63167423();
	}
	if (Global_4539961 == -6)
	{
		unk_0x8DB8CFFD58B62552(4);
		if (iParam0 && unk_0xF3A21BCD95725A4A(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || unk_0x3D9ACB1EB139E702())
	{
		unk_0x8DB8CFFD58B62552(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (unk_0xF3A21BCD95725A4A(2, 237))
		{
			unk_0x8DB8CFFD58B62552(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			unk_0x8DB8CFFD58B62552(3);
			return 0;
		}
	}
	unk_0x8DB8CFFD58B62552(1);
	return 0;
}

void func_290(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	fVar6 = (0.034722f / 2f);
	bVar13 = -1;
	if (!unk_0xA571D46727E2B718(2))
	{
		Global_4539961 = -1;
		return;
	}
	unk_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	func_293();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_292(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_292(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		bVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			bVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		bVar10 = (32 + (iVar11 - (iVar12 * bVar13)));
		if (bParam3)
		{
			if (!bParam1 || bVar13 != 0)
			{
				unk_0xB8A850F20A067EB6(76, 84);
				unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_291(fVar4, (fVar5 + (IntToFloat(bVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, bVar10);
				unk_0xE3A3DB414A373DAB();
			}
		}
		Global_4539961 = Global_23150.f_8429[bVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_291(float fParam0, float fParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, bParam4, bParam5, bParam6, bParam7, false);
}

void func_292(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		bVar3 = 48;
	}
	else
	{
		bVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_291(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_291(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, bVar3);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_293()
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = unk_0x11E65974A982637C(2, 239);
	Global_4539956 = unk_0x11E65974A982637C(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_295(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
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
	
	if (!func_330(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_328(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_326(29, 1, 1, &fVar36, &fVar37, bParam7))
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
	func_324(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_320(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
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
					StringCopy(&cVar61, func_319(29), 64);
					StringCopy(&cVar62, func_316(29, 1), 64);
					if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_291(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
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
				func_291(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_23150.f_1)) != 0)
				{
					func_315();
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
					func_315();
					func_313((((Global_23147 + fParam5) - 0.00390625f) - func_314("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_315();
						func_313((((Global_23147 + fParam5) - 0.00390625f) - func_314("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
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
				func_291(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, bVar1, bVar2, bVar3, bVar4);
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
					func_326(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_312(fVar40);
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
				func_291(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
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
				func_312(fVar40);
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
					func_326(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_311(Global_23150.f_5159, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_5159), func_316(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
					func_326(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_312(fVar40);
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
				func_291(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, bVar1, bVar2, bVar3, bVar4);
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
				func_312(fVar40);
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
					func_326(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_311(Global_4539885.f_67, 1, &bVar45, &bVar46, &bVar47, &bVar48);
					unk_0xE7FFAE5EBF23D890(func_319(Global_4539885.f_67), func_316(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
			func_304(iVar58, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
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
												if (func_326(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(26), func_316(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(27), func_316(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
										func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_301(bVar32);
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
												if (func_326(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_326(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_311(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[(iVar22 + iVar28)]), func_316(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[(iVar22 + iVar28)]), func_316(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
											if (func_300() && unk_0x2C83A9DA6BFFC4F9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_302(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_326(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_326(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_311(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[(iVar22 + iVar14)]), func_316(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[(iVar22 + iVar14)]), func_316(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[(iVar22 + iVar14)]), func_316(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
										func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_301(bVar32);
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
										if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(26), func_316(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(27), func_316(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_299((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
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
										func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_301(bVar32);
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
										if (func_326(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(26), func_316(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
												if (iVar5 == 1)
												{
													unk_0xE7FFAE5EBF23D890(func_319(27), func_316(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
												}
											}
										}
									}
									func_302(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_298((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_326(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_311(26, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_319(26), func_316(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
											if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_311(27, 1, &bVar45, &bVar46, &bVar47, &bVar48);
													if (iVar5 == 1)
													{
														unk_0xE7FFAE5EBF23D890(func_319(27), func_316(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_326(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(Global_23150.f_4824[iVar22], bVar32, &bVar45, &bVar46, &bVar47, &bVar48);
												unk_0xE7FFAE5EBF23D890(func_319(Global_23150.f_4824[iVar22]), func_316(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_297(Global_23150.f_4824[iVar22])), (fVar37 * func_297(Global_23150.f_4824[iVar22])), 0f, bVar45, bVar46, bVar47, bVar48, false, 0);
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
								if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_213(0);
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
		func_296(1);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_296(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

float func_297(int iParam0)
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

void func_298(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0xE7DCB5B874BCD96E(bParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_299(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

bool func_300()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

void func_301(bool bParam0)
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

void func_302(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_303(Global_23150.f_6402[iParam4], &bVar0, &bVar1, &bVar2);
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

void func_303(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_304(int* iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_330(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_328(bParam4, bParam8))
	{
		return;
	}
	if (func_309())
	{
		return;
	}
	if (unk_0x5FCF4D7069B09026())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_307(unk_0x4F8644AF03D0E0D6(), 0))
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
					func_306(&(Global_23150.f_5162[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_306(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[bVar1] == -1)
					{
						func_305(&(Global_23150.f_5355[bVar1 /*4*/]));
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
				func_306(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_305(&(Global_4539885.f_16));
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

void func_305(bool bParam0)
{
	unk_0x80338406F3475E55(bParam0);
	unk_0x362E2D3FE93A9959();
}

void func_306(bool bParam0)
{
	unk_0xE83A3E3557A56640(bParam0);
}

bool func_307(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_308(-1, 0) == 8;
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

int func_308(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_140();
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

int func_309()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_310())
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

int func_310()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_311(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_312(float fParam0)
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

void func_313(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	unk_0x25FBB336DF1804CB(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0x03B504CF259931BC(bParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_314(bool bParam0, bool bParam1, bool bParam2)
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
	func_315();
	unk_0x54CE8AC98E120CAB(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x03B504CF259931BC(bParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_315()
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

var func_316(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_318(unk_0x4F8644AF03D0E0D6()) };
			if (unk_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_317(&uVar1);
			}
		}
		else
		{
			return func_317(&(Global_23150.f_7420[iParam0 /*16*/]));
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

var func_317(var uParam0)
{
	return uParam0;
}

struct<13> func_318(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(bParam0, &Var0, 13);
	return Var0;
}

char* func_319(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xCA042B6957743895(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0xD24D37CC275948CC(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_318(unk_0x4F8644AF03D0E0D6()) };
			unk_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_317(&uVar0);
		}
		else
		{
			return func_317(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_320(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
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
		func_323(Global_23150.f_5609, 1);
	}
	else
	{
		func_323(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_322(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_326(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_321(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
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

float func_321(bool bParam0)
{
	if (!unk_0xAC09CA973C564252(bParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_322(bool bParam0)
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
	func_302(0, 1, 0, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(bParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_323(bool bParam0, bool bParam1)
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

void func_324(bool bParam0, int* iParam1, int* iParam2, float fParam3)
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
	if (func_325(*iParam1, *iParam2))
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

bool func_325(bool bParam0, bool bParam1)
{
	return (unk_0xBBDA792448DB5A89(bParam0) / unk_0xBBDA792448DB5A89(bParam1)) > 3.5f;
}

int func_326(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_319(iParam0), 64);
	StringCopy(&cVar1, func_316(iParam0, bParam1), 64);
	if (unk_0xD24D37CC275948CC(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_324(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x35736EE65BD00C11(&cVar0, &cVar1) };
		fVar6 = (func_327(iParam0) / fVar4);
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

float func_327(int iParam0)
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

int func_328(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_30(8, -1) && func_329() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_78579) || Global_23150.f_8807) || unk_0xE18B138FABC53103()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_329()
{
	return Global_1574991;
}

int func_330(var uParam0, bool bParam1, int iParam2)
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

void func_331()
{
	if (!func_368(bLocal_295))
	{
		bLocal_295 = func_349();
		func_340(&bLocal_295, 0, 0, unk_0xD53343AA4FB7DD28(true, 2), 0, 0, 0);
	}
	else if (!func_491(iLocal_73, 2))
	{
		if (func_332(bLocal_295))
		{
			bLocal_295 = func_349();
			func_340(&bLocal_295, 0, 0, unk_0xD53343AA4FB7DD28(true, 2), 0, 0, 0);
			func_482(&iLocal_73, 2);
		}
	}
	else if (func_332(bLocal_295))
	{
		func_282();
		func_473(0);
	}
}

bool func_332(bool bParam0)
{
	return func_333(func_349(), bParam0);
}

int func_333(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_368(bParam1) || !func_368(bParam0))
	{
		return 1;
	}
	iVar0 = func_339(bParam0);
	iVar1 = func_339(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(bParam0);
	iVar1 = func_338(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(bParam0);
	iVar1 = func_337(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(bParam0);
	iVar1 = func_336(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(bParam0);
	iVar1 = func_335(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(bParam0);
	iVar1 = func_334(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_334(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 20) & 63;
}

int func_335(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 14) & 63;
}

int func_336(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 9) & 31;
}

int func_337(bool bParam0)
{
	return unk_0x97EF1E5BCE9DC075(bParam0, 4) & 31;
}

bool func_338(bool bParam0)
{
	return (bParam0 && 15);
}

var func_339(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_167(BitTest(bParam0, 31), -1, 1)) + 2011;
}

void func_340(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = func_339(*bParam0);
	iVar1 = func_338(*bParam0);
	bVar2 = func_337(*bParam0);
	bVar3 = func_336(*bParam0);
	bVar4 = func_335(*bParam0);
	bVar5 = func_334(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && bParam3 == 0) && iParam2 == 0) && iParam1 == 0)
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
	if (bParam3 < 0)
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
		bParam3++;
		bVar4 = (bVar4 - 60);
	}
	bVar3 = (bVar3 + bParam3);
	while (bVar3 >= 24)
	{
		iParam4++;
		bVar3 = (bVar3 - 24);
	}
	bVar2 = (bVar2 + iParam4);
	iVar6 = func_348(iVar1, iVar0);
	while (bVar2 > iVar6)
	{
		iVar1++;
		bVar2 = (bVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_348(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_341(bParam0, bVar5, bVar4, bVar3, bVar2, iVar1, iVar0);
}

void func_341(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_347(uParam0, bParam1);
	func_346(uParam0, bParam2);
	func_345(uParam0, bParam3);
	func_344(uParam0, iParam5);
	func_343(uParam0, bParam4);
	func_342(uParam0, iParam6);
}

void func_342(var uParam0, int iParam1)
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

void func_343(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_338(*uParam0);
	iVar1 = func_339(*uParam0);
	if (bParam1 < 1 || bParam1 > func_348(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

void func_344(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_345(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_346(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_347(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_348(int iParam0, int iParam1)
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

bool func_349()
{
	var uVar0;
	
	func_347(&uVar0, unk_0x494E97C2EF27C470());
	func_346(&uVar0, unk_0x13D2B8ADD79640F2());
	func_345(&uVar0, unk_0x25223CA6B4D20B7F());
	func_343(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_344(&uVar0, unk_0xBBC72712E80257A1());
	func_342(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_350(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_351()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_362(1);
	func_281(1);
	unk_0xA0EBB943C300E693(false);
	func_361(0, 0);
	func_360(1, 1, 0, 0, 0);
	func_359(1, 2, 1, 1, 1);
	func_358("PROS_OPTS");
	func_357(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_233(0);
	iVar1 = func_233(1);
	iVar2 = func_233(2);
	if (func_276() >= iVar0)
	{
		func_320(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_276() >= iVar1 && func_353(bLocal_93))
	{
		func_320(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_276() >= iVar2 && func_353(bLocal_93))
	{
		func_320(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_320(iLocal_69, "PROS_QUIT", 0, 1, 0, 0, 0);
	iLocal_68 = 0;
	func_283(iLocal_68, 1, 1);
	func_352();
	iLocal_87 = unk_0x9CD27B0045628463();
	iLocal_292 = 3;
}

void func_352()
{
	Global_23011.f_5 = 1;
}

int func_353(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		bVar0 = unk_0x9F47B058362C84B5(bParam0);
		if ((((((((((((((bVar0 == joaat("infernus") || bVar0 == joaat("voltic")) || bVar0 == joaat("stingergt")) || bVar0 == joaat("stinger")) || bVar0 == joaat("bullet")) || bVar0 == joaat("entityxf")) || bVar0 == joaat("feltzer3")) || bVar0 == joaat("granger")) || bVar0 == joaat("panto")) || bVar0 == joaat("phoenix")) || bVar0 == joaat("fmj")) || bVar0 == joaat("reaper")) || bVar0 == joaat("le7b")) || bVar0 == joaat("tyrus")) || bVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

void func_354(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4309[Global_23150.f_5613] = iParam0;
	Global_23150.f_5613++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 2;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_356();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_326(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_355();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

float func_355()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_326(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xDB88A37483346780(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_356()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_302(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		unk_0x54CE8AC98E120CAB(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x03B504CF259931BC(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0xE7DCB5B874BCD96E(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x6C188BE134E074AA(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x6C188BE134E074AA(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x6C188BE134E074AA(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xD24D37CC275948CC(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = unk_0x85F061DA64ED2F67(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_326(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_357(int iParam0, char* sParam1, int iParam2, bool bParam3)
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
	if (!bParam3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_358(char* sParam0)
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

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_361(bool bParam0, bool bParam1)
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

void func_362(bool bParam0)
{
	if (!bParam0)
	{
		Global_112028 = unk_0x9CD27B0045628463() + 250;
	}
	Global_112025 = bParam0;
}

int func_363(char* sParam0, int iParam1)
{
	if (func_276() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x10FAB35428CCC9D7() && func_364(unk_0x4F8644AF03D0E0D6()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_364(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_365(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xD031A9162D01088C(func_50(unk_0xD80958FC74E988A6(), 0, 0)))
	{
	}
	else if (!unk_0x1F0B79228E461EC9(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_110(bParam1), 3) && unk_0x77F1BEB8863288D5(bParam0, -2017877118) != 1)
	{
		if (func_551())
		{
			if (bParam0 == unk_0xD80958FC74E988A6())
			{
				if (!func_205(unk_0x4F8644AF03D0E0D6()))
				{
					iVar0 = unk_0x67F3780DD425D4FC(unk_0xD80958FC74E988A6(), 6);
					if (!func_524(256))
					{
						func_196(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0x04A355E041E004E6(unk_0xD80958FC74E988A6(), 6);
						unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 6, true, false, 0);
						func_196(1024);
					}
				}
				unk_0xEA47FE3719165B94(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, false, false, false, false);
			}
			else
			{
				unk_0xEA47FE3719165B94(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, false, false, false, false);
			}
		}
		else
		{
			unk_0xEA47FE3719165B94(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, false, false, false, false);
		}
	}
	else
	{
		if (unk_0x1F0B79228E461EC9(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_366(bParam1), 3))
		{
			if (unk_0x346D81500D088F42(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_366(bParam1)) >= 0.95f)
			{
				unk_0xEA47FE3719165B94(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, false, false, false, false);
			}
		}
		if (unk_0x1F0B79228E461EC9(bParam0, func_50(unk_0xD80958FC74E988A6(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_366(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(0);
		}
		else
		{
			return func_45(1);
		}
	}
	if (bParam0)
	{
		return func_46(0);
	}
	return func_46(1);
}

void func_367(bool bParam0)
{
	*bParam0 = -15;
}

int func_368(bool bParam0)
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
	iVar0 = func_334(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_335(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_336(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_339(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_338(bParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_337(bParam0);
	if (iVar5 < 1 || iVar5 > func_348(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_369()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	unk_0xB8BEC0CA6F0EDB0F(bLocal_90);
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		if (bLocal_70 < 1)
		{
			unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
		}
		else
		{
			unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
		}
	}
}

int func_370()
{
	if (func_371(0, -1, 0) && unk_0x2F844A8B08D76685("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_371(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_330(&iVar0, 1, iParam1))
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
	bVar2 = func_372(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_372(var uParam0)
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

void func_373()
{
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(bLocal_90))
	{
		bLocal_58 = unk_0xEEF059FAD016D209(bLocal_90);
	}
}

void func_374()
{
	bool bVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				Local_56 = { unk_0x3FEF770D40960D5A(bVar0, true) };
			}
		}
	}
}

void func_375(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_330(&iVar0, 0, iParam1))
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
		func_376(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_376(int* iParam0)
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

int func_377()
{
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				bLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!bLocal_93 == 0)
				{
					if ((unk_0x4C241E39B23DF959(bLocal_93, false) && !unk_0x28D3FED7190D3A0B(bLocal_93)) && !unk_0x1DBD58820FA61D71(bLocal_93))
					{
						if (func_91(&bLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_378()
{
	if (bLocal_70 == 0)
	{
		if (!func_491(iLocal_51, 1) && !func_491(iLocal_51, 16))
		{
			if (func_379(0))
			{
				func_482(&iLocal_51, 1);
			}
		}
		if (!func_491(iLocal_51, 4) && !func_491(iLocal_51, 64))
		{
			if (func_379(2))
			{
				func_482(&iLocal_51, 4);
			}
		}
		if (!func_491(iLocal_51, 8) && !func_491(iLocal_51, 128))
		{
			if (func_379(1))
			{
				func_482(&iLocal_51, 8);
			}
		}
	}
}

int func_379(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Var0 = { func_186(iParam0) };
	Var1 = { unk_0x3FEF770D40960D5A(bLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x9F47B058362C84B5(bLocal_93) == joaat("tyrant"))
		{
			iLocal_299[iParam0] = unk_0xE6AC6C45FBE83004(Var0, Var1, 0.1f, 511, bLocal_93, 3);
		}
		else if (((unk_0x9F47B058362C84B5(bLocal_93) == joaat("casco") || unk_0x9F47B058362C84B5(bLocal_93) == joaat("feltzer3")) || unk_0x9F47B058362C84B5(bLocal_93) == joaat("fagaloa")) || unk_0x9F47B058362C84B5(bLocal_93) == joaat("warrener2"))
		{
			iLocal_299[iParam0] = unk_0xE6AC6C45FBE83004(Var0, Var1, 0.15f, 511, bLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xE6AC6C45FBE83004(Var0, Var1, 0.25f, 511, bLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0x3D87450E15D98694(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_380(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_491(iLocal_51, 16))
			{
				func_482(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_491(iLocal_51, 128))
			{
				func_482(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_491(iLocal_51, 64))
			{
				func_482(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_491(iLocal_51, 32))
			{
				func_482(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_381()
{
	if (func_386() && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		iLocal_286 = 9;
		func_384(bLocal_90);
		func_384(unk_0xD80958FC74E988A6());
		func_382();
		func_40(&bLocal_98);
	}
}

void func_382()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0xA7A932170592B50E(bLocal_96))
	{
		bLocal_96 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0xA7A932170592B50E(bLocal_97))
	{
		bLocal_97 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_383(&Var0, &Var1);
	unk_0x4D41783FB745E42E(bLocal_96, Var0);
	unk_0x85973643155D0B07(bLocal_96, Var0.f_3, 2);
	unk_0xB13C14F66A00D047(bLocal_96, Var0.f_6);
	unk_0x4D41783FB745E42E(bLocal_97, Var1);
	unk_0x85973643155D0B07(bLocal_97, Var1.f_3, 2);
	unk_0xB13C14F66A00D047(bLocal_97, Var1.f_6);
	unk_0x026FB97D0A425F84(bLocal_96, true);
	unk_0x026FB97D0A425F84(bLocal_97, false);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
}

void func_383(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_384(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0x3841422E9C488D8C(&iVar0);
		unk_0xE8854A4326B9E12B(&iVar0);
		if (unk_0x997ABD671D25CA0B(bParam0, false))
		{
			unk_0x504D54DF3F6F2247(false, false, 16842752);
		}
		unk_0x15D3A79D4E44B913(false, func_385(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x39E72BC99E6360CB(iVar0);
		unk_0x5ABA3986D90D8A3B(bParam0, iVar0);
		unk_0x3841422E9C488D8C(&iVar0);
	}
}

Vector3 func_385()
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_386()
{
	return unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), func_388()) < (func_387() * func_387());
}

float func_387()
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_388()
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_389()
{
	func_331();
	func_404();
	if (!func_10(&bLocal_101))
	{
		func_472(&bLocal_101);
	}
	if (func_403())
	{
		return;
	}
	if (!func_10(&bLocal_110))
	{
		func_472(&bLocal_110);
	}
	if (func_377() && unk_0xA3EE4A07279BB9DB(bLocal_90, bLocal_93, false))
	{
		if (unk_0x5721B434AD84D57A(bLocal_93) && unk_0xB104CD1BABF302E2(bLocal_93))
		{
			if ((func_396() && !func_386()) && !func_395())
			{
				func_394();
				if (func_7(&bLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0xFCD5C8E06E502F5A(unk_0x3FEF770D40960D5A(bLocal_93, false), 40f, 40f, 40f, unk_0xE83D4F9BA2A38914(bLocal_93), false, 7);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 896);
					func_482(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0xF372BC22FCB88606("ProstituteInPlay", &iLocal_298);
					unk_0xBF25EB89375A37AD(1, iLocal_298, joaat("player"));
					unk_0xC80A74AC829DDD92(bLocal_90, iLocal_298);
					func_492("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					bLocal_295 = -15;
					func_128();
					func_393();
					iLocal_81 = 3;
					if (func_48(0, 1))
					{
						unk_0x51669F7D1FB53D9F(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()) && func_7(&bLocal_101) > 15f) && func_392())
				{
					if (!func_491(iLocal_50, 4096))
					{
						func_350("PROS_SPOT", -1);
						func_482(&iLocal_50, 4096);
					}
					func_391();
					func_40(&bLocal_101);
				}
				func_40(&bLocal_110);
			}
		}
		else
		{
			func_40(&bLocal_110);
			func_390();
		}
	}
	else if (!func_386())
	{
		if (unk_0x7239B21A38F536BA(bLocal_90))
		{
			if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
			{
				unk_0xE1EF3C1216AFF2CD(bLocal_90);
			}
		}
		func_473(0);
	}
}

void func_390()
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_391()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	if (!unk_0x729072355FA39EC9(bLocal_90))
	{
		unk_0x8E04FEDD28D42462(bLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
	}
}

int func_392()
{
	if (!func_491(iLocal_51, 256))
	{
		return 1;
	}
	return func_491(iLocal_51, 32);
}

void func_393()
{
	if (func_551())
	{
		unk_0x1913FE4CBF41C463(bLocal_90, 229, true);
		unk_0x1913FE4CBF41C463(bLocal_90, 26, true);
		unk_0x1913FE4CBF41C463(bLocal_90, 115, true);
		unk_0x9F8AA94D6D97DBF4(bLocal_90, true);
	}
}

void func_394()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_491(iLocal_49, 2097152))
	{
		if (unk_0x9CD27B0045628463() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				Var0 = { unk_0x3FEF770D40960D5A(bLocal_93, true) };
				unk_0xC906A7DAB05C8D2B(Var0, &fVar2, false, false);
				Var0.f_2 = (fVar2 + 0.15f);
				Var1 = { unk_0x1899F328B0E12848(bLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0x28579D1B8F8AAC80(Var0, Var1, 2f, 511, bLocal_93, 7);
			}
			else if (unk_0x65287525D951F6BE(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_40(&bLocal_110);
					}
				}
				iLocal_82 = unk_0x9CD27B0045628463() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_395()
{
	bool bVar0;
	
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x4C241E39B23DF959(bVar0, false))
	{
		if (!unk_0x22AC59A870E6A669(bVar0, false, false))
		{
			if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()) || unk_0xCFB0A0D8EDD145A3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
		Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		if (unk_0x0A9D0C2A3BBC86C1(Var1, func_65(0), 12f, false) || unk_0x0A9D0C2A3BBC86C1(Var1, func_65(1), 12f, false))
		{
			return 0;
		}
		if (func_402())
		{
			return 0;
		}
		if (func_401(bLocal_93, &Var2))
		{
			if (!func_400(Var2))
			{
				if (!func_399(Var1) || func_398(Var1))
				{
					return 0;
				}
			}
		}
		if (func_90(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x639431E895B9AA57(bLocal_90, bLocal_93, 0, false, false))
		{
			return 0;
		}
		unk_0x14F19A8782C8071E(true);
		if (unk_0xC33AB876A77F8164(Var1, 20f, true, true, &bVar0, false, true, -1))
		{
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				if (!unk_0x5F9532F3B5CC2551(bVar0, false))
				{
					if (unk_0xFCDFF7B72D23A1AC(bVar0, bLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_492("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6());
		if (!iVar3 == 0)
		{
			func_492("IN AN INTERIOR");
			return 0;
		}
		if (func_397())
		{
			return 0;
		}
	}
	return 1;
}

int func_397()
{
	func_482(&iLocal_51, 256);
	if (!func_491(iLocal_51, 2))
	{
		if (func_379(3))
		{
			func_482(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_378();
	}
	return 0;
}

int func_398(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_399(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_482(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_400(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = unk_0x22D7275A79FE8215(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 1, 1, 3f, 0f);
	unk_0x703123E5E7D429C2(iVar0, &Param0);
	if (unk_0xA2AE5C478B96E3B6(iVar0))
	{
		if (!unk_0x4F5070AA58F69279(iVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x4F5070AA58F69279(iVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0x22D7275A79FE8215(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 1, 8, 3f, 0f);
		unk_0x703123E5E7D429C2(iVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_401(bool bParam0, var* uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x1899F328B0E12848(bParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x1899F328B0E12848(bParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x1899F328B0E12848(bParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x1899F328B0E12848(bParam0, 0f, -2f, 0f) };
	if (unk_0x2EABE3B06F58C1BE(Var0[0 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (unk_0x2EABE3B06F58C1BE(Var0[1 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (unk_0x2EABE3B06F58C1BE(Var0[2 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	else if (unk_0x2EABE3B06F58C1BE(Var0[3 /*3*/], uParam1, 3f, 0))
	{
		return 1;
	}
	return 0;
}

bool func_402()
{
	return Global_75485;
}

int func_403()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("carwash1")) > 0 || unk_0x2C83A9DA6BFFC4F9(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_404()
{
	if (!func_491(iLocal_49, 128))
	{
		func_405(39, 1);
		func_405(40, 1);
		func_405(41, 1);
		func_405(42, 1);
		func_405(43, 1);
		func_405(44, 1);
		func_482(&iLocal_49, 128);
	}
}

void func_405(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_409(iParam0, 2, 1))
		{
			func_408(iParam0, 2, 1);
		}
	}
	else if (func_409(iParam0, 2, 1))
	{
		func_406(iParam0, 2, 1);
	}
}

void func_406(int iParam0, bool bParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			bVar0 = func_141(func_407(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&bVar0, bParam1);
			func_138(func_407(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_407(int iParam0)
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

void func_408(int iParam0, bool bParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			bVar0 = func_141(func_407(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&bVar0, bParam1);
			func_138(func_407(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_409(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			return BitTest(func_141(func_407(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_410(var uParam0)
{
	if (func_491(iLocal_49, 2))
	{
		if (!func_63())
		{
			return;
		}
		func_100(1);
	}
	func_68();
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

void func_411()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		if (unk_0x751B70C3D034E187(bLocal_90, unk_0xD80958FC74E988A6(), 5f, 5f, 5f, false, true, 0) || func_491(iLocal_49, 8192))
		{
			unk_0xFE99B66D079CF6BC(0, 101, true);
			unk_0xFE99B66D079CF6BC(0, 74, true);
			unk_0xEDE476E5EE29EDB1(0, 51);
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(bLocal_90, false))
			{
				unk_0x5927F96A78577363(bLocal_90, 50);
				unk_0xDC2C5C242AAC342B(bLocal_90, 5f);
				if (func_491(iLocal_49, 16))
				{
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
						func_5(&iLocal_49, 16);
					}
				}
				bLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0x4C241E39B23DF959(bLocal_93, false))
				{
					if (unk_0xA808AA1D79230FC2(bLocal_90, bLocal_93) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_93, false))
					{
						func_492("***** prostitute IN VEHICLE****** ");
						if (func_491(iLocal_49, 8))
						{
							if (unk_0x318234F4F3738AF3(func_92()))
							{
								if (func_428(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_427(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_426(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_425(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_424(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_423(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_422(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_421(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_420(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_419(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_418(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_417(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else if (func_416(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								}
								else if (func_415(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								}
								else if (func_414(bLocal_93))
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								}
								else
								{
									unk_0x530071295899A8C6(bLocal_90, unk_0xD24D37CC275948CC("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_551())
						{
							unk_0xAD738C3085FE7E11(bLocal_90, false, false);
						}
						else
						{
							unk_0xAD738C3085FE7E11(bLocal_90, true, true);
						}
						func_182(bLocal_90, 0);
						func_391();
						iLocal_62 = unk_0x9CD27B0045628463();
						func_40(&bLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_492("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_413(bLocal_90, unk_0xD80958FC74E988A6(), 1) > 11f || func_412(20f)) || !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_93, false))
				{
					func_115(&bLocal_107);
					if (!unk_0x997ABD671D25CA0B(bLocal_90, false))
					{
						unk_0xE1EF3C1216AFF2CD(bLocal_90);
						func_473(0);
						func_492("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (!unk_0x4C241E39B23DF959(bLocal_93, false))
					{
						bLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					}
					else if (!unk_0x639431E895B9AA57(bLocal_90, bLocal_93, 0, false, false))
					{
						if (!func_112())
						{
							if (!func_491(iLocal_73, 1))
							{
								func_40(&bLocal_113);
								func_482(&iLocal_73, 1);
							}
							else if (func_7(&bLocal_113) > 20f)
							{
								func_126();
								func_492("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_491(iLocal_73, 1))
		{
			func_492("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xE1EF3C1216AFF2CD(bLocal_90);
			func_96(15);
		}
	}
}

bool func_412(float fParam0)
{
	if (!func_10(&bLocal_107))
	{
		func_40(&bLocal_107);
	}
	return func_121(&bLocal_107) > fParam0;
}

float func_413(bool bParam0, bool bParam1, bool bParam2)
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

int func_414(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -1949393167:
				return 1;
				break;
			}
	}
	return 0;
}

int func_415(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -1901288301:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -1297908787:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_427(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x28D37D4F71AC5C58(bParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case -1174301217:
				return 1;
				break;
			}
	}
	return 0;
}

void func_429(var uParam0)
{
	int iVar0;
	
	if (!func_438(0))
	{
		return;
	}
	if (!func_491(iLocal_49, 16))
	{
		unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), false);
		func_482(&iLocal_49, 16);
	}
	if (!func_10(&bLocal_107))
	{
		func_472(&bLocal_107);
	}
	if (func_121(&bLocal_107) >= 20f || !unk_0x751B70C3D034E187(bLocal_90, unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_491(iLocal_73, 524288))
		{
			func_115(&bLocal_107);
			iLocal_286 = 6;
		}
		else if (func_437())
		{
			func_40(&bLocal_107);
			func_482(&iLocal_73, 524288);
		}
	}
	func_69(bLocal_90);
	if (((unk_0x751B70C3D034E187(bLocal_90, unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0) || func_491(iLocal_73, 1)) && !func_217(0)) && !func_402())
	{
		if (!unk_0x639431E895B9AA57(bLocal_90, bLocal_93, 0, false, false))
		{
			if (!func_112())
			{
				if (!func_491(iLocal_73, 1))
				{
					func_40(&bLocal_113);
					func_482(&iLocal_73, 1);
				}
				else if (func_7(&bLocal_113) > 10f)
				{
					func_68();
					unk_0xE1EF3C1216AFF2CD(bLocal_90);
					func_492("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_430();
		}
	}
	else if (func_470("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_468();
		if (func_551())
		{
			iVar0 = unk_0x77F1BEB8863288D5(bLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_430()
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_363(&sVar0, 0))
	{
		func_433();
		if (func_431(iLocal_72, 1) || unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			func_482(&iLocal_49, 8192);
			func_40(&bLocal_107);
		}
		if (func_491(iLocal_49, 8192))
		{
			func_468();
			Global_32110 = 1;
			Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_420 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, -1794415470) != 1 && !unk_0xA3EE4A07279BB9DB(bLocal_90, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true))
				{
					unk_0xC20E50AA46D09CA8(bLocal_90, bLocal_93, -1, false, 1f, 8388609, 0);
				}
			}
			bLocal_61 = func_50(unk_0xD80958FC74E988A6(), 1, 0);
			unk_0xD3BD40951412FEF6(bLocal_61);
			bLocal_61 = func_50(unk_0xD80958FC74E988A6(), 0, 1);
			unk_0xD3BD40951412FEF6(bLocal_61);
			func_40(&bLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_431(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_217(0))
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

int func_432(int iParam0)
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

void func_433()
{
	if (Global_32110)
	{
		if (unk_0xB0034A223497FFCB())
		{
			return;
		}
		unk_0xFE99B66D079CF6BC(0, 101, true);
		unk_0xFE99B66D079CF6BC(0, 74, true);
		unk_0xEDE476E5EE29EDB1(0, 51);
		if (!func_491(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_435(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_434(iLocal_72, 0))
	{
		func_468();
	}
}

bool func_434(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_432(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_43792[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_43792[iVar0 /*32*/].f_12)
	{
		unk_0x0A24DA3A41B718F5(&(Global_43792[iVar0 /*32*/].f_8));
		unk_0xC63CD5D2920ACBE7(&Global_43987);
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	else
	{
		unk_0x0A24DA3A41B718F5(&(Global_43792[iVar0 /*32*/].f_8));
		unk_0xC63CD5D2920ACBE7(&Global_43987);
		if (Global_43792[iVar0 /*32*/].f_30)
		{
			unk_0x6C188BE134E074AA(&(Global_43792[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xC63CD5D2920ACBE7(&(Global_43792[iVar0 /*32*/].f_13));
		}
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	return bVar1;
}

void func_435(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_436(iParam0);
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

void func_436(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_432(*iParam0);
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

int func_437()
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x7239B21A38F536BA(bLocal_90) || unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return 1;
	}
	if (!func_551())
	{
		func_68();
		if (unk_0x997ABD671D25CA0B(bLocal_90, true))
		{
			unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			bVar0 = unk_0xD53343AA4FB7DD28(8, 11);
			unk_0xE8854A4326B9E12B(&iVar1);
			unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, false, false, false, false);
			unk_0xEA47FE3719165B94(false, func_67(iLocal_284), func_66(bVar0), 8f, -8f, -1, 1, false, false, false, false);
			unk_0x39E72BC99E6360CB(iVar1);
			unk_0x5ABA3986D90D8A3B(bLocal_90, iVar1);
			unk_0x3841422E9C488D8C(&iVar1);
		}
		return 1;
	}
	if (unk_0x997ABD671D25CA0B(bLocal_90, true))
	{
		if (unk_0x01BF60A500E28887(bLocal_90))
		{
			unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xB69317BF5E782347(bLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, false, false, false, false);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xB69317BF5E782347(bLocal_90);
			}
			break;
		
		case 2:
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				if (unk_0x77F1BEB8863288D5(bLocal_90, -2017877118) == 7)
				{
					bVar0 = unk_0xD53343AA4FB7DD28(8, 11);
					unk_0xEA47FE3719165B94(bLocal_90, func_67(iLocal_284), func_66(bVar0), 8f, -8f, -1, 1, false, false, false, false);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xB69317BF5E782347(bLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_438(bool bParam0)
{
	if (unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		return 0;
	}
	if (func_491(iLocal_49, 8192))
	{
	}
	if (func_413(bLocal_90, unk_0xD80958FC74E988A6(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	if (func_551())
	{
		if (unk_0x24CB2137731FFE89(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, true) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0xD5037BA82E12416F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(unk_0x3FEF770D40960D5A(bLocal_90, true), 1106247680))
	{
		if (!func_491(iLocal_50, 8192) && !unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6()))
		{
			func_350("PROS_COPS", -1);
			func_482(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_377())
	{
		if (!func_551())
		{
			if ((!iLocal_86 && !Global_112433) && func_440(unk_0xD80958FC74E988A6(), 0) == -1)
			{
				func_350("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_439();
		}
		else if (!func_524(4096))
		{
			func_350("PROS_CAR", -1);
			func_196(4096);
		}
		return 0;
	}
	return 1;
}

void func_439()
{
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (!func_491(iLocal_49, 1))
	{
		if (!unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()) && !unk_0x729072355FA39EC9(bLocal_90))
		{
			unk_0x8E04FEDD28D42462(unk_0xD80958FC74E988A6(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
			func_482(&iLocal_49, 1);
		}
	}
}

bool func_440(bool bParam0, bool bParam1)
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

void func_441()
{
	if (func_438(0))
	{
		func_430();
		if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 7 && !func_491(iLocal_49, 8192))
		{
			if (func_72(1))
			{
				func_115(&bLocal_107);
				iLocal_62 = unk_0x9CD27B0045628463();
				func_492("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_90);
		func_96(15);
	}
}

void func_442(var uParam0)
{
	if (func_438(0))
	{
		func_430();
		if (unk_0x77F1BEB8863288D5(bLocal_90, 242628503) == 7 || func_491(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_412(20f))
		{
			func_115(&bLocal_107);
			func_473(0);
		}
		else
		{
			func_443(uParam0);
		}
	}
	else
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_90);
		func_96(15);
	}
}

void func_443(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	if (!unk_0x7239B21A38F536BA(bLocal_93))
	{
		return;
	}
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(bLocal_93), &Var2, &Var1);
	Var0 = { Var1 - Var2 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var3 = { unk_0x1899F328B0E12848(bLocal_93, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var4 = { unk_0x1899F328B0E12848(bLocal_93, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var5 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
	if (unk_0x2A488C176D52CCA5(Var5, Var4) < unk_0x2A488C176D52CCA5(Var5, Var3))
	{
		Var3 = { Var4 };
	}
	if ((unk_0x77F1BEB8863288D5(bLocal_90, -1794415470) != 1 || !func_491(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_89, Var3) > 0f)
	{
		if (func_551())
		{
			if (!unk_0x0A7B270912999B3C(bLocal_90))
			{
				unk_0xAD738C3085FE7E11(bLocal_90, false, true);
			}
			func_453(&uLocal_281, func_67(iLocal_284));
			func_447(uParam0, 1);
			func_444(&uLocal_281, uParam0);
		}
		unk_0xE8854A4326B9E12B(&iVar6);
		unk_0x15D3A79D4E44B913(false, Var3.f_0, Var3.f_1, Var3.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0x1DDA930A0AC38571(false, unk_0x17C07FC640E86B4E(unk_0xD80958FC74E988A6(), 31086, 0f, 0f, 0f), 0);
		unk_0x39E72BC99E6360CB(iVar6);
		unk_0x5ABA3986D90D8A3B(bLocal_90, iVar6);
		unk_0x3841422E9C488D8C(&iVar6);
		Local_89 = { Var3 };
	}
}

void func_444(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xF22B6C47C6EAB066((*uParam0)[iVar0]))
		{
			func_445(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_445(var uParam0, char* sParam1)
{
	func_446(uParam0, 1, -1, sParam1, 0);
}

void func_446(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
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

void func_447(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_449(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_448(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_448(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_449(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_450(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_450(var uParam0)
{
	func_451(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_451(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		switch (func_452(bParam0))
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

int func_452(var uParam0)
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

int func_453(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xF22B6C47C6EAB066((*uParam0)[iVar0]))
		{
			if (unk_0x0C515FAB3FF9EA92((*uParam0)[iVar0], bParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_454(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = bParam1;
	return 1;
}

int func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xF22B6C47C6EAB066((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(var uParam0)
{
	bool bVar0;
	
	if (func_438(1))
	{
		if (!func_10(&bLocal_107))
		{
			func_472(&bLocal_107);
		}
		func_482(&iLocal_49, 4);
		Global_32111 = 1;
		func_430();
		if (func_471(&bLocal_107, 2f) || func_491(iLocal_49, 8192))
		{
			func_482(&iLocal_49, 2);
			if (func_363(&bVar0, 0))
			{
				unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), false);
				unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), false);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), bLocal_90, -1, 2048, 4);
				func_443(uParam0);
				func_482(&iLocal_49, 4);
				Global_32110 = 1;
				Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_420 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0x0C515FAB3FF9EA92(func_467(&bVar0), "PIM_HHIDCR"))
				{
					func_466(&bVar0, 30000);
					func_464(1);
				}
				else
				{
					func_350(&bVar0, -1);
				}
				if (!unk_0xCA042B6957743895(&bVar0) && unk_0x0C515FAB3FF9EA92(&bVar0, "PROS_NO_MONEY"))
				{
					func_456();
				}
				func_96(0);
				iLocal_287 = 0;
				func_482(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_32110 = 0;
				Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_420 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_32111 = 0;
	}
}

void func_456()
{
	if (!func_524(64))
	{
		func_457(0, 31, 5);
		func_196(64);
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x883D79C4071E18B3())
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7() && func_461(unk_0x4F8644AF03D0E0D6(), 1, 0))
	{
		return;
	}
	if (unk_0xF3A21BCD95725A4A(2, 199) || unk_0xE2587F8CBBD87B1D(2, 199))
	{
		return;
	}
	if (unk_0x272ACD84970869C5() != 0)
	{
		return;
	}
	if (unk_0xB0034A223497FFCB())
	{
		return;
	}
	if (unk_0x5D511E3867C87139())
	{
		return;
	}
	if (unk_0xE18B138FABC53103())
	{
		return;
	}
	if (func_460())
	{
		return;
	}
	if (!func_458())
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7() || iParam0)
	{
		if (!Global_100493.f_1458 && !unk_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2726592 = iParam1;
			Global_100493.f_1458 = 1;
			Global_100493.f_1459 = iParam2;
		}
	}
}

int func_458()
{
	if (func_459())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_459()
{
	return Global_2725911;
}

bool func_460()
{
	return Global_2726699;
}

int func_461(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_462(bParam0))
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

bool func_462(int iParam0)
{
	return func_463(iParam0);
}

var func_463(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_464(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_465())
	{
		unk_0x67C540AA08E4A6F5(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_465()
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

void func_466(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, false, iParam1);
}

char* func_467(char* sParam0)
{
	return sParam0;
}

void func_468()
{
	if (iLocal_72 != -1)
	{
		func_436(&iLocal_72);
	}
}

void func_469(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_470(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_471(bool bParam0, float fParam1)
{
	if (func_225(bParam0, fParam1))
	{
		func_115(bParam0);
		return 1;
	}
	return 0;
}

void func_472(bool bParam0)
{
	if (!func_10(bParam0))
	{
		func_40(bParam0);
	}
}

void func_473(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || bLocal_70 == 0)
	{
		bVar0 = true;
		if (func_551())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_474()
{
	if ((((((func_481() || func_480()) || func_479()) || func_478()) || func_475()) || Global_2656879) || Global_2656879.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_475()
{
	if (func_477() || func_476())
	{
		return Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_95 == 8;
	}
	return 0;
}

var func_476()
{
	return Global_2714762.f_735;
}

var func_477()
{
	return BitTest(Global_2714762.f_2, 11);
}

var func_478()
{
	return BitTest(Global_2714762, 5);
}

var func_479()
{
	return BitTest(Global_2714762, 2);
}

var func_480()
{
	return BitTest(Global_2714762, 20);
}

var func_481()
{
	return Global_2714762.f_698;
}

void func_482(int iParam0, int iParam1)
{
	func_483(iParam0, iParam1);
}

void func_483(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_484()
{
	if (Global_32112)
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (func_485())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_485()
{
	bool bVar0;
	
	bLocal_92 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(bLocal_90, true), 15f, 0, 6);
	if (unk_0x7239B21A38F536BA(bLocal_92) && !unk_0x5F9532F3B5CC2551(bLocal_92, false))
	{
		if (unk_0x4C241E39B23DF959(bLocal_92, false))
		{
			if (func_91(&bLocal_92) && !func_487(bLocal_92, 1))
			{
				bLocal_91 = unk_0xBB40DD2270B65366(bLocal_92, -1, false);
				if (!bLocal_91 == 0)
				{
					if (func_486(&bLocal_91))
					{
						bVar0 = unk_0x9F47B058362C84B5(bLocal_92);
						if (!bVar0 == joaat("taxi") && !bVar0 == joaat("taxi"))
						{
							if (!unk_0x0A7B270912999B3C(bLocal_91))
							{
								unk_0xAD738C3085FE7E11(bLocal_91, true, false);
							}
							if (!unk_0x0A7B270912999B3C(bLocal_92))
							{
								unk_0xAD738C3085FE7E11(bLocal_92, true, false);
							}
							unk_0x9F8AA94D6D97DBF4(bLocal_91, true);
							unk_0x0DC7CABAB1E9B67E(bLocal_91, false, 1);
							unk_0x0DC7CABAB1E9B67E(bLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	bLocal_92 = false;
	bLocal_91 = false;
	return 0;
}

int func_486(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(*bParam0))
	{
		if (unk_0x6D9F5FAA7488BA46(*bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_487(bool bParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0x7239B21A38F536BA(bParam0) && (!bParam1 || unk_0x4C241E39B23DF959(bParam0, false)))
		{
			if (unk_0x05661B80A8C9165F(bParam0, "Company_SUV"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_488()
{
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) || unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		return 0;
	}
	return 1;
}

int func_489()
{
	if ((!func_488() || !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) || func_491(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_491(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_100(2);
		func_492("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_490()
{
	if (!unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		if (!unk_0xBBCCE00B381F8482(bLocal_90))
		{
			if (unk_0x77F1BEB8863288D5(bLocal_90, 1805844857) != 1)
			{
				unk_0x9F8AA94D6D97DBF4(bLocal_90, false);
				unk_0x70A2D1137C8ED7C9(bLocal_90, 196628, true);
				unk_0xF1C03A5352243A30(bLocal_90);
				unk_0x22B0D0E37CCB840D(bLocal_90, unk_0xD80958FC74E988A6(), 300f, -1, true, false);
				unk_0x971D38760FBC02EF(bLocal_90, true);
				func_96(15);
			}
		}
	}
}

bool func_491(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_492(char* sParam0)
{
}

int func_493()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return 0;
	}
	if (unk_0x77F1BEB8863288D5(bLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0x57AB4A3080F85143(bLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_494()
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_551())
			{
				func_453(&uLocal_281, func_67(iLocal_284));
				func_444(&uLocal_281, &uLocal_348);
				func_492("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_551())
			{
				unk_0xB60FEBA45333D36F(1);
				unk_0x76B02E21ED27A469(1);
				unk_0xB69317BF5E782347(bLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_551())
			{
				if (func_495(&uLocal_348))
				{
					func_482(&iLocal_49, 4194304);
					func_492("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_551())
			{
				func_482(&iLocal_49, 4194304);
				func_492("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			bLocal_288 = false;
			iLocal_67 = bLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			bLocal_91 = false;
			bLocal_92 = false;
			func_492("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
			{
				if (!func_551())
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_90, false);
					unk_0x6B7A646C242A7059(bLocal_90, false);
					func_469(&uLocal_116, 4, bLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x01BF60A500E28887(bLocal_90))
				{
					unk_0xB69317BF5E782347(bLocal_90);
				}
				else
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_90, false);
					func_469(&uLocal_116, 4, bLocal_90, "Prostitutes", 0, 1);
					unk_0x6B7A646C242A7059(bLocal_90, false);
					unk_0xA3A9299C4F2ADB98(bLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_495(var uParam0)
{
	return func_496(uParam0);
}

int func_496(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_497(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_497(var uParam0)
{
	return func_498(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_498(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_452(bParam0))
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

int func_499()
{
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (func_23() == 0)
		{
			if (func_500(bLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0xDDE6DF5AE89981D2(bLocal_90, true))
				{
					if (func_551())
					{
						unk_0xAD738C3085FE7E11(bLocal_90, false, false);
					}
					else
					{
						unk_0xAD738C3085FE7E11(bLocal_90, true, true);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_500(bool bParam0, struct<3> Param1, bool bParam2)
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

int func_501()
{
	if (unk_0x1BF094736DD62C2E(bLocal_90, func_65(0)))
	{
		if (unk_0x6EC47A344923E1ED(bLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0x6EC47A344923E1ED(bLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x1BF094736DD62C2E(bLocal_90, func_65(1)))
	{
		if (unk_0x6EC47A344923E1ED(bLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0x6EC47A344923E1ED(bLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_502()
{
	if (unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_503(unk_0xD80958FC74E988A6());
	}
	else if (iLocal_285 == 3)
	{
		func_503(bLocal_91);
	}
}

void func_503(bool bParam0)
{
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return;
	}
	if (func_551())
	{
		if (!unk_0x01BF60A500E28887(bParam0))
		{
			unk_0xB69317BF5E782347(bParam0);
			return;
		}
	}
	if (func_413(bParam0, bLocal_90, 1) < 30f)
	{
		if (!unk_0x5CD3CB88A7F8850D(bLocal_90, bParam0))
		{
			if (func_551())
			{
				if (unk_0x01BF60A500E28887(bLocal_90))
				{
					unk_0x0F804F1DB19B9689(bLocal_90);
					unk_0x69F4BE8C8CC4796C(bLocal_90, bParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x0F804F1DB19B9689(bLocal_90);
				unk_0x69F4BE8C8CC4796C(bLocal_90, bParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x5CD3CB88A7F8850D(bLocal_90, bParam0))
	{
		if (func_551())
		{
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				unk_0x0F804F1DB19B9689(bLocal_90);
			}
		}
		else
		{
			unk_0x0F804F1DB19B9689(bLocal_90);
		}
	}
}

void func_504()
{
	if (Global_32110)
	{
		if (unk_0x4C241E39B23DF959(bLocal_93, false))
		{
			if (unk_0xA3EE4A07279BB9DB(bLocal_90, bLocal_93, false))
			{
				func_505();
			}
		}
		return;
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		return;
	}
	if (unk_0x5F9532F3B5CC2551(bLocal_90, false) || !unk_0x7239B21A38F536BA(bLocal_90))
	{
		if (Global_32114 != unk_0xC30338E8088E2E21() && func_491(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_90, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < Global_32113 || Global_32113 == 0f) && iLocal_287 != 4)
	{
		Global_32113 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_90, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
		Global_32114 = unk_0xC30338E8088E2E21();
		func_482(&iLocal_49, 32);
	}
	else if (Global_32114 == unk_0xC30338E8088E2E21())
	{
		Global_32113 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(bLocal_90, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_505()
{
	if (func_551())
	{
		if (unk_0x01BF60A500E28887(bLocal_90))
		{
			unk_0xC1E8A365BF3B29F2(bLocal_90, 323, true);
		}
	}
	else
	{
		unk_0xC1E8A365BF3B29F2(bLocal_90, 323, true);
	}
}

void func_506(var uParam0)
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_90, false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (func_510())
			{
				if (func_551())
				{
					func_123(0);
					unk_0x70A2D1137C8ED7C9(bLocal_90, 196624, true);
					if (!unk_0x0A7B270912999B3C(bLocal_90))
					{
						unk_0xAD738C3085FE7E11(bLocal_90, true, false);
					}
					unk_0x22B0D0E37CCB840D(bLocal_90, unk_0xD80958FC74E988A6(), 300f, -1, false, false);
					unk_0x971D38760FBC02EF(bLocal_90, true);
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					func_542();
					func_536(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (unk_0xC86D67D52A707CF8(bLocal_90, unk_0xD80958FC74E988A6(), true))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_492("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_492("prostitute BEEN HIT BY PLAYER");
					unk_0xA72CD9CA74A5ECBA(bLocal_90);
				}
			}
			else if (func_508())
			{
				func_507();
				iLocal_286 = 12;
			}
		}
	}
}

void func_507()
{
	if (unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		return;
	}
	unk_0xB8BEC0CA6F0EDB0F(bLocal_90);
	unk_0x8E04FEDD28D42462(bLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", true);
}

int func_508()
{
	bool bVar0;
	
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	if (!func_509())
	{
		return 0;
	}
	bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (!unk_0x4C241E39B23DF959(bVar0, false))
	{
		return 0;
	}
	if (unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6()))
	{
		return unk_0x4C9BF537BE2634B2(bVar0);
	}
	return 0;
}

int func_509()
{
	if (!func_551())
	{
		return 1;
	}
	else if (unk_0x7239B21A38F536BA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
	{
		if (unk_0xC7827959479DCC78(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if (unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -1, false) == unk_0xD80958FC74E988A6())
			{
				if (unk_0x01BF60A500E28887(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					if (!unk_0x0A7B270912999B3C(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						unk_0xAD738C3085FE7E11(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false, false);
					}
					return 1;
				}
				else
				{
					unk_0xB69317BF5E782347(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
				}
			}
		}
		else
		{
			unk_0x06FAACD625D80CAA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
		}
	}
	return 0;
}

int func_510()
{
	struct<3> Var0;
	
	if (!func_491(iLocal_49, 4096))
	{
		if (func_413(bLocal_90, unk_0xD80958FC74E988A6(), 1) < 30f)
		{
			Var0 = { unk_0x3FEF770D40960D5A(bLocal_90, true) };
			if ((((((unk_0x1374ABB7C15BAB92(88, Var0, 30f) || unk_0x1374ABB7C15BAB92(91, Var0, 30f)) || unk_0x1374ABB7C15BAB92(90, Var0, 30f)) || unk_0x1374ABB7C15BAB92(104, Var0, 30f)) || unk_0x1374ABB7C15BAB92(116, Var0, 30f)) || (unk_0x1374ABB7C15BAB92(114, Var0, 30f) && !func_551())) || unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				if (!func_551())
				{
					unk_0x9F8AA94D6D97DBF4(bLocal_90, false);
				}
				func_482(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_511()
{
	if ((unk_0x7239B21A38F536BA(bLocal_90) && !unk_0x5F9532F3B5CC2551(bLocal_90, false)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (func_551())
		{
			if (func_553(unk_0x4F8644AF03D0E0D6(), 0))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x997ABD671D25CA0B(bLocal_90, false))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
		{
			if (!unk_0x997ABD671D25CA0B(bLocal_90, false))
			{
				if (!func_513(9))
				{
					if (!unk_0x5F9532F3B5CC2551(bLocal_90, false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
					{
						if (unk_0x751B70C3D034E187(bLocal_90, unk_0xD80958FC74E988A6(), 100f, 100f, 50f, false, true, 0))
						{
							return 1;
						}
						else
						{
							func_492("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_512() || unk_0xD9D2CFFF49FAB35F()))
				{
					func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_492("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_513(9) && !func_513(5))
			{
				return 1;
			}
			else if (!(func_512() || (unk_0xD9D2CFFF49FAB35F() && !func_403())))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_492("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x7239B21A38F536BA(bLocal_90))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_512()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_514(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_514(int iParam0)
{
	return func_515(iParam0, Global_43052);
}

int func_515(int iParam0, int iParam1)
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

void func_516()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 1866600591)
			{
				if (Var2.f_1 == unk_0x4F8644AF03D0E0D6())
				{
					func_196(128);
				}
			}
		}
		iVar0++;
	}
}

void func_517()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (!unk_0x2910669969E9535E())
	{
		return;
	}
	if (unk_0x1F13D5AE5CB17E17(false, 0) != 1)
	{
		if (func_518(1, 0, 1))
		{
			if (unk_0xCB215C4B56A7FAE7(false) <= 1)
			{
				unk_0xB60FEBA45333D36F(1);
			}
		}
	}
}

bool func_518(int iParam0, bool bParam1, bool bParam2)
{
	return func_519(0, iParam0, 1, bParam1, bParam2);
}

int func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_523(iParam0) - func_522(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_522(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_523(iParam0) - func_521(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_522(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_523(iParam0) - func_522(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_520(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0)
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

int func_521(int iParam0)
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

int func_522(int iParam0, bool bParam1)
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

int func_523(int iParam0)
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

bool func_524(int iParam0)
{
	return func_491(iLocal_52, iParam0);
}

void func_525(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_526(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_526(bool bParam0)
{
	func_527(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_527(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_452(*bParam0))
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

void func_528(int iParam0)
{
	if (func_491(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_529()
{
	func_2(0);
	if (unk_0x7239B21A38F536BA(bLocal_90))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_90, false))
		{
			func_2(1);
		}
		else
		{
			func_492("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_492("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		func_2(0);
		func_492("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_530(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_534();
			}
			else
			{
				return 0;
			}
		}
		if (!func_533(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_534();
					}
					else
					{
						return 0;
					}
				}
				if (func_532())
				{
					if (!bParam2)
					{
						func_534();
					}
					else
					{
						return 0;
					}
				}
				if (func_531(157))
				{
					if (!bParam2)
					{
						func_534();
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
					func_534();
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
				func_534();
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
			func_534();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_531(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_532()
{
	return Global_2714762.f_693;
}

bool func_533(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_534()
{
	unk_0x1090044AD1DA76FA();
}

void func_535()
{
	func_196(1);
}

void func_536(var uParam0)
{
	func_540();
	if (func_48(0, 1))
	{
		unk_0x51669F7D1FB53D9F(true);
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		if (unk_0x0A7B270912999B3C(bLocal_90))
		{
			if ((func_551() && unk_0x77F1BEB8863288D5(bLocal_90, 1805844857) != 1) && unk_0x77F1BEB8863288D5(bLocal_90, -251125078) != 1)
			{
				unk_0xBB9CE077274F6A1B(bLocal_90, 1193033728, 0);
				if (unk_0x01BF60A500E28887(bLocal_90))
				{
					unk_0x971D38760FBC02EF(bLocal_90, true);
				}
				if (unk_0xB07D3185E11657A5(bLocal_90))
				{
					unk_0x2595DD4236549CE3(&bLocal_90);
				}
				unk_0xB8BEC0CA6F0EDB0F(bLocal_90);
			}
			else
			{
				if (unk_0xB07D3185E11657A5(bLocal_90))
				{
					unk_0x2595DD4236549CE3(&bLocal_90);
				}
				unk_0xB8BEC0CA6F0EDB0F(bLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_491(iLocal_49, 64))
	{
		Global_32112 = 0;
	}
	if (!unk_0x84A2DD9AC37C35C1(bLocal_91))
	{
		unk_0xE1EF3C1216AFF2CD(bLocal_91);
	}
	bLocal_91 = false;
	iLocal_287 = 0;
	if (func_491(iLocal_49, 2048))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	if (!func_539())
	{
		func_538();
	}
	if (func_551())
	{
		if (unk_0x0EAEB0DB4B132399(iLocal_83))
		{
			unk_0x46399A7895957C0E(iLocal_83);
		}
	}
	bLocal_92 = false;
	func_540();
	func_537();
	Global_32113 = 0f;
	if (!Global_1952191.f_5314 && !Global_1952191.f_5318)
	{
		unk_0x31B73D1EA9F01DA2();
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (func_524(256))
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 6, iLocal_84, iLocal_85, 0);
			func_196(1024);
		}
	}
	if (func_470("PROS_ACCEPT") && !Global_32110)
	{
		unk_0x8DFCED7A656F8802(true);
	}
	if (Global_32114 == unk_0xC30338E8088E2E21())
	{
		Global_32110 = 0;
		Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_420 = 0;
	}
	func_447(uParam0, 0);
	if (func_551())
	{
		func_196(2048);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
}

void func_537()
{
}

void func_538()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

bool func_539()
{
	return BitTest(Global_1958736, 3);
}

void func_540()
{
}

void func_541(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bLocal_90))
	{
		if (unk_0x997ABD671D25CA0B(bLocal_90, false))
		{
			if (unk_0x77F1BEB8863288D5(bLocal_90, -828834893) != 1)
			{
				unk_0x504D54DF3F6F2247(bLocal_90, false, 65536);
			}
		}
		if (bParam0)
		{
			if (func_551())
			{
				if (unk_0x0A7B270912999B3C(bLocal_90))
				{
					if (unk_0xB07D3185E11657A5(bLocal_90))
					{
						if (unk_0xA1607996431332DF(unk_0xA11700682F3AD45C(bLocal_90)))
						{
							unk_0x971D38760FBC02EF(bLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0x971D38760FBC02EF(bLocal_90, true);
			}
		}
	}
}

void func_542()
{
	if (!func_551())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_90, false))
	{
		if (!unk_0xBBCCE00B381F8482(bLocal_90))
		{
			func_96(0);
			iLocal_285 = 1;
		}
		if (func_551())
		{
			if (unk_0x01BF60A500E28887(bLocal_90))
			{
				unk_0x9F8AA94D6D97DBF4(bLocal_90, false);
				unk_0x22EF8FF8778030EB(bLocal_90);
			}
		}
		else
		{
			unk_0x22EF8FF8778030EB(bLocal_90);
		}
		unk_0x18EB48CFC41F2EA0(bLocal_90, 0f);
	}
	if (unk_0x4C241E39B23DF959(bLocal_93, false) && !unk_0x5F9532F3B5CC2551(bLocal_93, false))
	{
		if (func_551())
		{
			if (unk_0x01BF60A500E28887(bLocal_93))
			{
				if (Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_267.f_32 <= 0 && !BitTest(Global_1853348[unk_0x4F8644AF03D0E0D6() /*834*/].f_267.f_30, 11))
				{
					unk_0x684785568EF26A22(bLocal_93, false);
					unk_0x34E710FF01247C5A(bLocal_93, 3);
					unk_0xBC2042F090AF6AD3(bLocal_93, false);
				}
				unk_0x8BA6F76BC53A1493(bLocal_93, true, 0);
			}
		}
		else
		{
			unk_0x684785568EF26A22(bLocal_93, false);
			unk_0x34E710FF01247C5A(bLocal_93, 3);
			unk_0xBC2042F090AF6AD3(bLocal_93, false);
		}
	}
	func_550(bLocal_74);
	func_550(bLocal_75);
	func_550(bLocal_76);
	func_550(bLocal_77);
	func_550(bLocal_78);
	func_550(bLocal_79);
	func_550(bLocal_80);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
		if ((func_551() && bLocal_288 != 3) && func_491(iLocal_49, 2048))
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		}
		unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), true);
		unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), true);
	}
	if (func_491(iLocal_49, 2048))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x351220255D64C155(2, 19, true);
	unk_0x351220255D64C155(2, 37, true);
	if (!func_539())
	{
		func_538();
	}
	iLocal_287 = 0;
	if (func_491(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_32110 = 0;
		Global_32111 = 0;
		Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_420 = 0;
	}
	if (func_491(iLocal_49, 8))
	{
		if (unk_0x318234F4F3738AF3(func_92()))
		{
			unk_0x01F73A131C18CD94(func_92());
		}
	}
	func_549();
	func_468();
	if (((func_470("PROS_ACCEPT") || func_470("PROS_CAM_TOG")) || func_470("PROS_RESPONSE")) || func_470("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x8DFCED7A656F8802(true);
	}
	func_362(0);
	unk_0xA0EBB943C300E693(true);
	if (func_491(iLocal_49, 8))
	{
		if (unk_0x318234F4F3738AF3(func_92()))
		{
			unk_0x01F73A131C18CD94(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	unk_0x7A2D8AD0A9EB9C3F();
	func_123(0);
	unk_0x51669F7D1FB53D9F(true);
	func_543();
	if (func_551())
	{
		if (func_524(2))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0xC7827959479DCC78(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					if (unk_0x01BF60A500E28887(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						unk_0xA2F80B8D040727CC(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
						unk_0xB664292EAECF7FA6(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 1);
					}
				}
			}
			else if (unk_0xC7827959479DCC78(bLocal_93))
			{
				if (unk_0x01BF60A500E28887(bLocal_93))
				{
					unk_0xB664292EAECF7FA6(bLocal_93, 1);
					unk_0xA2F80B8D040727CC(bLocal_93, false);
					unk_0x2311DD7159F00582(bLocal_93, false);
				}
				else
				{
					unk_0xB69317BF5E782347(bLocal_93);
					unk_0xB664292EAECF7FA6(bLocal_93, 1);
					unk_0xA2F80B8D040727CC(bLocal_93, false);
					unk_0x2311DD7159F00582(bLocal_93, false);
				}
			}
		}
	}
	func_188(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_543()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_548())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_547(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0x0BCA1D2C47B0D269(131, func_546(), 0f);
		unk_0x0BCA1D2C47B0D269(117, func_545(), 0f);
		unk_0x0BCA1D2C47B0D269(118, func_544(), 0f);
	}
}

int func_544()
{
	return iLocal_46;
}

int func_545()
{
	return iLocal_45;
}

int func_546()
{
	return 0;
}

int func_547(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x1077788E268557C2())
	{
	}
	if ((!unk_0x655B91F1495A9090() && (unk_0x25CB5A9F37BFD063() || !unk_0x1353F87E89946207())) && unk_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x579CCED0265D4896())
			{
				Var2 = { func_318(unk_0x4F8644AF03D0E0D6()) };
				if (unk_0xB124B57F571D8F18(&Var2))
				{
					if (unk_0xEEE6EACBE8874FBA(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x10FAB35428CCC9D7() && Global_2723612.f_3)
			{
				unk_0xC980E62E33DF1D5C(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				unk_0xAE2206545888AE49(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x655B91F1495A9090())
	{
	}
	if (!unk_0x25CB5A9F37BFD063())
	{
	}
	if (unk_0x1353F87E89946207())
	{
	}
	if (!unk_0x422D396F80A96547())
	{
	}
	return 0;
}

int func_548()
{
	if ((unk_0x1077788E268557C2() && unk_0x054354A99211EB96()) && unk_0x9A4CF4F48AD77302())
	{
		return 1;
	}
	return 0;
}

void func_549()
{
	if (func_491(iLocal_49, 128))
	{
		func_405(39, 0);
		func_405(40, 0);
		func_405(41, 0);
		func_405(42, 0);
		func_405(43, 0);
		func_405(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_550(bool bParam0)
{
	if (func_551())
	{
		if (func_219(bParam0))
		{
			unk_0xC254481A4574CB2F(bParam0);
		}
	}
}

bool func_551()
{
	return func_524(1);
}

bool func_552(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_553(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_208(bParam0, 1, 1))
	{
		bVar0 = unk_0x43A66C31C68491C0(bParam0);
		if (unk_0x997ABD671D25CA0B(bVar0, bParam1))
		{
			bVar3 = unk_0x9A9112A0FE9A4713(bVar0, false);
			bVar1 = false;
			while (bVar1 < 32)
			{
				bVar2 = unk_0x41BD2A6B006AF756(bVar1);
				if (func_208(bVar2, 1, 1))
				{
					if (unk_0x43A66C31C68491C0(bVar2) != bVar0)
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0x43A66C31C68491C0(bVar2), bVar3, bParam1))
						{
							return 1;
						}
					}
				}
				bVar1++;
			}
		}
	}
	return 0;
}

int func_554(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_462(bParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853348[bParam0 /*834*/] == 2 || Global_1853348[bParam0 /*834*/] == 1) || Global_1853348[bParam0 /*834*/] == 0) || Global_1853348[bParam0 /*834*/] == 3) || Global_1853348[bParam0 /*834*/] == 8)
	{
		return 1;
	}
	return 0;
}

