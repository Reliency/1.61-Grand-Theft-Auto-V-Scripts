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
	struct<3> Local_45[8];
	struct<3> Local_46[1];
	bool bLocal_47 = 0;
	int iLocal_48[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_49[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<165> Local_51 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_63[16] = "";
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[16] = "";
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	struct<3> Local_69[12];
	char cLocal_70[32] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 1132396544;
	var uLocal_78 = 1132396544;
	var uLocal_79 = 1132396544;
	var uLocal_80 = 0;
	var uLocal_81 = -1082130432;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	var uLocal_141 = -1;
	var uLocal_142 = 1092616192;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 1000;
	var uLocal_159 = 1000;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 1097859072;
	var uLocal_165 = 1500;
	var uLocal_166 = 45;
	var uLocal_167 = 1103626240;
	var uLocal_168 = 5;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	bool bLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	bool bLocal_182 = 0;
	float fLocal_183 = 0f;
	bool bLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	struct<3> Local_187 = { 0, 0, 0 } ;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = 0;
	int iLocal_193 = 0;
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
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	bool bLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	struct<6> Local_225 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_226 = 0;
	var uLocal_227 = 16;
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
	int iLocal_392 = 0;
	struct<23> Local_393[53];
	struct<28> Local_394[17];
	int iLocal_395 = 0;
	struct<165> Local_396 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_397 = 0;
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
	bool bLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	bool bLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	struct<3> Local_415 = { 0, 0, 0 } ;
	float fLocal_416 = 0f;
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
	struct<18> Local_438[2];
	bool bLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = 0;
	int iLocal_445 = 0;
	float fLocal_446 = 0f;
	int iLocal_447 = 0;
	bool bLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	char* sLocal_464 = NULL;
	bool bLocal_465 = 0;
	char* sLocal_466[3] = { NULL, NULL, NULL };
	char* sLocal_467 = NULL;
	struct<3> Local_468[1];
	struct<3> Local_469 = { 0, 0, 0 } ;
	struct<3> Local_470 = { 0, 0, 0 } ;
	struct<3> Local_471 = { 0, 0, 0 } ;
	var uLocal_472 = 9;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 7;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 15;
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
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 1;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	bool bLocal_769 = 0;
	bool bLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	bool bLocal_773 = 0;
	bool bLocal_774 = 0;
	int iLocal_775 = 0;
	bool bLocal_776 = 0;
	bool bLocal_777 = 0;
	var uLocal_778 = 0;
	bool bLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	bool bLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	var uLocal_789 = 0;
	bool bLocal_790 = 0;
	bool bLocal_791 = 0;
	bool bLocal_792 = 0;
	bool bLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	bool bLocal_798 = 0;
	bool bLocal_799 = 0;
	bool bLocal_800 = 0;
	int iLocal_801 = 0;
	bool bLocal_802 = 0;
	var uLocal_803 = 0;
	bool bLocal_804 = 0;
	bool bLocal_805 = 0;
	int iLocal_806 = 0;
	bool bLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	bool bLocal_813 = 0;
	var uLocal_814[2] = { 0, 0 };
	bool bLocal_815 = 0;
	bool bLocal_816 = 0;
	bool bLocal_817 = 0;
	bool bLocal_818 = 0;
	int iLocal_819[1] = { 0 };
	var uLocal_820[2] = { 0, 0 };
	int iLocal_821 = 0;
	struct<2> Local_822 = { 0, 0 } ;
	int iLocal_823 = 0;
	struct<20> Local_824[1];
	struct<7> Local_825 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	bool bLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	struct<3> Local_862 = { 0, 0, 0 } ;
	struct<3> Local_863 = { 0, 0, 0 } ;
	float fLocal_864 = 0f;
	bool bLocal_865 = 0;
	char cLocal_866[64] = "";
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	bool bLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	bool bLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	bool bLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	bool bLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	bool bLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	bool bLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	bool bLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	bool bLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	bool bLocal_900 = 0;
	bool bLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	char* sLocal_905 = NULL;
	int iLocal_906 = 0;
	var uLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 8;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	int iLocal_927 = 0;
	bool bLocal_928 = 0;
	struct<9> Local_929 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	
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
	Local_50 = { 500f, 500f, 500f };
	bLocal_178 = 0f;
	bLocal_179 = 0f;
	fLocal_180 = 0f;
	fLocal_181 = 0.8f;
	bLocal_182 = 1.5f;
	fLocal_183 = 0.5f;
	Local_187 = { 401.55f, -1631.309f, 29.3f };
	iLocal_188 = 1;
	iLocal_189 = 1;
	iLocal_392 = joaat("towtruck");
	Local_415 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_416 = 275.5635f;
	iLocal_442 = -1;
	iLocal_443 = -1;
	bLocal_444 = -1;
	iLocal_445 = -1;
	fLocal_446 = 0f;
	sLocal_464 = "";
	bLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_765 = 1;
	iLocal_766 = 1;
	iLocal_767 = 1;
	iLocal_775 = 1;
	iLocal_810 = 1;
	iLocal_839 = -1;
	Local_862 = { -229.8159f, -1172f, 21.8557f };
	iLocal_906 = 1;
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(67))
	{
		if (!func_302())
		{
			func_300(&Global_112037, 3);
			func_271(unk_0x442E0A7EDE4A738A());
		}
		func_267();
	}
	if (unk_0x7239B21A38F536BA(ScriptParam_929.f_0) && unk_0x7239B21A38F536BA(ScriptParam_929.f_1))
	{
		if (!unk_0x5F9532F3B5CC2551(ScriptParam_929.f_0, false) && !unk_0x5F9532F3B5CC2551(ScriptParam_929.f_1, false))
		{
			unk_0xAD738C3085FE7E11(ScriptParam_929.f_0, true, true);
			unk_0xAD738C3085FE7E11(ScriptParam_929.f_1, true, true);
		}
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
	func_266(&Local_393);
	func_265(&Local_394);
	func_264();
	iVar0 = 0;
	func_263(&bLocal_882);
	switch (ScriptParam_929.f_2)
	{
		case 1:
			if (ScriptParam_929.f_4)
			{
				iLocal_170 = ScriptParam_929.f_3;
				if (iVar0 > 0)
				{
					iLocal_450 = iVar0;
				}
				else
				{
					iLocal_450 = func_262(100000f, iLocal_170, Global_113386.f_19973.f_9);
				}
			}
			else
			{
				if (Global_113386.f_19973.f_3 == 0)
				{
					bLocal_793 = true;
				}
				if (!func_261())
				{
					func_258();
				}
				else
				{
					iLocal_450 = Global_113386.f_19973.f_9;
					iLocal_170 = Global_113386.f_19973.f_2;
				}
				ScriptParam_929.f_3 = iLocal_170;
			}
			iLocal_821 = 0;
			break;
	}
	if (!bLocal_793)
	{
		func_257(&Local_396, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_170 == 0)
	{
		iLocal_796 = 1;
		if ((Global_113386.f_19973.f_6 % 2) == 0)
		{
			bLocal_799 = true;
		}
	}
	else if (iLocal_170 == 2)
	{
		bLocal_800 = true;
		iLocal_796 = 1;
	}
	if (iLocal_170 == 3 || iLocal_170 == 1)
	{
		iLocal_795 = 1;
		iLocal_796 = 1;
		iLocal_853 = 1;
	}
	else if (iLocal_170 == 4)
	{
		iLocal_796 = 1;
		iLocal_853 = Local_394[func_256() /*28*/].f_27;
	}
	func_255();
	func_231(&ScriptParam_929);
	if (Global_113386.f_19973.f_3 >= 5)
	{
		bLocal_779 = true;
		bLocal_779 = bLocal_779;
	}
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bLocal_900 = ScriptParam_929.f_1;
			bVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(bVar1) && !unk_0x5F9532F3B5CC2551(bVar1, false))
			{
				if (unk_0x9F47B058362C84B5(bVar1) == joaat("towtruck") || unk_0x9F47B058362C84B5(bVar1) == joaat("towtruck2"))
				{
					bLocal_900 = bVar1;
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
	unk_0x020E5F00CDA207BA(0.2f);
	if (unk_0x7239B21A38F536BA(bLocal_900))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
		{
			unk_0xAD738C3085FE7E11(bLocal_900, true, true);
			unk_0xB72E26D81006005B(bLocal_900);
			unk_0x192547247864DFDD(bLocal_900, false);
			unk_0x92F0CF722BC4202F(bLocal_900, true);
		}
	}
	iLocal_903 = unk_0x1B5C85C612E5256E(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), false, true, true, true);
	iLocal_904 = unk_0x1B5C85C612E5256E(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), false, true, true, true);
	unk_0xC12321827687FE4D(Local_862 - Vector(15f, 15f, 15f), Local_862 + Vector(15f, 15f, 15f), false, true);
	unk_0x46A1E1A299EC4BBA(Local_862 - Vector(15f, 15f, 15f), Local_862 + Vector(15f, 15f, 15f), 0);
	func_230();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		func_226(&uLocal_490);
		func_225();
		unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
		if (bLocal_779 && !unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
		{
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0x212A8D0D2BABFAC2(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0x01B8247A7A8B9AD1())
				{
					unk_0x4EDE34FBADD967A6(false);
				}
				unk_0xC197616D221FF4A4();
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0x01C7B9B38428AEB6(408.8376f, -1638.952f, 28.2928f, 8f, false, false, false, false, false, false, 0);
				unk_0xD4E8E24955024033(500);
			}
		}
		if (iLocal_906 < 15)
		{
			func_223(&bLocal_900, &bLocal_817, &Local_824, &Local_468, &cLocal_866, &iLocal_854, iLocal_849, bLocal_792, &iLocal_801, iLocal_783, bLocal_773, bLocal_209, iLocal_906, 1);
		}
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			switch (iLocal_821)
			{
				case 0:
					if (iLocal_906 > 4 && iLocal_906 < 15)
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_900, false))
						{
						}
						if (iLocal_170 != 2 && iLocal_170 != 4)
						{
							if (!func_220(&uLocal_913, Local_824[0 /*20*/].f_6, bLocal_900, &uLocal_844, &uLocal_845, bLocal_779))
							{
								iLocal_875 = 15;
								func_267();
							}
						}
						if (bLocal_793 || uLocal_789)
						{
							func_219(&uLocal_914, bLocal_900, &uLocal_847, &uLocal_848, bLocal_779);
						}
					}
					if (bLocal_793)
					{
						if (iLocal_906 >= 7)
						{
							func_214(bLocal_900, Local_824[0 /*20*/].f_6, Local_825, &(Local_824[0 /*20*/].f_8), &Local_468, &cLocal_866, &Local_187, bLocal_793, &(Local_824[0 /*20*/]));
						}
					}
					bLocal_782 = false;
					if (((iLocal_170 == 0 || iLocal_170 == 2) && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (bLocal_799 && iLocal_810)
						{
							func_212();
							func_211(Local_824[0 /*20*/].f_6, Local_824[0 /*20*/]);
						}
						if (!bLocal_793)
						{
							func_200();
						}
					}
					else if ((iLocal_170 == 1 && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (func_196())
						{
							func_193();
						}
						if (iLocal_910 > 0)
						{
							func_189();
						}
					}
					else if (iLocal_170 == 3)
					{
						if ((iLocal_906 == 5 && iLocal_908 < 1) && !iLocal_764)
						{
							if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
							{
								if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), Local_824[0 /*20*/].f_6))
								{
									iLocal_764 = 1;
									unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/]);
									unk_0x5AD23D40115353AC(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), false);
								}
							}
						}
					}
					if (iLocal_784 && !bLocal_190)
					{
						func_185(&(Local_394[func_256() /*28*/]), &(Local_394[func_256() /*28*/].f_10), Local_393[iLocal_450 /*23*/].f_1, &(Local_824[0 /*20*/]), &(Local_824[0 /*20*/].f_2), &uLocal_820, fLocal_864, bLocal_465, &sLocal_466, iLocal_853);
					}
					if (iLocal_170 == 4)
					{
						func_183(&uLocal_907, bLocal_901, iLocal_902, bLocal_900, &(Local_824[0 /*20*/].f_2), iLocal_853, bLocal_465, &sLocal_466, &bLocal_816, bLocal_779, &(Local_824[0 /*20*/].f_6));
					}
					if (!bLocal_779)
					{
						if (unk_0x7239B21A38F536BA(bLocal_816) && !unk_0x5F9532F3B5CC2551(bLocal_816, false))
						{
							if (func_175(bLocal_816, 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
							{
								bLocal_776 = true;
								unk_0x22B0D0E37CCB840D(bLocal_816, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
							}
							if (func_173())
							{
								bLocal_777 = true;
							}
						}
					}
					if (bLocal_190 && !bLocal_798)
					{
						if (func_175(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 1, 1, 0))
						{
							func_172();
							if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
							{
								unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/]);
								unk_0x971D38760FBC02EF(Local_824[0 /*20*/], true);
								unk_0x22B0D0E37CCB840D(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								iLocal_875 = 18;
							}
							if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_1, false))
							{
								unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/].f_1);
								unk_0x971D38760FBC02EF(Local_824[0 /*20*/].f_1, true);
								unk_0x3841422E9C488D8C(&iLocal_171);
								unk_0xE8854A4326B9E12B(&iLocal_171);
								unk_0x504D54DF3F6F2247(false, true, 256);
								unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								unk_0x39E72BC99E6360CB(iLocal_171);
								if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_1, false))
								{
									unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/].f_1, iLocal_171);
								}
								unk_0x3841422E9C488D8C(&iLocal_171);
								iLocal_875 = 18;
							}
							if (!bLocal_793)
							{
								switch (iLocal_169)
								{
									case 16:
										if (iLocal_170 == 2)
										{
											iLocal_875 = 17;
											func_267();
										}
										else
										{
											iLocal_875 = 16;
											func_267();
										}
										break;
									
									case 2:
										func_171(&Local_396, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_875 = 3;
										func_267();
										break;
								}
							}
							else
							{
								iLocal_875 = 21;
								func_267();
							}
							if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
							{
								func_267();
							}
						}
						if (func_175(Local_824[0 /*20*/].f_1, Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
						{
							func_172();
							if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_1, false))
							{
								unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/].f_1);
								unk_0x971D38760FBC02EF(Local_824[0 /*20*/].f_1, true);
								unk_0x22B0D0E37CCB840D(Local_824[0 /*20*/].f_1, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								iLocal_875 = 18;
							}
						}
					}
					else if (bLocal_798)
					{
					}
					if (!bLocal_782 && func_170(0))
					{
						if ((!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(bLocal_900, false)) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_900, false))
						{
							if (!iLocal_216)
							{
								if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_6))
								{
									if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
									{
										func_147(&uLocal_149, unk_0x3FEF770D40960D5A(Local_824[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_147(&uLocal_149, Local_469, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_170(0))
					{
						func_146(&uLocal_149, 0, 0);
					}
					func_144(&bLocal_885, 7f, 1);
					func_143();
					func_142();
					if (((!bLocal_215 || iLocal_906 >= 15) || uLocal_778) || bLocal_773)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_906 == 9)
					{
						if (iLocal_170 == 1 || iLocal_170 == 3)
						{
							func_13(Local_396, &Local_824, &bLocal_900);
						}
					}
					break;
			}
			if (func_1(ScriptParam_929))
			{
				func_267();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bLocal_804)
	{
		iLocal_875 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_875 = 11;
		return 1;
	}
	if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_6))
	{
		if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
		{
			if (unk_0x679BE1DAF71DA874(Local_824[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_875 = 15;
				return 1;
			}
		}
	}
	if (bLocal_215)
	{
		if ((unk_0x9CD27B0045628463() - iLocal_854) > 50000)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			if (unk_0x7239B21A38F536BA(bLocal_900) && !unk_0x5F9532F3B5CC2551(bLocal_900, false))
			{
				Var1 = { unk_0x3FEF770D40960D5A(bLocal_900, true) };
			}
			if (unk_0xB7A628320EFF8E47(Var0, Var1) > 625f)
			{
				iLocal_875 = 0;
				return 1;
			}
		}
	}
	if (bLocal_776)
	{
		iLocal_875 = 22;
		return 1;
	}
	if (bLocal_777)
	{
		iLocal_875 = 23;
		return 1;
	}
	if (unk_0x7239B21A38F536BA(bLocal_900))
	{
		if (!unk_0x4C241E39B23DF959(bLocal_900, false))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_900))
	{
		if (unk_0x5F9532F3B5CC2551(bLocal_900, false))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_906 > 4 && iLocal_906 < 17)
			{
				if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_6))
				{
					if (unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						iLocal_875 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_190)
					{
						if (!bLocal_798)
						{
							if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/]))
							{
								if (unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
								{
									iLocal_875 = 8;
									return 1;
								}
							}
						}
						if (bLocal_799)
						{
							if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_1))
							{
								if (unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_1, false))
								{
									iLocal_875 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		iLocal_875 = 3;
		return 1;
	}
	if (!unk_0x57E4C39DE5EE8470(bLocal_900))
	{
		unk_0xB72E26D81006005B(bLocal_900);
	}
	else if (unk_0xB497F06B288DCFDF(bLocal_900))
	{
		iLocal_875 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_785)
	{
		if (func_3(&bLocal_891, 180f))
		{
			iLocal_785 = 1;
			func_171(&Local_396, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&bLocal_891, 300f))
	{
		if (iLocal_170 != 2)
		{
			iLocal_875 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(bool bParam0, bool bParam1)
{
	if (func_7(bParam0))
	{
		if (func_4(bParam0) > bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(bool bParam0)
{
	return BitTest(*bParam0, 2);
}

bool func_7(bool bParam0)
{
	return BitTest(*bParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_170 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_906 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_468[0 /*3*/]))
	{
		if (!iLocal_786)
		{
			if (func_9(Local_468[0 /*3*/], 0) > (fLocal_180 + 400f))
			{
				func_171(&Local_396, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_786 = 1;
			}
		}
		if (func_9(Local_468[0 /*3*/], 0) > (fLocal_180 + 450f))
		{
			iLocal_875 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, bool bParam1)
{
	return func_10(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), Param0, bParam1);
}

float func_10(bool bParam0, struct<3> Param1, bool bParam2)
{
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return -1f;
	}
	return unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam0, true), Param1, bParam2);
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_100493.f_375 > 0;
}

void func_13(struct<165> Param0, int iParam1, bool bParam2)
{
	if (!iLocal_211)
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (iLocal_451 > 1)
			{
				if (func_48(iParam1, bParam2))
				{
					if (func_47())
					{
						Local_225 = { func_46() };
						func_44();
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
					else
					{
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_451)
	{
		case 0:
			if (!func_47())
			{
				unk_0xC1B1E9A034A63A62(false);
				iLocal_451 = 1;
			}
			break;
		
		case 1:
			if ((unk_0x83666F9FB8FEBD4B() > 3000 && iLocal_216) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_257(&Param0, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya3")) == 1 || unk_0x2C83A9DA6BFFC4F9(joaat("tonya4")) == 1)
					{
						if (iLocal_170 == 1)
						{
							func_171(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							bLocal_226 = "TOW_TRN_C1";
						}
						else if (iLocal_170 == 3)
						{
							func_171(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							bLocal_226 = "TOW_BRK_C";
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 1)
					{
						if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
						{
							func_257(&Param0, 5, (*iParam1)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							bLocal_226 = "TOW_MECH";
						}
						else if (Global_113386.f_19973.f_5 == 2)
						{
							func_257(&Param0, 6, (*iParam1)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							bLocal_226 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam1);
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 3)
					{
						if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
						{
							func_257(&Param0, 5, (*iParam1)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							bLocal_226 = "TOW_BRK_CONV";
						}
						else if (Global_113386.f_19973.f_7 == 2)
						{
							func_257(&Param0, 6, (*iParam1)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							bLocal_226 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam1);
						}
						bLocal_212 = true;
					}
				}
				else if (func_39(bLocal_226))
				{
					iLocal_451 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam1);
			if (iLocal_213)
			{
				iLocal_451 = 2;
			}
			break;
		
		case 2:
			if (func_37(bParam2))
			{
				if (bLocal_212)
				{
					if (iLocal_211)
					{
						if (!func_47())
						{
							if (func_14(&Local_396, "TOWAUD", bLocal_226, &Local_225, 8, 0, 0))
							{
								iLocal_211 = 0;
								iLocal_451 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(bParam2);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_15(bParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_35();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_33();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_21();
		func_16();
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
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
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

int func_17()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_20())
	{
		return 0;
	}
	if (func_18(unk_0x4F8644AF03D0E0D6()))
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

bool func_18(bool bParam0)
{
	return func_19(bParam0, 20);
}

var func_19(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_20()
{
	return -1;
}

void func_21()
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

void func_22()
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

int func_23()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
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
		Global_20266 = func_26();
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

int func_26()
{
	func_27();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_27()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_30(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_29(unk_0xD80958FC74E988A6());
			if (func_28(iVar0) && (!func_32(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_28(Global_113386.f_2363.f_539.f_4321))
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

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_32(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_33()
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

bool func_34(int iParam0, int iParam1)
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

void func_35()
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_37(var uParam0)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0 && !unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
			{
				iLocal_213 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(*uParam0, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *uParam0, false))
				{
					iLocal_213 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0x4AACB96203D11A31(unk_0x4F8644AF03D0E0D6());
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0x4AACB96203D11A31(unk_0x4F8644AF03D0E0D6());
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(bool bParam0)
{
	var uVar0;
	
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (unk_0x0C515FAB3FF9EA92(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0xD53343AA4FB7DD28(false, 65535) % 4);
	if (iVar0 == 0)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		bLocal_226 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		bLocal_226 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		bLocal_226 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		bLocal_226 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	bLocal_226 = "TOW_GEN_MCH2";
}

bool func_43(bool bParam0, int iParam1, bool bParam2)
{
	unk_0x853648FD1063A213(bParam0);
	if (iParam1 == 1)
	{
		unk_0xC63CD5D2920ACBE7(bParam2);
	}
	return unk_0x8A9BA1AB3E237613();
}

void func_44()
{
	Global_20471 = 0;
	func_45();
}

void func_45()
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

struct<6> func_46()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = unk_0x480357EE890C295A();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xAC09CA973C564252(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xAC09CA973C564252(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0 || unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xE4B90F367BD81752(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x4AACB96203D11A31(unk_0x4F8644AF03D0E0D6());
		}
		iLocal_452 = 1;
		return 1;
	}
	if ((unk_0x7239B21A38F536BA((uParam0[0 /*20*/])->f_6) && !unk_0x5F9532F3B5CC2551((uParam0[0 /*20*/])->f_6, false)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (!bLocal_177)
		{
			if ((unk_0xC86D67D52A707CF8((uParam0[0 /*20*/])->f_6, unk_0xD80958FC74E988A6(), true) || unk_0x95EB9964FF5C5C65((uParam0[0 /*20*/])->f_6)) || unk_0x605F5A140F202491((uParam0[0 /*20*/])->f_6))
			{
				iLocal_452 = 2;
				return 1;
			}
		}
	}
	if ((unk_0x7239B21A38F536BA((*uParam0)[0 /*20*/]) && !unk_0x5F9532F3B5CC2551((*uParam0)[0 /*20*/], false)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0xC86D67D52A707CF8(unk_0xD80958FC74E988A6(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_452 = 4;
			return 1;
		}
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(*uParam1, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *uParam1, false))
		{
			iLocal_452 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	func_53(&Global_112037, 3);
	func_300(&(Global_113386.f_19973.f_1), 8192);
	func_50();
	func_193();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
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

int func_52(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()
{
	var uVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	switch (iLocal_906)
	{
		case 1:
			func_139(14);
			if (iLocal_170 == 3)
			{
				if (func_137(&Local_863, &fLocal_864, &iLocal_856, &uLocal_859))
				{
					iLocal_906 = 2;
				}
			}
			else
			{
				iLocal_906 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x7984C03AA5CC2F41())
			{
				switch (iLocal_170)
				{
					case 3:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 2:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 0:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_799)
						{
							if (func_171(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_906 = 4;
							}
						}
						else if (func_171(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 1:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 4:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_170)
			{
				case 3:
					if (func_130("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
						{
							unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 10);
						}
						func_128();
						func_263(&bLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 2:
					if (func_130("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_470 = { (Local_468[0 /*3*/] + 15f), (Local_468[0 /*3*/].f_1 + 15f), (Local_468[0 /*3*/].f_2 + 15f) };
						Local_471 = { (Local_468[0 /*3*/] - 15f), (Local_468[0 /*3*/].f_1 - 15f), (Local_468[0 /*3*/].f_2 - 15f) };
						unk_0xC12321827687FE4D(Local_470, Local_471, false, true);
						iLocal_797 = 1;
						unk_0x8ABA6AF54B942B95(Local_824[0 /*20*/].f_6, true);
						func_263(&bLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 0:
					if (func_130("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_263(&bLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 1:
					if (func_130("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0x8ABA6AF54B942B95(Local_824[0 /*20*/].f_6, true);
						func_128();
						unk_0x80D9F74197EA47D9(false);
						func_127(0, 0);
						func_127(1, 0);
						func_127(2, 0);
						func_127(3, 0);
						func_127(4, 0);
						func_127(5, 0);
						func_127(6, 0);
						func_127(7, 0);
						func_127(8, 0);
						func_127(9, 0);
						func_127(10, 0);
						func_127(11, 0);
						iLocal_794 = 1;
						func_263(&bLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 4:
					if (func_130("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0x8ABA6AF54B942B95(Local_824[0 /*20*/].f_6, true);
						func_128();
						func_263(&bLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_8))
			{
				if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_6))
				{
					Local_824[0 /*20*/].f_8 = unk_0x5CDE92C702A8FCE7(Local_824[0 /*20*/].f_6);
					unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_8, 3);
					unk_0x4F7D8A9BFB0B43E9(Local_824[0 /*20*/].f_8, true);
				}
			}
			break;
		
		case 5:
			func_122();
			if (func_114(&iLocal_908, 0, "TOW_BREAK1"))
			{
				iLocal_906 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_113(sLocal_905, 7500, 1);
				StringCopy(&cLocal_866, sLocal_905, 64);
				if (iLocal_170 == 3)
				{
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_469))
					{
						Local_469 = { Local_46[0 /*3*/] };
					}
					func_112(8, &Local_825);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_170 == 1 && !unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], bLocal_900, false))
			{
				bLocal_791 = true;
			}
			func_111();
			if (func_104(sVar2, Local_469))
			{
				if (iLocal_170 == 1 && !unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], bLocal_900, false))
				{
					bLocal_791 = false;
					iLocal_787 = 1;
					if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/]))
					{
						Local_824[0 /*20*/].f_9 = unk_0x5CDE92C702A8FCE7(Local_824[0 /*20*/]);
						unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_9, 3);
						unk_0xD38744167B2FA257(Local_824[0 /*20*/].f_9, 0.7f);
					}
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 9;
				}
			}
			if (func_102(&uVar3, &uVar4, &uVar5))
			{
				bLocal_769 = true;
				iLocal_906 = 9;
			}
			break;
		
		case 9:
			if (iLocal_170 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_101(sVar2))
			{
				func_146(&uLocal_149, 0, 0);
				unk_0x8BA6F76BC53A1493(Local_824[0 /*20*/].f_6, false, 0);
				if (iLocal_840 == 0)
				{
					iLocal_775 = 0;
					iLocal_906 = 15;
				}
				else
				{
					func_113("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_866, "TOWT_OBJ_05", 64);
					iLocal_906 = 7;
				}
			}
			break;
		
		case 15:
			func_100();
			if (bLocal_773)
			{
				if (unk_0xA6DB27D19ECBB7DA(bLocal_817))
				{
					unk_0x86A652570E5F25DD(&bLocal_817);
				}
			}
			unk_0x8DFCED7A656F8802(true);
			bLocal_179 = (bLocal_179 + 500f);
			if (iLocal_218 != 0 && !bLocal_769)
			{
				if (bLocal_779)
				{
					if ((unk_0x9CD27B0045628463() - iLocal_218) < 12000)
					{
						bLocal_179 = (bLocal_179 + 50f);
					}
				}
			}
			if (!bLocal_779)
			{
				bLocal_179 = 0f;
			}
			bLocal_865 = func_4(&bLocal_882);
			bLocal_865 = (bLocal_865 * 1000f);
			bVar1 = unk_0xF2DB717A73826179(bLocal_865);
			unk_0x69DEA3E9DB727B4C(bVar1, 14, 0);
			if (iLocal_170 != 2)
			{
			}
			if (bLocal_779)
			{
				bLocal_179 = (bLocal_179 - bLocal_178);
			}
			bLocal_220 = unk_0xF2DB717A73826179(bLocal_179);
			func_99(&iLocal_454, "TOW_UI07", 500, unk_0xF2DB717A73826179(bLocal_178), unk_0xF2DB717A73826179(bLocal_179), "TOW_UI08", 4000, 1);
			if (bLocal_220 > 0)
			{
				func_62(0, bLocal_220);
			}
			func_61(1);
			iLocal_906 = 16;
			break;
		
		case 16:
			if (unk_0xDAD37F45428801AE())
			{
				unk_0x8DFCED7A656F8802(true);
			}
			if (!func_56(&iLocal_454, 0))
			{
				unk_0xCF708001E1E536DD("TOW_TUT_04A");
				unk_0xCF708001E1E536DD("TOWT_OBJ_03Ga");
				iLocal_906 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_46[0 /*3*/] = { Local_46[0 /*3*/] };
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (!func_7(&(iParam0->f_2)))
	{
		func_59(&(iParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x0DF606929C105BE1(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (unk_0x580417101DDB492F(2, 201) || iParam0->f_8)
		{
			if (!func_7(&(iParam0->f_5)))
			{
				func_59(&(iParam0->f_5));
				func_58(iParam0, 1051260355);
			}
		}
		if (func_7(&(iParam0->f_5)))
		{
			if (func_4(&(iParam0->f_5)) > 0.33f)
			{
				func_57(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(iParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(iParam0->f_1)
	{
		if (!func_7(&(iParam0->f_5)))
		{
			func_59(&(iParam0->f_5));
			func_58(iParam0, 1051260355);
		}
		else if (func_4(&(iParam0->f_5)) > 0.33f)
		{
			func_57(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_58(var uParam0, bool bParam1)
{
	unk_0xF6E48914C7A8694E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC3D0841A0CC546A6(uParam0->f_9);
	unk_0xD69736AAE04DB51A(bParam1);
	unk_0xC6796A8FFA375E53();
}

void func_59(bool bParam0)
{
	func_60(bParam0, 0f);
}

void func_60(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_5(BitTest(*bParam0, 4)) - fParam1);
	unk_0x933D6A9EEC1BACD0(bParam0, true);
	unk_0xE80492A9AC099A93(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	char* sVar0;
	
	unk_0xC6ED9D5092438D91(0);
	switch (func_26())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xB138AAB8A70D3C69(sVar0);
}

void func_62(int iParam0, bool bParam1)
{
	bool bVar0;
	
	func_64(Global_113386.f_24904[iParam0 /*4*/], func_98(iParam0), bParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113386.f_24904.f_69 = (Global_113386.f_24904.f_69 + bParam1);
			break;
		
		case 2:
			Global_113386.f_24904.f_70 = (Global_113386.f_24904.f_70 + bParam1);
			break;
		
		case 0:
			Global_113386.f_24904.f_71 = (Global_113386.f_24904.f_71 + bParam1);
			break;
	}
	unk_0x767FBC2AC802EF3D(func_63(iParam0, 1), &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(func_63(iParam0, 1), bVar0, true);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_64(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (func_97(iParam0) == 3)
	{
		return;
	}
	if (func_97(iParam0) == 4)
	{
		return;
	}
	func_65(func_97(iParam0), 1, iParam1, bParam2, 0);
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

int func_65(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	func_96();
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
					func_95(99, 1);
					func_94(joaat("sp0_money_total_spent"), bParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_money_total_spent"), bParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_money_total_spent"), bParam3);
					break;
			}
			func_79(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_94(joaat("sp0_money_spent_on_tattoos"), bParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_tattoos"), bParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_tattoos"), bParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_on_taxis"), bParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_taxis"), bParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_taxis"), bParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_in_strip_clubs"), bParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_in_strip_clubs"), bParam3);
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
							func_94(joaat("sp0_money_spent_property"), bParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_property"), bParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_property"), bParam3);
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
									func_94(joaat("sp0_money_spent_in_clothes"), bParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_clothes"), bParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_clothes"), bParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_on_hairdos"), bParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_on_hairdos"), bParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_on_hairdos"), bParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_buying_guns"), bParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_buying_guns"), bParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_car_mods"), bParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_car_mods"), bParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_car_mods"), bParam3);
									break;
							}
							func_75(bParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, bParam3);
					break;
				
				case 1:
					func_95(97, bParam3);
					break;
				
				case 2:
					func_95(96, bParam3);
					break;
			}
			func_95(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
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
					func_94(joaat("sp0_total_cash_earned"), bParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_total_cash_earned"), bParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_total_cash_earned"), bParam3);
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
	func_67(iParam0);
	if (Global_43052 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_74(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_74(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_74(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_74(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_70() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xE80492A9AC099A93(&(Global_2359296[func_70() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_69(bParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_69(bool bParam0)
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

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, bParam1, bParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1574918;
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 == -1)
	{
		bParam2 = func_73();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, bParam2);
}

void func_75(int iParam0)
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
}

int func_76(int iParam0)
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
		return func_78(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1);
	}
	if (iParam0 == 12)
	{
		bVar0 = unk_0x9A73240B49945C76();
		iVar1 = func_77(8272, -1, 0);
		if (iVar1 == 0 || bVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		bVar2 = unk_0x9A73240B49945C76();
		iVar3 = func_77(8273, -1, 0);
		if (iVar3 == 0 || bVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		bVar4 = unk_0x9A73240B49945C76();
		iVar5 = func_77(8274, -1, 0);
		if (iVar5 == 0 || bVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		bVar6 = unk_0x9A73240B49945C76();
		iVar7 = func_77(8275, -1, 0);
		if (iVar7 == 0 || bVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		bVar8 = unk_0x9A73240B49945C76();
		iVar9 = func_77(8276, -1, 0);
		if (iVar9 == 0 || bVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		bVar10 = unk_0x9A73240B49945C76();
		iVar11 = func_77(8277, -1, 0);
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
	return BitTest(Global_2359296[func_70() /*5567*/].f_681.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_78(int iParam0, bool bParam1)
{
	if (bParam1 == -1)
	{
		bParam1 = func_73();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, bParam1);
}

int func_79(bool bParam0)
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
		func_93(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_80(27, 1);
	return 1;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_81(iParam0, iParam1);
}

int func_81(int iParam0, int iParam1)
{
	if (func_32(14) && !func_92(iParam0))
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
	if (func_91(&Global_4541529))
	{
		if (func_89(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_82(&Global_4541529, iParam0))
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

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	func_85(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_83(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_84(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_85(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86(uParam0, iVar0);
		iVar0++;
	}
	func_87(uParam0, (Global_4541528 - 0.5f));
}

void func_86(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_87(var uParam0, float fParam1)
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

float func_88(var uParam0)
{
	return uParam0->f_80;
}

bool func_89(var uParam0, int iParam1)
{
	return func_90(uParam0, iParam1) != -1;
}

int func_90(var uParam0, int iParam1)
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

bool func_91(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_92(int iParam0)
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

int func_93(int iParam0, bool bParam1)
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

void func_94(int iParam0, bool bParam1)
{
	bool bVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	unk_0xB3271D7AB655B441(iParam0, bVar0, true);
}

void func_95(int iParam0, int iParam1)
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

void func_96()
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

int func_97(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_99(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	unk_0xF6E48914C7A8694E(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x80338406F3475E55("STRING");
	unk_0x39BBF623FC803EAC(bParam7);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x362E2D3FE93A9959();
	unk_0x80338406F3475E55(bParam5);
	unk_0x03B504CF259931BC(bParam2);
	unk_0x03B504CF259931BC(bParam3);
	unk_0x03B504CF259931BC(bParam4);
	unk_0x362E2D3FE93A9959();
	unk_0xC6796A8FFA375E53();
	func_59(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

void func_100()
{
	Global_113386.f_19973.f_3++;
	Global_113386.f_19973.f_2 = iLocal_170;
	switch (iLocal_170)
	{
		case 2:
			Global_113386.f_19973.f_4++;
			break;
		
		case 3:
			Global_113386.f_19973.f_7++;
			break;
		
		case 0:
			Global_113386.f_19973.f_6++;
			break;
		
		case 1:
			Global_113386.f_19973.f_5++;
			break;
		
		case 4:
			Global_113386.f_19973.f_8++;
			break;
	}
}

int func_101(char* sParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (iLocal_839 == -1)
	{
	}
	if (Local_824[iLocal_839 /*20*/].f_15)
	{
		if ((func_4(&(Local_824[iLocal_839 /*20*/].f_11)) - Local_824[iLocal_839 /*20*/].f_14) > 120f)
		{
			unk_0xBA71116ADF5B514C(Local_824[iLocal_839 /*20*/].f_6, true, false);
		}
	}
	if (func_102(&uVar0, &uVar1, &uVar2))
	{
		if (!unk_0x5F9532F3B5CC2551(Local_824[iLocal_839 /*20*/], false) && unk_0xA3EE4A07279BB9DB(Local_824[iLocal_839 /*20*/], bLocal_900, false))
		{
			unk_0x260BE8F09E326A20(bLocal_900, 6f, 2, false);
			iLocal_214 = 1;
			if (unk_0x7239B21A38F536BA(Local_824[iLocal_839 /*20*/]) && !unk_0x5F9532F3B5CC2551(Local_824[iLocal_839 /*20*/], false))
			{
				unk_0xE8854A4326B9E12B(&iLocal_171);
				unk_0x0F804F1DB19B9689(false);
				unk_0x504D54DF3F6F2247(false, false, 0);
				unk_0xE39B4FF4FDEBDE27(0, Local_824[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar3 = (unk_0xD53343AA4FB7DD28(false, 65535) % 3);
				if (iVar3 == 0)
				{
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				}
				else if (iVar3 == 1)
				{
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", 0, true);
				}
				else if (iVar3 == 2)
				{
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
				}
				else
				{
					unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				}
				unk_0x39E72BC99E6360CB(iLocal_171);
				unk_0x5ABA3986D90D8A3B(Local_824[iLocal_839 /*20*/], iLocal_171);
				unk_0x3841422E9C488D8C(&iLocal_171);
				unk_0x971D38760FBC02EF(Local_824[iLocal_839 /*20*/], true);
			}
			if ((Global_113386.f_19973.f_3 == 0 || Global_113386.f_19973.f_3 == 1) || Global_113386.f_19973.f_3 == 4)
			{
				if (unk_0x7239B21A38F536BA(bLocal_816) && !unk_0x5F9532F3B5CC2551(bLocal_816, false))
				{
					unk_0xE8854A4326B9E12B(&iLocal_171);
					unk_0x504D54DF3F6F2247(false, false, 0);
					unk_0xBB9CE077274F6A1B(false, 227.082f, 0);
					unk_0x39E72BC99E6360CB(iLocal_171);
					if (!unk_0x5F9532F3B5CC2551(bLocal_816, false))
					{
						unk_0x5ABA3986D90D8A3B(bLocal_816, iLocal_171);
						unk_0x971D38760FBC02EF(bLocal_816, true);
					}
					unk_0x3841422E9C488D8C(&iLocal_171);
				}
			}
			if (func_47())
			{
				func_172();
			}
			if ((Global_113386.f_19973.f_3 == 0 || Global_113386.f_19973.f_3 == 1) || Global_113386.f_19973.f_3 == 4)
			{
				if (Global_113386.f_19973.f_3 == 0)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_113386.f_19973.f_3 == 1)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_113386.f_19973.f_3 == 4)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_793)
		{
		}
		iLocal_216 = 0;
		unk_0x86A652570E5F25DD(&(Local_824[iLocal_839 /*20*/].f_8));
		func_59(&bLocal_879);
		iLocal_840 = (iLocal_840 - 1);
		return 1;
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[iLocal_839 /*20*/].f_6, false))
	{
		if (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[iLocal_839 /*20*/].f_6))
		{
			iLocal_216 = 0;
			func_146(&uLocal_149, 0, 0);
			unk_0x4F7D8A9BFB0B43E9(Local_824[iLocal_839 /*20*/].f_8, false);
			unk_0x86A652570E5F25DD(&(Local_824[iLocal_839 /*20*/].f_8));
			if (unk_0x7239B21A38F536BA(Local_824[iLocal_839 /*20*/].f_6) && !unk_0x5F9532F3B5CC2551(Local_824[iLocal_839 /*20*/].f_6, false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(Local_824[iLocal_839 /*20*/].f_8))
				{
					Local_824[iLocal_839 /*20*/].f_8 = unk_0x5CDE92C702A8FCE7(Local_824[iLocal_839 /*20*/].f_6);
					unk_0x03D7FB09E75D6B7E(Local_824[iLocal_839 /*20*/].f_8, 3);
				}
			}
			if (iLocal_170 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			func_59(&bLocal_879);
			if (!bLocal_791)
			{
				if (func_47())
				{
					unk_0xD79DEEFB53455EBA(true);
					unk_0xCC33FA791322B9D9();
					func_113(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_765)
					{
						unk_0xCC33FA791322B9D9();
						func_113(sParam0, 7500, 1);
						iLocal_765 = 0;
					}
					else
					{
						unk_0xCC33FA791322B9D9();
						func_113(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_866, sParam0, 64);
				}
			}
			iLocal_906 = 7;
		}
	}
	return 0;
}

int func_102(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_839 != -1)
	{
		if (!func_11(Local_825.f_14))
		{
			Local_469 = { Local_825.f_14 };
			*uParam0 = { Local_825.f_7 };
			*uParam1 = { Local_825.f_10 };
			*uParam2 = Local_825.f_13;
		}
		else
		{
			*uParam0 = { Local_825 };
			*uParam1 = { Local_825.f_3 };
			*uParam2 = Local_825.f_6;
		}
		if (!bLocal_793)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_469, 30f, 30f, 2f, true, true, 0))
				{
					if (iLocal_170 == 0 || iLocal_170 == 4)
					{
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
						{
							unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 1);
							bLocal_773 = true;
						}
					}
				}
			}
		}
		if (unk_0x7239B21A38F536BA(Local_824[iLocal_839 /*20*/].f_6))
		{
			if (unk_0x51210CED3DA1C78A(Local_824[iLocal_839 /*20*/].f_6, *uParam0, *uParam1, *uParam2, false, false, 0))
			{
				if (iLocal_775)
				{
					func_103("TOWT_HELP_UH", -1);
				}
				if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[iLocal_839 /*20*/].f_6, false))
				{
					if (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[iLocal_839 /*20*/].f_6) || (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_824[iLocal_839 /*20*/].f_6, false) && !unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[iLocal_839 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_172();
						}
						func_146(&uLocal_149, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_103(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_104(char* sParam0, struct<3> Param1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = true;
	if (!bLocal_779 && !bLocal_790)
	{
		if (unk_0x7239B21A38F536BA(bLocal_900) && !unk_0x5F9532F3B5CC2551(bLocal_900, false))
		{
			bVar2 = unk_0xEFEA18DCF10F8F75(bLocal_900);
			if (unk_0x7239B21A38F536BA(bVar2) && !unk_0x5F9532F3B5CC2551(bVar2, false))
			{
				if (unk_0x6AC7003FA6E5575E(bVar2))
				{
					if (unk_0x4B53F92932ADFAC0(bVar2) != Local_824[0 /*20*/].f_6)
					{
						if (!iLocal_806)
						{
							func_257(&uLocal_227, 3, bLocal_816, "TONYA", 0, 1);
							if (func_171(&uLocal_227, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_806 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_806 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0x7239B21A38F536BA(Local_824[iVar1 /*20*/].f_6))
		{
			if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[iVar1 /*20*/].f_6, false))
			{
				if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[iVar1 /*20*/].f_6) && func_110())
				{
					unk_0xF4924635A19EB37D(bLocal_900, true);
					func_107();
					func_146(&uLocal_149, 0, 0);
					iLocal_216 = 1;
					if (iLocal_795 && !unk_0xA3EE4A07279BB9DB(Local_824[iVar1 /*20*/], bLocal_900, false))
					{
						bVar0 = false;
						if (iLocal_911 < 4)
						{
							unk_0x5AE11BC36633DE4E(false);
							iLocal_911 = 5;
						}
					}
					if (bVar0)
					{
						func_106(&bLocal_885);
						unk_0x4F7D8A9BFB0B43E9(Local_824[iVar1 /*20*/].f_8, false);
						iLocal_801 = 0;
						func_105(Local_824[iVar1 /*20*/].f_8);
						Local_824[iVar1 /*20*/].f_14 = func_4(&(Local_824[iVar1 /*20*/].f_11));
						if (iLocal_821 == 0)
						{
							Local_824[iVar1 /*20*/].f_8 = unk_0x5A039BB0BCA604B6(Param1);
							fLocal_180 = func_9(Param1, 0);
							Local_468[0 /*3*/] = { Param1 };
						}
						if (iLocal_170 == 4)
						{
							unk_0x93D9BD300D7789E5(Local_824[0 /*20*/].f_6, false, false);
						}
						func_59(&bLocal_891);
						unk_0x03D7FB09E75D6B7E(Local_824[iVar1 /*20*/].f_8, 5);
						unk_0x4F7D8A9BFB0B43E9(Local_824[iVar1 /*20*/].f_8, true);
						if (iLocal_170 == 0 && bLocal_799)
						{
						}
						else if (iLocal_766)
						{
							func_113(sParam0, 7500, 1);
							iLocal_766 = 0;
						}
						StringCopy(&cLocal_866, sParam0, 64);
						unk_0x01C7B9B38428AEB6(Local_468[0 /*3*/], 6f, false, false, false, false, false, false, 0);
						iLocal_839 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_105(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		unk_0x86A652570E5F25DD(&bParam0);
	}
}

void func_106(bool bParam0)
{
	func_57(bParam0);
	StringCopy(&cLocal_70, "", 32);
}

void func_107()
{
	func_108("TOW_TUT_03");
	func_108("TOW_TUT_02");
	func_108("TOW_TUT_01");
	unk_0xCF708001E1E536DD("TOWT_OBJ_03");
	unk_0xCF708001E1E536DD("TOWT_OBJ_03a");
	unk_0xCF708001E1E536DD("TOWT_OBJ_03G");
	unk_0xCF708001E1E536DD("TOWT_OBJ_03Ga");
	unk_0xCF708001E1E536DD("TOWT_OBJS_03");
}

void func_108(bool bParam0)
{
	if (func_109(bParam0))
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

bool func_109(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_110()
{
	if (bLocal_793)
	{
		if (bLocal_448 && !func_47())
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	if (((!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false)) && unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6)) || (Global_113386.f_19973.f_3 == 0 || Global_113386.f_19973.f_3 > 2))
	{
		return;
	}
	switch (iLocal_852)
	{
		case 0:
			if (!func_7(&bLocal_897))
			{
				func_263(&bLocal_897);
				iLocal_852 = 1;
			}
			break;
		
		case 1:
			if (func_7(&bLocal_897))
			{
				if (func_4(&bLocal_897) > 10f)
				{
					if (!unk_0xDAD37F45428801AE() && !func_47())
					{
						iVar0 = (unk_0xD53343AA4FB7DD28(false, 65535) % 2);
						if (iVar0 == 0)
						{
							func_103("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_103("TOW_TUT_02", -1);
						}
						else
						{
							func_103("TOW_TUT_04C", -1);
						}
						func_59(&bLocal_897);
						iLocal_852 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&bLocal_897))
			{
				if (func_4(&bLocal_897) > 15f)
				{
					if (!unk_0xDAD37F45428801AE() && !func_47())
					{
						func_103("TOW_TUT_03", -1);
						func_59(&bLocal_897);
						iLocal_852 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&bLocal_897))
			{
				if (func_4(&bLocal_897) > 15f)
				{
					if (!unk_0xDAD37F45428801AE() && !func_47())
					{
						func_103("TOW_TUT_01", -1);
						iLocal_852 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_112(int iParam0, var uParam1)
{
	if (func_11(Local_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_45[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_45[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_45[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_45[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_45[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_45[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_46[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_113(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(bParam1, true);
}

int func_114(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_792)
			{
				if ((func_121(Local_824[iParam1 /*20*/].f_6, bLocal_900, &iLocal_449, 10, 150f, 4f, 1) || iLocal_787) || iLocal_216)
				{
					if (!bLocal_770)
					{
						iLocal_449 = 0;
						func_120(&bLocal_444);
						if (unk_0x77F1BEB8863288D5(Local_824[iParam1 /*20*/], -875674219) != 1)
						{
							unk_0x5AD23D40115353AC(Local_824[iParam1 /*20*/], unk_0xD80958FC74E988A6(), -1);
						}
						bLocal_770 = true;
					}
					if (bLocal_770)
					{
						if (unk_0x20B60995556D004F(bLocal_900, unk_0x3FEF770D40960D5A(Local_824[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (unk_0x1F0B79228E461EC9(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0x97FF36A1D40EA00A(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_119())
							{
								if (iLocal_170 == 1)
								{
									if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
									{
										func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_113386.f_19973.f_5 == 2)
									{
										func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0xC20E50AA46D09CA8(Local_824[iParam1 /*20*/], bLocal_900, 20000, false, 2f, 1048577, 0);
								}
								else if (iLocal_170 == 3)
								{
									if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
									{
										func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_113386.f_19973.f_7 == 2)
									{
										func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0xC20E50AA46D09CA8(Local_824[iParam1 /*20*/], bLocal_900, 20000, false, 2f, 1048577, 0);
								}
								if (iLocal_787)
								{
									unk_0x86A652570E5F25DD(&(Local_824[iParam1 /*20*/].f_8));
									if (unk_0x7239B21A38F536BA(Local_824[iParam1 /*20*/]))
									{
										Local_824[iParam1 /*20*/].f_8 = unk_0x5CDE92C702A8FCE7(Local_824[iParam1 /*20*/]);
										unk_0x03D7FB09E75D6B7E(Local_824[iParam1 /*20*/].f_8, 3);
										unk_0xD38744167B2FA257(Local_824[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								unk_0xC1B1E9A034A63A62(false);
								*iParam0 = 1;
							}
						}
						else if (unk_0x20B60995556D004F(bLocal_900, unk_0x3FEF770D40960D5A(Local_824[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!iLocal_811)
							{
								if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
								{
									func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
									func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_171(&Local_396, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
								else if (Global_113386.f_19973.f_7 == 2)
								{
									func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
									func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_171(&Local_396, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_774 = true;
			func_59(&bLocal_891);
			func_59(&bLocal_876);
			func_105(Local_824[iParam1 /*20*/].f_8);
			if (!unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_9))
			{
				if (unk_0x7239B21A38F536BA(Local_824[iParam1 /*20*/]))
				{
					Local_824[0 /*20*/].f_9 = unk_0x5CDE92C702A8FCE7(Local_824[iParam1 /*20*/]);
					unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_9, 3);
					unk_0xD38744167B2FA257(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			func_113("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0xF372BC22FCB88606("TOWBUDDIES", &iLocal_823);
			unk_0xBF25EB89375A37AD(1, iLocal_823, joaat("player"));
			unk_0xC80A74AC829DDD92(Local_824[iParam1 /*20*/], iLocal_823);
			func_118(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0xA3EE4A07279BB9DB(Local_824[iParam1 /*20*/], bLocal_900, false))
			{
				if (func_115(&uLocal_915, Local_824[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_875 = 11;
					func_267();
				}
			}
			if (unk_0xA3EE4A07279BB9DB(Local_824[iParam1 /*20*/], bLocal_900, false))
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
				{
					unk_0xB664292EAECF7FA6(bLocal_900, 9);
					func_105(Local_824[0 /*20*/].f_9);
				}
			}
			if (unk_0xA3EE4A07279BB9DB(Local_824[iParam1 /*20*/], bLocal_900, false) && !unk_0x16754C556D2EDE3D())
			{
				if (iLocal_170 == 1)
				{
					if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_113386.f_19973.f_5 == 2)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_170 == 3)
				{
					if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_113386.f_19973.f_7 == 2)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xA3EE4A07279BB9DB(Local_824[iParam1 /*20*/], bLocal_900, false))
			{
				func_118(iParam1);
				if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					if (iLocal_787 && unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_8))
				{
					if (unk_0x7239B21A38F536BA(Local_824[iParam1 /*20*/].f_6) && !unk_0x5F9532F3B5CC2551(Local_824[iParam1 /*20*/].f_6, false))
					{
						Local_824[0 /*20*/].f_8 = unk_0x5CDE92C702A8FCE7(Local_824[iParam1 /*20*/].f_6);
						unk_0x03D7FB09E75D6B7E(Local_824[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					if (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
					{
						func_113("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_866, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&bLocal_876);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_115(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0x9CD27B0045628463();
			uParam0->f_2 = func_116(bParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			if (!unk_0x5F9532F3B5CC2551(bParam1, false))
			{
				Var1 = { unk_0x3FEF770D40960D5A(bParam1, true) };
			}
			if (unk_0xB7A628320EFF8E47(Var0, Var1) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_116(bool bParam0, bool bParam1)
{
	return func_117(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), bParam0, bParam1);
}

float func_117(bool bParam0, bool bParam1, bool bParam2)
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

void func_118(int iParam0)
{
	int iVar0;
	
	bLocal_792 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xA6DB27D19ECBB7DA(Local_824[iVar0 /*20*/].f_8))
			{
				unk_0x86A652570E5F25DD(&(Local_824[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_119()
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
	{
		if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
		{
			fVar0 = unk_0xD5037BA82E12416F(bLocal_900);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_120(bool bParam0)
{
	if (*bParam0 != -1)
	{
		unk_0xA3B0C41BA5CC0BB5(*bParam0);
		unk_0x353FC880830B88FA(*bParam0);
		*bParam0 = -1;
	}
}

int func_121(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x524AC5ECEA15343E(bParam0))
		{
			bVar0 = unk_0x04A2A40C73395041(bParam0);
		}
	}
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bVar0, false) && unk_0x84A2DD9AC37C35C1(bVar0))
		{
			return 0;
		}
	}
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x7239B21A38F536BA(bParam1))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !unk_0x5F9532F3B5CC2551(bParam1, false))
		{
			if (bParam6)
			{
			}
			if (!unk_0xE31C2C72B8692B64(bParam0) && func_116(bParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_116(bParam0, 1) < 8f) && unk_0xD5037BA82E12416F(bParam1) < fParam5) && !unk_0xE31C2C72B8692B64(bParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_122()
{
	bool bVar0;
	
	if (!bLocal_774)
	{
		bVar0 = unk_0xF2DB717A73826179(((300f - func_126(&bLocal_891)) * 1000f));
		if (iLocal_170 == 3)
		{
			if ((bVar0 / 1000) < 60)
			{
				func_123(bVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_123(bVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_123(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_125(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_124(7, bVar0);
		Global_1649593.f_4659[bVar0] = bParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[bVar0] = iParam2;
		Global_1649593.f_4659.f_216[bVar0] = iParam3;
		Global_1649593.f_4659.f_183[bVar0] = iParam4;
		Global_1649593.f_4659.f_194[bVar0] = iParam5;
		Global_1649593.f_4659.f_249[bVar0] = iParam6;
		Global_1649593.f_4659.f_260[bVar0] = iParam7;
		Global_1649593.f_4659.f_205[bVar0] = iParam8;
		Global_1649593.f_4659.f_314[bVar0] = iParam9;
		Global_1649593.f_4659.f_325[bVar0] = iParam10;
		Global_1649593.f_4659.f_357[bVar0] = iParam11;
		Global_1649593.f_4659.f_238[bVar0] = iParam12;
		Global_1649593.f_4659.f_271[bVar0] = iParam13;
		Global_1649593.f_4659.f_368[bVar0] = iParam14;
		Global_1649593.f_4659.f_379[bVar0] = iParam15;
		Global_1649593.f_4659.f_390[bVar0] = iParam16;
		Global_1649593.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_124(int iParam0, bool bParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_125(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

float func_126(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (func_6(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_127(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_112024, bParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_112024, bParam0);
	}
	Global_112023 = 1;
}

void func_128()
{
	int iVar0;
	
	iVar0 = func_129(&Local_45, Local_468[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_469 = { Local_45[iVar0 /*3*/] };
		func_112(iVar0, &Local_825);
	}
	else
	{
		Local_469 = { Local_45[0 /*3*/] };
	}
}

int func_129(var uParam0, struct<3> Param1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = unk_0xB7A628320EFF8E47(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_130(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_180 = func_9(Local_863, 0);
	Local_468[0 /*3*/] = { Local_863 };
	sLocal_905 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_136(Local_863, fLocal_864, uParam2, 0))
		{
			func_135(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
			unk_0x97CE68CB032583F0(Local_824[0 /*20*/].f_6, true);
			unk_0xEB9DC3C7D8596C46(Local_824[0 /*20*/].f_6, false);
			unk_0x0DC7CABAB1E9B67E(Local_824[0 /*20*/].f_6, true, 1);
			unk_0x92F0CF722BC4202F(Local_824[0 /*20*/].f_6, true);
			return 1;
		}
	}
	else if (func_131(bParam4, 0))
	{
		func_135(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
		unk_0x97CE68CB032583F0(Local_824[0 /*20*/].f_6, true);
		unk_0xEB9DC3C7D8596C46(Local_824[0 /*20*/].f_6, false);
		unk_0x0DC7CABAB1E9B67E(Local_824[0 /*20*/].f_6, true, 1);
		unk_0x92F0CF722BC4202F(Local_824[0 /*20*/].f_6, true);
		return 1;
	}
	return 0;
}

int func_131(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_133(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_180 = func_9(Local_393[iLocal_450 /*23*/].f_1, 0);
	Local_468[0 /*3*/] = { Local_393[iLocal_450 /*23*/].f_1 };
	if (Local_393[iLocal_450 /*23*/] == 2)
	{
		unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, true);
		unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, true);
		unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, true);
		unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, true);
	}
	else if (Local_393[iLocal_450 /*23*/] == 4)
	{
		fLocal_864 = -1f;
		iLocal_784 = 1;
		bLocal_901 = unk_0xAF35D0D2583051B0(joaat("ambulance"), Local_394[func_256() /*28*/].f_23, Local_394[func_256() /*28*/].f_26, true, true, false);
		if (!unk_0x5F9532F3B5CC2551(bLocal_901, false))
		{
			unk_0xF4924635A19EB37D(bLocal_901, true);
			unk_0x2497C4717C8B881E(bLocal_901, true, true, false);
			iLocal_902 = unk_0x7DD959874C1FD534(bLocal_901, 4, joaat("s_m_m_paramedic_01"), -1, true, true);
		}
		if (!func_11(Local_394[func_256() /*28*/].f_17))
		{
			iLocal_395 = func_132(Local_394[func_256() /*28*/].f_17, Local_394[func_256() /*28*/].f_20);
		}
		switch (Local_393[iLocal_450 /*23*/].f_21)
		{
			case 1:
				unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, true);
				unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, true);
				break;
			
			case 0:
				unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, true);
				unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, true);
				break;
			
			case 2:
				unk_0xA1DD317EA8FD4F29(Local_824[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, true);
				break;
		}
		unk_0x7C65DAC73C35C862(Local_824[0 /*20*/].f_6, false, false, false);
	}
	if (bParam0)
	{
		bLocal_190 = true;
		if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
		{
			Local_824[0 /*20*/] = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, true, true);
		}
		else if (Global_113386.f_19973.f_5 == 2)
		{
			Local_824[0 /*20*/] = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, true, true);
		}
		else
		{
			Local_824[0 /*20*/] = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], -1, true, true);
		}
	}
	return 1;
}

int func_132(struct<3> Param0, struct<3> Param1)
{
	unk_0xEE01041D559983EA(Param0, Param1);
	unk_0x4C8872D8CDBE1B8B(Param0, Param1, 1);
	return unk_0x1B5C85C612E5256E(Param0, Param1, false, true, true, true);
}

int func_133(struct<3> Param0, bool bParam1, int iParam2, bool bParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam2 = func_134(&Local_824);
	if (*iParam2 == -1)
	{
		return 0;
	}
	if (iLocal_841 >= 2)
	{
		iLocal_841 = 0;
	}
	Local_824[*iParam2 /*20*/].f_6 = unk_0xAF35D0D2583051B0(iLocal_819[iLocal_841], Param0, bParam1, true, true, false);
	unk_0x0DC7CABAB1E9B67E(Local_824[*iParam2 /*20*/].f_6, true, 1);
	iLocal_841++;
	fLocal_180 = func_9(Param0, 0);
	if (iLocal_170 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_393[iLocal_450 /*23*/].f_10))
	{
		Local_824[*iParam2 /*20*/].f_17 = unk_0x2CE544C68FB812A0(Local_393[iLocal_450 /*23*/].f_10, fVar0, 0f, false);
	}
	else
	{
		Local_824[*iParam2 /*20*/].f_17 = unk_0x2CE544C68FB812A0(Param0, fVar0, 0f, false);
	}
	Local_824[*iParam2 /*20*/].f_18 = unk_0x2CE544C68FB812A0(Param0, fVar1, 2.5f, false);
	Local_824[*iParam2 /*20*/].f_19 = unk_0x2CE544C68FB812A0(Param0, fVar2, 4f, false);
	if (bParam3)
	{
		if (Local_824[*iParam2 /*20*/].f_15)
		{
			unk_0x465BF26AB9684352(Local_824[*iParam2 /*20*/].f_6, true);
			unk_0x45F6D8EEF34ABEF1(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0x91A0BD635321F145(Local_824[*iParam2 /*20*/].f_6, true);
		}
		else
		{
			unk_0x465BF26AB9684352(Local_824[*iParam2 /*20*/].f_6, true);
			unk_0x45F6D8EEF34ABEF1(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0x91A0BD635321F145(Local_824[*iParam2 /*20*/].f_6, true);
		}
	}
	if (!bLocal_792 && uParam4)
	{
		if (unk_0x7239B21A38F536BA(Local_824[*iParam2 /*20*/].f_6))
		{
			Local_824[*iParam2 /*20*/].f_8 = unk_0x5CDE92C702A8FCE7(Local_824[*iParam2 /*20*/].f_6);
			unk_0x03D7FB09E75D6B7E(Local_824[*iParam2 /*20*/].f_8, 3);
		}
	}
	iLocal_840++;
	func_263(&(Local_824[*iParam2 /*20*/].f_11));
	return 1;
}

int func_134(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((bParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_135(bool bParam0, var uParam1, var uParam2)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		*uParam1 = unk_0xEEF059FAD016D209(bParam0);
		*uParam2 = *uParam1;
	}
}

int func_136(struct<3> Param0, bool bParam1, var uParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	
	if (!func_133(Param0, bParam1, uParam2, 1, iParam3))
	{
		return 0;
	}
	if (*uParam2 == -1)
	{
	}
	unk_0x7C65DAC73C35C862(Local_824[*uParam2 /*20*/].f_6, 4, false, false);
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(Local_824[*uParam2 /*20*/].f_6), &Var1, &Var2);
	Var3 = { Var2 - Var1 };
	Var3 = { Var3 / Vector(2f, 2f, 2f) };
	iLocal_784 = 1;
	Var0 = { unk_0x1899F328B0E12848(Local_824[*uParam2 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var4 = { unk_0x3FEF770D40960D5A(Local_824[*uParam2 /*20*/].f_6, true) };
	bVar5 = unk_0xE83D4F9BA2A38914(Local_824[*uParam2 /*20*/].f_6);
	iLocal_850 = unk_0x2CE544C68FB812A0(unk_0x163E252DE035A133(Var4, bVar5, -1.5f, -30f, 0f), 10f, 0f, false);
	iLocal_851 = unk_0x2CE544C68FB812A0(unk_0x163E252DE035A133(Var4, bVar5, -1.5f, 30f, 0f), 10f, 0f, false);
	unk_0x01C7B9B38428AEB6(Var0, 30f, false, false, false, false, false, false, 0);
	Local_394[func_256() /*28*/][0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_137(var uParam0, bool bParam1, int iParam2, var uParam3)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	bVar4 = 0f;
	bVar5 = 0f;
	iVar6 = (unk_0xD53343AA4FB7DD28(false, 3999) / 1000);
	if (iVar6 == 0)
	{
		bVar4 = -unk_0x313CE5879CEB6FCD(450f, 700f);
		bVar5 = unk_0x313CE5879CEB6FCD(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		bVar4 = unk_0x313CE5879CEB6FCD(450f, 700f);
		bVar5 = unk_0x313CE5879CEB6FCD(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		bVar5 = unk_0x313CE5879CEB6FCD(450f, 700f);
		bVar4 = unk_0x313CE5879CEB6FCD(-100f, 100f);
	}
	else
	{
		bVar5 = -unk_0x313CE5879CEB6FCD(450f, 700f);
		bVar4 = unk_0x313CE5879CEB6FCD(-100f, 100f);
	}
	Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), bVar4, bVar5, 0f) };
	if (!unk_0x93E0DB8440B73A7D(Var0, 10f, true, true, true, &Var3, &uVar2))
	{
		return 0;
	}
	unk_0x80CA6A8B6C094CC4(Var3, 2, iParam2, bParam1, &uVar1, 1, 3f, 0f);
	*uParam0 = { Var3 };
	if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*bParam1 = 87.951f;
	}
	if (func_138(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_138(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_139(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_141())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || func_140())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

bool func_140()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_141()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xA6DB27D19ECBB7DA(Local_69[iVar0 /*3*/].f_1))
		{
			if (unk_0x5F9532F3B5CC2551(Local_69[iVar0 /*3*/], false))
			{
				unk_0x86A652570E5F25DD(&(Local_69[iVar0 /*3*/].f_1));
			}
			else if (Local_69[iVar0 /*3*/].f_2 && func_116(Local_69[iVar0 /*3*/], 1) > 200f)
			{
				unk_0x86A652570E5F25DD(&(Local_69[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_143()
{
	if (!unk_0x0C515FAB3FF9EA92(&cLocal_63, ""))
	{
		if (!func_47())
		{
			func_171(&Local_51, &cLocal_63, &cLocal_66, 9, 0, 0, 0);
			StringCopy(&cLocal_63, "", 16);
		}
	}
}

void func_144(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_145(bParam0, bParam1))
	{
		if (bParam2)
		{
			func_103(&cLocal_70, -1);
		}
		else
		{
			func_113(&cLocal_70, 7500, 1);
		}
	}
}

int func_145(bool bParam0, bool bParam1)
{
	if (func_3(bParam0, bParam1))
	{
		func_57(bParam0);
		return 1;
	}
	return 0;
}

void func_146(var uParam0, bool bParam1, bool bParam2)
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
		if (func_109(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_109(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

void func_147(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = iParam2;
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
	if (func_109(bVar0))
	{
		func_169();
	}
	if (!unk_0xE520FF1AD2785B40())
	{
		if (func_164(uParam0, bParam4, bParam6, 0))
		{
			func_163(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_152(bVar0))
			{
				if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && iParam5)
					{
						if (!func_109(bVar0))
						{
							func_103(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else if (func_152(bVar0))
		{
			if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
			{
				if ((unk_0xE33D59DA70B58FDF(Param1, 1f) && !unk_0x4D79439A6B55AC67()) && iParam5)
				{
					if (!func_109(bVar0))
					{
						func_103(bVar0, -1);
						uParam0->f_3 = bVar0;
						if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
						{
							func_151(1);
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
			if (func_109(bVar0) && unk_0x4D79439A6B55AC67())
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
					func_146(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					func_146(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					func_146(uParam0, bVar0, 1);
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					func_146(uParam0, bVar0, 1);
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					func_146(uParam0, bVar0, 1);
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				func_146(uParam0, bVar0, 1);
			}
		}
		if (!func_164(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
			{
				func_148(uParam0);
			}
		}
	}
}

void func_148(var uParam0)
{
	if (func_149(unk_0xD80958FC74E988A6()))
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

int func_149(bool bParam0)
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

int func_150(var uParam0)
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

int func_151(bool bParam0)
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

int func_152(bool bParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(bParam0) && func_109(bParam0)) || func_109("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_162(0))
	{
		return 0;
	}
	if (func_161())
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
	if ((func_160() || func_159(Global_4718592.f_168757)) || func_158())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_157(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_156(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_154(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_154(bool bParam0)
{
	if (bParam0 != func_20())
	{
		if (func_155(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_155(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_155(bool bParam0, bool bParam1, bool bParam2)
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

int func_156(bool bParam0, bool bParam1)
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

bool func_157(bool bParam0, bool bParam1)
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

var func_158()
{
	return Global_2714762.f_19;
}

bool func_159(int iParam0)
{
	return iParam0 == 51;
}

var func_160()
{
	return Global_2714762.f_18;
}

bool func_161()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

int func_162(int iParam0)
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

void func_163(var uParam0, struct<3> Param1, int iParam2)
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

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
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
						if (!func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
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
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
				else if (!func_168(bParam1, bParam2, bParam3))
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
						if (func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_165(bParam1, bParam2, bParam3))
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
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_169();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

void func_169()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

int func_170(bool bParam0)
{
	if (bLocal_215 || iLocal_214)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_216)
		{
			return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_172()
{
	Global_20471 = 0;
	func_35();
}

int func_173()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (unk_0x7239B21A38F536BA(bLocal_816) && !unk_0x5F9532F3B5CC2551(bLocal_816, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(bLocal_816, true) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var1) > 2500f)
	{
		if (!bLocal_802)
		{
			func_174("TOW_TUT_RETONYA", 7500, 1);
			bLocal_802 = true;
			if (!unk_0xA6DB27D19ECBB7DA(bLocal_175))
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_816, false))
				{
					bLocal_175 = unk_0x5CDE92C702A8FCE7(bLocal_816);
					unk_0x03D7FB09E75D6B7E(bLocal_175, 3);
					unk_0xD38744167B2FA257(bLocal_175, 0.5f);
				}
			}
			if (unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_8))
			{
				unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_802)
	{
		bLocal_802 = false;
		if (unk_0xA6DB27D19ECBB7DA(bLocal_175))
		{
			unk_0x86A652570E5F25DD(&bLocal_175);
		}
		if (!unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_8))
		{
			Local_824[0 /*20*/].f_8 = unk_0x5A039BB0BCA604B6(Local_468[0 /*3*/]);
			if (iLocal_216)
			{
				unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_8, 5);
				unk_0x4F7D8A9BFB0B43E9(Local_824[0 /*20*/].f_8, true);
				unk_0x837155CD2F63DA09(Local_824[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_8, 3);
				unk_0x4F7D8A9BFB0B43E9(Local_824[0 /*20*/].f_8, true);
				unk_0x837155CD2F63DA09(Local_824[0 /*20*/].f_8, 3);
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var1) > 22500f)
	{
		if (bLocal_802)
		{
			return 1;
		}
	}
	return 0;
}

void func_174(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(bParam1, false);
}

int func_175(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xD80958FC74E988A6();
	if (!unk_0x5F9532F3B5CC2551(bVar0, false) && !unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (!func_182(*uParam2, 1))
		{
			if (func_181(bParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_182(*uParam2, 2))
		{
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_182(*uParam2, 4))
		{
			if (func_179(bVar0, bParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_182(*uParam2, 8))
		{
			if (func_178(bVar0, bParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_182(*uParam2, 128);
		if (bParam4)
		{
			if (func_176(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_182(*uParam2, 16))
		{
			if (func_176(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (iParam7 && unk_0xC86D67D52A707CF8(bParam0, bVar0, true))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	
	if (bParam3)
	{
		if (!bLocal_145)
		{
			bLocal_146 = unk_0xEEF059FAD016D209(bParam0);
			bLocal_145 = true;
		}
		bLocal_147 = unk_0xEEF059FAD016D209(bParam0);
		iLocal_148 = (bLocal_146 - bLocal_147);
		bVar0 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam0, bVar0, true))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_145)
		{
			if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC86D67D52A707CF8(bParam0, unk_0xD80958FC74E988A6(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		bVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(bVar1, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam0, bVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			if (unk_0x9A497FE2DF198913(bParam0))
			{
				if (unk_0x9B128DC36C1E04CF(bParam0) == unk_0xD80958FC74E988A6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x20B60995556D004F(bParam0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFD4CCDBCC59941B7(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF9800AA1A771B000(bParam0))
		{
			return 1;
		}
	}
	if (func_177(unk_0xD80958FC74E988A6(), bParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x47E4E977581C5B55(bParam0) && func_116(bParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x997ABD671D25CA0B(bParam0, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(bParam0, false)))
			{
				return 1;
			}
		}
		else if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), bParam0))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(bParam1, false))
		{
			if (unk_0xC86D67D52A707CF8(bParam1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	unk_0x3A87E44BB9A01D54(bParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x34616828CD07F1A1(bParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(bParam1, true)) < 2.5f)
			{
				if (unk_0xD71649DB0A545AA3(bParam0, bParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(bool bParam0, bool bParam1, var uParam2)
{
	if (unk_0x475768A975D5AD17(bParam0, 4))
	{
		if (unk_0x34616828CD07F1A1(bParam0) && !unk_0x65F0C5AE05943EC7(bParam0))
		{
			if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0x5F9532F3B5CC2551(bParam1, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(bParam1, true) };
	}
	if (unk_0x3F2023999AD51C1F(Var0, 4f, true))
	{
		return 1;
	}
	if (unk_0x9870ACFB89A90995(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (unk_0x475768A975D5AD17(bParam0, 2))
	{
		if (unk_0x34616828CD07F1A1(bParam0))
		{
			if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(bParam1), bParam0, 120f) && unk_0xFCDFF7B72D23A1AC(bParam1, bParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0x04A2A40C73395041(bParam1), false))
			{
				bVar1 = unk_0x9A9112A0FE9A4713(unk_0x04A2A40C73395041(bParam1), false);
			}
			if (unk_0xC70B5FAE151982D8(bParam0) || func_180(bVar1))
			{
				if (unk_0x20B60995556D004F(bParam1, unk_0x3FEF770D40960D5A(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(bParam1), bParam0, 120f) && unk_0xFCDFF7B72D23A1AC(bParam1, bParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5270A8FBC098C3F8((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0xBB40DD2270B65366(bParam0, -1, false) != 0)
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_117(unk_0xD80958FC74E988A6(), bParam0, 1) < 40f)
						{
							if (unk_0x2975C866E6713290(unk_0x4F8644AF03D0E0D6(), &bVar1))
							{
								if ((unk_0x6AC7003FA6E5575E(bVar1) && unk_0x4B53F92932ADFAC0(bVar1) == bParam0) || (unk_0x524AC5ECEA15343E(bVar1) && unk_0x04A2A40C73395041(bVar1) == unk_0xBB40DD2270B65366(bParam0, -1, false)))
								{
									if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0xF3A21BCD95725A4A(0, 24)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xF3A21BCD95725A4A(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_181(bool bParam0, var uParam1)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0))
			{
				if (unk_0xD71649DB0A545AA3(bParam0, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_116(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9CD27B0045628463();
						}
						else if ((unk_0x9CD27B0045628463() - uParam1->f_1) > uParam1->f_3)
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

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_183(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, int iParam5, bool bParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0x7239B21A38F536BA((*uParam4)[iVar0]))
		{
			if (!unk_0x5F9532F3B5CC2551((*uParam4)[iVar0], false) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
			{
				if (func_175((*uParam4)[iVar0], 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 1))
				{
					unk_0x22B0D0E37CCB840D((*uParam4)[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_121(bParam1, bParam3, &iLocal_449, 20, 70f, 65f, 0))
			{
				iLocal_449 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(bParam2))
			{
				if (!unk_0x5F9532F3B5CC2551(bParam1, false) && !unk_0x5F9532F3B5CC2551(bParam2, false))
				{
					unk_0x480142959D337D00(bParam2, bParam1, 50f, 786469);
					unk_0x971D38760FBC02EF(bParam2, true);
					unk_0x2595DD4236549CE3(&bParam2);
					unk_0x629BFA74418D6239(&bParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_216)
			{
				func_59(&bLocal_397);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0x7239B21A38F536BA((*uParam4)[iVar0]))
				{
					if (!unk_0x5F9532F3B5CC2551((*uParam4)[iVar0], false))
					{
						if (func_116((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_219 = iVar0;
							iLocal_219 = iLocal_219;
							func_59(&bLocal_397);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_394[func_256() /*28*/].f_17))
			{
				func_184(iLocal_395, Local_394[func_256() /*28*/].f_17, Local_394[func_256() /*28*/].f_20);
			}
			if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_257(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0x5F9532F3B5CC2551((*uParam4)[iVar0], false))
				{
					unk_0xE8854A4326B9E12B(&iLocal_171);
					unk_0xEA47FE3719165B94(false, bParam6, (*sParam7)[iVar0], 4f, -4f, unk_0xD53343AA4FB7DD28(10000, 20000), 0, false, false, false, false);
					unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
					unk_0x39E72BC99E6360CB(iLocal_171);
					unk_0x5ABA3986D90D8A3B((*uParam4)[iVar0], iLocal_171);
					unk_0x3841422E9C488D8C(&iLocal_171);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_257(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
				if (!iLocal_217)
				{
					if (!unk_0x5F9532F3B5CC2551(bParam3, false) && !unk_0x5F9532F3B5CC2551(*uParam10, false))
					{
						if (!unk_0x146DF9EC4C4B9FD4(bParam3, *uParam10))
						{
							if (!func_7(&bLocal_412))
							{
								func_263(&bLocal_412);
							}
							else if (func_4(&bLocal_412) > 20f)
							{
								if (func_171(&uLocal_227, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_217 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_184(int iParam0, struct<3> Param1, struct<3> Param2)
{
	unk_0x31D16B74C6E29D66(iParam0, false);
	unk_0x2E05208086BA0651();
	unk_0x4C8872D8CDBE1B8B(Param1, Param2, 0);
}

int func_185(var uParam0, var uParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (unk_0xC906A7DAB05C8D2B(Var3, &uVar0, false, false) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_187(uParam1);
		unk_0xBE31FD6CE464AC59(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam9)
		{
			if (bParam6 == -1f)
			{
				bParam6 = func_186(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				bParam6 = (bParam6 + 180f);
			}
			if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya4")) == 1)
			{
				bVar1 = unk_0xD49F9B0955C367DE(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), bParam6, true, true);
				unk_0x262B14F48D29DE80(bVar1, false, false, true, 0);
				unk_0x262B14F48D29DE80(bVar1, 2, false, false, 0);
				unk_0x262B14F48D29DE80(bVar1, 3, false, 2, 0);
				unk_0x262B14F48D29DE80(bVar1, 4, true, 2, 0);
				unk_0x262B14F48D29DE80(bVar1, 8, false, false, 0);
				unk_0x262B14F48D29DE80(bVar1, 10, true, true, 0);
				unk_0xE532F5D78798DAAB(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x2C83A9DA6BFFC4F9(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					bVar1 = unk_0xD49F9B0955C367DE(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), bParam6, true, true);
					unk_0xE532F5D78798DAAB(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					bVar1 = unk_0xD49F9B0955C367DE(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), bParam6, true, true);
					unk_0xE532F5D78798DAAB(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				bVar1 = unk_0xD49F9B0955C367DE(4, (*uParam5)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), bParam6, true, true);
			}
			unk_0x0DC7CABAB1E9B67E(bVar1, true, 1);
			bParam6 = -1f;
			if (iParam9 > 1)
			{
				(*uParam4)[iVar2] = bVar1;
			}
			else
			{
				*uParam3 = bVar1;
			}
			bParam7 = bParam7;
			(*sParam8)[iVar2] = (*sParam8)[iVar2];
			unk_0x9F8AA94D6D97DBF4(bVar1, true);
			unk_0x1913FE4CBF41C463(bVar1, 42, true);
			unk_0xAF8A94EDE7712BEF(bVar1, "move_m@JOG@", 0.25f);
			unk_0xC1E8A365BF3B29F2(bVar1, 109, true);
			if (iLocal_170 == 3)
			{
				unk_0x3841422E9C488D8C(&iVar4);
				unk_0xE8854A4326B9E12B(&iVar4);
				unk_0xEA47FE3719165B94(false, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, false, false, false, false);
				unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
				unk_0x39E72BC99E6360CB(iVar4);
				if (!unk_0x5F9532F3B5CC2551(bVar1, false))
				{
					unk_0x5ABA3986D90D8A3B(bVar1, iVar4);
				}
				unk_0x3841422E9C488D8C(&iVar4);
			}
			iVar2++;
		}
		bLocal_190 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_186(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x2FFB6B224F4B2926((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_187(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_438[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_438[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_438[iVar0 /*18*/].f_8 = { func_188(unk_0x313CE5879CEB6FCD(0f, 1065353216), unk_0x313CE5879CEB6FCD(0f, 1065353216), 0f) };
		}
		else
		{
			Local_438[iVar0 /*18*/].f_8 = { func_188(0.5f, 1f, 0f) };
		}
		Local_438[iVar0 /*18*/].f_11 = 2f;
		Local_438[iVar0 /*18*/].f_12 = 1f;
		Local_438[iVar0 /*18*/].f_13 = 1f;
		Local_438[iVar0 /*18*/].f_14 = -1f;
		Local_438[iVar0 /*18*/].f_15 = 0.1f;
		Local_438[iVar0 /*18*/].f_17 = 0;
		Local_438[iVar0 /*18*/].f_1 = 1110;
		Local_438[iVar0 /*18*/] = unk_0xB302244A1839BDAD(Local_438[iVar0 /*18*/].f_1, Local_438[iVar0 /*18*/].f_2, Local_438[iVar0 /*18*/].f_5, Local_438[iVar0 /*18*/].f_8, Local_438[iVar0 /*18*/].f_11, Local_438[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar0++;
	}
}

Vector3 func_188(struct<3> Param0)
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

int func_189()
{
	func_192();
	switch (iLocal_911)
	{
		case 0:
			func_257(&Local_396, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
			func_257(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
			unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/], true);
			bLocal_843 = unk_0xD53343AA4FB7DD28(35, 80);
			iLocal_911 = 1;
			break;
		
		case 1:
			unk_0xE8854A4326B9E12B(&iLocal_171);
			unk_0xEA47FE3719165B94(false, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, false, false, false, false);
			unk_0x39E72BC99E6360CB(iLocal_171);
			unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
			unk_0x3841422E9C488D8C(&iLocal_171);
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 40f || Local_822.f_1 > 0)
			{
				if (iLocal_170 == 1)
				{
					if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
					{
						func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
					else if (Global_113386.f_19973.f_5 == 2)
					{
						func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
				}
			}
			else if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(bLocal_843 + 10))
			{
				unk_0xEA47FE3719165B94(false, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, false, false, false, false);
				iLocal_911 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_393[iLocal_450 /*23*/].f_13))
			{
				Local_393[iLocal_450 /*23*/].f_13.f_2 = 45f;
				Local_393[iLocal_450 /*23*/].f_16.f_2 = -45f;
				if (!unk_0x51210CED3DA1C78A(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, false, true, 0))
				{
					func_120(&bLocal_444);
					iLocal_781 = 1;
					iLocal_788 = 1;
					bLocal_177 = true;
					if (unk_0x997ABD671D25CA0B(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0xEA47FE3719165B94(false, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, false, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(bLocal_843 + 15))
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_120(&bLocal_444);
				unk_0x69F4BE8C8CC4796C(Local_824[0 /*20*/], Local_824[0 /*20*/].f_7, -1, 2, 2);
				unk_0x5AE11BC36633DE4E(false);
				iLocal_911 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(bLocal_843))
			{
				if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
				{
					if (iLocal_842 == 1)
					{
						func_191(&Local_822);
					}
					iLocal_781 = 1;
					if (unk_0x997ABD671D25CA0B(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0x5BC448CB78FA3E88(false, unk_0x163E252DE035A133(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, false, 786603, -1f);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), -1);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x70A2D1137C8ED7C9(Local_824[0 /*20*/], 64, false);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_910 == 8 && iLocal_216) || func_190())
			{
				unk_0x5AE11BC36633DE4E(3000);
				iLocal_911 = 5;
			}
			break;
		
		case 5:
			iLocal_787 = 1;
			if (unk_0xC9D9444186B5A374() > 3000)
			{
				if (func_114(&iLocal_908, 0, "TOW_TRAIN1"))
				{
					iLocal_911 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_190()
{
	if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
	{
		if (bLocal_177)
		{
			switch (iLocal_855)
			{
				case 0:
					if (unk_0x00A9010CFE1E3533(Local_824[0 /*20*/]) == 1)
					{
						iLocal_855 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x1F0B79228E461EC9(Local_824[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_855 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_191(bool bParam0)
{
	bParam0->f_1 = 0;
	unk_0x865908C81A2C22E9(*bParam0, false);
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
}

void func_192()
{
	float fVar0;
	
	if (iLocal_781 || ((!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false)) && !unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, false)))
	{
		if (bLocal_444 != -1)
		{
			unk_0xA3B0C41BA5CC0BB5(bLocal_444);
			unk_0x353FC880830B88FA(bLocal_444);
			bLocal_444 = -1;
			return;
		}
	}
	if (!iLocal_772)
	{
		bLocal_444 = unk_0x430386FE9BF80B45();
		iLocal_772 = 1;
	}
	if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
	{
		if (unk_0x1F0B79228E461EC9(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x346D81500D088F42(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_771)
				{
					unk_0xE65F427EB70AB1ED(bLocal_444, "TOWING_ENGINE_TURNING_MASTER", Local_824[0 /*20*/].f_6, false, false, 0);
					iLocal_771 = 1;
				}
			}
			else
			{
				unk_0xA3B0C41BA5CC0BB5(bLocal_444);
				iLocal_771 = 0;
			}
		}
	}
}

void func_193()
{
	int iVar0;
	
	func_195();
	unk_0x8DFCED7A656F8802(true);
	unk_0x2A179DF17CCF04CD(2, true);
	if (unk_0x85F01B8D5B90570E(iLocal_454))
	{
		unk_0x1D132D614DD86811(&iLocal_454);
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
	{
		unk_0xB664292EAECF7FA6(bLocal_900, 1);
		unk_0xF4924635A19EB37D(bLocal_900, false);
	}
	unk_0x1033371FC8E842A7(iLocal_850);
	unk_0x1033371FC8E842A7(iLocal_851);
	unk_0x31D16B74C6E29D66(iLocal_903, false);
	unk_0x31D16B74C6E29D66(iLocal_904, false);
	unk_0xC12321827687FE4D(Local_862 - Vector(15f, 15f, 15f), Local_862 + Vector(15f, 15f, 15f), true, true);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x1033371FC8E842A7(Local_824[iVar0 /*20*/].f_17);
		unk_0x1033371FC8E842A7(Local_824[iVar0 /*20*/].f_18);
		unk_0x1033371FC8E842A7(Local_824[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_394[func_256() /*28*/].f_17))
	{
		func_184(iLocal_395, Local_394[func_256() /*28*/].f_17, Local_394[func_256() /*28*/].f_20);
	}
	unk_0x629BFA74418D6239(&(Local_824[0 /*20*/].f_6));
	if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
	{
		unk_0x2595DD4236549CE3(&(Local_824[0 /*20*/]));
		if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/]))
		{
			if (unk_0x5891CAC5D4ACFF74(Local_824[0 /*20*/]))
			{
				unk_0xED74007FFB146BC2(Local_824[0 /*20*/]);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_815))
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_815, false))
		{
			unk_0x2595DD4236549CE3(&bLocal_815);
		}
	}
	if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
	{
		unk_0xAD738C3085FE7E11(bLocal_900, true, true);
		unk_0x629BFA74418D6239(&bLocal_900);
	}
	if (iLocal_797)
	{
		unk_0xC12321827687FE4D(Local_470, Local_471, true, true);
	}
	if (iLocal_794 && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_7, false))
	{
		unk_0x1CF38D529D7441D9(Local_824[0 /*20*/].f_7, true);
		unk_0xBBE7648349B49BE8(&(Local_824[0 /*20*/].f_7), false);
		unk_0x80D9F74197EA47D9(true);
		func_127(0, 1);
		func_127(1, 0);
		func_127(2, 0);
		func_127(3, 1);
		func_127(4, 0);
		func_127(5, 0);
		func_127(6, 0);
		func_127(7, 0);
		func_127(8, 0);
		func_127(9, 0);
		func_127(10, 0);
		func_127(11, 0);
	}
	func_120(&iLocal_442);
	func_120(&iLocal_443);
	func_194(&uLocal_918);
	func_120(&bLocal_444);
	func_146(&uLocal_149, 0, 0);
	if (unk_0xA7A932170592B50E(Local_822.f_0))
	{
		func_191(&Local_822);
	}
	unk_0x020E5F00CDA207BA(1f);
	unk_0x0FC2D89AC25A5814(joaat("towtruck"), false);
	unk_0x1090044AD1DA76FA();
}

void func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x8F75998877616996((*uParam0)[iVar0], false);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_195()
{
	char cVar0[24];
	
	if (unk_0xF6201B4DAF662A9D() || func_141())
	{
		unk_0x1DCCACDCFC569362(StackVal, 0, 0, 0);
	}
	else if (unk_0xCCA1072C29D096C2() || func_140())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

int func_196()
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false) && !unk_0x5F9532F3B5CC2551(bLocal_900, false))
	{
		if (unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], bLocal_900, false))
		{
			if (unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_10))
			{
				unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_10));
				func_120(&bLocal_444);
			}
		}
		else if (!unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, false))
		{
			func_120(&bLocal_444);
		}
	}
	switch (iLocal_910)
	{
		case 0:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 100f)
			{
				Local_824[0 /*20*/].f_7 = unk_0x63C6CCA8E68AE8C8(6, Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_5, false, false);
				if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_7))
				{
					Local_824[0 /*20*/].f_10 = unk_0x5CDE92C702A8FCE7(Local_824[0 /*20*/].f_7);
				}
				bLocal_815 = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, true, true);
				unk_0x9F8AA94D6D97DBF4(bLocal_815, true);
				if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_7, false))
				{
					unk_0x16469284DB8C62B5(Local_824[0 /*20*/].f_7, 0f);
				}
				func_113("TOW_OBJ_05", 7500, 1);
				unk_0xC1B1E9A034A63A62(false);
				func_199("CROSSING_BELL", &iLocal_445, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_910 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 80f || unk_0x83666F9FB8FEBD4B() > 10000)
			{
				if (!unk_0xB65B60556E2A9225("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x013A80FC08F6E4F2("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_7, false))
			{
				unk_0x16469284DB8C62B5(Local_824[0 /*20*/].f_7, 26f);
				unk_0xAA0BC91BE0B796E3(Local_824[0 /*20*/].f_7, 22f);
			}
			iLocal_910 = 3;
			break;
		
		case 3:
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_7, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
			{
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 175f)
				{
					func_198(Local_824[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_BRAKES_MASTER", &iLocal_443, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					func_197(&uLocal_918, Local_824[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_HORN_MASTER", &iLocal_442, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_910 = 4;
				}
			}
			else
			{
				iLocal_910 = 8;
			}
			break;
		
		case 4:
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_7, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
			{
				func_198(Local_824[0 /*20*/].f_7);
				if (!unk_0x51210CED3DA1C78A(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, false, true, 0))
				{
					func_194(&uLocal_918);
				}
				Var0 = { unk_0x3FEF770D40960D5A(Local_824[0 /*20*/].f_7, true) };
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 3f)
				{
					iLocal_768 = 1;
				}
				if (unk_0x17FFC1B2BA35A494(Local_824[0 /*20*/].f_7, Local_824[0 /*20*/].f_6))
				{
					if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0xC2DB6B6708350ED8(bLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0xBA71116ADF5B514C(Local_824[0 /*20*/].f_6, true, false);
					iLocal_910 = 6;
				}
				else if (func_10(Local_824[0 /*20*/].f_6, Var0, 1) < 10f && unk_0x51210CED3DA1C78A(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, false, true, 0))
				{
					iLocal_768 = 1;
					if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0xC2DB6B6708350ED8(bLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0xBA71116ADF5B514C(Local_824[0 /*20*/].f_6, true, false);
				}
				if (iLocal_768 && func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) > 4f)
				{
					iLocal_910 = 6;
				}
			}
			else
			{
				iLocal_910 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_216)
			{
				func_113("TOWT_OBJ_03G", 7500, 1);
				if (unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_10))
				{
					unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_10));
				}
			}
			unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_10));
			func_120(&iLocal_442);
			func_120(&iLocal_443);
			func_194(&uLocal_918);
			func_120(&bLocal_444);
			func_120(&iLocal_445);
			iLocal_910 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_216)
				{
					func_113("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0xB65B60556E2A9225("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xDFE8422B3B94E688("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_197(var uParam0, bool bParam1)
{
	(*uParam0)[0] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[1] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[2] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[3] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[4] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[5] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[6] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[7] = unk_0x1AE42C1660FD6517("scr_ojtt_train_sparks", bParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
}

int func_198(bool bParam0)
{
	float fVar0;
	
	if (!func_7(&bLocal_439))
	{
		func_263(&bLocal_439);
	}
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			fVar0 = unk_0xD5037BA82E12416F(bParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&bLocal_439, 0.15f))
	{
		fLocal_446 = (fVar0 - 0.35f);
		if (fLocal_446 < 8f)
		{
			fLocal_446 = 8f;
		}
		func_59(&bLocal_439);
		unk_0x16469284DB8C62B5(bParam0, fLocal_446);
		unk_0xAA0BC91BE0B796E3(bParam0, fLocal_446);
	}
	return 1;
}

void func_199(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	func_120(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0x430386FE9BF80B45();
	}
	else
	{
		*iParam1 = -1;
	}
	if (bParam3 != 0)
	{
		unk_0xE65F427EB70AB1ED(*iParam1, bParam0, bParam3, bParam7, false, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0x8D8686B622B88120(*iParam1, bParam0, fParam4, fParam5, fParam6, bParam7, false, 0, false);
	}
	else
	{
		unk_0x67C540AA08E4A6F5(*iParam1, bParam0, bParam7, true);
	}
}

int func_200()
{
	int iVar0;
	struct<3> Var1;
	
	func_210();
	switch (iLocal_909)
	{
		case 0:
			if (bLocal_799)
			{
				if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					Local_824[0 /*20*/] = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], true, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/], true);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_824[0 /*20*/].f_1 = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, bLocal_47, 2, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/].f_1, true);
					unk_0x1913FE4CBF41C463(Local_824[0 /*20*/].f_1, 42, true);
					func_257(&Local_396, 6, Local_824[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0xEA47FE3719165B94(Local_824[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, false, false, false, false);
					unk_0xEA47FE3719165B94(Local_824[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, false, false, false, false);
					if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 10);
					}
					bLocal_190 = true;
					func_257(&Local_396, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_800)
			{
				if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					Local_824[0 /*20*/] = unk_0x7DD959874C1FD534(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], false, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/], true);
					unk_0x1913FE4CBF41C463(Local_824[0 /*20*/], 42, true);
					func_257(&Local_396, 2, Local_824[0 /*20*/], sLocal_467, 0, 1);
					unk_0xEA47FE3719165B94(Local_824[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, false, false, false, false);
					bLocal_190 = true;
				}
			}
			else if (func_209())
			{
				bLocal_798 = true;
			}
			else
			{
				bLocal_798 = false;
			}
			iLocal_909 = 1;
			break;
		
		case 1:
			if (bLocal_799)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(Local_824[0 /*20*/].f_6, true), 15f, 15f, 15f, false, true, 0))
					{
						if (!iLocal_927)
						{
							if (func_171(&Local_396, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_927 = 1;
							}
						}
					}
				}
			}
			if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
			{
				if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6) || func_208(bLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
				{
					if (func_208(bLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
					{
						bLocal_813 = true;
					}
					if (!bLocal_800)
					{
						func_207(&bLocal_894, 1f);
					}
					else
					{
						func_263(&bLocal_894);
					}
				}
			}
			if (func_7(&bLocal_894) && func_4(&bLocal_894) > 1f)
			{
				if (bLocal_799 && func_7(&bLocal_894))
				{
					if (func_47())
					{
						func_172();
					}
					iLocal_810 = 0;
					if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x504D54DF3F6F2247(false, 750, 0);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
						unk_0xEA47FE3719165B94(false, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, false, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x504D54DF3F6F2247(false, false, 0);
						unk_0x5AD23D40115353AC(false, Local_824[0 /*20*/], false);
						unk_0xEA47FE3719165B94(false, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, false, false, false, false);
						unk_0x22B0D0E37CCB840D(false, Local_824[0 /*20*/], 1000f, -1, false, false);
						unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
						unk_0x39E72BC99E6360CB(iLocal_171);
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_1, false))
						{
							unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/].f_1, iLocal_171);
						}
						unk_0x3841422E9C488D8C(&iLocal_171);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_800)
				{
					if ((Global_113386.f_19973.f_4 % 2) == 0)
					{
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
						{
							unk_0xE8854A4326B9E12B(&iLocal_171);
							unk_0x504D54DF3F6F2247(false, false, 0);
							unk_0x6A071245EB0D1882(false, bLocal_900, 20000, 9f, 1f, 2f, 0);
							unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
							unk_0xEA47FE3719165B94(false, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, false, false, false, false);
							unk_0xBB9CE077274F6A1B(false, 1193033728, 0);
							unk_0x39E72BC99E6360CB(iLocal_171);
							unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
							unk_0x3841422E9C488D8C(&iLocal_171);
						}
						func_257(&Local_396, 2, Local_824[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
						{
							func_206(Local_824[0 /*20*/]);
							unk_0x9F7794730795E019(Local_824[0 /*20*/], 0, false);
							unk_0x9F7794730795E019(Local_824[0 /*20*/], 1, false);
							unk_0xE8854A4326B9E12B(&iLocal_171);
							unk_0x504D54DF3F6F2247(false, false, 0);
							unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
							unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
							unk_0x39E72BC99E6360CB(iLocal_171);
							unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
							unk_0x3841422E9C488D8C(&iLocal_171);
							if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/]))
							{
								bLocal_818 = unk_0x5CDE92C702A8FCE7(Local_824[0 /*20*/]);
								unk_0x03D7FB09E75D6B7E(bLocal_818, true);
								unk_0xD38744167B2FA257(bLocal_818, 0.7f);
								func_205(Local_824[0 /*20*/], bLocal_818, 1);
							}
							bLocal_798 = true;
						}
						func_171(&Local_396, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_798)
				{
					Local_824[0 /*20*/] = unk_0xD49F9B0955C367DE(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/], true);
					unk_0x1913FE4CBF41C463(Local_824[0 /*20*/], 42, true);
					bLocal_190 = true;
					sLocal_464 = "TOW_PED_ANGR";
					bLocal_190 = false;
					if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x6A071245EB0D1882(false, bLocal_900, 20000, 15f, 3f, 2f, 0);
						unk_0xF166E48407BAC484(false, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
					}
					iLocal_909 = 3;
				}
				else
				{
					Local_824[0 /*20*/] = unk_0xD49F9B0955C367DE(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_824[0 /*20*/], true);
					unk_0x1913FE4CBF41C463(Local_824[0 /*20*/], 42, true);
					unk_0x0DC7CABAB1E9B67E(Local_824[0 /*20*/], true, 1);
					bLocal_190 = true;
					sLocal_464 = "TOW_ILLEG1";
					if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0xE39B4FF4FDEBDE27(0, unk_0xD80958FC74E988A6(), 20000, 12f, 0f, 3f, 0);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
					}
					iLocal_909 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_799)
			{
				if (!bLocal_807)
				{
					if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6) || bLocal_813)
					{
						if (!unk_0x7984C03AA5CC2F41())
						{
							if (!func_47())
							{
								if (func_171(&Local_396, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_807 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
			{
				if (!unk_0x997ABD671D25CA0B(Local_824[0 /*20*/], false))
				{
					if (bLocal_800)
					{
						if (!func_47())
						{
							if (unk_0x77F1BEB8863288D5(Local_824[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x00A9010CFE1E3533(Local_824[0 /*20*/]) == 2)
								{
									if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
									{
										Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
									}
									if (unk_0xB7A628320EFF8E47(Var1, unk_0x3FEF770D40960D5A(Local_824[0 /*20*/], true)) < 400f)
									{
										if ((Global_113386.f_19973.f_4 % 2) == 0)
										{
											func_171(&Local_396, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_171(&Local_396, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_909 = 8;
								}
							}
						}
					}
					else if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						if (func_204() || (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6) && !bLocal_813))
						{
							func_172();
							iLocal_909 = 5;
						}
						else if (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6) && bLocal_813)
						{
							if (bLocal_807)
							{
								if (!func_47())
								{
									iLocal_909 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
			{
				if (func_117(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), 1) < 12f)
				{
					unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/]);
					if (bLocal_798)
					{
						unk_0xF166E48407BAC484(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), 0, 16);
					}
					else if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_171);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), false);
						unk_0xEA47FE3719165B94(false, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, false, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_171);
						unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iLocal_171);
						unk_0x3841422E9C488D8C(&iLocal_171);
					}
					iLocal_783 = 1;
					if (bLocal_799)
					{
						iLocal_909 = 5;
					}
					else
					{
						iLocal_909 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/]))
			{
				Local_824[0 /*20*/].f_9 = unk_0x5CDE92C702A8FCE7(Local_824[0 /*20*/]);
				if (bLocal_798)
				{
					unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_9, true);
					unk_0xD38744167B2FA257(Local_824[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0x03D7FB09E75D6B7E(Local_824[0 /*20*/].f_9, 3);
					unk_0xD38744167B2FA257(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_798)
			{
				if (iLocal_170 == 0)
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_203(Local_396, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 2, Local_824[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_203(Local_396, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
				func_257(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
				func_203(Local_396, "TOWAUD", sLocal_464, 0);
			}
			bLocal_791 = true;
			unk_0xC1B1E9A034A63A62(false);
			if (bLocal_798)
			{
				func_59(&bLocal_888);
				iLocal_909 = 6;
			}
			else
			{
				iLocal_909 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_799)
				{
					unk_0x5AE11BC36633DE4E(false);
				}
				func_59(&bLocal_888);
				if ((!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false)) && !unk_0x5F9532F3B5CC2551(bLocal_900, false))
				{
					if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
					{
						unk_0x304AE42E357B8C7E(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, true);
					}
					else
					{
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
						{
							unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 1);
						}
						unk_0x3841422E9C488D8C(&iVar0);
						unk_0xE8854A4326B9E12B(&iVar0);
						unk_0xC20E50AA46D09CA8(false, Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
						unk_0x480142959D337D00(false, Local_824[0 /*20*/].f_6, 5f, 786597);
						unk_0x39E72BC99E6360CB(iVar0);
						if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
						{
							unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iVar0);
						}
						unk_0x3841422E9C488D8C(&iVar0);
						bLocal_928 = true;
					}
				}
				iLocal_909 = 6;
			}
			break;
		
		case 6:
			func_201(0);
			if (!bLocal_805)
			{
				if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
				{
					if (!unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
					{
						if (bLocal_799)
						{
							if (unk_0xC9D9444186B5A374() > 8000)
							{
								func_59(&bLocal_888);
								if (!bLocal_928)
								{
									unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 1);
									unk_0xC20E50AA46D09CA8(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
								}
								iLocal_909 = 7;
							}
						}
						else
						{
							func_59(&bLocal_888);
							unk_0xB664292EAECF7FA6(Local_824[0 /*20*/].f_6, 1);
							unk_0xC20E50AA46D09CA8(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
							iLocal_909 = 7;
						}
					}
					else if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
					{
						if (unk_0xC9D9444186B5A374() > 7000)
						{
							if (!bLocal_798)
							{
								if (unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, false))
								{
									if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
									{
										if (unk_0xD5037BA82E12416F(bLocal_900) < 2f)
										{
											if (unk_0x77F1BEB8863288D5(Local_824[0 /*20*/], -258271821) != 1)
											{
												unk_0x480142959D337D00(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0x3841422E9C488D8C(&iVar0);
											unk_0xE8854A4326B9E12B(&iVar0);
											unk_0x504D54DF3F6F2247(false, 5000, 4096);
											unk_0x22B0D0E37CCB840D(false, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
											unk_0x39E72BC99E6360CB(iVar0);
											if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
											{
												unk_0x5ABA3986D90D8A3B(Local_824[0 /*20*/], iVar0);
											}
											unk_0x3841422E9C488D8C(&iVar0);
											iLocal_909 = 7;
										}
									}
								}
								else if (!unk_0x5F9532F3B5CC2551(bLocal_900, false))
								{
									if (unk_0xD5037BA82E12416F(bLocal_900) < 5f)
									{
										if (unk_0x77F1BEB8863288D5(Local_824[0 /*20*/], -1794415470) != 1)
										{
											if (unk_0x22AC59A870E6A669(Local_824[0 /*20*/].f_6, -1, false))
											{
												unk_0xC20E50AA46D09CA8(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, -1, -1, 2f, 1, 0);
											}
										}
									}
									else if (unk_0x77F1BEB8863288D5(Local_824[0 /*20*/], 1056466932) != 1)
									{
										unk_0x304AE42E357B8C7E(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, true);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_201(1);
			if (unk_0x997ABD671D25CA0B(Local_824[0 /*20*/], false) && !unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6))
			{
				if (bLocal_798)
				{
					sLocal_464 = "TOW_PED_ANTH";
				}
				else if (bLocal_799)
				{
					sLocal_464 = "TOW_ILLEG_SE";
				}
				bLocal_804 = true;
				func_171(&Local_396, "TOWAUD", sLocal_464, 9, 0, 0, 0);
				bLocal_791 = false;
				unk_0x480142959D337D00(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 5f, 786597);
				iLocal_909 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_783 = 0;
			bLocal_791 = false;
			if (unk_0xA6DB27D19ECBB7DA(Local_824[0 /*20*/].f_9))
			{
				unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_201(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_117(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0x5F9532F3B5CC2551(bLocal_900, false) && !unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
		{
			if (unk_0x146DF9EC4C4B9FD4(bLocal_900, Local_824[0 /*20*/].f_6) && !unk_0xA3EE4A07279BB9DB(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, false))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
	{
		if (unk_0xC86D67D52A707CF8(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(unk_0xD80958FC74E988A6(), Local_824[0 /*20*/], true))
		{
			func_59(&bLocal_888);
			unk_0xA72CD9CA74A5ECBA(Local_824[0 /*20*/]);
			unk_0xA72CD9CA74A5ECBA(unk_0xD80958FC74E988A6());
		}
	}
	if (unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
	{
		iLocal_909 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&bLocal_888) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6)))
	{
		if (bLocal_798)
		{
			func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_799)
		{
			func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_814[0] = Local_824[0 /*20*/];
		uLocal_814[1] = Local_824[0 /*20*/].f_1;
		bLocal_805 = true;
		func_202(Local_396, "TOWAUD", sVar2, &uLocal_814, 0);
		unk_0x86A652570E5F25DD(&(Local_824[0 /*20*/].f_9));
		if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/], false))
		{
			unk_0xE1EF3C1216AFF2CD(Local_824[0 /*20*/]);
			unk_0x22B0D0E37CCB840D(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
		}
		iLocal_909 = 8;
	}
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_116((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_171(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	StringCopy(&cLocal_63, sParam1, 16);
	StringCopy(&cLocal_66, sParam2, 16);
	Local_51 = { Param0 };
}

int func_204()
{
	switch (iLocal_912)
	{
		case 0:
			if (unk_0x00A9010CFE1E3533(Local_824[0 /*20*/]) >= 1 && !unk_0x7984C03AA5CC2F41())
			{
				iLocal_912 = 1;
			}
			break;
		
		case 1:
			if (bLocal_807 && !iLocal_808)
			{
				if (!func_47())
				{
					if (!iLocal_809)
					{
						if (!bLocal_813)
						{
							func_113("TOWT_OBJ_06", 7500, 1);
							iLocal_809 = 1;
						}
					}
					if (iLocal_809 && !unk_0x7984C03AA5CC2F41())
					{
						if (unk_0x77F1BEB8863288D5(Local_824[0 /*20*/], -875674219) != 1)
						{
							unk_0x5AD23D40115353AC(Local_824[0 /*20*/], Local_824[0 /*20*/].f_1, false);
						}
						iLocal_808 = 1;
						iLocal_912 = 2;
					}
				}
			}
			if (func_116(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0xD79DEEFB53455EBA(true);
				return 1;
			}
			break;
		
		case 2:
			if (func_116(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0xD79DEEFB53455EBA(true);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_69[iVar0 /*3*/] == iParam0 && !unk_0xA6DB27D19ECBB7DA(Local_69[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0xA6DB27D19ECBB7DA(Local_69[iVar0 /*3*/].f_1))
		{
			Local_69[iVar0 /*3*/] = iParam0;
			Local_69[iVar0 /*3*/].f_1 = bParam1;
			Local_69[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_206(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			unk_0xC7622C0D36B2FDA8(bParam0, 1);
			unk_0x3C606747B23E497B(bParam0, 1);
			unk_0x9F7794730795E019(bParam0, 23, false);
			unk_0x4D9CA1009AFBD057(bParam0, 2);
			unk_0xBF0FD6E56C964FCB(bParam0, joaat("weapon_microsmg"), 1000, true, true);
			unk_0x614DA022990752DC(bParam0, 500);
		}
	}
}

void func_207(bool bParam0, float fParam1)
{
	if (!func_7(bParam0))
	{
		func_60(bParam0, fParam1);
	}
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0xFA1E2BF8B10598F9(unk_0xA5EDC40EF369B48D()) && func_116(bParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x17FFC1B2BA35A494(bParam0, bParam1))
	{
		iVar0 = 1;
	}
	if (unk_0xC86D67D52A707CF8(bParam1, unk_0xD80958FC74E988A6(), true))
	{
		iVar0 = 1;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam1, false))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_209()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!iLocal_780)
	{
		if (unk_0x7239B21A38F536BA(Local_824[0 /*20*/].f_6))
		{
			if (!unk_0x5F9532F3B5CC2551(Local_824[0 /*20*/].f_6, false))
			{
				Var1 = { unk_0x3FEF770D40960D5A(Local_824[0 /*20*/].f_6, true) };
			}
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
		if (bLocal_799)
		{
			if (unk_0xB7A628320EFF8E47(Var0, Var1) < 25f)
			{
				unk_0xD79DEEFB53455EBA(true);
				if (!func_47())
				{
					unk_0x69F4BE8C8CC4796C(Local_824[0 /*20*/], unk_0xD80958FC74E988A6(), 5000, 0, 2);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_171(&Local_396, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_780 = 1;
					}
				}
			}
		}
	}
}

int func_211(bool bParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam1, false))
		{
			if (!unk_0x997ABD671D25CA0B(bParam1, false))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&bLocal_184))
	{
		func_59(&bLocal_184);
	}
	if (func_116(bParam0, 0) < 15f)
	{
		fLocal_181 = 0.3f;
		bLocal_182 = 0.5f;
		fLocal_183 = 0.1f;
	}
	else if (func_116(bParam0, 0) < 40f)
	{
		fLocal_181 = 0.6f;
		bLocal_182 = 1f;
		fLocal_183 = 0.2f;
	}
	if (func_3(&bLocal_184, unk_0x313CE5879CEB6FCD(fLocal_181, bLocal_182)))
	{
		func_59(&bLocal_184);
		unk_0xC5F68BE9613E2D18(bParam0, 1, 0f, 0f, fLocal_183, -0.0067f, -0.8283f, -0.2766f, 0, true, true, true, true, true);
	}
	return 1;
}

void func_212()
{
	unk_0xEB2D525B57F42B40();
	func_213();
}

void func_213()
{
	Global_23011.f_134 = 1;
}

int func_214(bool bParam0, bool bParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, bool bParam16, var uParam17, bool bParam18, var uParam19, bool bParam20, var uParam21)
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	
	if (iLocal_447 != 12)
	{
		func_218(Param2, bParam0, bParam1);
	}
	if (!bLocal_215)
	{
		if (iLocal_447 >= 6 && iLocal_447 <= 11)
		{
			if (bParam20)
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_447)
		{
			case 0:
				if (func_121(bParam1, bParam0, &iLocal_449, 10, 90f, 100f, 0))
				{
					unk_0xEB9DC3C7D8596C46(bParam1, false);
					func_257(&Local_396, 3, *uParam21, "TONYA", 0, 1);
					func_257(&Local_396, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_447 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_103("TOW_TUT_03", -1);
					unk_0xC1B1E9A034A63A62(false);
					iLocal_447 = 2;
				}
				break;
			
			case 2:
				if (iLocal_216)
				{
					unk_0x8DFCED7A656F8802(true);
					iLocal_447 = 4;
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (((unk_0x83666F9FB8FEBD4B() > 12000 || func_117(bParam0, bParam1, 1) < 15f) && func_117(bParam0, bParam1, 1) < 30f) && !func_47())
					{
						func_171(&Local_396, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_447 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_216)
				{
					if (!func_47() && !func_109("TOW_TUT_03"))
					{
						func_217("TOW_TUT_02");
						iLocal_447 = 4;
					}
				}
				else
				{
					iLocal_447 = 4;
				}
				break;
			
			case 4:
				if (unk_0x83666F9FB8FEBD4B() > 5000 || iLocal_216)
				{
					if ((unk_0x83666F9FB8FEBD4B() > 12000 || func_117(bParam0, bParam1, 1) < 7.5f) || (iLocal_216 && func_117(bParam0, bParam1, 1) < 30f))
					{
						iLocal_191 = 1;
						iLocal_191 = iLocal_191;
						func_217("TOW_TUT_01");
						iLocal_447 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 8000)
				{
					iLocal_447 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !unk_0x7984C03AA5CC2F41()) && unk_0x83666F9FB8FEBD4B() > 12000)
				{
					if (!iLocal_208)
					{
						func_103("TOWT_HELP_CR", -1);
						iLocal_208 = 1;
					}
				}
				if (unk_0x51210CED3DA1C78A(bParam0, Param2, Param2.f_3, Param2.f_6, false, false, 0))
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0xA6DB27D19ECBB7DA(*bParam16))
					{
						unk_0x4F7D8A9BFB0B43E9(*bParam16, false);
						unk_0x86A652570E5F25DD(bParam16);
					}
					StringCopy(bParam18, "TOW_TUT_04A", 64);
					*(uParam17[0 /*3*/]) = { Param2.f_14 };
					fLocal_180 = func_9(Param2.f_14, 0);
					*bParam16 = unk_0x5A039BB0BCA604B6(Param2.f_14);
					unk_0x5AE11BC36633DE4E(false);
					iLocal_447 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (unk_0xC9D9444186B5A374() > 6000)
					{
						unk_0xC1B1E9A034A63A62(false);
						func_113("TOW_TUT_04A", 7500, 1);
						iLocal_447 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_447 = 10;
				}
				if (!func_47())
				{
					if (unk_0x51210CED3DA1C78A(bParam0, Param2, Param2.f_3, Param2.f_6, false, true, 0))
					{
						iLocal_218 = unk_0x9CD27B0045628463();
						if (bLocal_192)
						{
							unk_0x4F7D8A9BFB0B43E9(*bParam16, false);
							unk_0x86A652570E5F25DD(bParam16);
							*(uParam17[0 /*3*/]) = { Param2.f_14 };
							fLocal_180 = func_9(Param2.f_14, 0);
							*bParam16 = unk_0x5A039BB0BCA604B6(Param2.f_14);
						}
						if (unk_0xA6DB27D19ECBB7DA(*bParam16))
						{
							unk_0x03D7FB09E75D6B7E(*bParam16, 5);
						}
						iLocal_447 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					bVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					bVar2 = Param2.f_6;
				}
				if (unk_0x51210CED3DA1C78A(bParam1, Var0, Var1, bVar2, false, true, 0))
				{
					func_103("TOWT_HELP_UH", -1);
					func_216();
					if (!unk_0x5F9532F3B5CC2551(bParam0, false) && !unk_0x5F9532F3B5CC2551(bParam1, false))
					{
						if (unk_0x146DF9EC4C4B9FD4(bParam0, bParam1))
						{
							iLocal_447 = 11;
						}
					}
				}
				else
				{
					func_215();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					bVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					bVar2 = Param2.f_6;
				}
				if (unk_0x51210CED3DA1C78A(bParam1, Var0, Var1, bVar2, false, true, 0))
				{
					func_103("TOWT_HELP_UH", -1);
					func_216();
				}
				if (((unk_0x7239B21A38F536BA(bParam0) && unk_0x7239B21A38F536BA(bParam1)) && !unk_0x5F9532F3B5CC2551(bParam0, false)) && !unk_0x5F9532F3B5CC2551(bParam1, false))
				{
					if (!unk_0x146DF9EC4C4B9FD4(bParam0, bParam1))
					{
						unk_0x8DFCED7A656F8802(true);
						unk_0xCC33FA791322B9D9();
						func_146(&uLocal_149, 0, 0);
						iLocal_447 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam20)
		{
			if (((unk_0x7239B21A38F536BA(bParam0) && unk_0x7239B21A38F536BA(bParam1)) && !unk_0x5F9532F3B5CC2551(bParam0, false)) && !unk_0x5F9532F3B5CC2551(bParam1, false))
			{
				if (unk_0x146DF9EC4C4B9FD4(bParam0, bParam1) && !bLocal_448)
				{
					if (func_47())
					{
						if (unk_0x4D79439A6B55AC67())
						{
							unk_0x8DFCED7A656F8802(true);
						}
						func_172();
						iLocal_447 = 6;
					}
					else
					{
						func_105(*bParam16);
						unk_0xC1B1E9A034A63A62(false);
						iLocal_447 = 6;
						func_171(&Local_396, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_448 = true;
					}
				}
			}
			if (!iLocal_210)
			{
				if (bLocal_448)
				{
					if (!func_47())
					{
						unk_0x8DFCED7A656F8802(true);
						func_113("TOWT_OBJ_06", 7500, 1);
						iLocal_210 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	switch (iLocal_224)
	{
		case 0:
			if (!func_7(&bLocal_409))
			{
				func_263(&bLocal_409);
			}
			else if (func_4(&bLocal_409) > 10f)
			{
				if (func_171(&uLocal_227, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_224 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_171(&uLocal_227, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&bLocal_409);
					iLocal_224 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&bLocal_409))
			{
				if (func_4(&bLocal_409) > 15f)
				{
					if (!func_47())
					{
						if (func_171(&uLocal_227, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_224 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_216()
{
	if (!iLocal_207)
	{
		if (!unk_0x7984C03AA5CC2F41())
		{
			if (!func_47())
			{
				if (func_171(&uLocal_227, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_207 = 1;
				}
			}
		}
	}
}

void func_217(bool bParam0)
{
	unk_0xC1B1E9A034A63A62(false);
	func_103(bParam0, -1);
}

void func_218(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam14) || !unk_0x7239B21A38F536BA(bParam15))
	{
		return;
	}
	if (unk_0x5F9532F3B5CC2551(bParam14, false) || unk_0x5F9532F3B5CC2551(bParam15, false))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		bVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		bVar2 = Param0.f_6;
	}
	if (!iLocal_193)
	{
		if (unk_0x51210CED3DA1C78A(bParam15, Var0, Var1, bVar2, false, true, 0))
		{
			if (!unk_0x5F9532F3B5CC2551(bParam14, false) && !unk_0x5F9532F3B5CC2551(bParam15, false))
			{
				if (!unk_0x146DF9EC4C4B9FD4(bParam14, bParam15))
				{
					unk_0x8DFCED7A656F8802(true);
					unk_0xCC33FA791322B9D9();
					iLocal_447 = 12;
					iLocal_193 = 1;
				}
			}
		}
	}
}

int func_219(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		iVar0 = (*uParam2 - unk_0xEEF059FAD016D209(bParam1));
	}
	if (bLocal_178 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0x7239B21A38F536BA(bParam1))
		{
			if (!unk_0x5F9532F3B5CC2551(bParam1, false))
			{
				if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam1, false)) || unk_0xC86D67D52A707CF8(bParam1, unk_0xD80958FC74E988A6(), true))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0x7239B21A38F536BA(bParam1))
				{
					*uParam2 = unk_0xEEF059FAD016D209(bParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					bLocal_178 = (bLocal_178 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					bLocal_178 = (bLocal_178 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_171(&Local_396, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_171(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					bLocal_178 = (bLocal_178 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		*uParam2 = unk_0xEEF059FAD016D209(bParam1);
	}
	return 0;
}

int func_220(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		iVar0 = (*uParam3 - unk_0xEEF059FAD016D209(bParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0x7239B21A38F536BA(bParam1) && unk_0x7239B21A38F536BA(bParam2))
			{
				if (!unk_0x5F9532F3B5CC2551(bParam1, false) && !unk_0x5F9532F3B5CC2551(bParam2, false))
				{
					if ((unk_0x17FFC1B2BA35A494(bParam1, bParam2) || unk_0x146DF9EC4C4B9FD4(bParam2, bParam1)) || unk_0xC86D67D52A707CF8(bParam1, unk_0xD80958FC74E988A6(), true))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0x7239B21A38F536BA(bParam1))
					{
						*uParam3 = unk_0xEEF059FAD016D209(bParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_222("TOW_DMG_01", 25, -1);
					func_221(func_26(), 1, 25);
					bLocal_178 = (bLocal_178 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_222("TOW_DMG_01", 75, -1);
					func_221(func_26(), 1, 75);
					bLocal_178 = (bLocal_178 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_103("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		*uParam3 = unk_0xEEF059FAD016D209(bParam1);
	}
	return 1;
}

int func_221(int iParam0, int iParam1, bool bParam2)
{
	if (func_97(iParam0) == 3)
	{
		return 0;
	}
	if (func_97(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_97(iParam0), 0, iParam1, bParam2, 0);
}

void func_222(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x03B504CF259931BC(bParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam2);
}

void func_223(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0xA6DB27D19ECBB7DA(*bParam1))
		{
			unk_0x86A652570E5F25DD(bParam1);
		}
		*uParam5 = unk_0x9CD27B0045628463();
		bLocal_215 = !func_224(bParam0);
		return;
	}
	else if (!unk_0xA6DB27D19ECBB7DA(*bParam1) && bLocal_215)
	{
		*bParam1 = unk_0x5CDE92C702A8FCE7(*bParam0);
		unk_0x03D7FB09E75D6B7E(*bParam1, 3);
		unk_0x4F7D8A9BFB0B43E9(*bParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_215)
		{
			if (!func_224(bParam0))
			{
				unk_0x2CEA2839313C09AC();
				*uParam5 = unk_0x9CD27B0045628463();
				if (bParam13)
				{
					if (iLocal_188)
					{
						func_113("DTRSHRD_03", 7500, 1);
						iLocal_188 = 0;
					}
					if (!unk_0xA6DB27D19ECBB7DA(*bParam1))
					{
						*bParam1 = unk_0x5CDE92C702A8FCE7(*bParam0);
						unk_0x03D7FB09E75D6B7E(*bParam1, 3);
						unk_0x4F7D8A9BFB0B43E9(*bParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0xA6DB27D19ECBB7DA((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0x4F7D8A9BFB0B43E9((uParam2[iVar0 /*20*/])->f_8, false);
						unk_0x86A652570E5F25DD(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0xA6DB27D19ECBB7DA((uParam2[0 /*20*/])->f_9))
				{
					unk_0x86A652570E5F25DD(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_215 = true;
			}
		}
		else if (func_224(bParam0))
		{
			if (unk_0xA6DB27D19ECBB7DA(*bParam1))
			{
				unk_0x86A652570E5F25DD(bParam1);
			}
			if (!unk_0x84A2DD9AC37C35C1((*uParam2)[0 /*20*/]))
			{
				if (!unk_0xA3EE4A07279BB9DB((*uParam2)[0 /*20*/], *bParam0, false) && !unk_0xA3EE4A07279BB9DB((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!unk_0xA6DB27D19ECBB7DA((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0x5CDE92C702A8FCE7((*uParam2)[iVar0 /*20*/]);
						unk_0x03D7FB09E75D6B7E((uParam2[0 /*20*/])->f_9, 3);
						unk_0xD38744167B2FA257((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_189)
			{
				func_113(bParam4, 7500, 1);
				iLocal_189 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0xA6DB27D19ECBB7DA((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x5A039BB0BCA604B6(*(uParam3[0 /*3*/]));
					unk_0x4F7D8A9BFB0B43E9((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!unk_0x5F9532F3B5CC2551((uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!unk_0xA6DB27D19ECBB7DA((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0x5CDE92C702A8FCE7((uParam2[iParam6 /*20*/])->f_6);
						unk_0x03D7FB09E75D6B7E((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0x4F7D8A9BFB0B43E9((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_170 == 3)
					{
						Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0xA6DB27D19ECBB7DA((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x5A039BB0BCA604B6(Local_393[iLocal_450 /*23*/].f_1);
						unk_0x03D7FB09E75D6B7E((uParam2[0 /*20*/])->f_8, 3);
						unk_0x4F7D8A9BFB0B43E9((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0x5F9532F3B5CC2551((uParam2[iVar0 /*20*/])->f_6, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0x5CDE92C702A8FCE7((uParam2[iVar0 /*20*/])->f_6);
							unk_0x03D7FB09E75D6B7E((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0x4F7D8A9BFB0B43E9((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_170 == 3)
						{
							Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0xA6DB27D19ECBB7DA((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x5A039BB0BCA604B6(Local_393[iLocal_450 /*23*/].f_1);
							unk_0x03D7FB09E75D6B7E((uParam2[0 /*20*/])->f_8, 3);
							unk_0x4F7D8A9BFB0B43E9((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_215 = false;
		}
	}
}

int func_224(var uParam0)
{
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != *uParam0)
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

void func_225()
{
	int iVar0;
	
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_193();
	}
}

void func_226(var uParam0)
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
						func_227(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_227(bool bParam0)
{
	func_228(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_228(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(*bParam0, 30))
	{
		switch (func_229(*bParam0))
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

int func_229(var uParam0)
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

void func_230()
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

void func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_254();
	iLocal_454 = func_253();
	if (uParam0->f_3 == 3)
	{
		sLocal_466[0] = "base";
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towingcome_here");
		func_251(&uLocal_482, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_793)
	{
		func_251(&uLocal_482, "Ped");
		func_251(&uLocal_482, "oddjobs@towing");
		func_251(&uLocal_482, "oddjobs@towingangryidle_a");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_a");
		func_251(&uLocal_482, "move_m@JOG@");
	}
	else if (bLocal_793)
	{
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_251(&uLocal_482, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		bLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_251(&uLocal_482, bLocal_465);
		func_249(&uLocal_472, joaat("ambulance"));
		func_249(&uLocal_472, joaat("s_m_m_paramedic_01"));
		sLocal_466[0] = "react_big_variations_a";
		sLocal_466[1] = "react_big_variations_b";
		sLocal_466[2] = "react_big_variations_c";
		func_251(&uLocal_482, "move_m@JOG@");
	}
	unk_0x0FC2D89AC25A5814(joaat("towtruck"), true);
	if (uParam0->f_3 == 1)
	{
		unk_0x944955FB2A3935C8();
		func_251(&uLocal_482, "oddjobs@towing");
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_249(&uLocal_472, joaat("freightcont1"));
		func_249(&uLocal_472, joaat("tankercar"));
		func_249(&uLocal_472, joaat("freight"));
		func_249(&uLocal_472, joaat("freightcar"));
		func_249(&uLocal_472, joaat("s_m_m_lsmetro_01"));
		func_249(&uLocal_472, joaat("a_f_m_bevhills_01"));
		func_249(&uLocal_472, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_248();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_819[iVar0] = Local_393[iLocal_450 /*23*/].f_20;
	}
	else
	{
		func_247();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_819[iVar0] == 0)
		{
			iLocal_819[iVar0] = func_245(&iLocal_819, &iLocal_49, 10);
			unk_0x81A15811460FAB3A(iLocal_819[iVar0], 3);
		}
		if (bLocal_799)
		{
			iLocal_819[iVar0] = joaat("landstalker");
			func_249(&uLocal_472, iLocal_819[iVar0]);
			unk_0x81A15811460FAB3A(iLocal_819[iVar0], 3);
		}
		else if (iLocal_819[iVar0] != 0)
		{
			func_249(&uLocal_472, iLocal_819[iVar0]);
			unk_0x81A15811460FAB3A(iLocal_819[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_793 && iLocal_796)
	{
		if (bLocal_799)
		{
			func_244(&iVar1);
			bLocal_47 = joaat("a_m_m_tranvest_01");
			func_249(&uLocal_472, bLocal_47);
		}
		else if (bLocal_800)
		{
			func_243(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_242(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_799)
		{
			func_242(&iVar1, 1);
		}
		else
		{
			func_242(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_820[iVar0] = func_245(&uLocal_820, &iLocal_48, iVar1);
			if (uLocal_820[iVar0] != 0)
			{
				func_249(&uLocal_472, uLocal_820[iVar0]);
			}
			iVar0++;
		}
	}
	func_249(&uLocal_472, iLocal_392);
	func_241(&uLocal_490, "TOW", 2, 0);
	func_241(&uLocal_490, "DTRSHRD", 3, 0);
	func_240(&uLocal_472);
	func_237(&uLocal_482, &uLocal_490);
	while (!unk_0x85F01B8D5B90570E(iLocal_454))
	{
		func_226(&uLocal_490);
		unk_0x4EDE34FBADD967A6(false);
	}
	while (!func_236(&uLocal_472) || !unk_0x1BBE0523B8DB9A21(iLocal_819[0]))
	{
		func_226(&uLocal_490);
		unk_0x4EDE34FBADD967A6(false);
	}
	while (!func_232(&uLocal_490))
	{
		func_226(&uLocal_490);
		unk_0x4EDE34FBADD967A6(false);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0x2F844A8B08D76685("SCRIPT\TOWING_TRAIN", false, -1) || !unk_0xCA7D9B86ECA7481B())
		{
			func_226(&uLocal_490);
			unk_0x4EDE34FBADD967A6(false);
		}
	}
	while (!unk_0x02245FE4BED318B8(2) || !unk_0x02245FE4BED318B8(3))
	{
		func_226(&uLocal_490);
		unk_0x4EDE34FBADD967A6(false);
	}
}

bool func_232(var uParam0)
{
	return func_233(uParam0);
}

int func_233(var uParam0)
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
			if (!func_234(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_234(var uParam0)
{
	return func_235(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_235(bool bParam0, bool bParam1, bool bParam2)
{
	if (BitTest(bParam0, 30))
	{
		if (BitTest(bParam0, 29))
		{
			switch (func_229(bParam0))
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

int func_236(var uParam0)
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

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xF22B6C47C6EAB066((*uParam0)[iVar0]))
		{
			func_238(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_238(var uParam0, char* sParam1)
{
	func_239(uParam0, 1, -1, sParam1, 0);
}

void func_239(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

void func_240(var uParam0)
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

void func_241(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0x933D6A9EEC1BACD0(&uVar0, 26);
	}
	func_239(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_48[0] = joaat("a_m_y_genstreet_02");
		iLocal_48[1] = joaat("a_m_y_beach_03");
		iLocal_48[2] = joaat("g_m_y_salvagoon_01");
		iLocal_48[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_48[0] = joaat("a_f_m_bevhills_01");
		iLocal_48[1] = joaat("a_m_y_genstreet_02");
		iLocal_48[2] = joaat("a_f_y_hipster_02");
		iLocal_48[3] = joaat("a_m_y_beach_03");
		iLocal_48[4] = joaat("s_f_y_sweatshop_01");
		iLocal_48[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_243(var uParam0)
{
	iLocal_48[0] = joaat("a_m_m_tramp_01");
	iLocal_48[1] = joaat("a_m_y_methhead_01");
	iLocal_48[2] = joaat("a_m_m_tramp_01");
	iLocal_48[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_244(var uParam0)
{
	iLocal_48[0] = joaat("a_m_y_yoga_01");
	iLocal_48[1] = joaat("a_m_y_beach_03");
	iLocal_48[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_245(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = unk_0xD53343AA4FB7DD28(false, (iParam2 - 1));
	while (func_246((*iParam1)[bVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		bVar1 = unk_0xD53343AA4FB7DD28(false, (iParam2 - 1));
	}
	return (*iParam1)[bVar1];
}

int func_246(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_247()
{
	iLocal_49[0] = joaat("tailgater");
	iLocal_49[1] = joaat("asterope");
	iLocal_49[2] = joaat("primo");
	iLocal_49[3] = joaat("primo");
	iLocal_49[4] = joaat("schwarzer");
	iLocal_49[5] = joaat("emperor");
	iLocal_49[6] = joaat("premier");
	iLocal_49[7] = joaat("buffalo");
	iLocal_49[8] = joaat("intruder");
	iLocal_49[9] = joaat("intruder");
}

void func_248()
{
	iLocal_49[0] = joaat("buccaneer");
	iLocal_49[1] = joaat("voodoo2");
	iLocal_49[2] = joaat("manana");
	iLocal_49[3] = joaat("ruiner");
	iLocal_49[4] = joaat("ruiner");
	iLocal_49[5] = joaat("voodoo2");
	iLocal_49[6] = joaat("surfer2");
	iLocal_49[7] = joaat("emperor2");
	iLocal_49[8] = joaat("stanier");
	iLocal_49[9] = joaat("tailgater");
}

int func_249(var uParam0, int iParam1)
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
	iVar1 = func_250(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_250(var uParam0)
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

int func_251(var uParam0, bool bParam1)
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
	iVar1 = func_252(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = bParam1;
	return 1;
}

int func_252(var uParam0)
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

int func_253()
{
	return unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
}

void func_254()
{
	func_300(&uLocal_162, 1);
}

void func_255()
{
	switch (iLocal_170)
	{
		case 2:
			if ((Global_113386.f_19973.f_4 % 2) == 0)
			{
				sLocal_467 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_467 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_467 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_799)
			{
			}
			else
			{
				sLocal_467 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_467 = "TOWTRAINM";
			break;
	}
}

int func_256()
{
	return Local_393[iLocal_450 /*23*/].f_22;
}

void func_257(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_258()
{
	iLocal_170 = func_260(Global_113386.f_19973.f_2);
	if (!func_259(iLocal_170))
	{
		iLocal_170 = 3;
	}
	if (iLocal_170 == 3)
	{
	}
	else
	{
		iLocal_450 = func_262(1300f, iLocal_170, Global_113386.f_19973.f_9);
		Global_113386.f_19973.f_9 = iLocal_450;
	}
	if (iLocal_450 == 0)
	{
		iLocal_170 = 3;
	}
	Global_113386.f_19973.f_2 = iLocal_170;
}

int func_259(int iParam0)
{
	iLocal_450 = func_262(1300f, iParam0, Global_113386.f_19973.f_9);
	if (iLocal_450 == -1)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_113386.f_19973.f_4 < iVar0)
		{
			iVar0 = Global_113386.f_19973.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_113386.f_19973.f_6 < iVar0)
		{
			iVar0 = Global_113386.f_19973.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_113386.f_19973.f_5 < iVar0)
		{
			iVar0 = Global_113386.f_19973.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_113386.f_19973.f_7 < iVar0)
		{
			iVar0 = Global_113386.f_19973.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_113386.f_19973.f_8 < iVar0)
		{
			iVar0 = Global_113386.f_19973.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_261()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_262(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = func_9(Local_393[iVar5 /*23*/].f_1, 1);
		if (!func_11(Local_393[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_393[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[unk_0xD53343AA4FB7DD28(false, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_263(bool bParam0)
{
	if (!func_7(bParam0))
	{
		func_59(bParam0);
	}
}

void func_264()
{
	Local_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_46[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_265(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_266(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_267()
{
	bool bVar0;
	
	if (iLocal_906 < 16)
	{
		unk_0xCC33FA791322B9D9();
		unk_0xD79DEEFB53455EBA(true);
		func_300(&Global_112037, 3);
		switch (iLocal_875)
		{
			case 2:
				bVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				bVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				bVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				bVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				bVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				bVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				bVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				bVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				bVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				bVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				bVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				bVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				bVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				bVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				bVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				bVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				bVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				bVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				bVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = "TOW_FAIL_15";
		}
		if (!unk_0xCA042B6957743895(bVar0))
		{
			func_270(bVar0);
		}
		func_269();
		func_271(unk_0x442E0A7EDE4A738A());
		while (!func_268())
		{
			unk_0x4EDE34FBADD967A6(false);
		}
		func_193();
	}
}

int func_268()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_269()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 25);
	}
}

void func_270(bool bParam0)
{
	if (!unk_0xCA042B6957743895(bParam0))
	{
		if (unk_0xF030907CCBB8A9FD(bParam0) <= 16)
		{
			StringCopy(&Global_78551, bParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x1897CA71995A90B4())
			{
				unk_0x071A5197D6AFC8B3();
			}
		}
	}
}

void func_271(bool bParam0)
{
	if (Global_100441 != 12)
	{
		func_272(bParam0, 5, -1);
	}
}

int func_272(char* sParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<32> Var1;
	int iVar2;
	
	func_297();
	func_296();
	Global_100441 = 0;
	StringCopy(&(Global_100441.f_3), sParam0, 32);
	Global_100441.f_11 = iParam1;
	unk_0x2C2B3493FBF51C71(true);
	unk_0x1E0B4DC0D990A4E7(false);
	unk_0x4A18E01DF2C87B86(false);
	func_292(1);
	func_290(1);
	func_287(0);
	func_286(1);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 9);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 6);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 20);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 21);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 5);
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0x1DBD58820FA61D71(bVar0))
				{
					unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 5);
				}
			}
		}
	}
	unk_0x8DFCED7A656F8802(true);
	unk_0xCC33FA791322B9D9();
	func_285(0);
	func_284(1);
	Global_100441.f_2 = Global_100478;
	if (func_283())
	{
		if (func_282())
		{
			if (Global_100478 >= func_279())
			{
				if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 16))
				{
					if (Global_113386.f_9085.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_94617 = 1;
					}
				}
			}
		}
		else if (Global_100441.f_11 == 6)
		{
			func_274(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_113386.f_18574[iParam2 /*6*/].f_4 >= 2)
				{
					Global_94617 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_273(unk_0x442E0A7EDE4A738A());
			if (iVar2 > -1)
			{
				if (Global_113386.f_24986.f_4[iVar2] >= 2)
				{
					Global_94617 = 1;
				}
			}
		}
	}
	return 1;
}

int func_273(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92("BailBond1", bParam0))
	{
		return 0;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond2", bParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond3", bParam0))
	{
		return 2;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond4", bParam0))
	{
		return 3;
	}
	return -1;
}

void func_274(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_275(uParam1, "Abigail1", func_277(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 1:
			func_275(uParam1, "Abigail2", func_277(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 2:
			func_275(uParam1, "Barry1", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 3:
			func_275(uParam1, "Barry2", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 4:
			func_275(uParam1, "Barry3", func_277(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 5:
			func_275(uParam1, "Barry3A", func_277(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 6:
			func_275(uParam1, "Barry3C", func_277(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 7:
			func_275(uParam1, "Barry4", func_277(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_276(iParam0), 0, 0);
			break;
		
		case 8:
			func_275(uParam1, "Dreyfuss1", func_277(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 9:
			func_275(uParam1, "Epsilon1", func_277(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 10:
			func_275(uParam1, "Epsilon2", func_277(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 11:
			func_275(uParam1, "Epsilon3", func_277(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 12:
			func_275(uParam1, "Epsilon4", func_277(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 13:
			func_275(uParam1, "Epsilon5", func_277(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 14:
			func_275(uParam1, "Epsilon6", func_277(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 15:
			func_275(uParam1, "Epsilon7", func_277(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 16:
			func_275(uParam1, "Epsilon8", func_277(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 17:
			func_275(uParam1, "Extreme1", func_277(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 18:
			func_275(uParam1, "Extreme2", func_277(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 19:
			func_275(uParam1, "Extreme3", func_277(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 20:
			func_275(uParam1, "Extreme4", func_277(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 21:
			func_275(uParam1, "Fanatic1", func_277(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 22:
			func_275(uParam1, "Fanatic2", func_277(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 23:
			func_275(uParam1, "Fanatic3", func_277(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_276(iParam0), 0, 1);
			break;
		
		case 24:
			func_275(uParam1, "Hao1", func_277(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_276(iParam0), 0, 1);
			break;
		
		case 25:
			func_275(uParam1, "Hunting1", func_277(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 26:
			func_275(uParam1, "Hunting2", func_277(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 27:
			func_275(uParam1, "Josh1", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 28:
			func_275(uParam1, "Josh2", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 29:
			func_275(uParam1, "Josh3", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 30:
			func_275(uParam1, "Josh4", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 31:
			func_275(uParam1, "Maude1", func_277(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 32:
			func_275(uParam1, "Minute1", func_277(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 33:
			func_275(uParam1, "Minute2", func_277(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 34:
			func_275(uParam1, "Minute3", func_277(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 35:
			func_275(uParam1, "MrsPhilips1", func_277(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 36:
			func_275(uParam1, "MrsPhilips2", func_277(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 37:
			func_275(uParam1, "Nigel1", func_277(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 38:
			func_275(uParam1, "Nigel1A", func_277(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 39:
			func_275(uParam1, "Nigel1B", func_277(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 40:
			func_275(uParam1, "Nigel1C", func_277(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 41:
			func_275(uParam1, "Nigel1D", func_277(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 42:
			func_275(uParam1, "Nigel2", func_277(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 43:
			func_275(uParam1, "Nigel3", func_277(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 44:
			func_275(uParam1, "Omega1", func_277(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 45:
			func_275(uParam1, "Omega2", func_277(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 46:
			func_275(uParam1, "Paparazzo1", func_277(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 47:
			func_275(uParam1, "Paparazzo2", func_277(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 48:
			func_275(uParam1, "Paparazzo3", func_277(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 49:
			func_275(uParam1, "Paparazzo3A", func_277(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 50:
			func_275(uParam1, "Paparazzo3B", func_277(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 51:
			func_275(uParam1, "Paparazzo4", func_277(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 52:
			func_275(uParam1, "Rampage1", func_277(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 54:
			func_275(uParam1, "Rampage3", func_277(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 55:
			func_275(uParam1, "Rampage4", func_277(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 56:
			func_275(uParam1, "Rampage5", func_277(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 53:
			func_275(uParam1, "Rampage2", func_277(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 57:
			func_275(uParam1, "TheLastOne", func_277(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 58:
			func_275(uParam1, "Tonya1", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 59:
			func_275(uParam1, "Tonya2", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 60:
			func_275(uParam1, "Tonya3", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 61:
			func_275(uParam1, "Tonya4", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 62:
			func_275(uParam1, "Tonya5", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_275(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_276(int iParam0)
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

struct<2> func_277(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_278(iParam0) };
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

struct<2> func_278(int iParam0)
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

int func_279()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_280(&(Global_100441.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_280(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xD24D37CC275948CC(bParam0);
	iVar1 = func_281(bVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_281(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91229[iVar0 /*34*/].f_6 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_282()
{
	if ((((Global_100441.f_11 == 0 || Global_100441.f_11 == 1) || Global_100441.f_11 == 2) || Global_100441.f_11 == 3) || Global_100441.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	if ((((Global_100441.f_11 == 0 || Global_100441.f_11 == 1) || Global_100441.f_11 == 2) || Global_100441.f_11 == 6) || Global_100441.f_11 == 3)
	{
		return 1;
	}
	if (Global_100441.f_11 == 5)
	{
		if (func_273(&(Global_100441.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_43601 = 1;
	}
	else
	{
		Global_43601 = 0;
	}
}

void func_285(bool bParam0)
{
	unk_0xA6294919E56FF02A(bParam0);
	unk_0xA0EBB943C300E693(bParam0);
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xFDB423997FA30340();
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 3);
	}
	else if (BitTest(Global_100441.f_20, 3))
	{
		unk_0xE1CD1E48E025E661();
		unk_0xE80492A9AC099A93(&(Global_100441.f_20), 3);
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		if (BitTest(Global_100441.f_20, 4))
		{
			func_289();
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 4);
		}
	}
	else
	{
		func_288();
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 4);
	}
}

void func_288()
{
	Global_23011.f_5 = 1;
}

void func_289()
{
	Global_23011.f_5 = 0;
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		func_291();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_162(0))
		{
			func_292(0);
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

void func_291()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_294())
		{
			func_293(1, 1);
		}
		else
		{
			func_293(0, 0);
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
	if (!func_23())
	{
		Global_20266.f_1 = 3;
	}
}

void func_293(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_162(0))
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

bool func_294()
{
	return BitTest(Global_1958711, 5);
}

bool func_295()
{
	return BitTest(Global_1958711, 19);
}

void func_296()
{
	Global_94617 = 0;
	Global_94618 = 0;
}

void func_297()
{
	Global_100441 = 13;
	Global_100441.f_1 = -1;
	Global_100441.f_2 = 0;
	Global_100441.f_30 = 0f;
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 25);
	Global_100475 = 0;
	func_284(0);
	func_299();
	func_298();
	Global_100441.f_18 = -1;
	Global_100441.f_19 = -1;
}

void func_298()
{
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 22);
	unk_0xE80492A9AC099A93(&(Global_100441.f_20), 8);
}

void func_299()
{
	if (Global_100441.f_16 != 0)
	{
		unk_0x1D132D614DD86811(&(Global_100441.f_16));
		Global_100441.f_16 = 0;
	}
	if (Global_100441.f_17 != 0)
	{
		unk_0x1D132D614DD86811(&(Global_100441.f_17));
		Global_100441.f_17 = 0;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_302()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

