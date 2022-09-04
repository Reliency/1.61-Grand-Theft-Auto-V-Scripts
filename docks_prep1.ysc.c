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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	bool bLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	struct<3> Local_276 = { 0, 0, 0 } ;
	float fLocal_277 = 0f;
	bool bLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	bool bLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	bool bLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	float fLocal_286 = 0f;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_582 = 20;
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
	var uLocal_683 = 20;
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
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 30;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
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
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 5;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 7;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 5;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 3;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 21;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 10;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 5;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 5;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 8;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 12;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 12;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 12;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 9;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 9;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 12;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 12;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 12;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 9;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 9;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 12;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 12;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 12;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 9;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 9;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 12;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 12;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 12;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 9;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 9;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 12;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 12;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 12;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 9;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 9;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 12;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 12;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 12;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 9;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 9;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 12;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 12;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 12;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 9;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 9;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 12;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 12;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 12;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 9;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 9;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	float fLocal_1983 = 0f;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987[2] = { 0, 0 };
	int iLocal_1988 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
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
	iLocal_46 = unk_0x4A9923385BDB9DAD();
	iLocal_47 = unk_0x186E5D252FA50E7D();
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	Local_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_261 = -1;
	Local_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	bLocal_278 = joaat("prop_dock_crane_02_ld");
	Local_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	bLocal_281 = joaat("prop_dock_crane_02_cab");
	Local_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	bLocal_284 = joaat("prop_dock_crane_02_hook");
	Local_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	Local_288 = { -0.005f, -22.139f, 32.825f };
	Local_289 = { 0f, 0f, 0.68f };
	Local_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1983 = 3f;
	if (unk_0xC968670BFACE42D9(3))
	{
		unk_0x706D57B0F50DA710("DHP1_FAIL");
		func_337();
		func_335();
		if (unk_0x991251AFC3981F84())
		{
			unk_0x8093F23ABACCC7D4(false, false, false, false);
		}
		func_332();
	}
	unk_0xC4301E5121A0ED73(true);
	func_327();
	while (true)
	{
		unk_0x208784099002BC30("M_ThePortOfLSHeistPrep1", 0);
		func_326(&uLocal_309);
		func_324(&uLocal_1319);
		func_323();
		func_296();
		if (!iLocal_1981)
		{
			func_280();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_1977)
	{
		case 0:
			func_229();
			break;
		
		case 1:
			func_194();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1978)
	{
		case 0:
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0xD4E8E24955024033(800);
			}
			unk_0xB4EC2312F4E5B1F1(180f);
			iLocal_1978++;
			break;
		
		case 1:
			if (unk_0x5A859503B0C08678())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_332();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_78565.f_1 == 1) && func_6(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 4);
		unk_0x933D6A9EEC1BACD0(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = unk_0x9CD27B0045628463();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
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
	switch (iLocal_1978)
	{
		case 0:
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0xD4E8E24955024033(800);
			}
			func_108(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_107(Local_53[0 /*2*/]))
			{
				unk_0xFAEE099C6F890BB8(Local_53[0 /*2*/], false, false, false, true, false, false, false, false);
			}
			unk_0x4C7028F78FFD3681(Local_53[0 /*2*/], false);
			unk_0x4C7028F78FFD3681(Local_53[1 /*2*/], false);
			unk_0x72751156E7678833(true);
			unk_0xDC20483CD3DD5201(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0xA80AE305E0A3044F(Local_53[0 /*2*/], false);
			unk_0x31B927BBC44156CD(Local_53[0 /*2*/], false);
			unk_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_1978++;
			break;
		
		case 1:
			if (func_107(unk_0xD80958FC74E988A6()) && func_107(Local_53[0 /*2*/]))
			{
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), true) > 400f && !unk_0xE659E47AF827484B(Local_53[0 /*2*/]))
				{
					func_93(9);
				}
			}
			if (func_92(unk_0xD80958FC74E988A6(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_91(&(Local_57[7 /*2*/]), 0);
				func_91(&(Local_57[8 /*2*/]), 0);
				func_91(&(Local_57[6 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && func_92(unk_0xD80958FC74E988A6(), Local_52, 1) < 200f)
			{
				func_88(&uLocal_309, joaat("bison"));
				iLocal_303 = 1;
				iLocal_302 = 1;
			}
			else if (iLocal_302)
			{
				if (func_92(unk_0xD80958FC74E988A6(), Local_52, 1) > 220f)
				{
					func_89(&uLocal_309, joaat("bison"));
					iLocal_303 = 0;
					iLocal_302 = 0;
					if (unk_0x7239B21A38F536BA(Local_53[3 /*2*/]))
					{
						unk_0xEA386986E786A54F(&(Local_53[3 /*2*/]));
					}
				}
				else if (func_92(unk_0xD80958FC74E988A6(), Local_52, 1) < 200f)
				{
					if (iLocal_303 && unk_0x98A4EB5D89A0C952(joaat("bison")))
					{
						if (!unk_0x7239B21A38F536BA(Local_53[3 /*2*/]))
						{
							Local_53[3 /*2*/] = unk_0xAF35D0D2583051B0(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, true, true, false);
							unk_0x31B927BBC44156CD(Local_53[3 /*2*/], false);
						}
						iLocal_303 = 0;
					}
				}
			}
			if (unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0xB6997A7EB3F5C8C0()) || ((unk_0x51210CED3DA1C78A(Local_53[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0) && unk_0x51210CED3DA1C78A(Local_54[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0)) && unk_0x51210CED3DA1C78A(Local_53[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0)))
			{
				if (func_107(Local_53[1 /*2*/]))
				{
					unk_0x2A8F319B392E7B3F(Local_53[1 /*2*/], 0.5f);
				}
				if (unk_0xA6DB27D19ECBB7DA(Local_58.f_5))
				{
					unk_0xC4278F70131BAA6D(Local_58.f_5, true);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_243))
				{
					unk_0x86A652570E5F25DD(&iLocal_243);
				}
				if (iLocal_255)
				{
					unk_0xCC33FA791322B9D9();
					iLocal_255 = 0;
				}
				if (func_48(&Local_58, Local_52, 0.1f, 0.1f, 2f, 1, Local_54[3 /*10*/], 0, 0, unk_0xB6997A7EB3F5C8C0(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (unk_0xA6DB27D19ECBB7DA(Local_58.f_5) && unk_0x51210CED3DA1C78A(unk_0xB6997A7EB3F5C8C0(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, false, true, 0)))
				{
					unk_0xD37401D78A929A49();
					func_46(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 7f, -1, 1056964608, 0, 1, 0);
					unk_0x31B927BBC44156CD(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
					unk_0x31B927BBC44156CD(Local_53[0 /*2*/], false);
					unk_0xB664292EAECF7FA6(Local_53[0 /*2*/], 10);
					func_42(&Local_58, 1, 0);
					unk_0x72751156E7678833(false);
					unk_0xDC20483CD3DD5201(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = unk_0x9CD27B0045628463();
					iLocal_257 = 0;
					iLocal_1978++;
				}
			}
			else if (!unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0xB6997A7EB3F5C8C0()))
			{
				func_41(&Local_58);
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_243))
				{
					iLocal_243 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				if (!iLocal_255 && func_36())
				{
					func_35("DKP1_ATTACH", 7500, 1);
					iLocal_255 = 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (func_12(&uLocal_78, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					unk_0x971D38760FBC02EF(Local_54[3 /*10*/], true);
					unk_0x69F4BE8C8CC4796C(Local_54[3 /*10*/], unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0x3841422E9C488D8C(&iLocal_244);
					unk_0xE8854A4326B9E12B(&iLocal_244);
					unk_0x504D54DF3F6F2247(0, 0, 0);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 3f, 1f, 2f, 0);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
					unk_0x39E72BC99E6360CB(iLocal_244);
					unk_0x5ABA3986D90D8A3B(Local_54[3 /*10*/], iLocal_244);
					unk_0x3841422E9C488D8C(&iLocal_244);
					iLocal_1978++;
				}
			}
			else if ((!iLocal_252 && func_36()) && (unk_0x9CD27B0045628463() - iLocal_301) > 3000)
			{
				func_35("dkp1_EXIT", 7500, 1);
				unk_0x293220DA1B46CEBC(10f, 5f, 4);
				iLocal_252 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_107(Local_53[3 /*2*/]))
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[3 /*10*/]);
					unk_0x3841422E9C488D8C(&iLocal_244);
					unk_0xE8854A4326B9E12B(&iLocal_244);
					unk_0xC20E50AA46D09CA8(0, Local_53[3 /*2*/], -1, -1, 2f, 1, 0);
					unk_0xF0AF20AA7731F8C3(0, Local_53[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, true);
					unk_0x9454528DF15D657A(0, Local_53[3 /*2*/], unk_0xD80958FC74E988A6(), 8, 30f, 786468, 1000f, 10f, true);
					unk_0x39E72BC99E6360CB(iLocal_244);
					unk_0x5ABA3986D90D8A3B(Local_54[3 /*10*/], iLocal_244);
					unk_0x3841422E9C488D8C(&iLocal_244);
				}
				else
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[3 /*10*/]);
					unk_0x94587F17E9C365D5(Local_54[3 /*10*/], Local_52, 300f, -1, false, false);
				}
				iLocal_301 = unk_0x9CD27B0045628463();
				iLocal_1978++;
			}
			break;
		
		case 4:
			if (func_10(Local_54[3 /*10*/], unk_0xD80958FC74E988A6(), 1) > 70f || (unk_0x9CD27B0045628463() - iLocal_301) > 20000)
			{
				func_9(&(Local_54[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*iParam0);
			}
			unk_0x971D38760FBC02EF(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*iParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(iParam0);
	}
}

float func_10(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1, false))
	{
		Var1 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var1, bParam2);
}

int func_11()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_31();
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
				func_23();
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
				if (func_22())
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
			if (func_21())
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
			func_20();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_19();
		func_14();
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
		func_33();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
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

int func_15()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_18())
	{
		return 0;
	}
	if (func_16(unk_0x4F8644AF03D0E0D6()))
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

bool func_16(bool bParam0)
{
	return func_17(bParam0, 20);
}

var func_17(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_18()
{
	return -1;
}

void func_19()
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

void func_20()
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

int func_21()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_22()
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

void func_23()
{
	if (func_30(14))
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
		Global_20266 = func_24();
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

int func_24()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_28(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_27(unk_0xD80958FC74E988A6());
			if (func_26(iVar0) && (!func_30(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_26(Global_113386.f_2363.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_30(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
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

void func_33()
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

int func_36()
{
	if (unk_0x7984C03AA5CC2F41())
	{
		return 0;
	}
	if (unk_0xAD6DACA4BA53E0A4())
	{
		if (func_11() && !func_37())
		{
			return 0;
		}
	}
	return 1;
}

int func_37()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_40(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(iVar0, func_40(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_40(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_5));
	}
}

void func_42(int* iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_41(iParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1[bVar0]))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_1[bVar0]));
		}
		func_45(bVar0, iParam0);
		func_44(bVar0, iParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), bVar0);
			unk_0xE80492A9AC099A93(&(iParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[bVar0]))
		{
			unk_0x6373D1349925A70E(iParam0->f_17[bVar0], true);
			unk_0x0EB0585D15254740(iParam0->f_17[bVar0], true);
			if (bParam2)
			{
				unk_0x1913FE4CBF41C463(iParam0->f_17[bVar0], 32, true);
				unk_0x1913FE4CBF41C463(iParam0->f_17[bVar0], 305, false);
			}
			unk_0x1913FE4CBF41C463(iParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9BB01E3834671191(iParam0->f_17[bVar0], func_43()) && iParam0->f_17[bVar0] != unk_0xD80958FC74E988A6())
				{
					unk_0xED74007FFB146BC2(iParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				unk_0xD75ACCF5E0FB5367(iParam0->f_17[bVar0], false, -1, 0);
			}
			iParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), true);
		unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), true);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (bParam2)
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_43()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_44(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 19);
			break;
	}
}

void func_45(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 16);
			break;
	}
}

int func_46(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	if (!bParam6)
	{
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 68, true);
	}
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 352, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	func_47(iParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_47(int iParam0)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		if (unk_0x36D782F68B309BDA(iParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(iParam0))
			{
				unk_0x81E1552E35DC3839(iParam0, false);
			}
		}
	}
}

int func_48(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_49(iParam0, Param1, Param2, func_87(), func_87(), bParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_49(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_86(iParam0);
	func_85(iParam0);
	func_84();
	if (func_68(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_67(sParam12);
		func_67(sParam13);
		func_67(sParam14);
		func_67(sParam15);
		if (unk_0x5A859503B0C08678())
		{
			bVar1 = false;
			if (unk_0x4C241E39B23DF959(iParam10, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 23);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_65(iParam0, iParam21))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_67(sParam16);
				func_67(sParam19);
				func_67("MORE_SEATS");
				if (bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						func_67(sParam11);
					}
					if (unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(iParam0);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), true);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), true);
						}
					}
					if (!unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						if (unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							unk_0x86A652570E5F25DD(iParam0);
						}
						iParam0->f_5 = func_58(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0xDF735600A4696DAF(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					else if (!func_56(Var3, unk_0x586AFE3FF72D996E(iParam0->f_5), 0.1f, 0))
					{
						unk_0xAE2AF67E9D9AF65D(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_61(iParam0, sParam11, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param2, bParam5, bVar4, iVar5);
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9BB01E3834671191(iParam0->f_17[iVar2], func_43()) || !func_54(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(iParam0))
							{
								func_67(sParam11);
								func_67(sParam16);
								func_67(sParam12);
								func_67(sParam13);
								func_67(sParam14);
								func_67(sParam15);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(sParam19);
								func_42(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x7239B21A38F536BA(iParam10))
			{
				if ((bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					func_67(sParam16);
					func_67(sParam19);
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						unk_0x86A652570E5F25DD(iParam0);
						func_67(sParam11);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), true);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), true);
						}
					}
					if (unk_0x4C241E39B23DF959(iParam10, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
							{
								unk_0x86A652570E5F25DD(&(iParam0->f_5));
								func_67(sParam11);
							}
							*iParam0 = func_50(iParam10, 0, 0);
							unk_0x9029B2F3DA924928(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_57(*iParam0, iParam0);
							}
						}
						if (!func_63(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_61(iParam0, sParam19, 0);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam16, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
									{
										func_59(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
				{
					unk_0x86A652570E5F25DD(&(iParam0->f_5));
					func_67(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_63(iParam0, 2))
						{
							if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									bVar6 = false;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
										{
											bVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0xD53343AA4FB7DD28(false, bVar6);
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar7]))
									{
										func_59(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_61(iParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_61(iParam0, sParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_61(iParam0, sParam16, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_61(iParam0, sParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), false);
		}
		func_67(sParam11);
		func_67(sParam16);
		func_67(sParam19);
		func_67(sParam16);
		func_67("LOSE_WANTED");
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_5));
		}
		if (unk_0xA6DB27D19ECBB7DA(*iParam0))
		{
			unk_0x86A652570E5F25DD(iParam0);
		}
	}
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 11);
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 12);
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_51(int* iParam0)
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_53(unk_0xD80958FC74E988A6()))
		{
			if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
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
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0, false))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1, false) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0, false))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
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

int func_53(int iParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_55(unk_0xD80958FC74E988A6(), iParam0))
			{
				unk_0x4102C7858CFEE4E4(func_43(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(iParam0, func_43()))
		{
			unk_0x4102C7858CFEE4E4(func_43(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(iParam0))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iParam1))
				{
					if (unk_0xA808AA1D79230FC2(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_57(int iParam0, int* iParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam1->f_6))
		{
			unk_0x4F7D8A9BFB0B43E9(iParam1->f_6, false);
		}
		unk_0x3DDA37128DD1ACA8(false);
		unk_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		unk_0x4F7D8A9BFB0B43E9(iParam0, true);
	}
}

int func_58(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_40(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam1);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_60(iParam2), true);
}

int func_60(int iParam0)
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

void func_61(int* iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x9CD27B0045628463();
}

int func_62(int* iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0->f_16))
	{
		if (unk_0x9072C8B49907BFAD(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int* iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_64(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
	{
		if (func_11() && !func_37())
		{
			return 1;
		}
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9CD27B0045628463();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xA7C4F2C6E744A550(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
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
	return 0;
}

void func_67(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		unk_0xCF708001E1E536DD(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
		{
			iVar3++;
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					unk_0xD75ACCF5E0FB5367(uParam0->f_17[bVar0], true, -1, 0);
				}
				if (bVar0 == 2)
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
			{
				unk_0xD75ACCF5E0FB5367(uParam0->f_17[bVar0], false, -1, 0);
			}
			if (bVar0 == 2)
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x7239B21A38F536BA(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, false, iVar16);
			if (unk_0x4C241E39B23DF959(iVar15, false))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0x4C241E39B23DF959(uParam0->f_21, false))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || !bParam17)
					{
						if (func_66(uParam0->f_21, uParam0, iVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470) == 7 && !func_83(uParam0->f_17[bVar0], uParam0->f_21))
									{
										if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], true);
											unk_0xC20E50AA46D09CA8(uParam0->f_17[bVar0], uParam0->f_21, 60000, bVar0, 1f, 1, 0);
											unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					if (!unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]) && !uParam0->f_15)
					{
						unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
					}
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
					{
						if (func_81(uParam0, uParam0->f_17[bVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_43());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_80(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(iParam10))
		{
			iVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_63(uParam0, 2))
					{
						bVar17 = false;
						iVar18 = 0;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
							{
								bVar17++;
							}
							bVar0++;
						}
						iVar18 = unk_0xD53343AA4FB7DD28(false, bVar17);
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar18]))
						{
							func_59(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_61(uParam0, "MORE_SEATS", 0);
						unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 13);
			func_67("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(iParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_63(uParam0, 2))
					{
						iVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_79(iVar10, uParam0))
						{
							func_61(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_67("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x4C241E39B23DF959(iParam10, false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
			{
				if (unk_0x580417101DDB492F(0, 75))
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[bVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
				{
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], true);
					}
					else
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], false);
					}
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						iVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iVar10, false))
						{
							if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
							{
								if (!func_80(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_78(uParam0->f_17[bVar0]))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x5F9532F3B5CC2551(iVar10, false))
						{
							if (unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], iVar10))
							{
								if (unk_0xCFB0A0D8EDD145A3(iVar10) && !unk_0xB104CD1BABF302E2(iVar10))
								{
									Var19 = { unk_0x3FEF770D40960D5A(iVar10, true) };
									if (Var19.f_2 < -1f)
									{
										unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
					{
						if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
						{
							iVar10 = unk_0x9A9112A0FE9A4713(uParam0->f_17[bVar0], false);
							if (!unk_0x5F9532F3B5CC2551(iVar10, false))
							{
								if (unk_0x4C241E39B23DF959(iParam10, false))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar10))
										{
											if (unk_0xD5037BA82E12416F(iVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], iVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
									{
										iVar20 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									}
									if (unk_0x4C241E39B23DF959(iVar20, false))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xD5037BA82E12416F(iVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], iVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
					{
						iVar21 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(iVar21))
						{
							if (func_66(iVar21, uParam0, 0))
							{
								if (func_77(bVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
									func_44(bVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(bVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(iVar21) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 2);
								}
								func_76(bVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()) && !func_75(uParam0->f_17[bVar0], iParam10)) && !func_74(uParam0->f_17[bVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]))
								{
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_43());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								uParam0->f_11 = unk_0x9CD27B0045628463();
								uParam0->f_1[bVar0] = func_50(uParam0->f_17[bVar0], 0, 0);
								unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_57(uParam0->f_1[bVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
					{
						if (((func_54(uParam0->f_17[bVar0], 1) || func_75(uParam0->f_17[bVar0], iParam10)) || iParam12) || (unk_0x4C241E39B23DF959(iParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
								func_67(uVar12[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(uParam0->f_1[bVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x4C241E39B23DF959(iParam10, false))
					{
						if (!unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], iParam10))
						{
							if ((unk_0x751B70C3D034E187(uParam0->f_17[bVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
							{
								if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
								{
									if (!unk_0xA3EE4A07279BB9DB(uParam0->f_17[bVar0], iParam10, false))
									{
										if (!func_54(uParam0->f_17[bVar0], 1))
										{
											if (func_53(uParam0->f_17[bVar0]))
											{
												iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x504D54DF3F6F2247(uParam0->f_17[bVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
										}
									}
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7 && !func_83(uParam0->f_17[bVar0], iParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_73(uParam0->f_17[bVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
											}
											unk_0xC20E50AA46D09CA8(uParam0->f_17[bVar0], iParam10, 60000, bVar0, 2f, 1, 0);
											unk_0xBC0ED94165A48BC2(uParam0->f_17[bVar0], false);
										}
									}
									else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false))
									{
										uParam0->f_1[bVar0] = func_50(uParam0->f_17[bVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
							{
								if (func_81(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
									{
										iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_43());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_43());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_43()) && !unk_0x28D3FED7190D3A0B(iParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_67(uVar12[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				iVar1++;
			}
			bVar0++;
		}
		if (!func_63(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
						{
							if (func_78(uParam0->f_17[bVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_78(uParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = unk_0x9CD27B0045628463();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_61(uParam0, sParam7, 0);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_72(bVar0, uParam0))
									{
										if (!unk_0xF22B6C47C6EAB066(uVar13[bVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar13[bVar0], ""))
											{
												func_70(uParam0, uVar12[bVar0], uVar13[bVar0], 0);
												func_69(bVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_72(bVar0, uParam0))
										{
											func_61(uParam0, uVar12[bVar0], 0);
											func_69(bVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xE80492A9AC099A93(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_67(uVar12[bVar0]);
				}
				bVar0++;
			}
			func_67("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_69(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 16);
			break;
	}
}

void func_70(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_71(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_71(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

int func_72(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_73(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
		if (!unk_0x5F9532F3B5CC2551(iVar0, false))
		{
			if (unk_0xD5037BA82E12416F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x9BB01E3834671191(iParam0, func_43()))
		{
			iVar0 = unk_0xF92691AED837A5FC(iParam0);
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0x751B70C3D034E187(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_76(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 19);
			break;
	}
}

int func_77(bool bParam0, var uParam1)
{
	switch (bParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				iVar1 = unk_0x6094AD011A2EA87D(iParam0);
				if (unk_0x4C241E39B23DF959(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, 20f, 20f, 20f, false, true, 0) && unk_0x751B70C3D034E187(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
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

int func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (unk_0x9F47B058362C84B5(iParam0) == joaat("bus") || unk_0x9F47B058362C84B5(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xBB40DD2270B65366(iParam0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xBB40DD2270B65366(iParam0, true, false);
			if (!unk_0x84A2DD9AC37C35C1(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xBB40DD2270B65366(iParam0, 2, false);
			if (!unk_0x84A2DD9AC37C35C1(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(var uParam0)
{
	int iVar0;
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_66(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam1))
	{
		if (unk_0x826AA586EDB9FEF8(iParam1))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam1, false);
			if (!unk_0x5F9532F3B5CC2551(iVar0, false))
			{
				if (unk_0x4C241E39B23DF959(iVar0, false))
				{
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar0))
					{
						if (func_80(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (func_66(iVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(iVar0, false))
						{
							if (func_82(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_82(int iParam0)
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			iVar0 = unk_0x6094AD011A2EA87D(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		iVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			iVar1 = unk_0xBB40DD2270B65366(iVar0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(iVar1))
			{
				if (iVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(iVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(iVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(iVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_85(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 32, false);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 305, true);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 268, true);
					unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 25);
	}
}

void func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
				{
					unk_0x6373D1349925A70E(uParam0->f_17[iVar0], false);
					unk_0x0EB0585D15254740(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
			{
				unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), false);
				unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), false);
			}
		}
	}
}

Vector3 func_87()
{
	struct<3> Var0;
	
	return Var0;
}

int func_88(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x963D27A58DF860AC(bParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x9CD27B0045628463();
		(uParam0[iVar1 /*5*/])->f_4 = bParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_89(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0xE532F5D78798DAAB(bParam1);
					func_90(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_91(int* iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (unk_0xB1632E9A5F988D11(*iParam0))
		{
			unk_0x961AC54BF0613F5D(*iParam0, true, true);
		}
		if (!bParam1)
		{
			unk_0x3AE22DEB5BA5A3E6(iParam0);
		}
		else
		{
			unk_0xADBE4809F19F927A(*iParam0);
		}
	}
}

float func_92(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam2);
}

void func_93(int iParam0)
{
	char* sVar0;
	
	unk_0x706D57B0F50DA710("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!func_97())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_96())
	{
		func_337();
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, false, false, 0))
	{
		func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_332();
	unk_0x1090044AD1DA76FA();
}

void func_94(struct<3> Param0, float fParam1)
{
	if (func_95(Global_78559, 0f, 0f, 0f, 0))
	{
		Global_78559 = { Param0 };
		Global_78562 = fParam1;
	}
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_96()
{
	if (Global_100441 == 7)
	{
		return 1;
	}
	return 0;
}

int func_97()
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

void func_98(char* sParam0)
{
	func_106(sParam0);
	func_99(0);
}

void func_99(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_100(iVar0))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_105();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_104(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6(), 0);
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
	func_101(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xDA66D2796BA33F12(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_103(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_102(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_102(var uParam0)
{
	*uParam0 = -15;
}

int func_103(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_103(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_103(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_105()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_24())
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
			switch (func_24())
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

void func_106(char* sParam0)
{
	if (!unk_0xCA042B6957743895(sParam0))
	{
		if (unk_0xF030907CCBB8A9FD(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x1897CA71995A90B4())
			{
				unk_0x071A5197D6AFC8B3();
			}
		}
	}
}

int func_107(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x0C515FAB3FF9EA92("FinaleC2", unk_0x442E0A7EDE4A738A()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_193(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = func_191(unk_0x442E0A7EDE4A738A(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_189(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xC900596A63978C1D(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = func_184(unk_0x442E0A7EDE4A738A(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_183(iVar4)}, 4);
				unk_0xC900596A63978C1D(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = func_182(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_109(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x0C515FAB3FF9EA92(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_109(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_110(&Global_106934, unk_0x442E0A7EDE4A738A(), iParam0, uParam1, iParam3, iParam2);
}

void func_110(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_24();
	uParam0->f_1 = func_171();
	unk_0xF3BBE884A14BB413(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_145(&(uParam0->f_2884), 0);
		func_144(unk_0xD80958FC74E988A6());
		func_137(unk_0xD80958FC74E988A6(), 0);
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_136())
		{
			func_129(unk_0xD80958FC74E988A6(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_112(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_111(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_111(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_112(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xD80958FC74E988A6();
	}
	if (unk_0x7239B21A38F536BA(iParam2))
	{
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_126(iParam2, &iVar0, iParam3, iParam5))
	{
		func_113(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x7239B21A38F536BA(iVar0))
	{
		if (!unk_0x5F9532F3B5CC2551(iVar0, false))
		{
			if (unk_0x423E8DE37D934D89(iVar0, joaat("skylift")) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iVar0, false))
			{
				func_113(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_113(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x4C241E39B23DF959(iParam2, false))
	{
		func_115(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_114(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	func_121(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_118(iParam1, 145, 0);
	uParam0->f_11 = func_117(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_116(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x3FEF770D40960D5A(iParam1, true) };
		uParam0->f_6 = unk_0xE83D4F9BA2A38914(iParam1);
		uParam0->f_3 = { unk_0x4805D2B1D8CF94A9(iParam1) };
		if (unk_0x51210CED3DA1C78A(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if (iParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || unk_0x9F47B058362C84B5(iParam0) == func_119(iParam1, iParam2))
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

int func_119(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_26(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_120(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_121(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		func_125(uParam1);
		uParam1->f_66 = unk_0x9F47B058362C84B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(iParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(iParam0);
		unk_0xA19435F193E081AC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x0EE21293DAD47C95(iParam0);
		uParam1->f_67 = unk_0x2BB9230590DA5E8A(iParam0);
		uParam1->f_69 = unk_0xB3ED1BFB4BE636DC(iParam0);
		uParam1->f_70 = unk_0x25BC98A59C2EA962(iParam0);
		unk_0x8389CD56CA8072DC(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7619EEE8C886757F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8C4B92553E4766A5(iParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 28);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 29);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 30);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_124(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			uParam1->f_68 = unk_0xF8C397922FC03F41(iParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_66))
		{
			if (unk_0x4198AB0022B15F87(iParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(iParam0))
				{
					case 3:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 10);
		}
		if (unk_0xF095C0405307B21B(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 13);
			unk_0xB64CF2CCA9D95F52(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x910A32E7AAD2656C(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 12);
		}
		func_123(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_122(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 11);
		}
		if (unk_0x05661B80A8C9165F(iParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 27);
		}
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_123(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < *uParam1)
	{
		bVar1 = bVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			(*uParam1)[bVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*iParam0, bVar1))
			{
				(*uParam1)[bVar0] = 1;
			}
		}
		else if (bVar1 == 22)
		{
			if (unk_0x84B233A8C8FC8AE7(*iParam0, bVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[bVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[bVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[bVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[bVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[bVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[bVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[bVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[bVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[bVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[bVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[bVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[bVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[bVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[bVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[bVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[bVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[bVar0] = unk_0x772960298DA26FDB(*iParam0, bVar0) + 1;
			if (bVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*iParam0, bVar0);
			}
			else if (bVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*iParam0, bVar0);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_125(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_126(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			if (iParam0 == unk_0xD80958FC74E988A6())
			{
				*uParam1 = unk_0xB6997A7EB3F5C8C0();
			}
			else
			{
				*uParam1 = unk_0x9A9112A0FE9A4713(iParam0, true);
			}
			if (unk_0x7239B21A38F536BA(*uParam1))
			{
				if (unk_0x4C241E39B23DF959(*uParam1, false))
				{
					if (iParam2 == 0 || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(*uParam1, true), unk_0x3FEF770D40960D5A(iParam0, true), true) < 100f)
					{
						if (unk_0x423E8DE37D934D89(*uParam1, joaat("taxi")))
						{
							if (unk_0xBB40DD2270B65366(*uParam1, -1, false) != iParam0 && unk_0xBB40DD2270B65366(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_127(*uParam1, func_24(), 1))
						{
							sVar0 = unk_0x442E0A7EDE4A738A();
							if (!unk_0x0C515FAB3FF9EA92(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x997ABD671D25CA0B(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x05661B80A8C9165F(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xDACE671663F2F5DB(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x423E8DE37D934D89(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_128(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		iVar0 = func_27(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_135(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_134(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_26(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x10FAB35428CCC9D7() && unk_0x9F47B058362C84B5(iParam0) == unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
			uParam1->f_60 = func_130(754, iParam3, 0);
			uParam1->f_61 = func_130(755, iParam3, 0);
		}
		if (unk_0x10FAB35428CCC9D7() && iParam0 == unk_0xD80958FC74E988A6())
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_131(iParam1)];
		if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_132();
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

var func_132()
{
	return Global_1574918;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x898CC20EA75BACD8(iParam0, iParam1);
		*uParam3 = unk_0xE131A28626F81AB2(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xF33BDFE19B309B19(iParam0) && unk_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = unk_0x451294E859ECC018(iParam0);
					*uParam3 = unk_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x67F3780DD425D4FC(iParam0, iParam1);
		*uParam3 = unk_0x04A355E041E004E6(iParam0, iParam1);
		*uParam4 = unk_0xE3DD5F2A84B42281(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_136()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (iParam0 == unk_0xD80958FC74E988A6())
		{
			func_138(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xA48931185F0536FE();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6E9C742F340CE5A2(unk_0x4F8644AF03D0E0D6(), &bVar3);
			if (iVar0 == 0)
			{
				unk_0xB3271D7AB655B441(joaat("sp0_parachute_current_tint"), bVar3, true);
			}
			else if (iVar0 == 1)
			{
				unk_0xB3271D7AB655B441(joaat("sp1_parachute_current_tint"), bVar3, true);
			}
			else if (iVar0 == 2)
			{
				unk_0xB3271D7AB655B441(joaat("sp2_parachute_current_tint"), bVar3, true);
			}
		}
	}
}

void func_138(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_143(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xEFFED78E9011134D(iParam0, func_143(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x015A522136D7F951(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x2B9EEDC07BD06B9F(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_141(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC593212475FAE340(iParam0, Var4.f_0, iVar2))
						{
							unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_141(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_140(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0xD4D7B033C3AA243C(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x015A522136D7F951(iParam0, Var4.f_0);
					if (unk_0x8DECB02F88F428BC(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = unk_0x2B9EEDC07BD06B9F(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDC16122C7A20C933(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, bVar1, &Var8))
						{
							if (!func_139(Var8.f_3))
							{
								if (unk_0xC593212475FAE340(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x933D6A9EEC1BACD0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8DECB02F88F428BC(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = false;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_139(int iParam0)
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

int func_140(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case -610080759:
			case 1853742572:
			case -774507221:
				return 1;
				break;
			}
	}
	return 0;
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
					bVar2 = false;
					while (bVar2 < unk_0x405425358A7D61FE(iVar1))
					{
						if (unk_0x6CF598A2957C2BF8(iVar1, bVar2, &Var5))
						{
							if (!func_139(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
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

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = unk_0x9483AF821605B1D8(iParam0);
	}
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	uParam0->f_3 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
	uParam0->f_5 = unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6());
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		uParam0->f_4 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x2C83A9DA6BFFC4F9(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0x05B7A89BD78797FC(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_148(&iVar0))
		{
			if (func_147(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = func_24();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_146(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_146(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEEA5AC2EDA7C33E8(Param0))
	{
		iVar0 = unk_0x05B7A89BD78797FC(Param2, sParam1);
		if (!unk_0x26B0E73D7EAAF4D3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xEC4CF9FCB29A4424(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_147(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_95(*uParam1, 0f, 0f, 0f, 0);
}

int func_148(var uParam0)
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_170())
		{
			*uParam0 = func_154(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 6, -1, 0, 1, -1);
			if (func_153(*uParam0) && !func_149(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, 0, 1);
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
		if (func_152() == 0)
		{
			return BitTest(func_130(func_151(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_151(int iParam0)
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

int func_152()
{
	return Global_31959;
}

int func_153(int iParam0)
{
	return func_150(iParam0, 5, 1);
}

int func_154(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_169(iVar0))
		{
			if (!bParam3 || func_168(iVar0))
			{
				fVar1 = unk_0xF1B760881820C952(Param0, func_155(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_155(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_165(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_18())
			{
				if (func_164(Global_1853185))
				{
					return func_157(2, 2);
				}
				else if (func_156(Global_1853185))
				{
					return func_157(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[unk_0x4F8644AF03D0E0D6() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_156(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_157(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_18())
	{
		if (iParam1 == 3)
		{
			if (func_158(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_158(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_158(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_163(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_163(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_161(iParam0) };
	}
	else
	{
		Var2 = { func_160(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_159(Var3, -Var0.f_3.f_2) };
	Var3 = { func_159(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0x163E252DE035A133(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_159(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x0BADBFA3B172435F(fParam1);
	fVar2 = unk_0xD0FFB162F40A139C(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_160(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_161(int iParam0)
{
	return func_162(iParam0);
}

struct<6> func_162(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_163(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_165(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_166() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_166()
{
	return func_167(unk_0x4F8644AF03D0E0D6());
}

int func_167(bool bParam0)
{
	return unk_0x53158863FCC0893A(Global_2689235[bParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_168(int iParam0)
{
	return func_150(iParam0, 0, 0);
}

int func_169(int iParam0)
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

bool func_170()
{
	return Global_100493.f_375 > 0;
}

var func_171()
{
	var uVar0;
	
	func_181(&uVar0, unk_0x494E97C2EF27C470());
	func_180(&uVar0, unk_0x13D2B8ADD79640F2());
	func_179(&uVar0, unk_0x25223CA6B4D20B7F());
	func_174(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_173(&uVar0, unk_0xBBC72712E80257A1());
	func_172(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_172(var uParam0, int iParam1)
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

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (bParam1 < 1 || bParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_175(int iParam0, int iParam1)
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

var func_176(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_177(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)
{
	return uParam0 & 15;
}

void func_179(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_180(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_181(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_182(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x0C515FAB3FF9EA92("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_183(int iParam0)
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

int func_184(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = unk_0xD24D37CC275948CC(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_185(iVar0, &sVar1);
		if (unk_0xD24D37CC275948CC(sVar1) == bVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_183(iParam0) };
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

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_190(Global_113386.f_9085.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_190(Global_113386.f_9085.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_190(Global_113386.f_9085.f_99.f_205[11]);
			break;
		
		case 90:
			return func_190(Global_113386.f_9085.f_99.f_205[7]);
			break;
		
		case 93:
			return func_190(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_191(char* sParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xD24D37CC275948CC(sParam0);
	iVar1 = func_192(bVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_192(bool bParam0, bool bParam1)
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

void func_193(bool bParam0)
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

void func_194()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1978)
	{
		case 0:
			func_228(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0xD4E8E24955024033(800);
			}
			func_226(&Local_58, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (unk_0x98A4EB5D89A0C952(joaat("packer")) && unk_0x98A4EB5D89A0C952(joaat("armytrailer")))
			{
				func_108(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_225(587, 0);
				func_224(&uLocal_78, 1, 0, "FLOYD", 0, 1);
				func_223(6, 0);
				Local_53[2 /*2*/] = unk_0xAF35D0D2583051B0(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, true, true, false);
				unk_0x31B927BBC44156CD(Local_53[2 /*2*/], false);
				unk_0x92F0CF722BC4202F(Local_53[2 /*2*/], true);
				unk_0x33E8CD3322E2FE31(Local_53[2 /*2*/], 0);
				unk_0xEB9DC3C7D8596C46(Local_53[2 /*2*/], false);
				Local_53[1 /*2*/] = unk_0xAF35D0D2583051B0(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, true, true, false);
				unk_0x3C7D42D58F770B54(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
				unk_0x95CF53B3D687F9FA(Local_53[1 /*2*/]);
				unk_0xEB9DC3C7D8596C46(Local_53[1 /*2*/], false);
				unk_0x92F0CF722BC4202F(Local_53[1 /*2*/], true);
				iLocal_248 = 0;
				unk_0x1B5C85C612E5256E(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, false, true, true, true);
				iLocal_257 = 1;
				unk_0xB9EFD5C25018725A("OnlyAllowScriptTriggerPoliceScanner", false);
				iLocal_1978++;
			}
			break;
		
		case 1:
			if (func_222())
			{
				func_221(&uLocal_309, cLocal_49);
				func_221(&uLocal_309, cLocal_50);
				iLocal_261 = -1;
				iLocal_262 = 0;
				iLocal_1978++;
			}
			break;
		
		case 2:
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false))
			{
				switch (iLocal_262)
				{
					case 0:
						if (!unk_0x4D79439A6B55AC67())
						{
							if (iLocal_261 == -1)
							{
								iLocal_261 = unk_0x9CD27B0045628463() + 5000;
							}
							if (unk_0x9CD27B0045628463() > iLocal_261)
							{
								func_220("DKP1_SUBTURN", -1);
								iLocal_262++;
							}
						}
						break;
					
					case 1:
						if (!unk_0x4D79439A6B55AC67())
						{
							func_220("SUB_HELP", -1);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0)
				{
					iLocal_261 = -1;
				}
				if (unk_0x4D79439A6B55AC67())
				{
					if (func_219("DKP1_SUBTURN") || func_219("SUB_HELP"))
					{
						unk_0x8DFCED7A656F8802(true);
					}
				}
			}
			if (unk_0x679BE1DAF71DA874(Local_53[0 /*2*/], 3, 10000))
			{
				func_93(1);
			}
			if (func_92(unk_0xD80958FC74E988A6(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (unk_0x1F1F957154EC51DF("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_306 = true;
				}
				func_91(&(Local_57[2 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				unk_0xA4718A1419D18151();
				bLocal_306 = false;
			}
			if (func_107(Local_54[6 /*10*/]))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || unk_0xBBCCE00B381F8482(Local_54[6 /*10*/])) || func_10(unk_0xD80958FC74E988A6(), Local_54[6 /*10*/], 1) > 100f)
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[6 /*10*/]);
					func_9(&(Local_54[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[7 /*10*/]))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || unk_0xBBCCE00B381F8482(Local_54[7 /*10*/])) || func_10(unk_0xD80958FC74E988A6(), Local_54[7 /*10*/], 1) > 100f)
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[7 /*10*/]);
					func_9(&(Local_54[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || unk_0xBBCCE00B381F8482(Local_54[4 /*10*/])) || func_10(unk_0xD80958FC74E988A6(), Local_54[4 /*10*/], 1) > 100f)
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
					func_9(&(Local_54[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[5 /*10*/]))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || unk_0xBBCCE00B381F8482(Local_54[5 /*10*/])) || func_10(unk_0xD80958FC74E988A6(), Local_54[5 /*10*/], 1) > 100f)
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[5 /*10*/]);
					func_9(&(Local_54[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_226(&Local_58, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((unk_0xA6DB27D19ECBB7DA(Local_58.f_5) && unk_0x51210CED3DA1C78A(Local_53[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, false, true, 0)) && func_218(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/])))
			{
				if (func_107(Local_53[2 /*2*/]) && func_107(Local_53[1 /*2*/]))
				{
					func_217(&Local_58, 0);
					func_216(6, 0);
					unk_0x706D57B0F50DA710("DHP1_STOP");
					func_215(0, -1);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 256);
					iLocal_301 = unk_0x9CD27B0045628463();
					iLocal_1978++;
				}
			}
			else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0 && unk_0xA6DB27D19ECBB7DA(Local_58.f_5))
			{
				unk_0x28477EC23D892089(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, false, false, 2, false, 0, 0, false);
			}
			break;
		
		case 3:
			if (func_82(Local_53[0 /*2*/]) || (unk_0x9CD27B0045628463() - iLocal_301) > 3500)
			{
				iLocal_293 = unk_0x6ABFA3E16460F22D(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, false, 2);
				unk_0x026FB97D0A425F84(iLocal_293, true);
				unk_0x6A25241C340D3822(iLocal_293, "HAND_SHAKE", 0.4f);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_209(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_88(&uLocal_309, joaat("prop_tarp_strap"));
				unk_0x06843DA7060A026B(Local_53[0 /*2*/], Local_276, true, false, false, true);
				unk_0x8E2530AA8ADA980E(Local_53[0 /*2*/], fLocal_277);
				iLocal_301 = unk_0x9CD27B0045628463();
				iLocal_275 = 0;
				unk_0x293220DA1B46CEBC(8f, 0f, 4);
				iLocal_1978++;
			}
			else
			{
				func_46(Local_53[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_199())
			{
				iLocal_1978++;
			}
			break;
		
		case 5:
			if (unk_0xC59F528E9AB9F339() && unk_0x98A4EB5D89A0C952(joaat("prop_tarp_strap")))
			{
				unk_0xE40C1C56DF95C2E8(Local_53[2 /*2*/], "DockHeist_truck", 0, false, 0);
				unk_0xE40C1C56DF95C2E8(Local_53[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				unk_0xE40C1C56DF95C2E8(Local_53[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				unk_0xE40C1C56DF95C2E8(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				unk_0xE40C1C56DF95C2E8(0, "Floyd", 2, joaat("ig_floyd"), 0);
				unk_0x2A56C06EBEF2B0D9("Trevor", unk_0xD80958FC74E988A6(), false);
				unk_0x34E710FF01247C5A(Local_53[2 /*2*/], 1);
				unk_0x31B927BBC44156CD(Local_53[2 /*2*/], true);
				func_198(0);
				unk_0x48621C9FCA3EBD28(4);
				unk_0x8093F23ABACCC7D4(false, false, true, false);
				unk_0x186D5CB5E7B0FF7B(0);
				iLocal_1978++;
			}
			break;
		
		case 6:
			if (unk_0xD3C2E180A40F031E())
			{
				if (unk_0x88A741E44A2B3495("PO1_08_sub_waterplane"))
				{
					unk_0xEE6C5AD3ECE0A82D("PO1_08_sub_waterplane");
				}
			}
			if (unk_0xB2CBCD0930DFB420(false))
			{
				unk_0xB4EC2312F4E5B1F1(0f);
				unk_0x6D0858B8EDFD2B7D(0f, 1f);
				unk_0xA0EBB943C300E693(true);
				unk_0xA6294919E56FF02A(true);
				unk_0x81CBAE94390F9F89();
			}
			if (!unk_0x7239B21A38F536BA(Local_54[3 /*10*/]))
			{
				if (unk_0x7239B21A38F536BA(unk_0xC0741A26499654CD("Floyd", 0)))
				{
					Local_54[3 /*10*/] = unk_0x04A2A40C73395041(unk_0xC0741A26499654CD("Floyd", 0));
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					unk_0xC80A74AC829DDD92(Local_54[3 /*10*/], iLocal_259);
				}
			}
			if (unk_0x4C6A6451C79E4662("Trevor", false))
			{
				iLocal_295 = 1;
			}
			if (unk_0x4C6A6451C79E4662("Floyd", false))
			{
				iLocal_296 = 1;
			}
			if (unk_0x4C6A6451C79E4662("DockHeist_truck", false))
			{
				unk_0xE023E8AC4EF7C117(Local_53[2 /*2*/], true, false, false);
				unk_0x781B3D62BB013EF5(Local_53[2 /*2*/], true);
				iLocal_297 = 1;
			}
			if (unk_0x4C6A6451C79E4662("DockHeist_trailer", false))
			{
				unk_0xE023E8AC4EF7C117(Local_53[1 /*2*/], true, false, false);
				iLocal_300 = 1;
			}
			if (unk_0x4C6A6451C79E4662("submarine", false))
			{
				iLocal_298 = 1;
			}
			if (unk_0x4C6A6451C79E4662("sub_cover", false))
			{
				iLocal_299 = 1;
			}
			else if (!unk_0x7239B21A38F536BA(Local_57[4 /*2*/]))
			{
				if (unk_0x7239B21A38F536BA(unk_0xC0741A26499654CD("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[4 /*2*/] = unk_0xD7E3B9735C0F89D6(unk_0xC0741A26499654CD("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0xB91B4C20085BD12F(Local_53[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (unk_0xE625BEABBAFFDAB9() >= 14200)
					{
						unk_0x34E710FF01247C5A(Local_53[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (unk_0x5A859503B0C08678() || unk_0x7350823473013C02(Local_54[3 /*10*/]))
				{
					unk_0xF75B0D629E1C063D(Local_54[3 /*10*/], Local_53[2 /*2*/], false);
					unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), Local_53[2 /*2*/], -1);
					unk_0x16B5E274BDE402F8(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0x31B927BBC44156CD(Local_53[0 /*2*/], false);
					unk_0x781B3D62BB013EF5(Local_53[0 /*2*/], true);
					unk_0xB664292EAECF7FA6(Local_53[0 /*2*/], 10);
					unk_0x2497C4717C8B881E(Local_53[0 /*2*/], false, true, false);
					unk_0x34E710FF01247C5A(Local_53[0 /*2*/], 1);
					unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], false);
					unk_0x6B9BBD38AB0796DF(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					Local_57[5 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
					unk_0x6B9BBD38AB0796DF(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					func_197(1, 0, 0, 3000, 0);
					func_196(&uLocal_309);
					iLocal_1978++;
				}
			}
			break;
		
		case 7:
			func_195(2);
			iLocal_1978 = 0;
			break;
	}
	if (unk_0xA6DB27D19ECBB7DA(Local_58.f_5))
	{
		unk_0x4F7D8A9BFB0B43E9(Local_58.f_5, false);
	}
	if (func_107(unk_0xD80958FC74E988A6()) && func_107(Local_53[0 /*2*/]))
	{
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 324.7653f, -2974.495f, -1f, true) > 2500f)
		{
			func_93(9);
		}
	}
}

int func_195(int iParam0)
{
	if (iLocal_1976 == 0)
	{
		iLocal_1979 = iParam0;
		iLocal_1976 = 1;
		return 1;
	}
	return 0;
}

void func_196(var uParam0)
{
	if (uParam0->f_885)
	{
		if (uParam0->f_885.f_1)
		{
			unk_0x88C6814073DD4A73();
			func_90(&(uParam0->f_885));
		}
		else
		{
			uParam0->f_885.f_2 = 1;
			uParam0->f_1007 = 1;
		}
	}
}

void func_197(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), bParam0, iParam4);
	unk_0x07E5B515DB0636FC(bParam1, bParam2, bParam3, true, false, 0);
	if (!bParam1)
	{
		unk_0x8E5FB15663F79120(false);
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x3B988190C0AA6C0B(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), true);
	}
}

void func_198(int iParam0)
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_199()
{
	float fVar0;
	
	switch (iLocal_275)
	{
		case 0:
			func_208();
			unk_0x06843DA7060A026B(Local_53[0 /*2*/], Local_276, true, false, false, true);
			unk_0x8E2530AA8ADA980E(Local_53[0 /*2*/], fLocal_277);
			unk_0x428CA6DBD1094446(Local_53[0 /*2*/], true);
			iLocal_245 = unk_0x1AE42C1660FD6517("scr_pls_sub_water_drips", Local_53[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			unk_0x5F0C4B5B1C393BE2(iLocal_245, "flow", 1f, false);
			unk_0x7A86743F475D9E09("dhp1_mcs_1", 8);
			if (bLocal_306)
			{
				unk_0x58FCE43488F9F5F4();
			}
			if (unk_0x25223CA6B4D20B7F() >= 20 || unk_0x25223CA6B4D20B7F() <= 7)
			{
				unk_0x41B4893843BBDB74("PO1_08_sub_waterplane");
			}
			func_206(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_275++;
			break;
		
		case 1:
			Local_287 = { unk_0x3FEF770D40960D5A(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 1f)
			{
				unk_0x428CA6DBD1094446(Local_53[0 /*2*/], false);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				unk_0x6B9BBD38AB0796DF(Local_53[0 /*2*/], Local_57[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
				iLocal_275++;
			}
			else
			{
				func_205(1, 2f);
			}
			break;
		
		case 2:
			Local_287 = { unk_0x3FEF770D40960D5A(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 >= 12.5f)
			{
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_292 = unk_0xC520A34DAFBF24B1(iLocal_293);
				unk_0xC7848EFCCC545182(iLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_205(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_283 >= 40f)
			{
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				unk_0xC7848EFCCC545182(iLocal_293, fLocal_292);
				fLocal_283 = 80f;
				unk_0x961AC54BF0613F5D(Local_57[7 /*2*/], true, true);
				unk_0x6B9BBD38AB0796DF(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				unk_0x239A3351AC1DA385(Local_57[8 /*2*/], unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_285), false, false, true);
				iLocal_1984 = unk_0x9CD27B0045628463();
				iLocal_275++;
			}
			else
			{
				func_204(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_283 >= 108f)
			{
				unk_0xA76359FC80B2438E(1f);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				unk_0xD93DB43B82BC0D00(iLocal_293, 0.25f);
				unk_0x961AC54BF0613F5D(Local_57[7 /*2*/], true, true);
				unk_0x6B9BBD38AB0796DF(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				unk_0x239A3351AC1DA385(Local_57[8 /*2*/], unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_285), false, false, true);
				if (unk_0x74AFEF0D2E1E409B(iLocal_245))
				{
					unk_0x8F75998877616996(iLocal_245, false);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - func_203((unk_0xBBDA792448DB5A89((unk_0x9CD27B0045628463() - iLocal_1984 + 1500)) / 3000f), 0f, 1f));
				unk_0x5F0C4B5B1C393BE2(iLocal_245, "flow", fVar0, false);
				func_204(1, 5.5f);
			}
			break;
		
		case 5:
			unk_0xA76359FC80B2438E(1f);
			Local_287 = { unk_0x3FEF770D40960D5A(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 11f)
			{
				unk_0x961AC54BF0613F5D(Local_53[0 /*2*/], true, true);
				iLocal_275++;
			}
			else
			{
				func_205(1, 1f);
			}
			break;
		
		case 6:
			if (unk_0x8BAD02F0368D9E14(Local_53[0 /*2*/]))
			{
				iLocal_1984 = unk_0x9CD27B0045628463() + 1000;
				iLocal_275++;
			}
			break;
		
		case 7:
			if (unk_0x9CD27B0045628463() > iLocal_1984)
			{
				unk_0x428CA6DBD1094446(Local_57[8 /*2*/], true);
				iLocal_275++;
			}
			else
			{
				func_204(0, 4f);
				func_205(0, 1f);
			}
			break;
		
		case 8:
			func_202(&uLocal_309);
			return 1;
			break;
	}
	if (unk_0x5A859503B0C08678())
	{
		if (iLocal_275 > 0 && iLocal_275 < 5)
		{
			if (func_200(1000))
			{
				unk_0x891B5B39AC6302AF(800);
			}
		}
	}
	else if (unk_0xB16FCE9DDC7BA182())
	{
		if (unk_0x74AFEF0D2E1E409B(iLocal_245))
		{
			unk_0x8F75998877616996(iLocal_245, false);
		}
		unk_0xDD19FA1C6D657305(unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), 30f);
		iLocal_1982 = 2;
		iLocal_1981 = 1;
	}
	return 0;
}

int func_200(int iParam0)
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
			if (func_201())
			{
				Global_27 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_201()
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

void func_202(var uParam0)
{
	if (unk_0xA41A05B6CB741B85())
	{
		unk_0xC197616D221FF4A4();
		func_90(&(uParam0->f_893));
	}
}

float func_203(float fParam0, float fParam1, float fParam2)
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

void func_204(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0x961AC54BF0613F5D(Local_57[7 /*2*/], true, true);
	unk_0x6B9BBD38AB0796DF(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	unk_0x239A3351AC1DA385(Local_57[8 /*2*/], unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_285), false, false, true);
}

void func_205(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		Local_285.f_2 = (Local_285.f_2 - (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		Local_285.f_2 = (Local_285.f_2 + (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0x239A3351AC1DA385(Local_57[8 /*2*/], unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_285), false, false, true);
}

int func_206(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_207(Param1) || func_207(Param2))
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if ((func_95(uParam0->f_893.f_4, Param1, 0) && func_95(uParam0->f_893.f_7, Param2, 0)) && uParam0->f_893.f_10 == fParam3)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
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
	else
	{
		unk_0x212A8D0D2BABFAC2(Param1, Param2, fParam3, iParam4);
		uParam0->f_893 = 1;
		uParam0->f_893.f_3 = unk_0x9CD27B0045628463();
		uParam0->f_893.f_4 = { Param1 };
		uParam0->f_893.f_7 = { Param2 };
		uParam0->f_893.f_10 = fParam3;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_207(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	if (iLocal_248)
	{
		unk_0x52B4829281364649(&(Local_55[0 /*5*/]));
		unk_0x52B4829281364649(&(Local_55[1 /*5*/]));
		unk_0x52B4829281364649(&(Local_55[2 /*5*/]));
		unk_0x52B4829281364649(&(Local_55[3 /*5*/]));
		iLocal_248 = 0;
	}
}

void func_209(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), bParam0, iParam6);
	unk_0xCC33FA791322B9D9();
	unk_0x8DFCED7A656F8802(true);
	unk_0x07E5B515DB0636FC(bParam2, bParam3, bParam5, true, false, 0);
	if (bParam4)
	{
		unk_0x0A1CB9094635D1A6(Param1, 500f, 0);
	}
	unk_0x056A8A219B8E829F(Param1, 300f);
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0x3B988190C0AA6C0B(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
	}
	if (bParam7)
	{
		func_210(0);
	}
}

void func_210(int iParam0)
{
	if (func_214())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_213())
		{
			func_211(1, 1);
		}
		else
		{
			func_211(0, 0);
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
	if (!func_21())
	{
		Global_20266.f_1 = 3;
	}
}

void func_211(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_212(0))
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

int func_212(int iParam0)
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

bool func_213()
{
	return BitTest(Global_1958711, 5);
}

bool func_214()
{
	return BitTest(Global_1958711, 19);
}

void func_215(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_216(bool bParam0, bool bParam1)
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			unk_0xE80492A9AC099A93(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

void func_217(int* iParam0, bool bParam1)
{
	func_42(iParam0, bParam1, 0);
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0) && !unk_0x5F9532F3B5CC2551(iParam0, false))
	{
		if (unk_0x7239B21A38F536BA(iParam1) && !unk_0x5F9532F3B5CC2551(iParam1, false))
		{
			if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_219(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_220(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_221(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!unk_0xCA042B6957743895(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (unk_0x0C515FAB3FF9EA92(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						unk_0xF66A602F829E2A06(sParam1);
						func_90(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_1007 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_222()
{
	if (!unk_0x7239B21A38F536BA(Local_57[6 /*2*/]))
	{
		Local_57[6 /*2*/] = unk_0x509D5878EB39E842(bLocal_278, Local_279, true, true, false);
		unk_0x06843DA7060A026B(Local_57[6 /*2*/], Local_279, true, false, false, true);
		unk_0x8E2530AA8ADA980E(Local_57[6 /*2*/], fLocal_280);
		unk_0x428CA6DBD1094446(Local_57[6 /*2*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[7 /*2*/]))
	{
		Local_57[7 /*2*/] = unk_0x509D5878EB39E842(bLocal_281, unk_0x1899F328B0E12848(Local_57[6 /*2*/], Local_282), true, true, false);
	}
	if (!unk_0xEFBE71898A993728(Local_57[7 /*2*/], Local_57[6 /*2*/]))
	{
		unk_0x6B9BBD38AB0796DF(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[8 /*2*/]))
	{
		Local_57[8 /*2*/] = unk_0x509D5878EB39E842(bLocal_284, unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_285), true, true, false);
		unk_0x3910051CCECDB00C(Local_57[8 /*2*/], false);
		unk_0x6B9BBD38AB0796DF(Local_57[8 /*2*/], Local_57[7 /*2*/], -1, Local_285, 0f, 0f, fLocal_286, false, false, false, false, 2, true, 0);
		unk_0x961AC54BF0613F5D(Local_57[8 /*2*/], true, false);
		unk_0x428CA6DBD1094446(Local_57[8 /*2*/], true);
	}
	if (!iLocal_249)
	{
		if (unk_0xDA95EA3317CC5064(Local_57[7 /*2*/]) && unk_0xDA95EA3317CC5064(Local_57[8 /*2*/]))
		{
			iLocal_290 = unk_0xE832D760399EB220(unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_288), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, false, false, true, 1f, false, 0);
			unk_0x36CCB9BE67B970FD(iLocal_290, true);
			unk_0xDC57A637A20006ED(iLocal_290, 2);
			unk_0xF159A63806BB5BA8(&iLocal_290, false);
			unk_0x3D95EC8B6D940AC3(iLocal_290, Local_57[7 /*2*/], Local_57[8 /*2*/], unk_0x1899F328B0E12848(Local_57[7 /*2*/], Local_288), unk_0x1899F328B0E12848(Local_57[8 /*2*/], Local_289), 70f, false, false, 0, 0);
			iLocal_249 = 1;
			return 1;
		}
		if (!unk_0xDA95EA3317CC5064(Local_57[7 /*2*/]))
		{
		}
		if (!unk_0xDA95EA3317CC5064(Local_57[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_223(bool bParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&Global_32118, bParam0);
	StringCopy(&(Global_32119[bParam0 /*6*/]), unk_0x442E0A7EDE4A738A(), 24);
	Global_32174[bParam0] = iParam1;
}

void func_224(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_225(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_226(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(iParam0, Param1, Param2, func_87(), func_87(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_227(), func_227(), func_227(), func_227(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_227()
{
	var uVar0;
	
	return uVar0;
}

void func_228(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					unk_0x77ED170667F50170(sParam1);
					func_90(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_1978)
	{
		case 0:
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0xD4E8E24955024033(800);
			}
			if (func_107(Local_53[0 /*2*/]))
			{
				if (!unk_0xA6DB27D19ECBB7DA(Local_53[0 /*2*/].f_1))
				{
					Local_53[0 /*2*/].f_1 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				Local_56 = { unk_0x8214A4B5A7A33612(Local_53[0 /*2*/]) };
			}
			if (unk_0x7239B21A38F536BA(Local_57[2 /*2*/]) && !unk_0xA6DB27D19ECBB7DA(iLocal_243))
			{
				iLocal_243 = func_279(Local_57[2 /*2*/]);
			}
			unk_0xEAA0FFE120D92784(iLocal_243, "SUBBTN_LABEL");
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				unk_0x706D57B0F50DA710("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0x706D57B0F50DA710("DHP1_START");
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				unk_0x9F8AA94D6D97DBF4(Local_54[4 /*10*/], true);
				unk_0x8E06A6FE76C9EFF4(Local_54[4 /*10*/], false);
			}
			func_278(&uLocal_309, cLocal_51);
			func_278(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_277(&uLocal_309, "PORT_OF_LS_PREP_1");
			func_35("dkp1_sub", 7500, 1);
			iLocal_264 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_268 = unk_0x9CD27B0045628463();
			iLocal_269 = 0;
			iLocal_253 = 0;
			iLocal_263 = 0;
			if (iLocal_1987[0] == -1)
			{
				iLocal_1987[0] = unk_0x430386FE9BF80B45();
			}
			if (iLocal_1987[1] == -1)
			{
				iLocal_1987[1] = unk_0x430386FE9BF80B45();
			}
			iLocal_1978++;
			break;
		
		case 1:
			if (iLocal_248)
			{
				if (((!unk_0x84DE3B5FB3E666F0(&(Local_55[0 /*5*/])) && !unk_0x84DE3B5FB3E666F0(&(Local_55[1 /*5*/]))) && !unk_0x84DE3B5FB3E666F0(&(Local_55[2 /*5*/]))) && !unk_0x84DE3B5FB3E666F0(&(Local_55[3 /*5*/])))
				{
					unk_0x5389D48EFA2F079A(Local_57[0 /*2*/]);
					unk_0x5389D48EFA2F079A(Local_57[1 /*2*/]);
					if (func_107(Local_53[0 /*2*/]))
					{
						unk_0xD8FA3908D7B86904(Local_53[0 /*2*/], Local_56);
					}
					if (unk_0xA6DB27D19ECBB7DA(iLocal_243))
					{
						unk_0x86A652570E5F25DD(&iLocal_243);
					}
					func_273(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_278(&uLocal_309, cLocal_49);
					unk_0x706D57B0F50DA710("DHP1_RELEASED");
					unk_0x8DFCED7A656F8802(true);
					iLocal_301 = unk_0x9CD27B0045628463();
					iLocal_1978 = 4;
				}
				func_272();
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, false, true, 0) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && !func_212(0))
				{
					if (unk_0x580417101DDB492F(2, 51))
					{
						iLocal_293 = unk_0x6ABFA3E16460F22D(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, true, 2);
						unk_0xBFD8727AEA3CCEBA(iLocal_293, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						unk_0x6A25241C340D3822(iLocal_293, "hand_shake", 0.3f);
						func_209(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
						unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
						iLocal_246 = unk_0x8C18E0F9080ADD73(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (unk_0x7C2AC9CA66575FBF(unk_0xD80958FC74E988A6()))
						{
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
						unk_0x8DFCED7A656F8802(true);
						iVar0 = unk_0xF73EB622C4F1689B(1249.787f, -3008.016f, 8.52751f, 5f, false, 4);
						if (func_107(iVar0))
						{
							unk_0x06843DA7060A026B(iVar0, 1250.333f, -3010.219f, 8.3191f, true, false, false, true);
							unk_0x8E2530AA8ADA980E(iVar0, 85.8086f);
							unk_0x49733E92263139D1(iVar0, 5f);
						}
						unk_0x293220DA1B46CEBC(4f, 0f, 4);
						unk_0x48621C9FCA3EBD28(4);
						iLocal_294 = 1;
						iLocal_1978++;
					}
					else if (!func_219("DKP1_BTN"))
					{
						func_271("DKP1_BTN");
					}
				}
				else if (func_219("DKP1_BTN"))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			break;
		
		case 2:
			if (!unk_0x25D39B935A038A26(iLocal_246) || unk_0xE4A310B1D7FA73CC(iLocal_246) == 1f)
			{
				unk_0x81CBAE94390F9F89();
				unk_0x8D8686B622B88120(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0, false);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, false, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				unk_0xD93DB43B82BC0D00(iLocal_293, 0.1f);
				unk_0xBCF3026912A8647D(Local_55[0 /*5*/], Local_53[0 /*2*/]);
				unk_0xBCF3026912A8647D(Local_55[1 /*5*/], Local_53[0 /*2*/]);
				unk_0xBCF3026912A8647D(Local_55[2 /*5*/], Local_53[0 /*2*/]);
				unk_0xBCF3026912A8647D(Local_55[3 /*5*/], Local_53[0 /*2*/]);
				unk_0x5389D48EFA2F079A(Local_57[0 /*2*/]);
				unk_0x5389D48EFA2F079A(Local_57[1 /*2*/]);
				if (func_107(Local_53[0 /*2*/]))
				{
					unk_0xD8FA3908D7B86904(Local_53[0 /*2*/], Local_56);
					unk_0x710311ADF0E20730(Local_53[0 /*2*/]);
				}
				iLocal_301 = unk_0x9CD27B0045628463();
				unk_0x706D57B0F50DA710("DHP1_RELEASED");
				unk_0x8DFCED7A656F8802(true);
				iLocal_294 = 1;
				iLocal_1978++;
			}
			else if (unk_0x25D39B935A038A26(iLocal_246) && unk_0xE4A310B1D7FA73CC(iLocal_246) >= 0.7f)
			{
				if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), 713668775) != 1)
				{
					unk_0x15D3A79D4E44B913(unk_0xD80958FC74E988A6(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, false, 40000f);
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - iLocal_301) > 1500)
			{
				if (iLocal_294)
				{
					unk_0xBFD8727AEA3CCEBA(iLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, false, 3, 3, 2);
					unk_0xBFD8727AEA3CCEBA(iLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_294 = 0;
				}
				if ((unk_0x9CD27B0045628463() - iLocal_301) > 5000 || unk_0x580417101DDB492F(2, 201))
				{
					if (unk_0xA6DB27D19ECBB7DA(iLocal_243))
					{
						unk_0x86A652570E5F25DD(&iLocal_243);
					}
					func_273(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_278(&uLocal_309, cLocal_49);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
					func_197(1, 0, 0, 3000, 0);
					iLocal_301 = unk_0x9CD27B0045628463();
					iLocal_1978++;
				}
			}
			break;
		
		case 4:
			if (!func_270())
			{
				if (func_24() == 2)
				{
					if (!func_267(func_268(0), 0) && !func_267(func_268(1), 0))
					{
						func_266(12);
						iLocal_1978++;
					}
					else if (func_267(func_268(0), 0) && !func_267(func_268(1), 0))
					{
						func_224(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 1, func_268(0), "MICHAEL", 0, 1);
						if (func_263(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
					else if (!func_267(func_268(0), 0) && func_267(func_268(1), 0))
					{
						func_224(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 2, func_268(1), "FRANKLIN", 0, 1);
						if (func_263(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
					else
					{
						func_224(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 1, func_268(0), "MICHAEL", 0, 1);
						func_224(&uLocal_78, 2, func_268(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
				}
				else if (func_36())
				{
					func_35("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			Var1 = { unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true) };
			if (unk_0xE81AFC1BC4CC41CE(Local_53[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				unk_0xAA5D6B1888E4DB20(Local_55[0 /*5*/]);
				unk_0xAA5D6B1888E4DB20(Local_55[1 /*5*/]);
				unk_0xAA5D6B1888E4DB20(Local_55[2 /*5*/]);
				unk_0xAA5D6B1888E4DB20(Local_55[3 /*5*/]);
				if (iLocal_1987[0] != -1)
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_1987[0]);
				}
				if (iLocal_1987[1] != -1)
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_1987[1]);
				}
			}
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false))
			{
				func_230(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
				{
					Local_54[6 /*10*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, true, true);
					unk_0xBF0FD6E56C964FCB(Local_54[6 /*10*/], joaat("weapon_pistol"), -1, false, true);
					unk_0x1913FE4CBF41C463(Local_54[6 /*10*/], 330, true);
					unk_0xBB03C38DD3FB7FFD(Local_54[6 /*10*/], true);
					unk_0x3841422E9C488D8C(&iLocal_244);
					unk_0xE8854A4326B9E12B(&iLocal_244);
					unk_0x15D3A79D4E44B913(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
					unk_0x39E72BC99E6360CB(iLocal_244);
					unk_0x5ABA3986D90D8A3B(Local_54[6 /*10*/], iLocal_244);
					unk_0x3841422E9C488D8C(&iLocal_244);
					Local_54[7 /*10*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, true, true);
					unk_0x1913FE4CBF41C463(Local_54[7 /*10*/], 330, true);
					unk_0xBF0FD6E56C964FCB(Local_54[7 /*10*/], joaat("weapon_pistol"), -1, false, true);
					unk_0xBB03C38DD3FB7FFD(Local_54[7 /*10*/], true);
					unk_0x3841422E9C488D8C(&iLocal_244);
					unk_0xE8854A4326B9E12B(&iLocal_244);
					unk_0x15D3A79D4E44B913(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
					unk_0x39E72BC99E6360CB(iLocal_244);
					unk_0x5ABA3986D90D8A3B(Local_54[7 /*10*/], iLocal_244);
					unk_0x3841422E9C488D8C(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_54[5 /*10*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, true, true);
					unk_0x9F8AA94D6D97DBF4(Local_54[5 /*10*/], true);
					unk_0x3841422E9C488D8C(&iLocal_244);
					unk_0xE8854A4326B9E12B(&iLocal_244);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2096, 2);
					unk_0x15D3A79D4E44B913(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					unk_0x94587F17E9C365D5(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_244);
					unk_0x5ABA3986D90D8A3B(Local_54[5 /*10*/], iLocal_244);
					unk_0x3841422E9C488D8C(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				if (func_107(Local_54[4 /*10*/]))
				{
					unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
					unk_0x06843DA7060A026B(Local_54[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, true, false, false, true);
				}
				else
				{
					Local_54[4 /*10*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, true, true);
				}
				unk_0x9F8AA94D6D97DBF4(Local_54[4 /*10*/], true);
				unk_0x9D64D7405520E3D3(Local_54[4 /*10*/], true);
				unk_0x3841422E9C488D8C(&iLocal_244);
				unk_0xE8854A4326B9E12B(&iLocal_244);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2096, 2);
				unk_0x15D3A79D4E44B913(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, false, 40000f);
				unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0x94587F17E9C365D5(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, false, false);
				unk_0x39E72BC99E6360CB(iLocal_244);
				unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
				unk_0x3841422E9C488D8C(&iLocal_244);
				iLocal_305 = unk_0x9CD27B0045628463();
				iLocal_308 = 0;
				iLocal_307 = 0;
				unk_0x8DFCED7A656F8802(true);
				unk_0x706D57B0F50DA710("DHP1_SUB");
				if (unk_0xA6DB27D19ECBB7DA(Local_53[0 /*2*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_53[0 /*2*/].f_1));
				}
				unk_0x3AE22DEB5BA5A3E6(&(Local_57[3 /*2*/]));
				unk_0x3AE22DEB5BA5A3E6(&(Local_57[0 /*2*/]));
				unk_0x3AE22DEB5BA5A3E6(&(Local_57[1 /*2*/]));
				func_89(&uLocal_309, joaat("p_amb_phone_01"));
				func_89(&uLocal_309, joaat("s_m_m_dockwork_01"));
				func_89(&uLocal_309, joaat("prop_ld_test_01"));
				func_89(&uLocal_309, joaat("prop_sub_release"));
				func_221(&uLocal_309, cLocal_51);
				unk_0xFF1B8B4AA1C25DC8("docksprep1");
				unk_0x293220DA1B46CEBC(15f, 10f, 4);
				func_195(1);
				iLocal_1978 = 0;
			}
			else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), true) < 5f && !iLocal_253)
			{
				func_220("DKP1_CLIMB", -1);
				iLocal_253 = 1;
			}
			break;
	}
	if ((!iLocal_263 && func_107(Local_53[0 /*2*/])) && unk_0xCFB0A0D8EDD145A3(Local_53[0 /*2*/]))
	{
		unk_0xE65F427EB70AB1ED(-1, "SUB_SPLASH", Local_53[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0);
		iLocal_263 = 1;
	}
	if (((!iLocal_248 && unk_0x7239B21A38F536BA(Local_57[0 /*2*/])) && unk_0x7239B21A38F536BA(Local_57[1 /*2*/])) && func_107(Local_53[0 /*2*/]))
	{
		if (unk_0xDA95EA3317CC5064(Local_57[0 /*2*/]) && unk_0xDA95EA3317CC5064(Local_57[1 /*2*/]))
		{
			unk_0xBE520D9761FF811F(Local_53[0 /*2*/]);
			Local_55[0 /*5*/] = unk_0xE832D760399EB220(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			unk_0x3D95EC8B6D940AC3(Local_55[0 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0x1899F328B0E12848(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0x1899F328B0E12848(Local_53[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[1 /*5*/] = unk_0xE832D760399EB220(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			unk_0x3D95EC8B6D940AC3(Local_55[1 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0x1899F328B0E12848(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0x1899F328B0E12848(Local_53[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[2 /*5*/] = unk_0xE832D760399EB220(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			unk_0x3D95EC8B6D940AC3(Local_55[2 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0x1899F328B0E12848(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0x1899F328B0E12848(Local_53[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[3 /*5*/] = unk_0xE832D760399EB220(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			unk_0x3D95EC8B6D940AC3(Local_55[3 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0x1899F328B0E12848(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0x1899F328B0E12848(Local_53[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			iLocal_248 = 1;
			iLocal_250 = 0;
			unk_0x710311ADF0E20730(Local_53[0 /*2*/]);
			unk_0x18FF00FC7EFF559E(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		if (!iLocal_250)
		{
			unk_0x710311ADF0E20730(Local_53[0 /*2*/]);
			iLocal_250 = 1;
		}
		unk_0x428CA6DBD1094446(Local_53[0 /*2*/], false);
		unk_0x18FF00FC7EFF559E(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
	}
	if (!iLocal_251)
	{
		if (unk_0x7239B21A38F536BA(Local_57[3 /*2*/]))
		{
			if (unk_0xDA95EA3317CC5064(Local_57[3 /*2*/]))
			{
				unk_0x6B9BBD38AB0796DF(Local_57[3 /*2*/], Local_54[4 /*10*/], unk_0x3F428D08BE5AAE31(Local_54[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_251 = 1;
			}
		}
	}
	if (unk_0x7239B21A38F536BA(Local_57[3 /*2*/]) && ((func_107(Local_54[4 /*10*/]) && unk_0xBBCCE00B381F8482(Local_54[4 /*10*/])) || !func_107(Local_54[4 /*10*/])))
	{
		if (func_107(Local_54[4 /*10*/]) && unk_0x1F0B79228E461EC9(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			unk_0x97FF36A1D40EA00A(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -8f);
		}
		if (unk_0xB1632E9A5F988D11(Local_57[3 /*2*/]))
		{
			unk_0x961AC54BF0613F5D(Local_57[3 /*2*/], true, true);
		}
	}
	if (func_24() == 2)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			unk_0x31B927BBC44156CD(Local_53[0 /*2*/], true);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		unk_0x31B927BBC44156CD(Local_53[0 /*2*/], false);
	}
}

void func_230(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x7239B21A38F536BA(Global_103950.f_4))
	{
		if (unk_0x4C241E39B23DF959(Global_103950.f_4, false))
		{
			if (func_262(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_259(unk_0x3FEF770D40960D5A(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_231(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_231(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x7239B21A38F536BA(Global_77137.f_484[25]) && unk_0x4C241E39B23DF959(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9F243D3919F442FE(iParam0) || unk_0x9F47B058362C84B5(iParam0) == joaat("bus")) || unk_0x9F47B058362C84B5(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_258(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_121(iParam0, &Var0);
		if (func_95(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3FEF770D40960D5A(iParam0, true) };
			fParam2 = unk_0xE83D4F9BA2A38914(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
			}
		}
		func_252(iParam3, &Var0, Param1, fParam2, func_117(iParam0));
		func_232(iParam3, iParam0, 0);
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != unk_0x9F47B058362C84B5(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(iParam1))
	{
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			if (!unk_0x0A7B270912999B3C(iParam1))
			{
				unk_0xAD738C3085FE7E11(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_171();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_262(iParam0);
					if ((unk_0x7239B21A38F536BA(iVar0) && unk_0x4C241E39B23DF959(iVar0, false)) && iParam1 != iVar0)
					{
						func_233(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_234(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBB40DD2270B65366(iParam0, -1, false);
		if (!unk_0x7239B21A38F536BA(iVar0))
		{
			iVar0 = unk_0x83F969AA1EE2A664(iParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(iVar0) && !unk_0x84A2DD9AC37C35C1(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x9F47B058362C84B5(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_121(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_234(int iParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false)) || func_127(iParam0, 0, 0)) || func_127(iParam0, 1, 0)) || func_127(iParam0, 2, 0)) || func_117(iParam0) != 145) || func_250(iParam0)) || func_249(iParam0)) || func_248(iParam0)) || func_247(iParam0)) || !func_235(unk_0x9F47B058362C84B5(iParam0)))
	{
		if (func_249(iParam0))
		{
		}
		if (func_249(iParam0))
		{
		}
		if (func_127(iParam0, 0, 0))
		{
		}
		if (func_127(iParam0, 1, 0))
		{
		}
		if (func_127(iParam0, 2, 0))
		{
		}
		if (func_117(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_235(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_236(bParam0, 0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)) || unk_0xDCE4334788AF94EA(bParam0)) || unk_0xAB935175B22E822B(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_236(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(bParam0))
	{
		return 0;
	}
	if (((((bParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7()) || (bParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (bParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || bParam0 == joaat("blimp2")) || (bParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7()))
	{
		if (!func_246())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("blimp"))
	{
		if ((((!func_245() && !func_244()) && !func_243()) && !func_242()) && !func_246())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_241() || unk_0x48AF36444B965238()) || func_240())
		{
		}
		else if (!func_243())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_239(bParam0))
		{
			return 0;
		}
	}
	if (!func_237(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_237(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_238())
	{
		return 1;
	}
	unk_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (bParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBD4D7EAF8A30F637(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_238()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_239(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	bVar1 = unk_0x9A73240B49945C76();
	if (bParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && bVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && bVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("virgo3") || bParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && bVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && bVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && bVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && bVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && bVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && bVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && bVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && bVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && bVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && bVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && bVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && bVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && bVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && bVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && bVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && bVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && bVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && bVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && bVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && bVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && bVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && bVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && bVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && bVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && bVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && bVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && bVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && bVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && bVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && bVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && bVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && bVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && bVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && bVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && bVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && bVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && bVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && bVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && bVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && bVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && bVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && bVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && bVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && bVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && bVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && bVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && bVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && bVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && bVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && bVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && bVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && bVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && bVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && bVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && bVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && bVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && bVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && bVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && bVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && bVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && bVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && bVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && bVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && bVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && bVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && bVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && bVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && bVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && bVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && bVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && bVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && bVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && bVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && bVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && bVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && bVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && bVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && bVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && bVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && bVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && bVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && bVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && bVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && bVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && bVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && bVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && bVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && bVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && bVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && bVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && bVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && bVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && bVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && bVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && bVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && bVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && bVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && bVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && bVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && bVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && bVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && bVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && bVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && bVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && bVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && bVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && bVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && bVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && bVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && bVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && bVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && bVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && bVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && bVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && bVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && bVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && bVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && bVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && bVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && bVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && bVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && bVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && bVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && bVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && bVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && bVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && bVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && bVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && bVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && bVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && bVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && bVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && bVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && bVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && bVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && bVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && bVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && bVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && bVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && bVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && bVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && bVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && bVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && bVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && bVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && bVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && bVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && bVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && bVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && bVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && bVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && bVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && bVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && bVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && bVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && bVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && bVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && bVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && bVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && bVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("monster3"))
	{
	}
	else if (bParam0 == joaat("cerberus"))
	{
	}
	else if (bParam0 == joaat("cerberus2"))
	{
	}
	else if (bParam0 == joaat("cerberus3"))
	{
	}
	else if (bParam0 == joaat("brutus"))
	{
	}
	else if (bParam0 == joaat("brutus2"))
	{
	}
	else if (bParam0 == joaat("brutus3"))
	{
	}
	else if (bParam0 == joaat("scarab"))
	{
	}
	else if (bParam0 == joaat("scarab2"))
	{
	}
	else if (bParam0 == joaat("scarab3"))
	{
	}
	else if (bParam0 == joaat("imperator"))
	{
	}
	else if (bParam0 == joaat("imperator2"))
	{
	}
	else if (bParam0 == joaat("imperator3"))
	{
	}
	else if (bParam0 == joaat("zr380"))
	{
	}
	else if (bParam0 == joaat("zr3802"))
	{
	}
	else if (bParam0 == joaat("zr3803"))
	{
	}
	else if (bParam0 == joaat("impaler"))
	{
	}
	else if (bParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && bVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && bVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && bVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && bVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && bVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && bVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && bVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && bVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && bVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && bVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && bVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && bVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && bVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && bVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && bVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && bVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && bVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && bVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && bVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && bVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && bVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && bVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && bVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && bVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && bVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && bVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && bVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && bVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && bVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && bVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && bVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && bVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && bVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && bVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && bVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && bVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && bVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && bVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && bVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && bVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && bVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && bVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && bVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && bVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && bVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && bVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && bVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && bVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && bVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && bVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && bVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && bVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && bVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && bVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && bVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && bVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && bVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && bVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && bVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && bVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && bVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && bVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && bVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && bVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && bVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && bVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && bVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && bVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && bVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && bVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && bVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && bVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && bVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && bVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && bVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && bVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && bVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && bVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && bVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && bVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && bVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && bVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && bVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && bVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && bVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && bVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && bVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && bVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && bVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && bVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && bVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && bVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && bVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && bVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && bVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && bVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && bVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && bVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && bVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && bVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && bVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && bVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && bVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && bVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && bVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && bVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && bVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && bVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && bVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && bVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && bVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && bVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && bVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && bVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && bVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && bVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && bVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && bVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && bVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && bVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && bVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && bVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && bVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && bVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && bVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && bVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && bVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && bVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && bVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && bVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && bVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && bVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && bVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && bVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && bVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && bVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && bVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && bVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_240()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_241()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_242()
{
	return 0;
}

int func_243()
{
	return 1;
}

int func_244()
{
	return 1;
}

int func_245()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_246()
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

int func_247(int iParam0)
{
	bool bVar0;
	char* sVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(iParam0);
	sVar1 = unk_0x7CE1CCB9B293020E(iParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_236(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_97772[iVar0]) && unk_0x4C241E39B23DF959(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && unk_0x9F47B058362C84B5(Global_97772[iVar0]) == unk_0x9F47B058362C84B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_246())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), true);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_246())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), true);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), false);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_95(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_95(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_95(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_252(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_257(iParam0);
			func_256(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_253(iParam0, 1);
		}
	}
}

void func_253(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_255(iParam0, 0))
		{
			func_254(iParam0, 1, 0);
			func_254(iParam0, 2, 0);
			func_254(iParam0, 3, 0);
			func_254(iParam0, 4, 0);
			func_254(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_254(iParam0, 0, 0);
	}
}

void func_254(int iParam0, bool bParam1, bool bParam2)
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

int func_255(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_256(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_257(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
			unk_0x629BFA74418D6239(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_253(iParam0, 0);
		}
	}
}

void func_258(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_257(iParam0);
	func_253(iParam0, 0);
}

int func_259(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_260(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_260(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_261(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xF1B760881820C952(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_261(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_262(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

bool func_263(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_34(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_265(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_264(&uVar0, &uVar1, iParam6, 0);
}

int func_264(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_31();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			unk_0xE80492A9AC099A93(&Global_8136, 20);
			unk_0xE80492A9AC099A93(&Global_8137, 17);
			unk_0xE80492A9AC099A93(&Global_8138, false);
			if (bParam3)
			{
				func_23();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_22())
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
					if (Global_21863 == 0)
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
			}
			if (func_21())
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
			}
			func_20();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_19();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_265(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21602 = iParam0;
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_266(bool bParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_96296, bParam0);
}

int func_267(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		bVar0 = func_27(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_268(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xD80958FC74E988A6())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_24())
	{
		return unk_0xD80958FC74E988A6();
	}
	return Global_97919[func_269(iParam0)];
}

int func_269(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_270()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_271(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_272()
{
	int iVar0;
	bool bVar1;
	
	iLocal_247 = 0;
	while (iLocal_247 < Local_55.f_0)
	{
		if (!unk_0x84DE3B5FB3E666F0(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!unk_0x84DE3B5FB3E666F0(&(Local_55[0 /*5*/])) && !unk_0x84DE3B5FB3E666F0(&(Local_55[1 /*5*/]))) && (!Local_55[0 /*5*/].f_4 || !Local_55[1 /*5*/].f_4)) || ((!unk_0x84DE3B5FB3E666F0(&(Local_55[2 /*5*/])) && !unk_0x84DE3B5FB3E666F0(&(Local_55[3 /*5*/]))) && (!Local_55[2 /*5*/].f_4 || !Local_55[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_1988 > 0)
			{
				if (iLocal_1987[(iLocal_1988 - 1)] != -1)
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_1987[(iLocal_1988 - 1)]);
				}
			}
			if (iLocal_1987[iLocal_1988] != -1)
			{
				unk_0x8D8686B622B88120(iLocal_1987[iLocal_1988], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
				iLocal_1988++;
			}
		}
		else if (iVar0 <= 2)
		{
			unk_0x8D8686B622B88120(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
		}
		iLocal_247 = 0;
		while (iLocal_247 < Local_55.f_0)
		{
			if (!unk_0x84DE3B5FB3E666F0(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					unk_0x8D8686B622B88120(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 1;
			}
			iLocal_247++;
		}
		if (iVar0 >= 4)
		{
			if (iLocal_1987[0] != -1)
			{
				unk_0xA3B0C41BA5CC0BB5(iLocal_1987[0]);
			}
			if (iLocal_1987[1] != -1)
			{
				unk_0xA3B0C41BA5CC0BB5(iLocal_1987[1]);
			}
		}
	}
}

void func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("prop_ld_test_01"));
			func_88(&uLocal_309, joaat("prop_sub_release"));
			func_88(&uLocal_309, joaat("s_m_m_dockwork_01"));
			func_278(&uLocal_309, cLocal_50);
			func_278(&uLocal_309, cLocal_51);
			func_276(&uLocal_309, "docksprep1");
			func_88(&uLocal_309, joaat("p_amb_phone_01"));
			func_275(&uLocal_309);
			func_277(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, bLocal_278);
			func_88(&uLocal_309, bLocal_281);
			func_88(&uLocal_309, bLocal_284);
			func_274(&uLocal_309);
			func_275(&uLocal_309);
			break;
		
		case 2:
		case 3:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, joaat("prop_sub_cover_01"));
			func_88(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_274(var uParam0)
{
	uParam0->f_885.f_2 = 0;
	if (!uParam0->f_885.f_1)
	{
		if (!uParam0->f_885)
		{
			unk_0x944955FB2A3935C8();
			uParam0->f_885 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

void func_275(var uParam0)
{
	uParam0->f_889.f_2 = 0;
	if (!uParam0->f_889.f_1)
	{
		if (!uParam0->f_889)
		{
			unk_0x9B9039DBF2D258C1();
			uParam0->f_889 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

int func_276(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x9EEFB62EB27B5792(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_277(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x2F844A8B08D76685(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_278(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD3BD40951412FEF6(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	return func_39(iParam0, 1, 0);
}

void func_280()
{
	int iVar0;
	
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (unk_0x7239B21A38F536BA(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[3 /*10*/])
			{
				if (iLocal_1977 == 0)
				{
					func_295(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else if (unk_0xA6DB27D19ECBB7DA(Local_54[iLocal_247 /*10*/].f_2))
				{
					unk_0x86A652570E5F25DD(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (unk_0x84A2DD9AC37C35C1(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
				{
					func_93(7);
				}
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_1977 == 2 && Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
			{
				if (func_10(Local_54[3 /*10*/], unk_0xD80958FC74E988A6(), 1) > 300f)
				{
					func_93(11);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0x7239B21A38F536BA(Local_53[iLocal_247 /*2*/]))
		{
			if (!unk_0x4C241E39B23DF959(Local_53[iLocal_247 /*2*/], false))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					func_93(1);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					func_93(2);
				}
				else if (iLocal_247 == 3)
				{
					func_93(8);
				}
				func_294(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (iLocal_1977 == 2)
					{
						if (unk_0xE81AFC1BC4CC41CE(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_93(5);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (func_293(&(Local_53[iLocal_247 /*2*/])))
					{
						func_93(3);
						func_294(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					if (iLocal_1977 == 1 && iLocal_1978 < 3)
					{
						if (func_293(&(Local_53[iLocal_247 /*2*/])))
						{
							func_93(4);
							func_294(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (func_107(Local_53[0 /*2*/]) && func_107(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), true) > 750f)
		{
			func_93(10);
		}
		else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), true) > 700f)
		{
			if (!iLocal_254 && func_36())
			{
				func_35("DKP1_ABSUB", 7500, 1);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	if (func_107(unk_0xD80958FC74E988A6()))
	{
		func_286();
	}
	if (iLocal_1977 == 0 && iLocal_1978 > 0)
	{
		func_283();
	}
	if (iLocal_1977 == 0 || iLocal_1977 == 1)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (!iLocal_1985)
			{
				func_282(Local_53[0 /*2*/], 588);
				iLocal_1985 = 1;
			}
		}
		else if (iLocal_1985)
		{
			func_282(0, 588);
			iLocal_1985 = 0;
		}
	}
	else if (iLocal_1977 == 2)
	{
		if (func_107(Local_53[2 /*2*/]))
		{
			if (!iLocal_1986)
			{
				func_282(Local_53[2 /*2*/], 590);
				iLocal_1986 = 1;
			}
		}
		else if (iLocal_1986)
		{
			func_282(0, 590);
			iLocal_1986 = 0;
		}
	}
	if ((((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, false, true, 0) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, false, true, 0))
	{
		unk_0x59E727A1C9D3E31A(unk_0xD24D37CC275948CC("V_FakeBoatPO1SH2A"), 1240f, -2970f, false, 0);
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true);
		}
		else
		{
			iVar0 = unk_0xD80958FC74E988A6();
		}
		if ((!unk_0x886E37EC497200B6(iVar0) && !unk_0xCFB0A0D8EDD145A3(iVar0)) && (!unk_0x7239B21A38F536BA(Local_53[0 /*2*/]) || !unk_0x17FFC1B2BA35A494(iVar0, Local_53[0 /*2*/])))
		{
			if (!iLocal_256)
			{
				func_281(593);
				iLocal_256 = 1;
			}
		}
	}
	if (!iLocal_258)
	{
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			unk_0xB9EFD5C25018725A("OnlyAllowScriptTriggerPoliceScanner", true);
			unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 1;
		}
	}
	if (unk_0x68EDDA28A5976D07())
	{
		unk_0xFD3151CD37EA2245(Local_53[0 /*2*/]);
	}
}

void func_281(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_282(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_283()
{
	switch (iLocal_264)
	{
		case 0:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (iLocal_269)
				{
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
					if (unk_0xCB4E8BE8A0063C5D("docksprep1"))
					{
						unk_0x0759591819534F7B(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						unk_0x9EEFB62EB27B5792("docksprep1");
					}
				}
			}
			iLocal_270 = 0;
			iLocal_264 = 1;
			break;
		
		case 1:
			if (!iLocal_269)
			{
				if ((unk_0x9CD27B0045628463() - iLocal_268) > 2000 || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_54[4 /*10*/], true), true) < 10f)
				{
					iLocal_269 = 1;
					iLocal_264 = 0;
				}
			}
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0))
			{
				if (func_107(Local_54[4 /*10*/]))
				{
					if (unk_0x6CD5A433374D4CFB(Local_54[4 /*10*/], unk_0xD80958FC74E988A6()))
					{
						unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
						unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
						func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 2;
					}
					else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_54[4 /*10*/], true), true) < 12f && unk_0x2F395D61F3A1F877(unk_0x4F8644AF03D0E0D6()) > 8.5f)
					{
						unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0x1DDA930A0AC38571(Local_54[4 /*10*/], unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 4000);
							unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_54[4 /*10*/], true), true) < 12f && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0x1DDA930A0AC38571(Local_54[4 /*10*/], unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 4000);
							unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (((unk_0x4B7620C47217126C(unk_0xD80958FC74E988A6()) && (unk_0x25223CA6B4D20B7F() >= 19 || unk_0x25223CA6B4D20B7F() < 6)) && func_10(unk_0xD80958FC74E988A6(), Local_54[4 /*10*/], 1) < 25f) && (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/])))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0x1DDA930A0AC38571(Local_54[4 /*10*/], unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 4000);
							unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_54[4 /*10*/], true), true) < 12f && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0x1DDA930A0AC38571(Local_54[4 /*10*/], unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 4000);
							unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
				}
				if (iLocal_1978 > 1)
				{
					if (func_107(Local_54[4 /*10*/]))
					{
						if (unk_0x0267D00AF114F17A(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
							func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_264 = 3;
							iLocal_266 = 3;
							unk_0xAAA34F8A7CB32098(Local_54[4 /*10*/]);
							unk_0x15D3A79D4E44B913(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, false, -122.93f);
							iLocal_268 = unk_0x9CD27B0045628463();
							iLocal_269 = 0;
						}
					}
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!unk_0xE03B3F2D3DC59B64(Local_54[4 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((unk_0x77F1BEB8863288D5(Local_54[4 /*10*/], 242628503) != 1 && unk_0x77F1BEB8863288D5(Local_54[4 /*10*/], 713668775) != 1) && unk_0x77F1BEB8863288D5(Local_54[4 /*10*/], 1464580341) != 1)
						{
							if (!unk_0x1F0B79228E461EC9(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								unk_0xEA47FE3719165B94(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
							}
							if (unk_0x20B60995556D004F(Local_54[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, false, true, 0))
							{
								if (unk_0xCB4E8BE8A0063C5D("docksprep1"))
								{
									unk_0x0759591819534F7B(Local_54[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (unk_0xCB4E8BE8A0063C5D("docksprep1"))
							{
								unk_0x0759591819534F7B(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((unk_0x9CD27B0045628463() - iLocal_272) > 10000)
					{
						if (!unk_0x701375A7D43F01CB(Local_54[4 /*10*/]))
						{
							if (unk_0x20B60995556D004F(Local_54[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								unk_0x0F342546AA06FED5(Local_54[4 /*10*/], false, false);
							}
							else if (unk_0x20B60995556D004F(Local_54[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								unk_0x0F342546AA06FED5(Local_54[4 /*10*/], false, false);
							}
						}
						else
						{
							iLocal_272 = unk_0x9CD27B0045628463();
							unk_0x244F70C84C547D2D(Local_54[4 /*10*/], true, -1, 3000);
						}
					}
					if (!unk_0x9072C8B49907BFAD(Local_54[4 /*10*/]) && (unk_0x9CD27B0045628463() - iLocal_273) > 4000)
					{
						func_284(Local_54[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_273 = unk_0x9CD27B0045628463();
					}
				}
				if (((unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 124) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 125)) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 126)) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 118))
				{
					unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					unk_0xF2EAB31979A7F910(Local_54[4 /*10*/], -1, unk_0xD80958FC74E988A6(), -1, true);
				}
				else if (unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 23))
				{
					unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					unk_0x3EB1FE9E8E908E15(Local_54[4 /*10*/], -1);
				}
				else if (unk_0xC86D67D52A707CF8(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), true))
				{
					unk_0xB8BEC0CA6F0EDB0F(Local_54[4 /*10*/]);
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 2:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!unk_0x5CD3CB88A7F8850D(Local_54[4 /*10*/], unk_0xD80958FC74E988A6()))
				{
					unk_0x69F4BE8C8CC4796C(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), -1, 3104, 2);
				}
			}
			switch (iLocal_265)
			{
				case 0:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							unk_0xE8854A4326B9E12B(&iLocal_244);
							unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 4f, 2f, 2f, 0);
							unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
							unk_0x39E72BC99E6360CB(iLocal_244);
							unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
							unk_0x3841422E9C488D8C(&iLocal_244);
							unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
							iLocal_267 = unk_0x9CD27B0045628463();
							iLocal_265 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x9CD27B0045628463() - iLocal_267) > 4000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								unk_0xE8854A4326B9E12B(&iLocal_244);
								unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 3f, 1f, 2f, 0);
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
								unk_0x39E72BC99E6360CB(iLocal_244);
								unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
								unk_0x3841422E9C488D8C(&iLocal_244);
								unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
								iLocal_267 = unk_0x9CD27B0045628463();
								iLocal_265 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x9CD27B0045628463() - iLocal_267) > 8000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_267 = unk_0x9CD27B0045628463();
								iLocal_266 = 4;
								iLocal_264 = 3;
							}
						}
					}
					break;
			}
			if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || !func_107(Local_54[4 /*10*/]))
			{
				iLocal_264 = 0;
			}
			unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &bLocal_271, true);
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 124) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 125)) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 126))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0xF2EAB31979A7F910(Local_54[4 /*10*/], -1, unk_0xD80958FC74E988A6(), -1, true);
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/]) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/]))
				{
					if (unk_0xC3287EE3050FB74C(bLocal_271) != joaat("GROUP_MELEE") && bLocal_271 != joaat("weapon_unarmed"))
					{
						func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 3;
						iLocal_266 = 1;
						unk_0xAAA34F8A7CB32098(Local_54[4 /*10*/]);
						unk_0xF2EAB31979A7F910(Local_54[4 /*10*/], -1, unk_0xD80958FC74E988A6(), -1, false);
					}
				}
				else if (unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 23))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0x3EB1FE9E8E908E15(Local_54[4 /*10*/], -1);
					unk_0xEA47FE3719165B94(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (unk_0xC86D67D52A707CF8(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), true))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_266)
			{
				case 1:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 2:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 3:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (unk_0x20B60995556D004F(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, false, true, 0))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_270 = 1;
								iLocal_266 = 4;
							}
						}
						if (!unk_0x813A0A7C9D2E831F(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0x69F4BE8C8CC4796C(Local_54[4 /*10*/], Local_53[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 4:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (!unk_0x47E4E977581C5B55(Local_54[4 /*10*/]) && !unk_0x2A74E1D5F2F00EEC(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
								unk_0xE8854A4326B9E12B(&iLocal_244);
								unk_0xEA47FE3719165B94(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
								if (iLocal_270)
								{
									unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
								}
								else
								{
									unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, false, 40000f);
									unk_0xE054346CA3A0F315(0, 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
								}
								unk_0x39E72BC99E6360CB(iLocal_244);
								unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
								unk_0x3841422E9C488D8C(&iLocal_244);
								iLocal_267 = unk_0x9CD27B0045628463();
								unk_0x706D57B0F50DA710("DHP1_ATTACKED");
								iLocal_274 = 0;
								iLocal_266 = 5;
							}
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 5:
					if ((unk_0x9CD27B0045628463() - iLocal_267) > 8000)
					{
						if (!iLocal_274)
						{
							if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) < 1)
							{
								unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
								unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
								iLocal_274 = 1;
							}
						}
						if (func_107(Local_54[4 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!unk_0xBBCCE00B381F8482(Local_54[4 /*10*/]))
								{
									unk_0x22B0D0E37CCB840D(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), 200f, -1, false, false);
								}
							}
							else if (unk_0x77F1BEB8863288D5(Local_54[4 /*10*/], 923520851) != 1)
							{
								unk_0xE054346CA3A0F315(Local_54[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
							}
						}
					}
					if (!iLocal_270)
					{
						unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &bLocal_271, true);
						if (func_107(Local_54[4 /*10*/]))
						{
							if ((unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 124) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 125)) || unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 126))
							{
								func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
									unk_0xE8854A4326B9E12B(&iLocal_244);
									unk_0xF2EAB31979A7F910(0, 3000, unk_0xD80958FC74E988A6(), -1, false);
									unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
									unk_0x39E72BC99E6360CB(iLocal_244);
									unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
									unk_0x3841422E9C488D8C(&iLocal_244);
									iLocal_267 = unk_0x9CD27B0045628463();
									iLocal_270 = 1;
								}
							}
							else if ((unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/]) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_54[4 /*10*/])) && unk_0xD71649DB0A545AA3(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), 160f))
							{
								if (unk_0xC3287EE3050FB74C(bLocal_271) != joaat("GROUP_MELEE") && bLocal_271 != joaat("weapon_unarmed"))
								{
									func_224(&uLocal_78, 4, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
										unk_0xE8854A4326B9E12B(&iLocal_244);
										unk_0xF2EAB31979A7F910(0, 3000, unk_0xD80958FC74E988A6(), -1, false);
										unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
										unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
										unk_0x39E72BC99E6360CB(iLocal_244);
										unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
										unk_0x3841422E9C488D8C(&iLocal_244);
										iLocal_270 = 1;
										iLocal_267 = unk_0x9CD27B0045628463();
									}
								}
							}
							else if (unk_0x8507BCB710FA6DC0(Local_54[4 /*10*/], 23))
							{
								func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
									unk_0xE8854A4326B9E12B(&iLocal_244);
									unk_0x3EB1FE9E8E908E15(0, -1);
									unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
									unk_0x39E72BC99E6360CB(iLocal_244);
									unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
									unk_0x3841422E9C488D8C(&iLocal_244);
									iLocal_270 = 1;
								}
							}
							else if (unk_0xC86D67D52A707CF8(Local_54[4 /*10*/], unk_0xD80958FC74E988A6(), true))
							{
								unk_0xE1EF3C1216AFF2CD(Local_54[4 /*10*/]);
								unk_0xE8854A4326B9E12B(&iLocal_244);
								unk_0x15D3A79D4E44B913(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
								unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
								unk_0x39E72BC99E6360CB(iLocal_244);
								unk_0x5ABA3986D90D8A3B(Local_54[4 /*10*/], iLocal_244);
								unk_0x3841422E9C488D8C(&iLocal_244);
								iLocal_270 = 1;
								iLocal_267 = unk_0x9CD27B0045628463();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_284(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x3523634255FC3318(iParam0, sParam1, sParam2, func_60(iParam3), false);
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(iParam0, iParam1);
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

void func_286()
{
	switch (iLocal_308)
	{
		case 0:
			switch (iLocal_307)
			{
				case 0:
					if (func_107(Local_53[0 /*2*/]))
					{
						if ((!unk_0x7984C03AA5CC2F41() && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false)) && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
						{
							func_291();
							iLocal_305 = unk_0x9CD27B0045628463();
							iLocal_307 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x9CD27B0045628463() - iLocal_305) > 6000 && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false))
					{
						func_224(&uLocal_78, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false))
						{
							if (func_37())
							{
								func_290(0);
							}
						}
						else if (!func_37())
						{
							func_290(1);
						}
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 2;
					iLocal_307 = 0;
					iLocal_305 = unk_0x9CD27B0045628463();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_307)
			{
				case 0:
					if ((!unk_0x7984C03AA5CC2F41() && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false)) && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 324.7653f, -2974.495f, -1f, true) < 110f)
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					if (func_12(&uLocal_78, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 3;
					iLocal_307 = 0;
					iLocal_305 = unk_0x9CD27B0045628463();
					break;
			}
			break;
		
		case 3:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[2 /*2*/], false) && unk_0xA3EE4A07279BB9DB(Local_54[3 /*10*/], Local_53[2 /*2*/], false))
						{
							if (func_11())
							{
								func_291();
							}
							else
							{
								iLocal_307 = 1;
							}
						}
						break;
					
					case 1:
						func_284(Local_54[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_307 = 2;
						break;
					
					case 2:
						if (!unk_0x9072C8B49907BFAD(Local_54[3 /*10*/]))
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 4;
						iLocal_307 = 0;
						iLocal_305 = unk_0x9CD27B0045628463();
						break;
					}
			}
			break;
		
		case 4:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA3EE4A07279BB9DB(Local_54[3 /*10*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) && !unk_0x7984C03AA5CC2F41())
						{
							func_291();
							iLocal_305 = unk_0x9CD27B0045628463();
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x9CD27B0045628463() - iLocal_305) > 2000)
						{
							func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_307 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA3EE4A07279BB9DB(Local_54[3 /*10*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
							{
								if (func_37())
								{
									func_290(0);
								}
							}
							else if (!func_37())
							{
								func_290(1);
							}
						}
						else
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 5;
						iLocal_307 = 0;
						iLocal_305 = unk_0x9CD27B0045628463();
						break;
				}
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 60f)
				{
					func_289();
					iLocal_307 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA3EE4A07279BB9DB(Local_54[3 /*10*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) && !unk_0x7984C03AA5CC2F41()) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, false, true, 0))
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_288();
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_287(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_287(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 6;
					iLocal_307 = 0;
					iLocal_305 = unk_0x9CD27B0045628463();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA3EE4A07279BB9DB(Local_54[3 /*10*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && unk_0xEFBE71898A993728(Local_53[1 /*2*/], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) && !unk_0x7984C03AA5CC2F41()) && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 40f)
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_288();
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_287(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_287(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}

bool func_287(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_288()
{
	if (BitTest(unk_0xD53343AA4FB7DD28(false, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_289()
{
	Global_20471 = 0;
	func_33();
}

void func_290(int iParam0)
{
	Global_22616 = iParam0;
}

void func_291()
{
	Global_20471 = 0;
	func_292();
}

void func_292()
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

int func_293(var uParam0)
{
	if (unk_0x4C241E39B23DF959(*uParam0, false))
	{
		if (((unk_0x679BE1DAF71DA874(*uParam0, 0, 7000) || unk_0x679BE1DAF71DA874(*uParam0, 3, 30000)) || unk_0x679BE1DAF71DA874(*uParam0, 2, 30000)) || unk_0x679BE1DAF71DA874(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_294(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x5F9532F3B5CC2551(*iParam0, false);
		if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
		{
			unk_0x629BFA74418D6239(iParam0);
		}
	}
}

int func_295(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
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
			if (unk_0x9134873537FA419C(iParam0) && iParam11)
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

void func_296()
{
	struct<3> Var0;
	float fVar1;
	
	if (iLocal_1981 == 1)
	{
		if (iLocal_1976 == 0)
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				if (!unk_0x797AC7CB535BA28F())
				{
					unk_0x891B5B39AC6302AF(800);
				}
			}
			else
			{
				func_195(iLocal_1982);
			}
		}
		else if (iLocal_1976 == 3)
		{
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_314();
			if (unk_0x991251AFC3981F84())
			{
				unk_0x440AF51A3462B86F();
			}
			func_313(&uLocal_309);
			if (!func_312())
			{
				func_311(iLocal_1982, &Var0, &fVar1);
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fVar1);
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
				func_310(&uLocal_309, Var0, 50f, 0);
			}
			func_273(iLocal_1977);
			while (!func_308(&uLocal_309))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			switch (iLocal_1977)
			{
				case 0:
					func_306();
					break;
				
				case 1:
					func_305();
					break;
				
				case 2:
					func_301();
					break;
				
				case 3:
					func_297();
					break;
			}
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			unk_0x706D57B0F50DA710("DHP1_START");
			iLocal_1981 = 0;
			if (!func_312())
			{
				func_202(&uLocal_309);
			}
		}
	}
}

void func_297()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0xAF35D0D2583051B0(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, true, true, false);
		unk_0x31B927BBC44156CD(Local_53[0 /*2*/], false);
		unk_0x2497C4717C8B881E(Local_53[0 /*2*/], false, true, false);
		unk_0x34E710FF01247C5A(Local_53[0 /*2*/], 1);
		unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], true);
		unk_0xA80AE305E0A3044F(Local_53[0 /*2*/], false);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0xAF35D0D2583051B0(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, true, true, false);
		unk_0x31B927BBC44156CD(Local_53[2 /*2*/], false);
		unk_0x33E8CD3322E2FE31(Local_53[2 /*2*/], 0);
		unk_0xEB9DC3C7D8596C46(Local_53[2 /*2*/], false);
		unk_0x92F0CF722BC4202F(Local_53[2 /*2*/], true);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0xAF35D0D2583051B0(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, true, true, false);
		unk_0x92F0CF722BC4202F(Local_53[1 /*2*/], true);
	}
	unk_0x3C7D42D58F770B54(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x95CF53B3D687F9FA(Local_53[1 /*2*/]);
	unk_0x16B5E274BDE402F8(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x7239B21A38F536BA(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		unk_0x6B9BBD38AB0796DF(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		unk_0x6B9BBD38AB0796DF(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (func_312())
	{
		func_298(0, -1, 1);
	}
	else
	{
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
	}
}

void func_298(int iParam0, bool bParam1, int iParam2)
{
	if (func_300() && func_312())
	{
		while (Global_100436 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x577D1284D6873711(false);
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x7239B21A38F536BA(iParam0))
				{
					if (unk_0x4C241E39B23DF959(iParam0, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam0, false))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), iParam0, bParam1);
							unk_0x6D0858B8EDFD2B7D(0f, 1f);
							unk_0xB4EC2312F4E5B1F1(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		unk_0xB4EDDC19532BFB85();
		func_299(0);
	}
}

void func_299(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_100441.f_20), 13);
	}
}

int func_300()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

void func_301()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0xAF35D0D2583051B0(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, true, true, false);
		unk_0x4C7028F78FFD3681(Local_53[0 /*2*/], false);
		unk_0x2497C4717C8B881E(Local_53[0 /*2*/], false, true, false);
		unk_0x34E710FF01247C5A(Local_53[0 /*2*/], 1);
		unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], true);
		unk_0xA80AE305E0A3044F(Local_53[0 /*2*/], false);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0xAF35D0D2583051B0(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, true, true, false);
		unk_0x33E8CD3322E2FE31(Local_53[2 /*2*/], 0);
		unk_0xEB9DC3C7D8596C46(Local_53[2 /*2*/], false);
		unk_0x92F0CF722BC4202F(Local_53[2 /*2*/], true);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0xAF35D0D2583051B0(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, true, true, false);
		unk_0x4C7028F78FFD3681(Local_53[1 /*2*/], false);
		unk_0x92F0CF722BC4202F(Local_53[1 /*2*/], true);
	}
	unk_0x3C7D42D58F770B54(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x95CF53B3D687F9FA(Local_53[1 /*2*/]);
	unk_0x16B5E274BDE402F8(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x7239B21A38F536BA(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		unk_0x6B9BBD38AB0796DF(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		unk_0x6B9BBD38AB0796DF(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	while (!func_302(&(Local_54[3 /*10*/]), 32, Local_53[2 /*2*/], 0, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_312())
	{
		func_298(Local_53[2 /*2*/], -1, 1);
	}
	else
	{
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
		unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), Local_53[2 /*2*/], -1);
	}
	unk_0xC80A74AC829DDD92(Local_54[3 /*10*/], iLocal_259);
	unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 100f, true, false, false, false);
	iLocal_308 = 3;
	iLocal_307 = 0;
}

int func_302(int* iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	if (!func_26(iParam1))
	{
		bVar0 = func_304(iParam1);
		unk_0x963D27A58DF860AC(bVar0);
		if (unk_0x98A4EB5D89A0C952(bVar0))
		{
			if (unk_0x7239B21A38F536BA(*iParam0))
			{
				unk_0x9614299DCB53E54B(iParam0);
			}
			if (unk_0x7239B21A38F536BA(iParam2) && unk_0x4C241E39B23DF959(iParam2, false))
			{
				*iParam0 = unk_0x7DD959874C1FD534(iParam2, 26, bVar0, bParam3, false, false);
				unk_0x45EEE61580806D63(*iParam0);
				func_303(*iParam0, iParam1);
				if (bParam4)
				{
					unk_0xE532F5D78798DAAB(bVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_303(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_304(int iParam0)
{
	if (!func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_305()
{
	if (!unk_0x7239B21A38F536BA(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0xAF35D0D2583051B0(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, true, true, false);
		unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], true);
	}
	if (func_312())
	{
		func_298(Local_53[0 /*2*/], -1, 1);
	}
	else
	{
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
		unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], -1);
	}
	unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 100f, true, false, false, false);
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_306()
{
	if (!unk_0x7239B21A38F536BA(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0xAF35D0D2583051B0(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, true, true, false);
		func_307(Local_53[0 /*2*/], 0);
		unk_0x428CA6DBD1094446(Local_53[0 /*2*/], true);
		unk_0x0DC7CABAB1E9B67E(Local_53[0 /*2*/], true, 1);
		unk_0x3910051CCECDB00C(Local_53[0 /*2*/], false);
		unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_54[4 /*10*/]))
	{
		Local_54[4 /*10*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, true, true);
		unk_0xEA47FE3719165B94(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
		unk_0x70A2D1137C8ED7C9(Local_54[4 /*10*/], 512, false);
		unk_0x9F7794730795E019(Local_54[4 /*10*/], 17, true);
		unk_0xC80A74AC829DDD92(Local_54[4 /*10*/], iLocal_260);
		unk_0x9F8AA94D6D97DBF4(Local_54[4 /*10*/], true);
		unk_0x3B6405E8AB34A907(Local_54[4 /*10*/], 45f);
		unk_0x70793BDCA1E854D4(Local_54[4 /*10*/], 50f);
		unk_0x2DB492222FB21E26(Local_54[4 /*10*/], -50f);
		unk_0x9D64D7405520E3D3(Local_54[4 /*10*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[0 /*2*/]))
	{
		Local_57[0 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, true, true, false);
		unk_0x428CA6DBD1094446(Local_57[0 /*2*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[1 /*2*/]))
	{
		Local_57[1 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, true, true, false);
		unk_0x428CA6DBD1094446(Local_57[1 /*2*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[2 /*2*/]))
	{
		Local_57[2 /*2*/] = unk_0x509D5878EB39E842(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, true, true, false);
		unk_0x8524A8B0171D5E07(Local_57[2 /*2*/], 0f, 0f, 90f, 2, true);
		unk_0x428CA6DBD1094446(Local_57[2 /*2*/], true);
	}
	if (!unk_0x7239B21A38F536BA(Local_57[3 /*2*/]))
	{
		Local_57[3 /*2*/] = unk_0x509D5878EB39E842(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, true, true, false);
	}
	iLocal_248 = 0;
	unk_0x9EEFB62EB27B5792("docksprep1");
	while (!unk_0xCB4E8BE8A0063C5D("docksprep1"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 100f, true, false, false, false);
	if (func_312())
	{
		func_298(0, -1, 1);
	}
	else
	{
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
	}
	iLocal_268 = unk_0x9CD27B0045628463();
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_307(var uParam0, int iParam1)
{
	Global_100441.f_22[iParam1] = uParam0;
}

int func_308(var uParam0)
{
	if (func_309(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_309(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (uParam0->f_1007)
	{
		bVar0 = true;
		bVar1 = false;
		while (bVar1 < 30)
		{
			if ((*uParam0)[bVar1 /*5*/])
			{
				if (!(uParam0[bVar1 /*5*/])->f_1)
				{
					if (unk_0x98A4EB5D89A0C952((uParam0[bVar1 /*5*/])->f_4))
					{
						(uParam0[bVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[bVar1 /*5*/])->f_2)
				{
					if ((uParam0[bVar1 /*5*/])->f_1)
					{
						unk_0xE532F5D78798DAAB((uParam0[bVar1 /*5*/])->f_4);
						func_90(uParam0[bVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_273[bVar1 /*5*/])
			{
				if (!uParam0->f_273[bVar1 /*5*/].f_1)
				{
					if (unk_0xD031A9162D01088C(uParam0->f_273[bVar1 /*5*/].f_4))
					{
						uParam0->f_273[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[bVar1 /*5*/].f_1)
					{
						unk_0xF66A602F829E2A06(uParam0->f_273[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_273[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_374[bVar1 /*5*/])
			{
				if (!uParam0->f_374[bVar1 /*5*/].f_1)
				{
					if (unk_0xCB4E8BE8A0063C5D(uParam0->f_374[bVar1 /*5*/].f_4))
					{
						uParam0->f_374[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[bVar1 /*5*/].f_1)
					{
						unk_0xFF1B8B4AA1C25DC8(uParam0->f_374[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_374[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_656[bVar1 /*6*/])
			{
				if (!uParam0->f_656[bVar1 /*6*/].f_1)
				{
					if (unk_0x85F01B8D5B90570E(uParam0->f_656[bVar1 /*6*/].f_5))
					{
						uParam0->f_656[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[bVar1 /*6*/].f_1)
					{
						unk_0x1D132D614DD86811(&(uParam0->f_656[bVar1 /*6*/].f_5));
						func_90(&(uParam0->f_656[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 30)
		{
			if (uParam0->f_475[bVar1 /*6*/])
			{
				if (!uParam0->f_475[bVar1 /*6*/].f_1)
				{
					if (unk_0x300D614A4C785FC4(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4))
					{
						uParam0->f_475[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[bVar1 /*6*/].f_1)
					{
						unk_0xF1160ACCF98A3FC8(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4);
						func_90(&(uParam0->f_475[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_202[bVar1 /*7*/])
			{
				if (!uParam0->f_202[bVar1 /*7*/].f_1)
				{
					if (unk_0x36E353271F0E90EE(uParam0->f_202[bVar1 /*7*/].f_4))
					{
						uParam0->f_202[bVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[bVar1 /*7*/].f_1)
					{
						unk_0xAA08EF13F341C8FC(uParam0->f_202[bVar1 /*7*/].f_4);
						func_90(&(uParam0->f_202[bVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_151[bVar1 /*5*/])
			{
				if (!uParam0->f_151[bVar1 /*5*/].f_1)
				{
					if (unk_0x1BBE0523B8DB9A21(uParam0->f_151[bVar1 /*5*/].f_4))
					{
						uParam0->f_151[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[bVar1 /*5*/].f_1)
					{
						unk_0xACE699C71AB9DEB5(uParam0->f_151[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_151[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_737[bVar1 /*5*/])
			{
				if (!uParam0->f_737[bVar1 /*5*/].f_1)
				{
					if (unk_0x2F844A8B08D76685(uParam0->f_737[bVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[bVar1 /*5*/].f_1)
					{
						unk_0x77ED170667F50170(uParam0->f_737[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_737[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (uParam0->f_763[bVar1 /*5*/])
			{
				if (!uParam0->f_763[bVar1 /*5*/].f_1)
				{
					if (unk_0x6726BDCCC1932F0E(uParam0->f_763[bVar1 /*5*/].f_4))
					{
						uParam0->f_763[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[bVar1 /*5*/].f_1)
					{
						unk_0x261CCE7EED010641(uParam0->f_763[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_763[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 7)
		{
			if (!unk_0xCA042B6957743895(uParam0->f_687[bVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[bVar1 /*7*/])
				{
					iVar2 = unk_0x9B6E70C5CEEF4EEB(uParam0->f_687[bVar1 /*7*/].f_5);
					if (!uParam0->f_687[bVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[bVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								func_90(&(uParam0->f_687[bVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								unk_0xEB119AA014E89183(uParam0->f_687[bVar1 /*7*/].f_5);
								uParam0->f_687[bVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x6726BDCCC1932F0E(uParam0->f_687[bVar1 /*7*/].f_6))
				{
					uParam0->f_687[bVar1 /*7*/].f_5 = unk_0xB66064452270E8F1(uParam0->f_687[bVar1 /*7*/].f_4);
					uParam0->f_687[bVar1 /*7*/].f_3 = unk_0x9CD27B0045628463();
					uParam0->f_687[bVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[bVar1 /*7*/])
					{
						if (uParam0->f_687[bVar1 /*7*/].f_1)
						{
							unk_0xEB119AA014E89183(uParam0->f_687[bVar1 /*7*/].f_5);
							func_90(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_90(&(uParam0->f_687[bVar1 /*7*/]));
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_904[bVar1 /*5*/])
			{
				if (!uParam0->f_904[bVar1 /*5*/].f_1)
				{
					if (unk_0x60F9A4393A21F741(uParam0->f_904[bVar1 /*5*/].f_4))
					{
						uParam0->f_904[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[bVar1 /*5*/].f_1)
					{
						unk_0x3548536485DD792B(uParam0->f_904[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_904[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_955[bVar1 /*5*/])
			{
				if (!uParam0->f_955[bVar1 /*5*/].f_1)
				{
					if (unk_0x9D74AE343DB65533(uParam0->f_955[bVar1 /*5*/].f_4))
					{
						uParam0->f_955[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[bVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_955[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[bVar1 /*5*/])
			{
				if (!uParam0->f_779[bVar1 /*5*/].f_1)
				{
					if (unk_0x02245FE4BED318B8(bVar1))
					{
						uParam0->f_779[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[bVar1 /*5*/].f_1)
					{
						unk_0x2A179DF17CCF04CD(bVar1, true);
						func_90(&(uParam0->f_779[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (unk_0xCA7D9B86ECA7481B())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					unk_0x88C6814073DD4A73();
					func_90(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (unk_0xF2D0E6A75CC05597())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					unk_0x6CE36C35C1AC8163();
					func_90(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && unk_0xA41A05B6CB741B85())
		{
			if (!uParam0->f_893.f_1)
			{
				if (unk_0x01B8247A7A8B9AD1())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
						func_202(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				unk_0xC197616D221FF4A4();
				func_90(&(uParam0->f_893));
			}
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_981[bVar1 /*5*/])
			{
				if (!uParam0->f_981[bVar1 /*5*/].f_1)
				{
					if (unk_0x0145F696AAAAD2E4(uParam0->f_981[bVar1 /*5*/].f_4))
					{
						uParam0->f_981[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[bVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_981[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_310(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_207(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_95(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0xACCFB4ACF53551B0(Param1, fParam2, iParam3);
	uParam0->f_893 = 1;
	uParam0->f_893.f_3 = unk_0x9CD27B0045628463();
	uParam0->f_893.f_4 = { Param1 };
	uParam0->f_893.f_7 = { 0f, 0f, 0f };
	uParam0->f_893.f_10 = fParam2;
	uParam0->f_1007 = 1;
	return 1;
}

void func_311(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_312()
{
	return BitTest(Global_100441.f_20, 13);
}

void func_313(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			uParam0->f_904[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_955[iVar0 /*5*/])
		{
			uParam0->f_955[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_893)
	{
		uParam0->f_893.f_2 = 1;
	}
	if (uParam0->f_885)
	{
		uParam0->f_885.f_2 = 1;
	}
	if (uParam0->f_889)
	{
		uParam0->f_889.f_2 = 1;
	}
}

void func_314()
{
	if (unk_0x991251AFC3981F84())
	{
		unk_0xD220BDD222AC4A1E();
		unk_0x440AF51A3462B86F();
		while (unk_0x991251AFC3981F84())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	func_208();
	if (func_107(Local_53[0 /*2*/]))
	{
		unk_0xD8FA3908D7B86904(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		unk_0x52B4829281364649(&iLocal_290);
		iLocal_249 = 0;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		func_322(&(Local_54[iLocal_247 /*10*/].f_2));
		if (unk_0x7239B21A38F536BA(Local_54[iLocal_247 /*10*/]) && !unk_0x84A2DD9AC37C35C1(Local_54[iLocal_247 /*10*/]))
		{
			if (unk_0x997ABD671D25CA0B(Local_54[iLocal_247 /*10*/], false))
			{
				unk_0x87052FE446E07247(Local_54[iLocal_247 /*10*/], unk_0x3FEF770D40960D5A(unk_0x9A9112A0FE9A4713(Local_54[iLocal_247 /*10*/], false), true) + Vector(0f, -2f, 0f));
			}
			func_321(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0x7239B21A38F536BA(Local_53[iLocal_247 /*2*/]))
		{
			func_320(Local_53[iLocal_247 /*2*/]);
			func_317(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0x7239B21A38F536BA(Local_57[iLocal_247 /*2*/]))
		{
			func_316(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_245))
	{
		unk_0x8F75998877616996(iLocal_245, false);
	}
	func_289();
	func_42(&Local_58, 1, 0);
	func_315(72);
	func_197(1, 0, 0, 3000, 0);
	unk_0x020E5F00CDA207BA(1f);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 300f, true, false, false, false);
	}
	unk_0xA56F01F3765B93A0(1219.186f, -2977.9f, 4.8653f, 300f, true, false, false, false);
	iLocal_268 = unk_0x9CD27B0045628463();
	iLocal_251 = 0;
	iLocal_269 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_307 = 0;
	iLocal_252 = 0;
	func_216(6, 0);
	if (unk_0x88A741E44A2B3495("PO1_08_sub_waterplane"))
	{
		func_202(&uLocal_309);
		unk_0xEE6C5AD3ECE0A82D("PO1_08_sub_waterplane");
	}
	unk_0xA4718A1419D18151();
}

void func_315(int iParam0)
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_316(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (unk_0xB1632E9A5F988D11(*iParam0))
		{
			unk_0x961AC54BF0613F5D(*iParam0, true, true);
		}
		unk_0x539E0AE3E6634B9F(iParam0);
	}
}

void func_317(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		if (func_319(*iParam0))
		{
			if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
			{
				if (func_318(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
					{
						unk_0x629BFA74418D6239(iParam0);
						return;
					}
				}
				unk_0xEA386986E786A54F(iParam0);
			}
		}
		else
		{
			if (func_318(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
				{
					unk_0x629BFA74418D6239(iParam0);
					return;
				}
			}
			unk_0xEA386986E786A54F(iParam0);
		}
	}
}

int func_318(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	if (func_318(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_320(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			iVar0 = unk_0xBB40DD2270B65366(iParam0, -1, false);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				if (!unk_0x84A2DD9AC37C35C1(iVar0))
				{
					unk_0xAAA34F8A7CB32098(iVar0);
				}
				else
				{
					unk_0x9614299DCB53E54B(&iVar0);
				}
			}
			iVar2 = unk_0xA7C4F2C6E744A550(iParam0);
			bVar1 = false;
			while (bVar1 < iVar2)
			{
				if (!unk_0x22AC59A870E6A669(iParam0, bVar1, false))
				{
					iVar0 = unk_0xBB40DD2270B65366(iParam0, bVar1, false);
					if (unk_0x7239B21A38F536BA(iVar0))
					{
						if (!unk_0x84A2DD9AC37C35C1(iVar0))
						{
							unk_0xAAA34F8A7CB32098(iVar0);
						}
						else
						{
							unk_0x9614299DCB53E54B(&iVar0);
						}
					}
				}
				bVar1++;
			}
		}
	}
}

void func_321(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*iParam0, false))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, false, 1);
		}
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		unk_0x9614299DCB53E54B(iParam0);
	}
}

void func_322(int* iParam0)
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

void func_323()
{
	switch (iLocal_1976)
	{
		case 1:
			iLocal_1976 = 2;
			iLocal_1978 = -1;
			break;
		
		case 2:
			iLocal_1976 = 3;
			iLocal_1978 = 0;
			iLocal_1977 = iLocal_1979;
			break;
		
		case 3:
			iLocal_1979 = -1;
			iLocal_1976 = 0;
			break;
		
		case 0:
			if ((unk_0x9CD27B0045628463() - iLocal_1980) > 2500)
			{
				iLocal_1980 = unk_0x9CD27B0045628463();
			}
			break;
	}
}

void func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x991251AFC3981F84())
	{
		if (unk_0xB56BBBCC2955D9CB())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xCA042B6957743895(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							unk_0xBA01E7B6DEEFBBC9(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] != -1)
						{
							unk_0x0546524ADE2E9723(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_325(uParam0);
	}
}

void func_325(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xCA042B6957743895(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_326(var uParam0)
{
	func_309(uParam0);
}

void func_327()
{
	struct<3> Var0;
	var uVar1;
	
	if (func_300() || func_7(0))
	{
		if (func_300())
		{
			iLocal_1982 = func_331();
			if (Global_94618)
			{
				iLocal_1982++;
			}
			if (iLocal_1982 >= 3)
			{
				iLocal_1982 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1982 = 0;
		}
		if (func_300())
		{
			func_311(iLocal_1982, &Var0, &uVar1);
			func_330(Var0, uVar1, 1, 0);
		}
		unk_0xC1B1E9A034A63A62(0);
		iLocal_1981 = 1;
	}
	else
	{
		func_108(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_1977 = 0;
		func_273(0);
	}
	iLocal_1978 = 0;
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	unk_0x704983DF373B198F("EXTRASUNNY");
	unk_0xD2B315B6689D537D(unk_0x4F8644AF03D0E0D6(), false);
	unk_0xB6BA2444AB393DA2(iLocal_259);
	unk_0xB6BA2444AB393DA2(iLocal_260);
	unk_0xF372BC22FCB88606("REL_BUDDY", &iLocal_259);
	unk_0xF372BC22FCB88606("rel_dock", &iLocal_260);
	unk_0xBF25EB89375A37AD(5, iLocal_260, joaat("player"));
	unk_0xBF25EB89375A37AD(1, joaat("player"), iLocal_259);
	unk_0xBF25EB89375A37AD(1, iLocal_259, joaat("player"));
	unk_0xBF25EB89375A37AD(1, iLocal_260, iLocal_260);
	if (!unk_0x7239B21A38F536BA(Local_53[0 /*2*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938[0]))
		{
			unk_0xAD738C3085FE7E11(Global_96938[0], true, true);
			Local_53[0 /*2*/] = Global_96938[0];
			func_307(Local_53[0 /*2*/], 0);
			unk_0x3B988190C0AA6C0B(Local_53[0 /*2*/], true);
		}
	}
	if (!unk_0x7239B21A38F536BA(Local_54[4 /*10*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[0]))
		{
			unk_0xAD738C3085FE7E11(Global_96938.f_9[0], true, true);
			Local_54[4 /*10*/] = Global_96938.f_9[0];
			unk_0xC80A74AC829DDD92(Local_54[4 /*10*/], iLocal_260);
			unk_0x1913FE4CBF41C463(Local_54[4 /*10*/], 208, true);
			unk_0x3B6405E8AB34A907(Local_54[4 /*10*/], 45f);
			unk_0x70793BDCA1E854D4(Local_54[4 /*10*/], 50f);
			unk_0x2DB492222FB21E26(Local_54[4 /*10*/], -50f);
		}
	}
	if (!unk_0x7239B21A38F536BA(Local_57[0 /*2*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938.f_28[0]))
		{
			unk_0xAD738C3085FE7E11(Global_96938.f_28[0], true, true);
			Local_57[0 /*2*/] = Global_96938.f_28[0];
		}
	}
	if (!unk_0x7239B21A38F536BA(Local_57[1 /*2*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938.f_28[1]))
		{
			unk_0xAD738C3085FE7E11(Global_96938.f_28[1], true, true);
			Local_57[1 /*2*/] = Global_96938.f_28[1];
		}
	}
	if (!unk_0x7239B21A38F536BA(Local_57[2 /*2*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938.f_28[2]))
		{
			unk_0xAD738C3085FE7E11(Global_96938.f_28[2], true, true);
			Local_57[2 /*2*/] = Global_96938.f_28[2];
		}
	}
	if (!unk_0x7239B21A38F536BA(Local_57[3 /*2*/]))
	{
		if (unk_0x7239B21A38F536BA(Global_96938.f_28[3]))
		{
			unk_0xAD738C3085FE7E11(Global_96938.f_28[3], true, true);
			Local_57[3 /*2*/] = Global_96938.f_28[3];
		}
	}
	if (Global_96938.f_357)
	{
		if (unk_0xFD5448BE3111ED96(&(Global_96938.f_37[0])))
		{
			unk_0xB1B6216CA2E7B55E(Global_96938.f_37[0], true, true);
			Local_55[0 /*5*/] = Global_96938.f_37[0];
			Global_96938.f_37[0] = 0;
		}
		if (unk_0xFD5448BE3111ED96(&(Global_96938.f_37[1])))
		{
			unk_0xB1B6216CA2E7B55E(Global_96938.f_37[1], true, true);
			Local_55[1 /*5*/] = Global_96938.f_37[1];
			Global_96938.f_37[1] = 0;
		}
		if (unk_0xFD5448BE3111ED96(&(Global_96938.f_37[2])))
		{
			unk_0xB1B6216CA2E7B55E(Global_96938.f_37[2], true, true);
			Local_55[2 /*5*/] = Global_96938.f_37[2];
			Global_96938.f_37[2] = 0;
		}
		if (unk_0xFD5448BE3111ED96(&(Global_96938.f_37[3])))
		{
			unk_0xB1B6216CA2E7B55E(Global_96938.f_37[3], true, true);
			Local_55[3 /*5*/] = Global_96938.f_37[3];
			Global_96938.f_37[3] = 0;
		}
		iLocal_248 = 1;
	}
	else
	{
		iLocal_248 = 0;
	}
	unk_0x71A78003C8E71424("DOCKP1", false);
	while (!unk_0x02245FE4BED318B8(false))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_107(unk_0xD80958FC74E988A6()))
	{
		func_224(&uLocal_78, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	func_329(1);
	unk_0xAA5F02DB48D704B9(2);
	unk_0x020E5F00CDA207BA(0.5f);
	func_328(72);
}

void func_328(int iParam0)
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_329(bool bParam0)
{
	if (bParam0)
	{
		Global_21661 = 1;
	}
	else
	{
		Global_21661 = 0;
	}
}

void func_330(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_300())
	{
		unk_0xAA391C728106F7AF(false);
		unk_0xE80492A9AC099A93(&(Global_100441.f_20), 2);
		unk_0x577D1284D6873711(true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = uParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 14);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_100441.f_20), 24);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_100441.f_20), 24);
		}
		func_299(1);
	}
}

int func_331()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

void func_332()
{
	if (unk_0x991251AFC3981F84())
	{
		unk_0xD220BDD222AC4A1E();
		unk_0x440AF51A3462B86F();
	}
	if (func_107(unk_0xD80958FC74E988A6()))
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_53[0 /*2*/], false))
			{
				unk_0x87052FE446E07247(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(Local_53[0 /*2*/], true) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_208();
	if (func_107(Local_53[0 /*2*/]))
	{
		unk_0xD8FA3908D7B86904(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		unk_0x52B4829281364649(&iLocal_290);
		iLocal_249 = 0;
	}
	if (unk_0x74AFEF0D2E1E409B(iLocal_245))
	{
		unk_0x8F75998877616996(iLocal_245, false);
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (func_107(Local_54[iLocal_247 /*10*/]))
		{
			func_322(&(Local_54[iLocal_247 /*10*/].f_2));
			if (unk_0xA6DB27D19ECBB7DA(Local_54[iLocal_247 /*10*/].f_1))
			{
				unk_0x86A652570E5F25DD(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (unk_0x5891CAC5D4ACFF74(Local_54[iLocal_247 /*10*/]))
			{
				unk_0xED74007FFB146BC2(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != unk_0xD80958FC74E988A6())
			{
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0xA6DB27D19ECBB7DA(Local_53[iLocal_247 /*2*/].f_1))
		{
			unk_0x86A652570E5F25DD(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (func_107(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0)
			{
				func_294(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	func_334(0);
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0x7239B21A38F536BA(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[4 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[5 /*2*/])
			{
				func_91(&(Local_57[iLocal_247 /*2*/]), 1);
			}
			else
			{
				func_316(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	unk_0xD2B315B6689D537D(unk_0x4F8644AF03D0E0D6(), true);
	unk_0xCCC39339BEF76CF5();
	unk_0x020E5F00CDA207BA(1f);
	unk_0xAA5F02DB48D704B9(5);
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	func_329(0);
	func_217(&Local_58, 0);
	func_333();
	if (unk_0x88A741E44A2B3495("PO1_08_sub_waterplane"))
	{
		unk_0xEE6C5AD3ECE0A82D("PO1_08_sub_waterplane");
	}
	unk_0x1090044AD1DA76FA();
}

void func_333()
{
	Global_96296 = 0;
}

void func_334(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112442, unk_0x442E0A7EDE4A738A(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

void func_335()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_7(0))
	{
		if (!func_336())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_100(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_105();
		}
	}
}

int func_336()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_337()
{
	func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

