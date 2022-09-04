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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
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
	var uLocal_784 = 0;
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
	var uLocal_807 = 5;
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
	var uLocal_833 = 3;
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
	var uLocal_849 = 21;
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
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 10;
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
	var uLocal_996 = 0;
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
	var uLocal_1025 = 5;
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
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 5;
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
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	bool bLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	struct<8> Local_1105[5];
	struct<32> Local_1106[20];
	char cLocal_1107[32] = "";
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 16;
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
	var uLocal_1213 = 0;
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
	var uLocal_1264 = 0;
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
	bool bLocal_1277 = 0;
	int iLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	struct<2> Local_1284 = { 0, 0 } ;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	char cLocal_1287[16] = "";
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	int iLocal_1290 = 0;
	float fLocal_1291 = 0f;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	char cLocal_1298[16] = "";
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	bool bLocal_1303 = 0;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	struct<2> Local_1308 = { 0, 0 } ;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	struct<2> Local_1311 = { 0, 0 } ;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	int iLocal_1314 = 0;
	bool bLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	bool bLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	bool bLocal_1324 = 0;
	bool bLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_58 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&Local_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0;
	iLocal_69 = 6;
	iLocal_1278 = -1;
	iLocal_1282 = -1;
	iLocal_1283 = -1;
	StringCopy(&Local_1284, "", 16);
	StringCopy(&cLocal_1287, "", 16);
	fLocal_1291 = 1E+08f;
	iLocal_1294 = 1;
	iLocal_1297 = -1;
	StringCopy(&cLocal_1298, "", 16);
	iLocal_1301 = -1;
	iLocal_1302 = 1;
	iLocal_1306 = -1;
	iLocal_1307 = -1;
	StringCopy(&Local_1308, "", 16);
	StringCopy(&Local_1311, "", 16);
	iLocal_1314 = 1;
	iLocal_1316 = 1;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	if (unk_0xC968670BFACE42D9(3))
	{
		func_300(6);
	}
	unk_0xC4301E5121A0ED73(true);
	func_293();
	func_252();
	while (true)
	{
		unk_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (bLocal_68)
		{
			func_250();
		}
		func_247(&uLocal_70);
		func_189();
		if (!bLocal_66)
		{
			func_187();
			func_176();
			func_175(&Local_1105);
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_63)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	bool bVar0;
	
	if ((iLocal_1323 != -1 && unk_0x7239B21A38F536BA(Local_46[iLocal_1323 /*8*/])) && unk_0x4C241E39B23DF959(Local_46[iLocal_1323 /*8*/], false))
	{
		bVar0 = unk_0xEEF059FAD016D209(Local_46[iLocal_1323 /*8*/]);
		func_23(Local_46[iLocal_1323 /*8*/], -1);
	}
	if (bVar0 >= 750 || bVar0 <= 0)
	{
		Global_96866 = 1000;
	}
	else
	{
		Global_96866 = bVar0;
	}
	if (!func_22(&(Local_1105[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x1090044AD1DA76FA();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0) && Global_78565.f_1 == 1) && func_5(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()
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

int func_5(int iParam0)
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

int func_6(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xCC33FA791322B9D9();
	unk_0x8DFCED7A656F8802(true);
	if (bParam0)
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
	}
	else
	{
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), 1f);
	}
	unk_0xAA5F02DB48D704B9(5);
	unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
	unk_0x102E68B2024D536D(true);
	func_18(&Local_1105);
	func_13(&bLocal_1080, 1, 0);
	bLocal_1277 = false;
	iLocal_1278 = -1;
	iLocal_1317 = 0;
	iLocal_1318 = 0;
	bLocal_1319 = false;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	bLocal_1324 = false;
	bLocal_1325 = false;
	iLocal_1321 = 0;
	if (bParam0)
	{
		func_11();
		unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0xBE31FD6CE464AC59(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x04F8FC8FCF58F88D(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xDD9B9B385AAC7F5B(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x01C7B9B38428AEB6(158.78f, -3100.44f, 6.0019f, 100f, false, false, false, false, false, false, 0);
		unk_0x0A1CB9094635D1A6(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x5D6B2D4830A67C62(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (unk_0x7239B21A38F536BA(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				unk_0x539E0AE3E6634B9F(&(iLocal_47[iVar0]));
			}
			else
			{
				unk_0x3AE22DEB5BA5A3E6(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x9614299DCB53E54B(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x2595DD4236549CE3(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xEA386986E786A54F(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				unk_0x629BFA74418D6239(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x226435CB96CCFC8C(&cLocal_49))
	{
		unk_0xA1CADDCD98415A41(&cLocal_49, bParam0);
	}
	if (iLocal_1327 != 0)
	{
		unk_0x31D16B74C6E29D66(iLocal_1327, false);
	}
	func_9();
}

void func_9()
{
	Global_96296 = 0;
}

void func_10(bool bParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*bParam0))
	{
		if (bParam1)
		{
			unk_0x9614299DCB53E54B(bParam0);
		}
		else
		{
			unk_0x2595DD4236549CE3(bParam0);
		}
	}
	bParam0->f_5 = 0;
	bParam0->f_6 = -1;
	bParam0->f_7 = -1;
	bParam0->f_39 = 0;
	bParam0->f_41 = 0;
	bParam0->f_93 = 1;
	bParam0->f_102 = 0;
	bParam0->f_47 = 0;
	bParam0->f_46 = 0;
	bParam0->f_48 = 0;
	bParam0->f_37 = -1;
	bParam0->f_103 = -1;
	bParam0->f_40 = 0;
	bParam0->f_92 = -1;
	bParam0->f_43 = { 0f, 0f, 0f };
	bParam0->f_88 = { 0f, 0f, 0f };
	bParam0->f_91 = 0;
	if (unk_0x7239B21A38F536BA(bParam0->f_105))
	{
		if (unk_0xB346476EF1A64897(bParam0->f_105))
		{
			unk_0x961AC54BF0613F5D(bParam0->f_105, true, true);
		}
		if (bParam1)
		{
			unk_0x539E0AE3E6634B9F(&(bParam0->f_105));
		}
		else
		{
			unk_0x3AE22DEB5BA5A3E6(&(bParam0->f_105));
		}
	}
	bParam0->f_106 = -1;
	bParam0->f_107 = 0;
	bParam0->f_109 = 0;
	bParam0->f_104 = 0;
}

void func_11()
{
	Global_20471 = 0;
	func_12();
}

void func_12()
{
	unk_0x9AEB285D1818C9AC();
	Global_22616 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_21605 = 6;
	}
}

void func_13(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(bParam0->f_1[bVar0]))
		{
			unk_0x86A652570E5F25DD(&(bParam0->f_1[bVar0]));
		}
		func_16(bVar0, bParam0);
		func_15(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			unk_0xE80492A9AC099A93(&(bParam0->f_13), bVar0);
			unk_0xE80492A9AC099A93(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (unk_0xA6DB27D19ECBB7DA(*bParam0))
	{
		unk_0x86A652570E5F25DD(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[bVar0]))
		{
			unk_0x6373D1349925A70E(bParam0->f_17[bVar0], true);
			unk_0x0EB0585D15254740(bParam0->f_17[bVar0], true);
			if (bParam2)
			{
				unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 32, true);
				unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 305, false);
			}
			unk_0x1913FE4CBF41C463(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9BB01E3834671191(bParam0->f_17[bVar0], func_14()) && bParam0->f_17[bVar0] != unk_0xD80958FC74E988A6())
				{
					unk_0xED74007FFB146BC2(bParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(bParam0->f_13, 29))
			{
				unk_0xD75ACCF5E0FB5367(bParam0->f_17[bVar0], false, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
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
	bParam0->f_21 = 0;
}

int func_14()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_15(bool bParam0, var uParam1)
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

void func_16(int iParam0, var uParam1)
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

void func_17(bool bParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(bParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
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

int func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
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

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_64 = 0;
		bLocal_65 = false;
		iLocal_63 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_65)
	{
		func_174(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		func_173(&uLocal_70, joaat("s_m_m_security_01"));
		func_172(&(Local_1105[1 /*8*/]), 0, 0, 1);
		func_172(&(Local_1105[0 /*8*/]), 0, 0, 1);
		func_172(&(Local_1105[4 /*8*/]), 0, 0, 1);
		func_111(0f, 0f, 0f, 0f, 1, func_167());
		Global_96866 = 1000;
		unk_0x020E5F00CDA207BA(0.1f);
		func_110("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_65 = true;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0:
				if (func_105(1) == 0)
				{
					func_13(&bLocal_1080, 1, 0);
					func_23(0, -1);
					func_104(0, -1);
				}
				else if ((func_103() && unk_0x7239B21A38F536BA(Local_46[func_102() /*8*/])) && unk_0x4C241E39B23DF959(Local_46[func_102() /*8*/], false))
				{
					unk_0xB3B3359379FE77D3(0.5f);
					if (iLocal_1323 != func_102())
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						func_23(Local_46[func_102() /*8*/], -1);
						func_104(Local_46[func_102() /*8*/], -1);
						iLocal_1323 = func_102();
					}
					if (func_100(&bLocal_1080, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_46[func_102() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_64++;
					}
				}
				else if (func_99())
				{
					unk_0xB3B3359379FE77D3(0.5f);
					func_55(&bLocal_1080, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, bLocal_1324, "", "", "", 1, 0, 1, -1);
					if (unk_0x51210CED3DA1C78A(Local_46[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, false, true, 0))
					{
						iLocal_64++;
					}
				}
				else
				{
					func_17(&bLocal_1080);
					func_23(0, -1);
					func_104(0, -1);
				}
				break;
			
			case 1:
				if (func_103())
				{
					if (func_52(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_99())
				{
					if (func_52(bLocal_1324, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
						func_51(1);
						func_50(1, 0);
						iLocal_64 = 1000;
					}
					else
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_64++;
					}
					if (func_103())
					{
						unk_0x31B927BBC44156CD(Local_46[iLocal_1323 /*8*/], false);
					}
					else if (func_99())
					{
						unk_0x31B927BBC44156CD(Local_46[func_54() /*8*/], false);
						unk_0x2B6747FAA9DB9D6B(Local_46[func_54() /*8*/], true);
						unk_0xD0E9CE05A1E68CD8(Local_46[func_54() /*8*/]);
					}
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
				}
				break;
			
			case 2:
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_50(1, 0);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_1112, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1112, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_64++;
					}
				}
				break;
			
			case 1001:
				func_50(1, 0);
				if (func_27())
				{
					unk_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_64++;
				}
				break;
			
			case 1002:
				func_50(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 157, true);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97810[iVar0]))
		{
			if (!unk_0x5F9532F3B5CC2551(Global_97810[iVar0], false))
			{
				unk_0xFAEE099C6F890BB8(Global_97810[iVar0], false, false, false, false, false, false, false, false);
				unk_0x3882114BDE571AD4(Global_97810[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_43052 != 0 && Global_43052 != 3) && Global_43052 != 2)
	{
		unk_0xAA5F02DB48D704B9(5);
		unk_0x020E5F00CDA207BA(1f);
	}
}

int func_27()
{
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_41();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_35();
		func_30();
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
		func_43();
	}
	return 0;
}

void func_30()
{
	if (!func_31())
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

int func_31()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_34())
	{
		return 0;
	}
	if (func_32(unk_0x4F8644AF03D0E0D6()))
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

bool func_32(bool bParam0)
{
	return func_33(bParam0, 20);
}

var func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_34()
{
	return -1;
}

void func_35()
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

void func_36()
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

int func_37()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
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

void func_39()
{
	if (func_40(14))
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
		Global_20266 = func_167();
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

bool func_40(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_41()
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

bool func_42(int iParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_45(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_46()
{
	Global_20471 = 0;
	func_47();
}

void func_47()
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

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 0;
		}
	}
	return 1;
}

int func_49()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0xFE99B66D079CF6BC(0, 21, true);
	}
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0xFE99B66D079CF6BC(0, 24, true);
	unk_0xFE99B66D079CF6BC(0, 257, true);
	unk_0xFE99B66D079CF6BC(0, 141, true);
	unk_0xFE99B66D079CF6BC(0, 140, true);
	unk_0xFE99B66D079CF6BC(0, 22, true);
	unk_0xFE99B66D079CF6BC(0, 44, true);
	unk_0xFE99B66D079CF6BC(0, 23, true);
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xFE99B66D079CF6BC(0, 36, true);
	if (bParam0)
	{
		unk_0xFE99B66D079CF6BC(0, 37, true);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		if (bParam1)
		{
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 2f);
		}
		else
		{
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 1f);
		}
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 102, true);
	}
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
	}
}

void func_51(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 157, false);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
		unk_0x88CBB5CEB96B7BD2(unk_0xD80958FC74E988A6(), false, 0);
		if (bParam0)
		{
			unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), false);
		}
		unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), false);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
	}
	unk_0xAA5F02DB48D704B9(false);
	unk_0x020E5F00CDA207BA(0f);
}

int func_52(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_53(bParam0);
	if ((unk_0x9CD27B0045628463() - Global_29) > 500)
	{
		unk_0x260BE8F09E326A20(bParam0, fParam1, bParam2, bParam4);
	}
	Global_29 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_53(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		if (unk_0x36D782F68B309BDA(bParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(bParam0))
			{
				unk_0x81E1552E35DC3839(bParam0, false);
			}
		}
	}
}

int func_54()
{
	int iVar0;
	
	if (func_99())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(bLocal_1324, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_55(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_56(bParam0, Param1, Param2, func_98(), func_98(), bParam3, 5, 0, 0, 0, bParam4, bParam5, func_97(), func_97(), func_97(), func_97(), bParam6, 0, bParam8, bParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_56(bool bParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, bool bParam28)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = iParam7;
	bParam0->f_17[1] = iParam8;
	bParam0->f_17[2] = iParam9;
	bParam0->f_16 = iParam7;
	func_96(bParam0);
	func_95(bParam0);
	func_94();
	if (func_78(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam12, bParam13, bParam14, bParam15, bParam0->f_8, bParam17, bParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_77(bParam12);
		func_77(bParam13);
		func_77(bParam14);
		func_77(bParam15);
		if (unk_0x5A859503B0C08678())
		{
			bVar1 = false;
			if (unk_0x4C241E39B23DF959(bParam10, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false))
				{
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
					if (!BitTest(bParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
					}
					if (BitTest(bParam0->f_13, 23))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 23);
					}
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_75(bParam0, iParam21))
				{
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
					if (!BitTest(bParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
					}
					unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_77(bParam16);
				func_77(bParam19);
				func_77("MORE_SEATS");
				if (bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						func_77(bParam11);
					}
					if (unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(bParam0);
					}
					if ((!func_72(bParam0, 1) && !func_71(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_70(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(bParam0->f_13, 0))
					{
						func_77("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_72(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
						}
					}
					if (!unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
					{
						if (unk_0xA6DB27D19ECBB7DA(*bParam0))
						{
							unk_0x86A652570E5F25DD(bParam0);
						}
						bParam0->f_5 = func_67(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0xDF735600A4696DAF(bParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_66(bParam0->f_5, bParam0);
						}
					}
					else if (!func_65(Var3, unk_0x586AFE3FF72D996E(bParam0->f_5), 0.1f, 0))
					{
						unk_0xAE2AF67E9D9AF65D(bParam0->f_5, Var3);
						if (bParam27)
						{
							func_66(bParam0->f_5, bParam0);
						}
					}
					if (!func_72(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 2))
						{
							func_70(bParam0, bParam11, 0);
							unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(bParam0->f_13, 13))
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
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Param3, Param4, bParam28, false, bVar4, iVar5))
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
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									if (!unk_0xA3EE4A07279BB9DB(bParam0->f_17[iVar2], bVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (bParam10 != 0)
								{
									if (!unk_0xA3EE4A07279BB9DB(bParam0->f_17[iVar2], bParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9BB01E3834671191(bParam0->f_17[iVar2], func_14()) || !func_63(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_60(bParam0))
							{
								func_77(bParam11);
								func_77(bParam16);
								func_77(bParam12);
								func_77(bParam13);
								func_77(bParam14);
								func_77(bParam15);
								func_77("LOSE_WANTED");
								func_77("MORE_SEATS");
								func_77(bParam19);
								func_13(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x7239B21A38F536BA(bParam10))
			{
				if ((bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && (!BitTest(bParam0->f_13, 9) && !BitTest(bParam0->f_13, 22)))
				{
					func_77(bParam16);
					func_77(bParam19);
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						unk_0x86A652570E5F25DD(bParam0);
						func_77(bParam11);
					}
					if ((!func_72(bParam0, 1) && !func_71(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_70(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), false);
						unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(bParam0->f_13, 0))
					{
						func_77("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_72(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(bParam0->f_13), true);
						}
					}
					if (unk_0x4C241E39B23DF959(bParam10, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA(*bParam0))
						{
							if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
							{
								unk_0x86A652570E5F25DD(&(bParam0->f_5));
								func_77(bParam11);
							}
							*bParam0 = func_57(bParam10, 0, 0);
							unk_0x9029B2F3DA924928(*bParam0, 2);
							if (!BitTest(bParam0->f_13, 4))
							{
								func_66(*bParam0, bParam0);
							}
						}
						if (!func_72(bParam0, 2))
						{
							if (!BitTest(bParam0->f_13, 3))
							{
								func_70(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (BitTest(bParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(bParam19))
								{
									if (!BitTest(bParam0->f_13, 4))
									{
										func_70(bParam0, bParam19, 0);
										unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
									}
								}
								else if (!BitTest(bParam0->f_13, 4))
								{
									func_70(bParam0, bParam16, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
								if (!BitTest(bParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
									{
										func_68(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
				{
					unk_0x86A652570E5F25DD(&(bParam0->f_5));
					func_77(bParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_72(bParam0, 2))
						{
							if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
							{
								if (!BitTest(bParam0->f_13, 13))
								{
									bVar6 = false;
									bVar7 = false;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[iVar2]))
										{
											bVar6++;
										}
										iVar2++;
									}
									bVar7 = unk_0xD53343AA4FB7DD28(false, bVar6);
									if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[bVar7]))
									{
										func_68(bParam0->f_17[bVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_70(bParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 13);
								}
							}
							else if (!BitTest(bParam0->f_13, 3))
							{
								func_70(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								if (BitTest(bParam0->f_13, 9))
								{
									func_70(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_72(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 3))
						{
							func_70(bParam0, bParam16, 0);
							unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
						}
						else if (BitTest(bParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(bParam19))
							{
								if (!BitTest(bParam0->f_13, 4))
								{
									func_70(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								func_70(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(bParam0->f_13, 0))
		{
			unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
		}
		func_77(bParam11);
		func_77(bParam16);
		func_77(bParam19);
		func_77(bParam16);
		func_77("LOSE_WANTED");
		if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
		{
			unk_0x86A652570E5F25DD(&(bParam0->f_5));
		}
		if (unk_0xA6DB27D19ECBB7DA(*bParam0))
		{
			unk_0x86A652570E5F25DD(bParam0);
		}
	}
	unk_0xE80492A9AC099A93(&(bParam0->f_13), 11);
	unk_0xE80492A9AC099A93(&(bParam0->f_13), 12);
	return 0;
}

bool func_57(bool bParam0, bool bParam1, bool bParam2)
{
	return func_58(bParam0, !bParam1, bParam2);
}

bool func_58(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_59(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_59(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_59(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_60(bool bParam0)
{
	if (BitTest(bParam0->f_13, 12))
	{
		if (func_62(unk_0xD80958FC74E988A6()))
		{
			if (func_61(1, 0, 1) || BitTest(bParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_61(1, 0, 1) || BitTest(bParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
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

int func_62(bool bParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(bool bParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_64(unk_0xD80958FC74E988A6(), bParam0))
			{
				unk_0x4102C7858CFEE4E4(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(bParam0, func_14()))
		{
			unk_0x4102C7858CFEE4E4(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x826AA586EDB9FEF8(bParam0))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam0, false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(bParam1))
				{
					if (unk_0xA808AA1D79230FC2(bParam1, bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_66(bool bParam0, bool bParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(bParam0))
	{
		if (unk_0xA6DB27D19ECBB7DA(bParam1->f_6))
		{
			unk_0x4F7D8A9BFB0B43E9(bParam1->f_6, false);
		}
		unk_0x3DDA37128DD1ACA8(false);
		unk_0x67EEDEA1B9BAFD94();
		bParam1->f_6 = bParam0;
		unk_0x4F7D8A9BFB0B43E9(bParam0, true);
	}
}

bool func_67(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_59(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

void func_68(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_69(iParam2), true);
}

int func_69(int iParam0)
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

void func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_110(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = unk_0x9CD27B0045628463();
}

int func_71(bool bParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0->f_16))
	{
		if (unk_0x9072C8B49907BFAD(bParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_74(bParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
	{
		if (func_49() && !func_73())
		{
			return 1;
		}
	}
	return 0;
}

int func_73()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0)
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

int func_75(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_76(bVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
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
		iVar1 = unk_0xA7C4F2C6E744A550(bParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xF7F203E31F96F6A1(bParam0, 1))
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
				if (!unk_0xF7F203E31F96F6A1(bParam0, 1))
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

void func_77(bool bParam0)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		unk_0xCF708001E1E536DD(bParam0);
	}
}

int func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
	bool bVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	bool bVar20;
	bool bVar21;
	
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
			bVar15 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, false, iVar16);
			if (unk_0x4C241E39B23DF959(bVar15, false))
			{
				uParam0->f_21 = bVar15;
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
						if (func_76(uParam0->f_21, uParam0, iVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470) == 7 && !func_93(uParam0->f_17[bVar0], uParam0->f_21))
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
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
					{
						if (func_91(uParam0, uParam0->f_17[bVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_14());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_90(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(bParam10))
		{
			bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_72(uParam0, 2))
					{
						bVar17 = false;
						bVar18 = false;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
							{
								bVar17++;
							}
							bVar0++;
						}
						bVar18 = unk_0xD53343AA4FB7DD28(false, bVar17);
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar18]))
						{
							func_68(uParam0->f_17[bVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_70(uParam0, "MORE_SEATS", 0);
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
			func_77("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(bParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_72(uParam0, 2))
					{
						bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_89(bVar10, uParam0))
						{
							func_70(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_77("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x4C241E39B23DF959(bParam10, false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bParam10))
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
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], true);
					}
					else
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[bVar0], false);
					}
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(bVar10, false))
						{
							if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
							{
								if (!func_90(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_88(uParam0->f_17[bVar0]))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar10 != bParam10 && !unk_0x5F9532F3B5CC2551(bVar10, false))
						{
							if (unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], bVar10))
							{
								if (unk_0xCFB0A0D8EDD145A3(bVar10) && !unk_0xB104CD1BABF302E2(bVar10))
								{
									Var19 = { unk_0x3FEF770D40960D5A(bVar10, true) };
									if (Var19.f_2 < -1f)
									{
										unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
					{
						if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
						{
							bVar10 = unk_0x9A9112A0FE9A4713(uParam0->f_17[bVar0], false);
							if (!unk_0x5F9532F3B5CC2551(bVar10, false))
							{
								if (unk_0x4C241E39B23DF959(bParam10, false))
								{
									if (bVar10 != bParam10)
									{
										if (!unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bVar10))
										{
											if (unk_0xD5037BA82E12416F(bVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
									{
										bVar20 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									}
									if (unk_0x4C241E39B23DF959(bVar20, false))
									{
										if (bVar10 != bVar20)
										{
											if (unk_0xD5037BA82E12416F(bVar10) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[bVar0], bVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
					{
						bVar21 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(bVar21))
						{
							if (func_76(bVar21, uParam0, 0))
							{
								if (func_87(bVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
									func_15(bVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_87(bVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(bVar21) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 2);
								}
								func_86(bVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()) && !func_85(uParam0->f_17[bVar0], bParam10)) && !func_84(uParam0->f_17[bVar0], bParam10))
					{
						if (func_91(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]))
								{
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								uParam0->f_11 = unk_0x9CD27B0045628463();
								uParam0->f_1[bVar0] = func_57(uParam0->f_17[bVar0], 0, 0);
								unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_66(uParam0->f_1[bVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
					{
						if (((func_63(uParam0->f_17[bVar0], 1) || func_85(uParam0->f_17[bVar0], bParam10)) || iParam12) || (unk_0x4C241E39B23DF959(bParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
								func_77(uVar12[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_66(uParam0->f_1[bVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x4C241E39B23DF959(bParam10, false))
					{
						if (!unk_0xA808AA1D79230FC2(uParam0->f_17[bVar0], bParam10))
						{
							if ((unk_0x751B70C3D034E187(uParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false)))
							{
								if (unk_0x826AA586EDB9FEF8(uParam0->f_17[bVar0]))
								{
									if (!unk_0xA3EE4A07279BB9DB(uParam0->f_17[bVar0], bParam10, false))
									{
										if (!func_63(uParam0->f_17[bVar0], 1))
										{
											if (func_62(uParam0->f_17[bVar0]))
											{
												iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x504D54DF3F6F2247(uParam0->f_17[bVar0], false, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
										}
									}
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7 && !func_93(uParam0->f_17[bVar0], bParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_83(uParam0->f_17[bVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
											}
											unk_0xC20E50AA46D09CA8(uParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											unk_0xBC0ED94165A48BC2(uParam0->f_17[bVar0], false);
										}
									}
									else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false))
									{
										uParam0->f_1[bVar0] = func_57(uParam0->f_17[bVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
							{
								if (func_91(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
									{
										iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_14());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_14()) && !unk_0x28D3FED7190D3A0B(bParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_77(uVar12[bVar0]);
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
		if (!func_72(uParam0, 2))
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
							if (func_88(uParam0->f_17[bVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_88(uParam0->f_17[bVar0]))
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
								func_70(uParam0, bParam7, 0);
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
									if (!func_82(bVar0, uParam0))
									{
										if (!unk_0xF22B6C47C6EAB066(uVar13[bVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar13[bVar0], ""))
											{
												func_80(uParam0, uVar12[bVar0], uVar13[bVar0], 0);
												func_79(bVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_82(bVar0, uParam0))
										{
											func_70(uParam0, uVar12[bVar0], 0);
											func_79(bVar0, uParam0);
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
					func_77(uVar12[bVar0]);
				}
				bVar0++;
			}
			func_77("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_79(bool bParam0, var uParam1)
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

void func_80(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_81(bParam1, bParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_81(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

int func_82(bool bParam0, var uParam1)
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

int func_83(bool bParam0, float fParam1)
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(bParam0, false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(bParam0, false);
		if (!unk_0x5F9532F3B5CC2551(bVar0, false))
		{
			if (unk_0xD5037BA82E12416F(bVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x9BB01E3834671191(bParam0, func_14()))
		{
			iVar0 = unk_0xF92691AED837A5FC(bParam0);
			if (unk_0x4C241E39B23DF959(bParam1, false))
			{
				if (unk_0x751B70C3D034E187(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == bParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x7239B21A38F536BA(bParam1))
		{
			if (unk_0x4C241E39B23DF959(bParam1, false))
			{
				if (unk_0xA808AA1D79230FC2(bParam0, bParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86(bool bParam0, var uParam1)
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

int func_87(bool bParam0, var uParam1)
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

int func_88(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		bVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(bVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(bParam0))
			{
				bVar1 = unk_0x6094AD011A2EA87D(bParam0);
				if (unk_0x4C241E39B23DF959(bVar1, false))
				{
					if (bVar0 == bVar1)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam0, 20f, 20f, 20f, false, true, 0) && unk_0x751B70C3D034E187(bParam0, bVar1, 20f, 20f, 20f, false, true, 0))
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

int func_89(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (unk_0x9F47B058362C84B5(bParam0) == joaat("bus") || unk_0x9F47B058362C84B5(bParam0) == joaat("coach"))
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
			bVar3 = unk_0xBB40DD2270B65366(bParam0, false, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar3))
			{
				if ((bVar3 == uParam1->f_17[0] || bVar3 == uParam1->f_17[1]) || bVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = unk_0xBB40DD2270B65366(bParam0, true, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar4))
			{
				if ((bVar4 == uParam1->f_17[0] || bVar4 == uParam1->f_17[1]) || bVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = unk_0xBB40DD2270B65366(bParam0, 2, false);
			if (!unk_0x84A2DD9AC37C35C1(bVar5))
			{
				if ((bVar5 == uParam1->f_17[0] || bVar5 == uParam1->f_17[1]) || bVar5 == uParam1->f_17[2])
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

int func_90(var uParam0)
{
	bool bVar0;
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_76(bVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(var uParam0, bool bParam1, float fParam2, bool bParam3)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam1))
	{
		if (unk_0x826AA586EDB9FEF8(bParam1))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(bParam1, false);
			if (!unk_0x5F9532F3B5CC2551(bVar0, false))
			{
				if (unk_0x4C241E39B23DF959(bVar0, false))
				{
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bVar0))
					{
						if (func_90(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), bParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				bVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(bVar0))
				{
					if (func_76(bVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(bVar0, false))
						{
							if (func_92(bVar0))
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

int func_92(bool bParam0)
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		fVar0 = unk_0xD5037BA82E12416F(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam1, false))
		{
			bVar0 = unk_0x6094AD011A2EA87D(bParam0);
			if (bVar0 == bParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_94()
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

void func_95(var uParam0)
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

void func_96(var uParam0)
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

bool func_97()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_98()
{
	struct<3> Var0;
	
	return Var0;
}

int func_99()
{
	if (unk_0x7239B21A38F536BA(bLocal_1324) && unk_0x4C241E39B23DF959(bLocal_1324, false))
	{
		return 1;
	}
	return 0;
}

bool func_100(bool bParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_56(bParam0, Param1, func_101(), Param2, Param3, bParam5, 5, 0, 0, 0, bParam6, bParam7, func_97(), func_97(), func_97(), func_97(), bParam8, 0, bParam10, bParam9, 1, iParam11, bParam12, iParam13, func_97(), func_97(), func_97(), 1, bParam4);
}

Vector3 func_101()
{
	return 0f, 0f, 2f;
}

int func_102()
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_46[iVar0 /*8*/], true))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_103()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_46[iVar0 /*8*/], false))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_104(int iParam0, int iParam1)
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

int func_105(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0x7239B21A38F536BA(Local_46[iVar1 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar1 /*8*/], false)) && !func_109(Local_46[iVar1 /*8*/])) && (!bParam0 || func_106(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_106(bool bParam0)
{
	if (unk_0x2107BA504071A6BB(bParam0) == iLocal_1281)
	{
		if (func_108(unk_0xD80958FC74E988A6(), Local_58, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_107(bParam0, unk_0xD80958FC74E988A6(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_107(bool bParam0, bool bParam1, bool bParam2)
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

float func_108(bool bParam0, struct<3> Param1, bool bParam2)
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

int func_109(bool bParam0)
{
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if ((unk_0x679BE1DAF71DA874(bParam0, 0, 7000) || unk_0x679BE1DAF71DA874(bParam0, 1, 7000)) || unk_0x679BE1DAF71DA874(bParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_111(struct<3> Param0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x7239B21A38F536BA(Global_103950.f_4))
	{
		if (unk_0x4C241E39B23DF959(Global_103950.f_4, false))
		{
			if (func_166(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_163(unk_0x3FEF770D40960D5A(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						bParam1 = uVar1;
					}
				}
				func_112(Global_103950.f_4, Param0, bParam1, 24, 0);
			}
		}
	}
}

void func_112(bool bParam0, struct<3> Param1, bool bParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x7239B21A38F536BA(Global_77137.f_484[25]) && unk_0x4C241E39B23DF959(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9F243D3919F442FE(bParam0) || unk_0x9F47B058362C84B5(bParam0) == joaat("bus")) || unk_0x9F47B058362C84B5(bParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_162(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_157(bParam0, &Var0);
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3FEF770D40960D5A(bParam0, true) };
			bParam2 = unk_0xE83D4F9BA2A38914(bParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
			}
		}
		func_149(iParam3, &Var0, Param1, bParam2, func_155(bParam0));
		func_113(iParam3, bParam0, 0);
	}
}

void func_113(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != unk_0x9F47B058362C84B5(bParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(bParam1))
	{
		if (unk_0x4C241E39B23DF959(bParam1, false))
		{
			if (!unk_0x0A7B270912999B3C(bParam1))
			{
				unk_0xAD738C3085FE7E11(bParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_134();
			}
			if (bParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_166(iParam0);
					if ((unk_0x7239B21A38F536BA(bVar0) && unk_0x4C241E39B23DF959(bVar0, false)) && bParam1 != bVar0)
					{
						func_114(bVar0, 145);
					}
				}
				Global_78043 = bParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_114(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_115(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = unk_0xBB40DD2270B65366(bParam0, -1, false);
		if (!unk_0x7239B21A38F536BA(bVar0))
		{
			bVar0 = unk_0x83F969AA1EE2A664(bParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(bVar0) && !unk_0x84A2DD9AC37C35C1(bVar0))
		{
			if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(bVar0) == joaat("player_two"))
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
			if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
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
		if (unk_0x9F47B058362C84B5(bParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xCA042B6957743895(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(bParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = bParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_157(bParam0, &(Global_113386.f_32749.f_5510));
}

int func_115(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_132(bParam0, 0, 0)) || func_132(bParam0, 1, 0)) || func_132(bParam0, 2, 0)) || func_155(bParam0) != 145) || func_131(bParam0)) || func_130(bParam0)) || func_129(bParam0)) || func_128(bParam0)) || !func_116(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_130(bParam0))
		{
		}
		if (func_130(bParam0))
		{
		}
		if (func_132(bParam0, 0, 0))
		{
		}
		if (func_132(bParam0, 1, 0))
		{
		}
		if (func_132(bParam0, 2, 0))
		{
		}
		if (func_155(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_116(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_117(bParam0, 0))
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

int func_117(bool bParam0, bool bParam1)
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
		if (!func_127())
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
		if ((((!func_126() && !func_125()) && !func_124()) && !func_123()) && !func_127())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_122() || unk_0x48AF36444B965238()) || func_121())
		{
		}
		else if (!func_124())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_120(bParam0))
		{
			return 0;
		}
	}
	if (!func_118(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_118(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_119())
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

int func_119()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_120(bool bParam0)
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

bool func_121()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_122()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_123()
{
	return 0;
}

int func_124()
{
	return 1;
}

int func_125()
{
	return 1;
}

int func_126()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_127()
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

int func_128(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_117(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_129(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == bParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_97772[iVar0]) && unk_0x4C241E39B23DF959(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == bParam0 && unk_0x9F47B058362C84B5(Global_97772[iVar0]) == unk_0x9F47B058362C84B5(bParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_131(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_77137.f_484[24]))
	{
		if (bParam0 == Global_77137.f_484[24])
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
				if (bParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_133(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_134()
{
	var uVar0;
	
	func_144(&uVar0, unk_0x494E97C2EF27C470());
	func_143(&uVar0, unk_0x13D2B8ADD79640F2());
	func_142(&uVar0, unk_0x25223CA6B4D20B7F());
	func_137(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_136(&uVar0, unk_0xBBC72712E80257A1());
	func_135(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_135(var uParam0, int iParam1)
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

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (bParam1 < 1 || bParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_138(int iParam0, int iParam1)
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

var func_139(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_140(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(var uParam0)
{
	return uParam0 & 15;
}

void func_142(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_143(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_145(var uParam0, int iParam1)
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
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_146(2, 1);
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
			if (func_127())
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
			if (func_127())
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
		if (!func_156(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_156(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_156(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_148(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_147(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_147(int iParam0, var uParam1, int iParam2)
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

bool func_148(int iParam0)
{
	return iParam0 < 3;
}

void func_149(int iParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4)
{
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_154(iParam0);
			func_153(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = bParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_150(iParam0, 1);
		}
	}
}

void func_150(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_152(iParam0, 0))
		{
			func_151(iParam0, 1, 0);
			func_151(iParam0, 2, 0);
			func_151(iParam0, 3, 0);
			func_151(iParam0, 4, 0);
			func_151(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_151(iParam0, 0, 0);
	}
}

void func_151(int iParam0, bool bParam1, bool bParam2)
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

int func_152(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_153(var uParam0, var uParam1)
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

void func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
			unk_0x629BFA74418D6239(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_150(iParam0, 0);
		}
	}
}

int func_155(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == bParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_156(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_157(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_161(uParam1);
		uParam1->f_66 = unk_0x9F47B058362C84B5(bParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(bParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(bParam0);
		unk_0xA19435F193E081AC(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x0EE21293DAD47C95(bParam0);
		uParam1->f_67 = unk_0x2BB9230590DA5E8A(bParam0);
		uParam1->f_69 = unk_0xB3ED1BFB4BE636DC(bParam0);
		uParam1->f_70 = unk_0x25BC98A59C2EA962(bParam0);
		unk_0x8389CD56CA8072DC(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7619EEE8C886757F(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8C4B92553E4766A5(bParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 28);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 29);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 30);
		}
		if (unk_0x8C4B92553E4766A5(bParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			uParam1->f_68 = unk_0xF8C397922FC03F41(bParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_66))
		{
			if (unk_0x4198AB0022B15F87(bParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(bParam0))
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
		if (!unk_0x678B9BB8C3F58FEB(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 10);
		}
		if (unk_0xF095C0405307B21B(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 13);
			unk_0xB64CF2CCA9D95F52(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x910A32E7AAD2656C(bParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 12);
		}
		func_159(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(bParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 11);
		}
		if (unk_0x05661B80A8C9165F(bParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(bParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_77), 27);
		}
	}
}

int func_158(int iParam0)
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

int func_159(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
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
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				(*uParam1)[bVar0] = 1;
			}
		}
		else if (bVar1 == 22)
		{
			if (unk_0x84B233A8C8FC8AE7(*bParam0, bVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*bParam0))
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
			(*uParam1)[bVar0] = unk_0x772960298DA26FDB(*bParam0, bVar0) + 1;
			if (bVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
			else if (bVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*bParam0, bVar0);
			}
		}
		bVar0++;
	}
	return 1;
}

int func_160(int iParam0)
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

void func_161(var uParam0)
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

void func_162(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_154(iParam0);
	func_150(iParam0, 0);
}

int func_163(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_164(Param0, iParam1, 1);
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

int func_164(struct<3> Param0, int iParam1, int iParam2)
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
				if (func_165(iVar0) || iParam2 == 0)
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

var func_165(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_166(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_167()
{
	func_168();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_168()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_170(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_169(unk_0xD80958FC74E988A6());
			if (func_148(iVar0) && (!func_40(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_148(Global_113386.f_2363.f_539.f_4321))
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

int func_169(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)
{
	if (func_148(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_172(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x9CD27B0045628463();
		uParam0->f_5 = unk_0x9CD27B0045628463();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_173(var uParam0, bool bParam1)
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

int func_174(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_737[iVar0 /*5*/].f_4, bParam1))
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
		unk_0x2F844A8B08D76685(bParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_737[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_175(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x9CD27B0045628463() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_176()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_108(unk_0xD80958FC74E988A6(), Local_58, 1) < 70f)
	{
		unk_0x1121BFA1A1A522A8();
	}
	if (iLocal_1322 == 9)
	{
		if (!iLocal_1321)
		{
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1321 = 1;
			}
		}
		if (unk_0x7239B21A38F536BA(Local_29.f_0))
		{
			if (func_107(Local_29.f_0, unk_0xD80958FC74E988A6(), 1) > 300f)
			{
				unk_0x2595DD4236549CE3(&Local_29);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(bLocal_1324) && unk_0x4C241E39B23DF959(bLocal_1324, false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(bLocal_1324, Local_46[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			bLocal_1324 = false;
		}
	}
	if (func_186())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), Local_46[iVar0 /*8*/]))
				{
					bLocal_1324 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				}
			}
			iVar0++;
		}
	}
	func_179();
	if (iLocal_63 == 0)
	{
		if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_107(unk_0xD80958FC74E988A6(), Local_28[iVar1 /*110*/], 1) > 300f) && func_108(unk_0xD80958FC74E988A6(), Local_58, 1) > 300f)
				{
					unk_0x9614299DCB53E54B(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]))
			{
				if (!unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
				{
					unk_0x629BFA74418D6239(&(Local_46[iVar0 /*8*/]));
					if (unk_0xA6DB27D19ECBB7DA(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x86A652570E5F25DD(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_109(Local_46[iVar0 /*8*/]))
				{
					if (unk_0xA6DB27D19ECBB7DA(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x86A652570E5F25DD(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_106(Local_46[iVar0 /*8*/]))
				{
					if (unk_0x2107BA504071A6BB(Local_46[iVar0 /*8*/]) == iLocal_1281)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1322 == 9 && func_102() != -1) && unk_0x7239B21A38F536BA(Local_46[func_102() /*8*/])) && unk_0x4C241E39B23DF959(Local_46[func_102() /*8*/], false)) && !func_109(Local_46[func_102() /*8*/])) || (((iLocal_1322 == 10 && func_54() != -1) && unk_0x7239B21A38F536BA(Local_46[func_54() /*8*/])) && unk_0x4C241E39B23DF959(Local_46[func_54() /*8*/], false)))
			{
				if (unk_0xA6DB27D19ECBB7DA(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false)) && !func_109(Local_46[iVar0 /*8*/])) && func_106(Local_46[iVar0 /*8*/])) && iLocal_64 == 0)
			{
				if (!unk_0xA6DB27D19ECBB7DA(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = func_178(Local_46[iVar0 /*8*/], 0, 0);
					unk_0xAE9FC9EF6A9FAC79(Local_46[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1322 == 9 || iLocal_1322 == 10)
		{
			if (func_177("JHP1A_BKIN", 0, 0) || func_177("JHP1A_BKINANY", 0, 0))
			{
				unk_0xCC33FA791322B9D9();
			}
		}
		else if (iLocal_64 == 0)
		{
			if (!iLocal_1316)
			{
				if (func_105(1) == 1)
				{
					func_110("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1316 = 1;
			}
		}
		if (func_105(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_300(iVar4);
			}
		}
	}
}

bool func_177(bool bParam0, int iParam1, bool bParam2)
{
	unk_0x853648FD1063A213(bParam0);
	if (iParam1 == 1)
	{
		unk_0xC63CD5D2920ACBE7(bParam2);
	}
	return unk_0x8A9BA1AB3E237613();
}

bool func_178(bool bParam0, bool bParam1, bool bParam2)
{
	return func_58(bParam0, !bParam1, bParam2);
}

void func_179()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_46[3 /*8*/], true))
		{
			iLocal_1322 = 11;
		}
		else if (func_185())
		{
			iLocal_1322 = 7;
		}
		else if (func_184())
		{
			iLocal_1322 = 6;
		}
		else if (func_103())
		{
			iLocal_1322 = 9;
			iLocal_1316 = 0;
		}
		else if (func_99())
		{
			iLocal_1322 = 10;
		}
		else if (func_183())
		{
			iLocal_1322 = 8;
		}
		else if (((unk_0x7239B21A38F536BA(bLocal_1325) && unk_0x4C241E39B23DF959(bLocal_1325, false)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_1325, true)) && unk_0x51210CED3DA1C78A(bLocal_1325, Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1322 = 5;
		}
		else if (((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && !func_182()) && unk_0x51210CED3DA1C78A(unk_0xB6997A7EB3F5C8C0(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			bLocal_1325 = unk_0xB6997A7EB3F5C8C0();
			iLocal_1322 = 5;
		}
		else if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_1322 = 2;
		}
		else if (((unk_0x7239B21A38F536BA(bLocal_1325) && unk_0x4C241E39B23DF959(bLocal_1325, false)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bLocal_1325, true)) && (unk_0x51210CED3DA1C78A(bLocal_1325, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || unk_0x20B60995556D004F(bLocal_1325, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1322 = 4;
		}
		else if (((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && !func_182()) && (unk_0x51210CED3DA1C78A(unk_0xB6997A7EB3F5C8C0(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			bLocal_1325 = unk_0xB6997A7EB3F5C8C0();
			iLocal_1322 = 4;
		}
		else if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !func_182()) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_58, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			bLocal_1325 = unk_0xB6997A7EB3F5C8C0();
			iLocal_1322 = 3;
		}
		else if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !func_182()) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0))
		{
			bLocal_1325 = unk_0xB6997A7EB3F5C8C0();
			iLocal_1322 = 1;
		}
		else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_1322 = 1;
		}
		else
		{
			bLocal_1325 = false;
			if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else
			{
				iLocal_1322 = -1;
			}
		}
		if (iLocal_1322 == 1)
		{
			if (func_181(Local_28[0 /*110*/]))
			{
				func_180(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_181(Local_28[0 /*110*/]))
		{
			func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1319)
		{
			unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 155, true);
		}
		if ((iLocal_1322 != -1 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && unk_0x16EC4839969F9F5E(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_180(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		unk_0xF29CF591C4BF6CEE(bParam0, fParam1);
		unk_0x9C74B0BC831B753A(bParam0, fParam2);
		unk_0x3B6405E8AB34A907(bParam0, (fParam3 / 2f));
		unk_0x2DB492222FB21E26(bParam0, fParam4);
		unk_0x70793BDCA1E854D4(bParam0, fParam5);
	}
}

int func_181(bool bParam0)
{
	if (bParam0 != 0 && unk_0x7239B21A38F536BA(bParam0))
	{
		switch (unk_0x8ACD366038D14505(bParam0))
		{
			case 1:
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(bParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(bParam0), false))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x5F9532F3B5CC2551(bParam0, false))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
		{
			if (unk_0xB6997A7EB3F5C8C0() == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0xC86D67D52A707CF8(Local_46[iVar0 /*8*/], unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184()
{
	int iVar0;
	
	if (unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false)) && unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()) == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_185()
{
	int iVar0;
	
	if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_46[iVar0 /*8*/], true))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_186()
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(bVar0, false) && (unk_0x9F47B058362C84B5(bVar0) == joaat("towtruck") || unk_0x9F47B058362C84B5(bVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()
{
	int iVar0;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_300(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			if (!func_181(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0x9CD27B0045628463();
				}
				else if ((unk_0x9CD27B0045628463() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_181(Local_46[iVar0 /*8*/]))
			{
				if (unk_0xA6DB27D19ECBB7DA(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_46[iVar0 /*8*/].f_1));
				}
				unk_0x629BFA74418D6239(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_188(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
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
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(bParam0))
		{
			bVar0 = true;
			if (unk_0x9134873537FA419C(bParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (bParam8 == -1)
				{
					unk_0xD30C50DF888D58B5(bParam0, true);
				}
				else
				{
					unk_0xB13DCB4C6FAAD238(bParam0, true, bParam8);
				}
				uParam1->f_7 = bParam0;
				unk_0xE52B8E7F85D39A08(bParam0, iParam2);
				unk_0x97C65887D4B37FA9(bParam0, fParam6);
				if (unk_0xA6DB27D19ECBB7DA(*uParam1))
				{
					unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(bParam0, iParam9);
		}
		unk_0x0C4BBF625CA98C4E(bParam0, bParam4);
		unk_0x3EED80DFF7325CAA(bParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(bParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!bParam8 == -1)
				{
					unk_0x03D7FB09E75D6B7E(*uParam1, bParam8);
				}
				if (!unk_0xCA042B6957743895(bParam7))
				{
					unk_0xF9113A30DE5C6670("STRING");
					if (bParam10)
					{
						unk_0x6C188BE134E074AA(bParam7);
					}
					else
					{
						unk_0xC63CD5D2920ACBE7(bParam7);
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
		if (unk_0x997ABD671D25CA0B(bParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(bParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						unk_0x03D7FB09E75D6B7E(uParam1->f_1, bParam8);
					}
					if (!unk_0xCA042B6957743895(bParam7))
					{
						unk_0xF9113A30DE5C6670("STRING");
						if (bParam10)
						{
							unk_0x6C188BE134E074AA(bParam7);
						}
						else
						{
							unk_0xC63CD5D2920ACBE7(bParam7);
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

void func_189()
{
	struct<3> Var0;
	bool bVar1;
	
	if (bLocal_66 == 1)
	{
		if (!unk_0xB16FCE9DDC7BA182())
		{
			if (!unk_0x797AC7CB535BA28F())
			{
				unk_0x891B5B39AC6302AF(1000);
			}
		}
		else
		{
			if (unk_0x991251AFC3981F84())
			{
				unk_0xC7272775B4DC786E(false);
				unk_0x440AF51A3462B86F();
			}
			func_24(iLocal_67);
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0xCC33FA791322B9D9();
			unk_0x8DFCED7A656F8802(true);
			func_8(1);
			if (!func_246())
			{
				func_245(iLocal_63, &Var0, &bVar1);
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), bVar1);
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
				func_243(&uLocal_70, Var0, 50f, 0);
			}
			func_242(&uLocal_70);
			switch (iLocal_63)
			{
				case 0:
					func_173(&uLocal_70, joaat("burrito2"));
					func_173(&uLocal_70, joaat("s_m_y_pestcont_01"));
					func_173(&uLocal_70, joaat("s_m_m_security_01"));
					func_173(&uLocal_70, joaat("dilettante2"));
					func_173(&uLocal_70, joaat("p_amb_clipboard_01"));
					func_241(&uLocal_70, &Local_59);
					func_240(&uLocal_70, "misslsdhsclipboard@base");
					func_240(&uLocal_70, "misslsdhsclipboard@idle_a");
					func_240(&uLocal_70, "misstrevor3");
					func_239(&uLocal_70, iLocal_1281);
					if (((func_238() && !unk_0x45A9187928F4B9E3(func_237())) && !unk_0xA0948AB42D7BA0DE(func_237())) && !unk_0xDCE4334788AF94EA(func_237()))
					{
						func_173(&uLocal_70, func_237());
					}
					break;
				
				case 1:
					func_173(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_236(&uLocal_70))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_187();
			}
			switch (iLocal_63)
			{
				case 0:
					if (((func_238() && !unk_0x45A9187928F4B9E3(func_237())) && !unk_0xA0948AB42D7BA0DE(func_237())) && !unk_0xDCE4334788AF94EA(func_237()))
					{
						while (!func_235())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_46[4 /*8*/] = func_196(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_246())
					{
						if (unk_0x7239B21A38F536BA(Local_46[4 /*8*/]))
						{
							func_193(Local_46[4 /*8*/], -1, 1);
						}
						else
						{
							func_193(0, -1, 1);
						}
					}
					else
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
						if (unk_0x7239B21A38F536BA(Local_46[4 /*8*/]))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), Local_46[4 /*8*/], -1);
						}
					}
					while (!func_190(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_46[0 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x31B927BBC44156CD(Local_46[0 /*8*/], false);
						unk_0x49733E92263139D1(Local_46[0 /*8*/], 5f);
					}
					if (func_246())
					{
						func_193(0, -1, 1);
					}
					else
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
					}
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), 692.067f, -1004.812f, 21.9059f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 359.5735f);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					break;
			}
			if (unk_0xB16FCE9DDC7BA182() || !unk_0x5C544BC6C57AC575())
			{
				if (!func_7(88) || iLocal_63 != 1)
				{
					unk_0xD4E8E24955024033(800);
				}
			}
			bLocal_66 = false;
		}
	}
}

int func_190(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0x7239B21A38F536BA(Global_96938[0]))
		{
			Local_46[0 /*8*/] = Global_96938[0];
			unk_0xAD738C3085FE7E11(Local_46[0 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938[1]))
		{
			Local_46[1 /*8*/] = Global_96938[1];
			unk_0xAD738C3085FE7E11(Local_46[1 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938[2]))
		{
			Local_46[2 /*8*/] = Global_96938[2];
			unk_0xAD738C3085FE7E11(Local_46[2 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_96938.f_9[0];
			if (!unk_0x84A2DD9AC37C35C1(Local_28[1 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_28[1 /*110*/], false, 1);
			}
			unk_0xAD738C3085FE7E11(Local_28[1 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_96938.f_28[0];
			unk_0xAD738C3085FE7E11(Local_28[1 /*110*/].f_105, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_96938.f_9[2];
			if (!unk_0x84A2DD9AC37C35C1(Local_28[0 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_28[0 /*110*/], false, 1);
			}
			unk_0xAD738C3085FE7E11(Local_28[0 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_96938.f_9[3];
			if (!unk_0x84A2DD9AC37C35C1(Local_28[3 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_28[2 /*110*/], false, 1);
			}
			unk_0xAD738C3085FE7E11(Local_28[2 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_96938.f_9[4];
			if (!unk_0x84A2DD9AC37C35C1(Local_28[3 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_28[3 /*110*/], false, 1);
			}
			unk_0xAD738C3085FE7E11(Local_28[3 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938.f_9[5]))
		{
			Local_29.f_0 = Global_96938.f_9[5];
			if (!unk_0x84A2DD9AC37C35C1(Local_29.f_0))
			{
				unk_0x0DC7CABAB1E9B67E(Local_29.f_0, false, 1);
			}
			unk_0xAD738C3085FE7E11(Local_29.f_0, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_96938[3]))
		{
			Local_46[3 /*8*/] = Global_96938[3];
			unk_0xAD738C3085FE7E11(Local_46[3 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0x7239B21A38F536BA(Local_46[0 /*8*/]))
		{
			Local_46[0 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!unk_0x7239B21A38F536BA(Local_46[1 /*8*/]))
		{
			Local_46[1 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!unk_0x7239B21A38F536BA(Local_46[2 /*8*/]))
		{
			Local_46[2 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!unk_0x7239B21A38F536BA(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, true, true);
			unk_0x6B76DC1F3AE6E6A3(Local_28[1 /*110*/], 150, false);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 8, true, false, 0);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 0, false, 2, 0);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 3, false, true, 0);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 4, false, true, 0);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 8, false, false, 0);
			unk_0x262B14F48D29DE80(Local_28[1 /*110*/], 10, true, false, 0);
			unk_0x93376B65A266EB5F(Local_28[1 /*110*/], 0, true, false, false);
			unk_0x93376B65A266EB5F(Local_28[1 /*110*/], 1, false, false, false);
			unk_0xDC2C5C242AAC342B(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0x509D5878EB39E842(joaat("p_amb_clipboard_01"), unk_0x17C07FC640E86B4E(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			unk_0x6B9BBD38AB0796DF(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0x3F428D08BE5AAE31(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
		}
		if (!unk_0x7239B21A38F536BA(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, false, true, true);
			unk_0x262B14F48D29DE80(Local_28[0 /*110*/], 0, false, false, 0);
			unk_0x262B14F48D29DE80(Local_28[0 /*110*/], 3, false, false, 0);
			unk_0x262B14F48D29DE80(Local_28[0 /*110*/], 4, false, false, 0);
			unk_0x262B14F48D29DE80(Local_28[0 /*110*/], 8, true, false, 0);
			unk_0x262B14F48D29DE80(Local_28[0 /*110*/], 10, false, false, 0);
			unk_0x93376B65A266EB5F(Local_28[0 /*110*/], 0, false, false, false);
			unk_0xDC2C5C242AAC342B(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, false, true, true);
			unk_0x262B14F48D29DE80(Local_28[2 /*110*/], 0, false, true, 0);
			unk_0x262B14F48D29DE80(Local_28[2 /*110*/], 3, false, 2, 0);
			unk_0x262B14F48D29DE80(Local_28[2 /*110*/], 4, false, 2, 0);
			unk_0x262B14F48D29DE80(Local_28[2 /*110*/], 8, true, false, 0);
			unk_0x262B14F48D29DE80(Local_28[2 /*110*/], 10, true, false, 0);
			unk_0x93376B65A266EB5F(Local_28[2 /*110*/], 1, false, false, false);
			unk_0xDC2C5C242AAC342B(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, false, true, true);
			unk_0x262B14F48D29DE80(Local_28[3 /*110*/], 0, true, true, 0);
			unk_0x262B14F48D29DE80(Local_28[3 /*110*/], 3, false, 3, 0);
			unk_0x262B14F48D29DE80(Local_28[3 /*110*/], 4, false, 3, 0);
			unk_0x262B14F48D29DE80(Local_28[3 /*110*/], 8, true, false, 0);
			unk_0x262B14F48D29DE80(Local_28[3 /*110*/], 10, false, false, 0);
			unk_0x93376B65A266EB5F(Local_28[3 /*110*/], 0, false, false, false);
			unk_0xDC2C5C242AAC342B(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_29.f_0) && !unk_0x7239B21A38F536BA(Local_46[3 /*8*/]))
		{
			if (unk_0x25223CA6B4D20B7F() >= 5 && unk_0x25223CA6B4D20B7F() < 21)
			{
				Local_46[3 /*8*/] = unk_0xAF35D0D2583051B0(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_29.f_0 = unk_0x7DD959874C1FD534(Local_46[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, true, true);
			}
			else
			{
				Local_46[3 /*8*/] = unk_0xAF35D0D2583051B0(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, true, true, false);
				Local_29.f_0 = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, true, true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(Local_46[0 /*8*/]))
	{
		func_192(Local_46[0 /*8*/], 0);
		unk_0xB664292EAECF7FA6(Local_46[0 /*8*/], 7);
		unk_0xCDE5E70C1DDB954C(Local_46[0 /*8*/], true);
		unk_0x92F0CF722BC4202F(Local_46[0 /*8*/], true);
		Local_46[0 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_46[1 /*8*/]))
	{
		func_192(Local_46[1 /*8*/], 1);
		unk_0x2497C4717C8B881E(Local_46[1 /*8*/], true, true, false);
		unk_0x2FA133A4A9D37ED8(Local_46[1 /*8*/], 4, false);
		unk_0x7C65DAC73C35C862(Local_46[1 /*8*/], false, true, false);
		unk_0x7C65DAC73C35C862(Local_46[1 /*8*/], 4, false, true);
		unk_0x92F0CF722BC4202F(Local_46[1 /*8*/], true);
		Local_46[1 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_46[2 /*8*/]))
	{
		func_192(Local_46[2 /*8*/], 2);
		unk_0x7C65DAC73C35C862(Local_46[2 /*8*/], 2, true, false);
		unk_0x7C65DAC73C35C862(Local_46[2 /*8*/], 3, true, false);
		unk_0x92F0CF722BC4202F(Local_46[2 /*8*/], true);
		Local_46[2 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_28[1 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_28[1 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_28[1 /*110*/], iLocal_1279);
		unk_0x9D64D7405520E3D3(Local_28[1 /*110*/], true);
		func_180(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x33A8F7F7D5F7F33C(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_28[0 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_28[0 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_28[0 /*110*/], iLocal_1279);
		unk_0x9D64D7405520E3D3(Local_28[0 /*110*/], true);
		func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x33A8F7F7D5F7F33C(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_28[2 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_28[2 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_28[2 /*110*/], iLocal_1279);
		func_180(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9D64D7405520E3D3(Local_28[2 /*110*/], true);
		unk_0x33A8F7F7D5F7F33C(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_28[3 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_28[3 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_28[3 /*110*/], iLocal_1279);
		unk_0x33A8F7F7D5F7F33C(Local_28[3 /*110*/], 50f);
		func_180(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9D64D7405520E3D3(Local_28[3 /*110*/], true);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_29.f_0) && unk_0x7239B21A38F536BA(Local_46[3 /*8*/]))
	{
		unk_0x98EFA132A4117BE1(Local_29.f_0, &(Local_29.f_1));
		unk_0x9F8AA94D6D97DBF4(Local_29.f_0, true);
		unk_0xC80A74AC829DDD92(Local_29.f_0, iLocal_1279);
		unk_0x0703B9079823DA4A(Local_29.f_0, 2);
		unk_0x9F7794730795E019(Local_29.f_0, 2, false);
		unk_0xBF0FD6E56C964FCB(Local_29.f_0, joaat("weapon_nightstick"), -1, false, true);
		unk_0x7AEFB85C1D49DEB6(Local_29.f_0, 5);
		func_180(Local_29.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_86 = 1;
		Local_29.f_87 = 1;
		Local_29.f_93 = 0;
		if (Global_96938.f_357 == 1)
		{
			if (!func_191(Local_29.f_0, 242628503, 1))
			{
				if (unk_0x0A9D0C2A3BBC86C1(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, true))
				{
					iLocal_1326 = 0;
					unk_0xE8854A4326B9E12B(&iVar2);
					unk_0x3123FAA6DB1CF7ED(false, Local_46[3 /*8*/], &Local_59, 786599, 0, 0, -1, -1f, false, 2f);
					unk_0xD3DBCE61A490BE02(false, Local_46[3 /*8*/], 0);
					unk_0x277F471BA9DB000B(false, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0x39E72BC99E6360CB(iVar2);
					unk_0x5ABA3986D90D8A3B(Local_29.f_0, iVar2);
					unk_0x3841422E9C488D8C(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_191(Local_29.f_0, -1680762137, 1))
		{
			if (unk_0x0A9D0C2A3BBC86C1(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, true))
			{
				iLocal_1326 = 1;
				unk_0x97A28E63F0BA5631(Local_29.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0x7239B21A38F536BA(Local_46[0 /*8*/]) && unk_0x7239B21A38F536BA(Local_46[1 /*8*/])) && unk_0x7239B21A38F536BA(Local_46[2 /*8*/])) && unk_0x7239B21A38F536BA(Local_46[3 /*8*/])) && unk_0x7239B21A38F536BA(Local_28[1 /*110*/])) && unk_0x7239B21A38F536BA(Local_28[0 /*110*/])) && unk_0x7239B21A38F536BA(Local_28[2 /*110*/])) && unk_0x7239B21A38F536BA(Local_28[3 /*110*/])) && unk_0x7239B21A38F536BA(Local_29.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_191(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(bParam0, iParam1);
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

void func_192(var uParam0, int iParam1)
{
	Global_100441.f_22[iParam1] = uParam0;
}

void func_193(bool bParam0, bool bParam1, int iParam2)
{
	if (func_195() && func_246())
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
		if (bParam0 != 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x7239B21A38F536BA(bParam0))
				{
					if (unk_0x4C241E39B23DF959(bParam0, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam0, false))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), bParam0, bParam1);
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
		func_194(0);
	}
}

void func_194(int iParam0)
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

int func_195()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, bool bParam1)
{
	return func_197(&(Global_106934.f_2890), Param0, bParam1, 0);
}

bool func_197(var uParam0, struct<3> Param1, bool bParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_234(uParam0))
	{
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			bParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x2A70BAE8883E4C81(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				bParam2 = 89.5f;
			}
		}
		if (func_233(uParam0))
		{
			unk_0xA56F01F3765B93A0(Param1, 5f, true, false, false, false);
			func_232(Param1, 5f, 0);
			bVar0 = unk_0xAF35D0D2583051B0(uParam0->f_12.f_66, Param1, bParam2, true, true, false);
			if (unk_0x7239B21A38F536BA(bVar0))
			{
				Var1 = { unk_0x3FEF770D40960D5A(bVar0, true) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x239A3351AC1DA385(bVar0, Param1, false, false, true);
				}
				func_206(bVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x45A9187928F4B9E3(uParam0->f_12.f_66) || unk_0x9537097412CF75FE(uParam0->f_12.f_66))
				{
					if (!unk_0xFFA5D878809819DB(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x49733E92263139D1(bVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(bVar0)))
						{
							func_205(uParam0->f_11, 1);
						}
						else if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bVar0)))
						{
							func_205(uParam0->f_11, 2);
						}
					}
					unk_0xAB04325045427AAE(bVar0, false);
					unk_0x428BACCDF5E26EAD(bVar0, false);
					unk_0x92F0CF722BC4202F(bVar0, true);
					func_204(bVar0, uParam0->f_11);
				}
				else if ((!func_202(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x0C515FAB3FF9EA92(unk_0x442E0A7EDE4A738A(), "startup_positioning"))
				{
					iVar4 = func_201(bVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_198(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (unk_0xD24D37CC275948CC(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_150(24, 0);
							func_198(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_114(bVar0, uParam0->f_11);
				}
				unk_0xE532F5D78798DAAB(uParam0->f_12.f_66);
				Var1 = { unk_0x3FEF770D40960D5A(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

void func_198(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x4C241E39B23DF959(Global_77137.f_139[iParam0], false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
				unk_0xEA386986E786A54F(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_152(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_199(0, Global_77137.f_555[0 /*21*/].f_12) || !func_199(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_153(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_150(iParam0, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_200(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_117(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_200(var uParam0)
{
	return *uParam0;
}

int func_201(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x7239B21A38F536BA(Global_77137.f_484[iVar0]) && !unk_0x5F9532F3B5CC2551(Global_77137.f_484[iVar0], false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[iVar0], false))
		{
			unk_0xA19435F193E081AC(bParam0, &iVar1, &iVar2);
			unk_0xA19435F193E081AC(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x9F47B058362C84B5(bParam0) == unk_0x9F47B058362C84B5(Global_77137.f_484[iVar0]) && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_202(bool bParam0, struct<3> Param1, bool bParam2)
{
	bool bVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	switch (bVar0)
	{
		case joaat("cargobob"):
			if (func_203(bParam0, Global_77137.f_139[38], 0))
			{
				func_198(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_203(bParam0, Global_77137.f_139[43], 1))
			{
				func_198(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xCFF869CBFA210D82(unk_0xD80958FC74E988A6(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_203(bParam0, uVar1[iVar3], 1) && func_65(unk_0x3FEF770D40960D5A(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_156(Param1, 0f, 0f, 0f, 0)) || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x3FEF770D40960D5A(uVar1[iVar3], true), true) < 10f)
					{
						unk_0xEA386986E786A54F(&bParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x7239B21A38F536BA(Global_77137.f_484[14]) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[14], false))
			{
				if (unk_0x9F47B058362C84B5(Global_77137.f_484[14]) == joaat("luxor2") && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[14]))
				{
					func_198(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x7239B21A38F536BA(Global_77137.f_484[20]) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x4C241E39B23DF959(Global_77137.f_484[20], false))
			{
				if (unk_0x9F47B058362C84B5(Global_77137.f_484[20]) == joaat("swift2") && unk_0x2BB9230590DA5E8A(bParam0) == unk_0x2BB9230590DA5E8A(Global_77137.f_484[20]))
				{
					func_198(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_203(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x7239B21A38F536BA(bParam1) && !unk_0x5F9532F3B5CC2551(bParam1, false)) && unk_0x4C241E39B23DF959(bParam1, false))
	{
		if (bParam2)
		{
			unk_0xA19435F193E081AC(bParam0, &iVar0, &iVar1);
			unk_0xA19435F193E081AC(bParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_204(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = bParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = unk_0x9F47B058362C84B5(bParam0);
			if (unk_0x7F6DB52EEFC96DF8(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x9F47B058362C84B5(Global_97772[iVar0]) == func_146(iParam0, iParam1))
				{
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_97772[iVar0], false))
					{
						unk_0xAD738C3085FE7E11(Global_97772[iVar0], false, true);
						unk_0xEA386986E786A54F(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_206(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_224(bParam0))
		{
			if (unk_0xD24D37CC275948CC(&(uParam1->f_1)) != 0)
			{
				unk_0x95A88F0B409CDA47(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x4C4D6B2644F458CB())
			{
				unk_0x9088EB5A43FFB0A1(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_158(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_158(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_158(iVar2)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_158(iVar3)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_158(iVar4)))
					{
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_158(4)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x772960298DA26FDB(bParam0, 10) != 0)
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_158(iVar5)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_158(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x1087BC8EC540DAEB(bParam0, false);
			if (unk_0x772960298DA26FDB(bParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(bParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x7141766F91D15BEA(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x55E1D2758F34E437(bParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x36CED73BFED89754(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x5FFBDEEC3E8E2009(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_222(uParam1->f_5) || func_222(uParam1->f_6))
			{
			}
			else
			{
				unk_0x4F1D4BE3A7F24601(bParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x2036F561ADD12E33(bParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_221(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_220())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xB5BA80F839791C0F(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
		{
			unk_0x57C51E6BAD752696(bParam0, 0);
		}
		else
		{
			unk_0x57C51E6BAD752696(bParam0, 0);
			unk_0x57C51E6BAD752696(bParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0xEB9DC3C7D8596C46(bParam0, false);
			unk_0x5AC79C98C5C17F05(bParam0, false);
		}
		if (bParam2)
		{
			unk_0xB664292EAECF7FA6(bParam0, uParam1->f_70);
		}
		unk_0x8E0A582209A62695(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2AA720E4287BF269(bParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0x2AA720E4287BF269(bParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0x2AA720E4287BF269(bParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0x2AA720E4287BF269(bParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0x67B2C79AA7FF5738(bParam0, BitTest(uParam1->f_77, 10));
		if (unk_0x87B63E25A529D526(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x60BF608F1B8CD1B6(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(bParam0)))
			{
				if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_219(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_219(bParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x52F357A30698BCCE(bParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8F5FB35D7E88FC70(bParam0, true);
			}
			else
			{
				unk_0xDED51F703D0FA83D(bParam0, true);
			}
		}
		if (bParam3)
		{
			func_212(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDCE4334788AF94EA(uParam1->f_66) && !unk_0x45A9187928F4B9E3(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_158(iVar6 + 1)))
				{
					if (!unk_0xD2E6822DBFD6C8BD(bParam0, iVar6 + 1))
					{
						unk_0x7EE3A3C5E4A40CC9(bParam0, iVar6 + 1, false);
					}
				}
				else if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar6 + 1))
				{
					unk_0x7EE3A3C5E4A40CC9(bParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((unk_0x9F47B058362C84B5(bParam0) == joaat("sheava") || unk_0x9F47B058362C84B5(bParam0) == joaat("omnis")) || unk_0x9F47B058362C84B5(bParam0) == joaat("le7b"))
		{
			if (unk_0x772960298DA26FDB(bParam0, false) == -1)
			{
				unk_0x7EE3A3C5E4A40CC9(bParam0, true, false);
			}
		}
		if (((func_207() && unk_0xA0948AB42D7BA0DE(uParam1->f_66)) && unk_0xE43701C36CAFF1A4(bParam0)) && !unk_0x423E8DE37D934D89(bParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0xCFC8BE9A5E1FE575(bParam0, 2);
				}
				else
				{
					unk_0xCFC8BE9A5E1FE575(bParam0, 3);
				}
			}
			else
			{
				unk_0xCFC8BE9A5E1FE575(bParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0x6B1E8E2ED1335B71(bParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			unk_0x6B1E8E2ED1335B71(bParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_207()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_210(7))
	{
		if (func_209(Global_2703735.f_4.f_16) || func_208(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_210(int iParam0)
{
	return func_211(&(Global_2703735.f_169), iParam0);
}

var func_211(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_212(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!unk_0x4C241E39B23DF959(*bParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*bParam0) == 0)
	{
		return 0;
	}
	unk_0x1F2AA07F00B3217A(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		bVar1 = iVar0;
		if ((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21)
		{
			unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, (*uParam1)[iVar0] > 0);
		}
		else if (bVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*bParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x2A1F4F37F95BAD08(*bParam0, bVar1, false);
			}
		}
		else if (unk_0x772960298DA26FDB(*bParam0, bVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x92D619E420858204(*bParam0, bVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (bVar1 == 23)
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (bVar1 == 24)
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_217(*bParam0, bVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, bVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_216(unk_0x9F47B058362C84B5(*bParam0), 1) && unk_0x772960298DA26FDB(*bParam0, 24) != func_215(*bParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6AF0636DDEDCB6DD(*bParam0, 24, func_215(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_214(bParam0);
	if (func_213(*bParam0))
	{
		unk_0x3E8C8727991A8A0B(*bParam0, true);
		unk_0x92F0CF722BC4202F(*bParam0, true);
	}
	return 1;
}

int func_213(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char cVar3[32];
	
	if ((unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
	{
		unk_0x1F2AA07F00B3217A(bParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			bVar1 = iVar0;
			if (((((bVar1 == 17 || bVar1 == 18) || bVar1 == 19) || bVar1 == 20) || bVar1 == 21) || bVar1 == 22)
			{
			}
			else if (unk_0x772960298DA26FDB(bParam0, bVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x8935624F8C5592CC(bParam0, bVar1, unk_0x772960298DA26FDB(bParam0, bVar1)), 32);
				bVar2 = unk_0xD24D37CC275948CC(&cVar3);
				if (bVar2 != 0)
				{
					if (bVar2 == unk_0xD24D37CC275948CC("MNU_CAGE") || bVar2 == unk_0xD24D37CC275948CC("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_214(var uParam0)
{
	switch (unk_0x9F47B058362C84B5(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x772960298DA26FDB(*uParam0, 4) == 0)
			{
				unk_0x6AF0636DDEDCB6DD(*uParam0, 13, false, false);
			}
			else
			{
				unk_0x92D619E420858204(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6AF0636DDEDCB6DD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_215(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		switch (unk_0x9F47B058362C84B5(bParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		bVar0 = unk_0xE38E9162A2500646(bParam0, 38);
		bVar1 = unk_0xE38E9162A2500646(bParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(bVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(bVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= bVar0)
		{
			iVar3 = (bVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_216(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_217(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_218() && unk_0x00834EAC4A96E010(bParam0, bParam1, bParam2))
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	return 0;
}

void func_219(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x33F2E3FE70EAAE1D(bParam0) > 0)
	{
		unk_0x1F2AA07F00B3217A(bParam0, 0);
		bVar0 = unk_0x772960298DA26FDB(bParam0, 24);
		bVar1 = unk_0xB3924ECD70E095DC(bParam0, 24);
		unk_0x487EB21CC7295BA1(bParam0, iParam1);
		if (unk_0x9F47B058362C84B5(bParam0) == joaat("tornado6") || unk_0x9F47B058362C84B5(bParam0) == joaat("peyote2"))
		{
			return;
		}
		if (bVar0 == -1)
		{
			unk_0x92D619E420858204(bParam0, 24);
		}
		else
		{
			unk_0x6AF0636DDEDCB6DD(bParam0, 24, bVar0, bVar1 == 1);
		}
	}
}

bool func_220()
{
	return unk_0x812595A0644CE1DE(joaat("mpindependence"));
}

int func_221(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (unk_0x4F14F9F870D6FBC8("MPBitset", 3))
			{
				if (unk_0x05661B80A8C9165F(bParam0, "MPBitset"))
				{
					iVar0 = unk_0xA06C969B02A97298(bParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (!func_218() && func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_224(bool bParam0)
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!func_230(unk_0x4F8644AF03D0E0D6(), -1))
		{
			bParam0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		}
	}
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	if (unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	if (func_226(unk_0x4F8644AF03D0E0D6()) == 3)
	{
		if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (func_225(bParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(bool bParam0)
{
	if (unk_0x4F14F9F870D6FBC8("FMDeliverableID", 3))
	{
		if (unk_0x05661B80A8C9165F(bParam0, "FMDeliverableID"))
		{
			return unk_0xA06C969B02A97298(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_226(bool bParam0)
{
	if (func_229(bParam0) == 233)
	{
		return func_227(bParam0);
	}
	return -1;
}

int func_227(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_228(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_230(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (func_231(bParam0, 1, 1))
	{
		if (unk_0x997ABD671D25CA0B(unk_0x43A66C31C68491C0(bParam0), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0x43A66C31C68491C0(bParam0), false);
			if (unk_0x4C241E39B23DF959(bVar0, false))
			{
				if (unk_0xD80958FC74E988A6() == unk_0xBB40DD2270B65366(bVar0, bParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(bool bParam0, bool bParam1, bool bParam2)
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

void func_232(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_145(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF1B760881820C952(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_198(iVar0);
			}
		}
		iVar0++;
	}
}

int func_233(var uParam0)
{
	if (func_234(uParam0))
	{
		if (unk_0x98A4EB5D89A0C952(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_234(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_117(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_235()
{
	return func_233(&(Global_106934.f_2890));
}

int func_236(var uParam0)
{
	if (func_247(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_237()
{
	return Global_106934.f_2890.f_12.f_66;
}

int func_238()
{
	return func_234(&(Global_106934.f_2890));
}

int func_239(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x26B0E73D7EAAF4D3(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
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
		unk_0x2CA429C029CCF247(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_240(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_273[iVar0 /*5*/].f_4, bParam1))
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
		unk_0xD3BD40951412FEF6(bParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_273[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_241(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_374[iVar0 /*5*/].f_4, bParam1))
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
		unk_0x9EEFB62EB27B5792(bParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_374[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_242(var uParam0)
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

int func_243(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_244(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_156(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
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

int func_244(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_246()
{
	return BitTest(Global_100441.f_20, 13);
}

int func_247(var uParam0)
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
						func_249(uParam0[bVar1 /*5*/]);
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
						func_249(&(uParam0->f_273[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_374[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_656[bVar1 /*6*/]));
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
						func_249(&(uParam0->f_475[bVar1 /*6*/]));
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
						func_249(&(uParam0->f_202[bVar1 /*7*/]));
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
						func_249(&(uParam0->f_151[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_737[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_763[bVar1 /*5*/]));
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
								func_249(&(uParam0->f_687[bVar1 /*7*/]));
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
							func_249(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_249(&(uParam0->f_687[bVar1 /*7*/]));
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
						func_249(&(uParam0->f_904[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_955[bVar1 /*5*/]));
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
						func_249(&(uParam0->f_779[bVar1 /*5*/]));
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
					func_249(&(uParam0->f_885));
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
					func_249(&(uParam0->f_889));
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
						func_248(uParam0);
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
				func_249(&(uParam0->f_893));
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
						func_249(&(uParam0->f_981[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1 = (bVar1 + 1);
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

void func_248(var uParam0)
{
	if (unk_0xA41A05B6CB741B85())
	{
		unk_0xC197616D221FF4A4();
		func_249(&(uParam0->f_893));
	}
}

void func_249(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_250()
{
	if (func_251())
	{
		func_8(1);
		unk_0x1090044AD1DA76FA();
	}
}

int func_251()
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

void func_252()
{
	func_270(&(Local_1105[1 /*8*/]), 68936, "AI Controller");
	func_270(&(Local_1105[0 /*8*/]), 67301, "Dialogue");
	func_270(&(Local_1105[3 /*8*/]), 66328, "Alarms & Wanted Level");
	func_270(&(Local_1105[4 /*8*/]), 65776, "Music Manager");
}

void func_253(var uParam0)
{
	if (!func_256(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x226435CB96CCFC8C(&cLocal_49) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || func_22(&(Local_1105[3 /*8*/])))
			{
				unk_0x706D57B0F50DA710("JHP1A_ATTACK");
				func_255(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_108(unk_0xD80958FC74E988A6(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x706D57B0F50DA710("JHP1A_START");
					func_255(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1322 == 3 || iLocal_1322 == 2)
				{
					unk_0x706D57B0F50DA710("JHP1A_WAREHOUSE");
					func_255(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1322 == 6 || iLocal_1322 == 9)
				{
					unk_0x706D57B0F50DA710("JHP1A_VAN");
					func_255(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (iLocal_1322 == 9 && func_108(unk_0xD80958FC74E988A6(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x1E5185B72EF5158A("JHP1A_RADIO_1"))
						{
							unk_0x706D57B0F50DA710("JHP1A_RADIO_1");
							func_254(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x226435CB96CCFC8C(&cLocal_49) && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && iLocal_1318)
				{
					func_255(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0x1E5185B72EF5158A("JHP1A_RADIO_2"))
					{
						unk_0x706D57B0F50DA710("JHP1A_RADIO_2");
						func_255(uParam0, 6, 0);
						func_254(uParam0);
					}
				}
				break;
			}
	}
	if (func_256(uParam0))
	{
		unk_0x020E5F00CDA207BA(1f);
	}
}

void func_254(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9CD27B0045628463();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9CD27B0045628463();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_256(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_257(var uParam0)
{
	if (!func_256(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_255(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x9D74AE343DB65533(&cLocal_49))
				{
					unk_0x0355EF116C4C97B2(&cLocal_49, false);
					func_260(&cLocal_1107, Local_58, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1107, "", 32);
					func_255(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_258(&Local_29, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 2, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				unk_0xAA5F02DB48D704B9(2);
				unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), false);
				unk_0x102E68B2024D536D(false);
				unk_0xBC9490CA15AEA8FB(unk_0x4F8644AF03D0E0D6());
				unk_0xDC64D2C53493ED12(unk_0x4F8644AF03D0E0D6());
				uParam0->f_2 = unk_0x9CD27B0045628463() + 15000;
				func_255(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x9CD27B0045628463() > uParam0->f_2)
				{
					unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
					unk_0x102E68B2024D536D(true);
					unk_0xAA5F02DB48D704B9(5);
					iLocal_1318 = 1;
					func_254(uParam0);
				}
				unk_0xBC9490CA15AEA8FB(unk_0x4F8644AF03D0E0D6());
				unk_0xDC64D2C53493ED12(unk_0x4F8644AF03D0E0D6());
				break;
			}
	}
}

int func_258(bool bParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_259(bParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_259(var uParam0, int iParam1, bool bParam2, struct<3> Param3, bool bParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (func_181(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x9CD27B0045628463();
			if (iParam1 != uParam0->f_5 || !unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), bParam2, 32);
				if (bParam7)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam6;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = unk_0x9CD27B0045628463();
				if (!func_244(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (bParam4 != 0 && unk_0x7239B21A38F536BA(bParam4))
				{
					uParam0->f_91 = bParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_260(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<32> Var0;
	
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam3;
	Var0.f_26 = fParam2;
	Var0.f_29 = iParam4;
	Var0.f_30 = iParam5;
	Var0.f_31 = iParam6;
	Var0.f_23 = { Param1 };
	func_261(&Var0, 0);
}

int func_261(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xCA042B6957743895(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0x7239B21A38F536BA(Local_28[*uParam0 /*110*/]) || unk_0x84A2DD9AC37C35C1(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xCA042B6957743895(&(Local_1106[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1106.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xCA042B6957743895(bParam1) || unk_0x0C515FAB3FF9EA92(bParam1, &(uParam0->f_17))))
		{
			Local_1106[iVar0 /*32*/] = *uParam0;
			Local_1106[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1106[iVar0 /*32*/].f_23 = { unk_0x3FEF770D40960D5A(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1106[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1106[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1106[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1106[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1106[iVar0 /*32*/].f_27 = unk_0x9CD27B0045628463();
			Local_1106[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1106[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_262(var uParam0)
{
	char cVar0[24];
	bool bVar1;
	struct<3> Var2;
	
	if (!func_256(uParam0))
	{
		if (func_49())
		{
			iLocal_1278 = -1;
		}
		else if (iLocal_1278 == -1)
		{
			iLocal_1278 = unk_0x9CD27B0045628463();
			iLocal_1301 = -1;
			iLocal_1302 = 1;
		}
		if (iLocal_1282 != -1 && !unk_0xCA042B6957743895(&Local_1284))
		{
			if (((Local_28[iLocal_1282 /*110*/] != 0 && unk_0x7239B21A38F536BA(Local_28[iLocal_1282 /*110*/])) && !unk_0x84A2DD9AC37C35C1(Local_28[iLocal_1282 /*110*/])) && !unk_0xE0A0AEC214B1FABA(Local_28[iLocal_1282 /*110*/]))
			{
				if (!unk_0x47E4E977581C5B55(Local_28[iLocal_1282 /*110*/]))
				{
					if (func_49())
					{
						if (iLocal_1292 && (iLocal_1302 || iLocal_1283 > iLocal_1301))
						{
							if (bLocal_1303)
							{
								iLocal_1306 = iLocal_1297;
								iLocal_1307 = iLocal_1301;
								MemCopy(&Local_1308, {func_269()}, 4);
								MemCopy(&Local_1311, {func_268()}, 4);
								iLocal_1314 = iLocal_1302;
								bLocal_1315 = iLocal_1304;
							}
							if (iLocal_1293)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((unk_0x9CD27B0045628463() - iLocal_1278) > iLocal_1290)
						{
							if (func_267(iLocal_1282))
							{
								MemCopy(&cVar0, {Local_48}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1282)
							{
								case 0:
									func_45(&uLocal_1112, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_45(&uLocal_1112, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_45(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_45(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xCA042B6957743895(&cLocal_1287))
							{
								if (func_266(&uLocal_1112, &cVar0, &Local_1284, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_265(&uLocal_1112, &cVar0, &Local_1284, &cLocal_1287, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_261(&(Local_28[iLocal_1282 /*110*/].f_50), &Local_1284);
								iLocal_1301 = iLocal_1283;
								iLocal_1302 = iLocal_1294;
								bLocal_1303 = iLocal_1296;
								iLocal_1304 = iLocal_1295;
								iLocal_1282 = -1;
								iLocal_1283 = -1;
								StringCopy(&Local_1284, "", 16);
								iLocal_1290 = 0;
								fLocal_1291 = 9999999f;
								iLocal_1292 = 0;
								iLocal_1293 = 0;
								iLocal_1294 = 1;
								iLocal_1296 = 0;
								iLocal_1295 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1282 = -1;
				iLocal_1283 = -1;
				StringCopy(&Local_1284, "", 16);
				iLocal_1290 = 0;
				fLocal_1291 = 9999999f;
				iLocal_1292 = 0;
				iLocal_1293 = 0;
				iLocal_1294 = 1;
				iLocal_1295 = 0;
			}
		}
		if (((func_49() && iLocal_1297 != -1) && iLocal_1304) && !unk_0xCA042B6957743895(&cLocal_1298))
		{
			Var2 = { unk_0x3FEF770D40960D5A(Local_28[iLocal_1297 /*110*/], true) };
			if (func_108(unk_0xD80958FC74E988A6(), Var2, 1) >= 25f)
			{
				iLocal_1306 = iLocal_1297;
				iLocal_1307 = iLocal_1301;
				MemCopy(&Local_1308, {func_269()}, 4);
				MemCopy(&Local_1311, {func_268()}, 4);
				iLocal_1314 = iLocal_1302;
				bLocal_1315 = iLocal_1304;
				func_11();
				iLocal_1297 = -1;
				iLocal_1301 = -1;
				StringCopy(&cLocal_1298, "", 16);
				iLocal_1302 = 0;
				iLocal_1304 = 0;
			}
		}
		if (iLocal_1306 != -1 && !unk_0xCA042B6957743895(&Local_1308))
		{
			if (Local_28[iLocal_1306 /*110*/].f_5 > iLocal_1307)
			{
				iLocal_1306 = -1;
				iLocal_1307 = -1;
				StringCopy(&Local_1308, "", 16);
				StringCopy(&Local_1311, "", 16);
				iLocal_1314 = 1;
			}
		}
		if (iLocal_1282 == -1 && unk_0xCA042B6957743895(&Local_1284))
		{
			if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 10000)
			{
				if (iLocal_1306 != -1 && !unk_0xCA042B6957743895(&Local_1308))
				{
					func_264(iLocal_1306, &Local_1308, iLocal_1307, 0, 0, iLocal_1314, 0, 1, &Local_1311, bLocal_1315);
					iLocal_1306 = -1;
					iLocal_1307 = -1;
					StringCopy(&Local_1308, "", 16);
					StringCopy(&Local_1311, "", 16);
					iLocal_1314 = 1;
				}
			}
		}
	}
	func_263(bLocal_1315);
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_107(Local_28[iParam0 /*110*/], unk_0xD80958FC74E988A6(), 1);
	if ((iParam2 > iLocal_1283 || iParam2 == 4) || ((iParam2 == iLocal_1283 && (fVar0 < fLocal_1291 || (func_267(iParam0) && !func_267(iLocal_1282)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1282 = iParam0;
			iLocal_1283 = iParam2;
			StringCopy(&Local_1284, sParam1, 16);
			StringCopy(&cLocal_1287, sParam8, 16);
			fLocal_1291 = fVar0;
			iLocal_1292 = iParam3;
			iLocal_1293 = iParam4;
			iLocal_1290 = iParam6;
			iLocal_1294 = iParam5;
			iLocal_1296 = iParam7;
			iLocal_1295 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_265(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_266(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_267(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_268()
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

struct<6> func_269()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_270(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (!func_256(uParam0))
	{
		bLocal_1319 = true;
		if (!iLocal_1317)
		{
			if (func_183())
			{
				iLocal_1317 = 1;
				iLocal_1320 = unk_0x9CD27B0045628463();
			}
		}
		else if ((unk_0x9CD27B0045628463() - iLocal_1320) > 3000)
		{
			iLocal_1317 = 0;
			iLocal_1320 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_291(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_291(&Local_29);
		}
		iVar1 = 0;
		while (iVar1 < Local_1106.f_0)
		{
			if (!unk_0xCA042B6957743895(&(Local_1106[iVar1 /*32*/].f_1)) && Local_1106[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1106[iVar1 /*32*/].f_28 == -1 || (unk_0x9CD27B0045628463() - Local_1106[iVar1 /*32*/].f_27) < Local_1106[iVar1 /*32*/].f_28)
				{
					if (Local_1106[iVar1 /*32*/].f_29 <= 0 || (unk_0x9CD27B0045628463() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_29)
					{
						if (Local_1106[iVar1 /*32*/] != -1 && func_181(Local_28[Local_1106[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0x3FEF770D40960D5A(Local_28[Local_1106[iVar1 /*32*/] /*110*/], true) };
							Local_1106[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1106[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1105[3 /*8*/])))
						{
							if (Local_1106[iVar1 /*32*/].f_31 && unk_0xF1B760881820C952(Var2, Local_58, true) < 35f)
							{
								func_172(&(Local_1105[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1106[iVar1 /*32*/] == -1 || (iVar0 != Local_1106[iVar1 /*32*/] && Local_28[Local_1106[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0x7239B21A38F536BA(Local_28[iVar0 /*110*/]) && !unk_0x84A2DD9AC37C35C1(Local_28[iVar0 /*110*/]))
								{
									if (func_108(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1106[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1106[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1105[3 /*8*/])))
											{
												func_172(&(Local_1105[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1107, {Local_1106[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x9CD27B0045628463() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1106[iVar1 /*32*/].f_1), "", 64);
					Local_1106[iVar1 /*32*/] = -1;
					Local_1106[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1106[iVar1 /*32*/].f_26 = 0f;
					Local_1106[iVar1 /*32*/].f_27 = -1;
					Local_1106[iVar1 /*32*/].f_28 = -1;
					Local_1106[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_285(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_276(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_275(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_273(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0x7239B21A38F536BA(Local_28[iVar0 /*110*/]) || unk_0x84A2DD9AC37C35C1(Local_28[iVar0 /*110*/])) || unk_0xE3B6097CC25AA69E(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (unk_0xEFBE71898A993728(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0x961AC54BF0613F5D(Local_28[iVar0 /*110*/].f_105, true, true);
					}
					if (bVar3)
					{
						unk_0x3AE22DEB5BA5A3E6(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar4)
					{
						unk_0x539E0AE3E6634B9F(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0x98A4EB5D89A0C952(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0x509D5878EB39E842(Local_28[iVar0 /*110*/].f_107, unk_0x17C07FC640E86B4E(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					unk_0x6B9BBD38AB0796DF(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0x3F428D08BE5AAE31(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_28[iVar1 /*110*/]) && !unk_0x84A2DD9AC37C35C1(Local_28[iVar1 /*110*/]))
			{
				unk_0xA72CD9CA74A5ECBA(Local_28[iVar1 /*110*/]);
				unk_0xAC678E40BE7C74D2(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_272();
	}
	if (func_256(uParam0))
	{
	}
}

void func_272()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_181(Local_46[iVar0 /*8*/]))
		{
			unk_0xA72CD9CA74A5ECBA(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_273(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xF1C03A5352243A30(*bParam0);
	if (func_274(*bParam0))
	{
		Local_29.f_46 = 0;
	}
	switch (bParam0->f_5)
	{
		case 0:
			if (unk_0x25223CA6B4D20B7F() >= 5 && unk_0x25223CA6B4D20B7F() < 21)
			{
				if ((!func_191(*bParam0, 1647992574, 1) && !func_191(*bParam0, 242628503, 1)) || iLocal_1326)
				{
					if (unk_0x5A59271FFADD33C1(203.68f, -3132.46f, 4.79f, 1f, true))
					{
						unk_0x277F471BA9DB000B(*bParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1326 = 0;
					}
				}
			}
			else if (!func_191(*bParam0, -1680762137, 1) || !iLocal_1326)
			{
				if (unk_0x5A59271FFADD33C1(162.69f, -3115.67f, 4.95f, 1f, true))
				{
					unk_0x9FDA1B3D7E7028B3(*bParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1326 = 1;
				}
			}
			break;
		
		case 3:
			unk_0xD75ACCF5E0FB5367(*bParam0, true, -1, "DEFAULT_ACTION");
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0x8DECB02F88F428BC(*bParam0, joaat("weapon_pistol"), false))
					{
						unk_0x4899CB088EDF59B8(*bParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x8DECB02F88F428BC(*bParam0, joaat("weapon_nightstick"), false))
					{
						unk_0xBF0FD6E56C964FCB(*bParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (unk_0x3A87E44BB9A01D54(*bParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0xADF692B254977C0C(*bParam0, joaat("weapon_nightstick"), false);
						}
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0x8DECB02F88F428BC(*bParam0, joaat("weapon_nightstick"), false))
					{
						unk_0x4899CB088EDF59B8(*bParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x8DECB02F88F428BC(*bParam0, joaat("weapon_pistol"), false))
					{
						unk_0xBF0FD6E56C964FCB(*bParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (unk_0x3A87E44BB9A01D54(*bParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0xADF692B254977C0C(*bParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_191(*bParam0, 780511057, 1) || func_274(*bParam0))
			{
				unk_0xF166E48407BAC484(*bParam0, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x69F4BE8C8CC4796C(*bParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case 686645495:
					if (unk_0x7239B21A38F536BA(bParam0->f_91))
					{
						if (!unk_0xFCF37A457CB96DC0(*bParam0, unk_0x3FEF770D40960D5A(bParam0->f_91, true), 180f) && (unk_0x9CD27B0045628463() - bParam0->f_37) < 5000)
						{
							if (!func_191(*bParam0, -875674219, 1) || func_274(*bParam0))
							{
								unk_0x5AD23D40115353AC(*bParam0, bParam0->f_91, -1);
								unk_0x69F4BE8C8CC4796C(*bParam0, bParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*bParam0, -2015108952, 1) || func_274(*bParam0))
						{
							unk_0x338E7EF52B6095A9(*bParam0, bParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (bParam0->f_41 && !func_65(bParam0->f_88, bParam0->f_43, 1f, 0))
					{
						bParam0->f_88 = { bParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_244(bParam0->f_88))
					{
						if (!unk_0xFCF37A457CB96DC0(*bParam0, bParam0->f_88, 90f) && (unk_0x9CD27B0045628463() - bParam0->f_37) < 5000)
						{
							if ((!func_191(*bParam0, 1464580341, 1) || func_274(*bParam0)) || iVar1)
							{
								unk_0x1DDA930A0AC38571(*bParam0, bParam0->f_88, 0);
								unk_0x6FA46612594F7973(*bParam0, bParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*bParam0, 713668775, 1) || func_274(*bParam0)) || iVar1)
						{
							unk_0x15D3A79D4E44B913(*bParam0, bParam0->f_43, 1f, -1, 3f, false, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(bParam0->f_88))
					{
						if (!func_191(*bParam0, 1464580341, 1) || func_274(*bParam0))
						{
							unk_0x1DDA930A0AC38571(*bParam0, bParam0->f_88, -1);
							unk_0x6FA46612594F7973(*bParam0, bParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*bParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x7239B21A38F536BA(bParam0->f_91))
					{
						if (!func_191(*bParam0, -875674219, 1) || func_274(*bParam0))
						{
							unk_0x5AD23D40115353AC(*bParam0, bParam0->f_91, -1);
							unk_0x69F4BE8C8CC4796C(*bParam0, bParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*bParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_274(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x0C515FAB3FF9EA92(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	unk_0xF1C03A5352243A30(*uParam0);
	if (func_274(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28.f_0)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_191(*uParam0, 1647992574, 1))
						{
							if (unk_0x5A59271FFADD33C1(155.74f, -3098.89f, 4.93f, 0.5f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_191(*uParam0, 242628503, 1) || func_274(*uParam0)) && unk_0xD031A9162D01088C("misslsdhsclipboard@base"))
						{
							if (!unk_0x1F0B79228E461EC9(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xE8854A4326B9E12B(&iLocal_1280);
								if (!func_65(unk_0x3FEF770D40960D5A(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0x15D3A79D4E44B913(false, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, false, 264.2812f);
								}
								unk_0x93B93A37987F1F3D(false, 264.2812f, 0);
								unk_0xEA47FE3719165B94(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
								unk_0x39E72BC99E6360CB(iLocal_1280);
								unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_1280);
								unk_0x3841422E9C488D8C(&iLocal_1280);
							}
							if (unk_0x7239B21A38F536BA(Local_46[2 /*8*/]))
							{
								unk_0x6FA46612594F7973(*uParam0, unk_0x44A8FCB8ED227738(Local_46[2 /*8*/], unk_0xFB71170B7E76ACBA(Local_46[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0xD031A9162D01088C("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x00A9010CFE1E3533(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x00A9010CFE1E3533(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x9CD27B0045628463() > uParam0->f_37)
									{
										unk_0xE8854A4326B9E12B(&iLocal_1280);
										switch (unk_0xD53343AA4FB7DD28(false, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0xEA47FE3719165B94(false, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0f, false, false, false);
										unk_0xEA47FE3719165B94(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
										unk_0x39E72BC99E6360CB(iLocal_1280);
										unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_1280);
										unk_0x3841422E9C488D8C(&iLocal_1280);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x00A9010CFE1E3533(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_191(*uParam0, 1647992574, 1))
						{
							if (unk_0x5A59271FFADD33C1(159.82f, -3085.93f, 5f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x5A59271FFADD33C1(160.15f, -3084.79f, 4.99f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x5A59271FFADD33C1(159.09f, -3085.02f, 5.01f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0x7239B21A38F536BA(uParam0->f_91))
					{
						if (!unk_0xFCF37A457CB96DC0(*uParam0, unk_0x3FEF770D40960D5A(uParam0->f_91, true), 180f) && (unk_0x9CD27B0045628463() - uParam0->f_37) < 5000)
						{
							if (!func_191(*uParam0, -875674219, 1) || func_274(*uParam0))
							{
								unk_0x5AD23D40115353AC(*uParam0, uParam0->f_91, -1);
								unk_0x69F4BE8C8CC4796C(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*uParam0, -2015108952, 1) || func_274(*uParam0))
						{
							unk_0x338E7EF52B6095A9(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_65(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar3 = 1;
					}
					if (!func_244(uParam0->f_88))
					{
						if (!unk_0xFCF37A457CB96DC0(*uParam0, uParam0->f_88, 90f) && (unk_0x9CD27B0045628463() - uParam0->f_37) < 5000)
						{
							if ((!func_191(*uParam0, 1464580341, 1) || func_274(*uParam0)) || iVar3)
							{
								unk_0x1DDA930A0AC38571(*uParam0, uParam0->f_88, 0);
								unk_0x6FA46612594F7973(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*uParam0, 713668775, 1) || func_274(*uParam0)) || iVar3)
						{
							unk_0x15D3A79D4E44B913(*uParam0, uParam0->f_43, 1f, -1, 3f, false, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(uParam0->f_88))
					{
						if (!func_191(*uParam0, 1464580341, 1) || func_274(*uParam0))
						{
							unk_0x1DDA930A0AC38571(*uParam0, uParam0->f_88, -1);
							unk_0x6FA46612594F7973(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x7239B21A38F536BA(uParam0->f_91))
					{
						if (!func_191(*uParam0, -875674219, 1) || func_274(*uParam0))
						{
							unk_0x5AD23D40115353AC(*uParam0, uParam0->f_91, -1);
							unk_0x69F4BE8C8CC4796C(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_191(*uParam0, 242628503, 1) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_274(*uParam0))
				{
					unk_0xE8854A4326B9E12B(&iLocal_1280);
					unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 0);
					unk_0x919BE13EED931959(false, 2000);
					unk_0x58C70CF3A41E4AE7(iLocal_1280, true);
					unk_0x39E72BC99E6360CB(iLocal_1280);
					unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_1280);
					unk_0x3841422E9C488D8C(&iLocal_1280);
					unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0x7239B21A38F536BA(bLocal_1325) && unk_0x4C241E39B23DF959(bLocal_1325, false))
				{
					fVar6 = func_107(unk_0xD80958FC74E988A6(), bLocal_1325, 1);
				}
				if ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 8)
				{
					bVar4 = unk_0xD80958FC74E988A6();
					fVar7 = 2f;
				}
				else if (iLocal_1322 == 0 || iLocal_1322 == 1)
				{
					bVar4 = unk_0xD80958FC74E988A6();
					fVar7 = 1f;
				}
				else if (iLocal_1322 == 5 && unk_0x7239B21A38F536BA(bLocal_1325))
				{
					if (fVar6 > 10f)
					{
						bVar4 = unk_0xD80958FC74E988A6();
						fVar7 = 2f;
					}
					else
					{
						bVar4 = bLocal_1325;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1322 == 4 && unk_0x7239B21A38F536BA(bLocal_1325))
				{
					bVar4 = bLocal_1325;
					fVar7 = 1f;
				}
				if (unk_0x7239B21A38F536BA(bVar4))
				{
					fVar5 = func_107(*uParam0, bVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_191(*uParam0, 242628503, 1) && !func_191(*uParam0, 1227113341, 1)) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_274(*uParam0))
					{
						unk_0xE8854A4326B9E12B(&iLocal_1280);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 0);
						unk_0x919BE13EED931959(false, 2000);
						unk_0x58C70CF3A41E4AE7(iLocal_1280, true);
						unk_0x39E72BC99E6360CB(iLocal_1280);
						unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_1280);
						unk_0x3841422E9C488D8C(&iLocal_1280);
						unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					}
				}
				else if (!func_191(*uParam0, 1227113341, 1) || func_274(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					unk_0x6A071245EB0D1882(*uParam0, bVar4, -1, fVar8, fVar7, 2f, 0);
					unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x3A87E44BB9A01D54(*uParam0, &iVar9, true))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							unk_0xADF692B254977C0C(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_191(*uParam0, 780511057, 1))
					{
						unk_0xF166E48407BAC484(*uParam0, unk_0xD80958FC74E988A6(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_191(*uParam0, 242628503, 1) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_274(*uParam0))
					{
						unk_0xE8854A4326B9E12B(&iLocal_1280);
						unk_0x5AD23D40115353AC(false, unk_0xD80958FC74E988A6(), 0);
						unk_0x919BE13EED931959(false, 2000);
						unk_0x58C70CF3A41E4AE7(iLocal_1280, true);
						unk_0x39E72BC99E6360CB(iLocal_1280);
						unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_1280);
						unk_0x3841422E9C488D8C(&iLocal_1280);
						unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_191(*uParam0, 1805844857, 1))
				{
					unk_0x22B0D0E37CCB840D(*uParam0, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				}
			}
			else if ((!func_191(*uParam0, 1805844857, 1) && !func_191(*uParam0, 713668775, 1)) || func_274(*uParam0))
			{
				unk_0x15D3A79D4E44B913(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, true, 1193033728);
			}
			break;
		
		case 4:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_191(*uParam0, -1519143300, 1) || func_274(*uParam0))
					{
						unk_0xF2EAB31979A7F910(*uParam0, -1, unk_0xD80958FC74E988A6(), 0, true);
					}
					break;
			}
			break;
	}
}

void func_276(bool bParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &uVar0, true);
	fVar1 = func_107(unk_0xD80958FC74E988A6(), *bParam0, 1);
	if (unk_0xDFD5033FDBA0A9C8(*bParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xC86D67D52A707CF8(*bParam0, unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x131D401334815E94(*bParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_283(*bParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_258(bParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(bParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x8507BCB710FA6DC0(*bParam0, 124) || unk_0x8507BCB710FA6DC0(*bParam0, 125)) || unk_0x8507BCB710FA6DC0(*bParam0, 126)) || unk_0x8507BCB710FA6DC0(*bParam0, 22)) || unk_0x8507BCB710FA6DC0(*bParam0, 23)) || unk_0x8507BCB710FA6DC0(*bParam0, 88))
	{
		func_258(bParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (bParam0->f_39 && func_282(4))
	{
		func_258(bParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (bParam0->f_39 && func_281(*bParam0, 2))
	{
		func_258(bParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((bParam0->f_39 && fVar1 < 8f) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 5))
	{
		func_258(bParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 11)
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_280(bParam0, 1, "HEARD_SEC_CAR", Local_46[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 6)
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_280(bParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 10)
	{
		if (bParam0->f_39)
		{
			func_280(bParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_280(bParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x8507BCB710FA6DC0(*bParam0, 42)) || unk_0x8507BCB710FA6DC0(*bParam0, 114)) || func_278(*bParam0, 0))
	{
		func_258(bParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x8507BCB710FA6DC0(*bParam0, 103)) || func_278(*bParam0, 1))
	{
		func_258(bParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((bParam0->f_5 != 3 && bParam0->f_84) && (bParam0->f_39 || bParam0->f_41)) && (fVar1 < 8f || func_108(unk_0xD80958FC74E988A6(), Local_58, 1) < 40f))
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_277(bParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if (bParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_258(bParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_258(bParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (bParam0->f_34 > -1 && bParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar8 = Local_1106[bParam0->f_34 /*32*/].f_30;
		switch (unk_0xD24D37CC275948CC(&(Local_1106[bParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("gunshot"):
			case 600040296:
				func_258(bParam0, 3, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_277(bParam0, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_280(bParam0, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	bParam0->f_34 = -1;
	if (bParam0->f_7 != bParam0->f_5)
	{
		bParam0->f_8 = 1;
	}
	else
	{
		bParam0->f_8 = 0;
	}
	bParam0->f_7 = bParam0->f_5;
	if (!unk_0x0C515FAB3FF9EA92(&(bParam0->f_25), &(bParam0->f_9)))
	{
		bParam0->f_33 = 1;
	}
	else
	{
		bParam0->f_33 = 0;
	}
	bParam0->f_25 = { bParam0->f_9 };
	switch (bParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 3000)
					{
						func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9CD27B0045628463() - bParam0->f_37) > 4000 && func_108(*bParam0, bParam0->f_88, 1) < 3f) && unk_0xAC29253EEF8F0180(*bParam0))
					{
						func_258(bParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 4000 && !unk_0x049E937F18F4020C(*bParam0))
					{
						func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x9CD27B0045628463() - bParam0->f_38) > 8000 && func_108(unk_0xD80958FC74E988A6(), Local_58, 1) > 65f) && (func_107(unk_0xD80958FC74E988A6(), *bParam0, 1) > 10f || (unk_0x9CD27B0045628463() - bParam0->f_38) > 16000)) && !unk_0x049E937F18F4020C(*bParam0))
					{
						func_258(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_108(unk_0xD80958FC74E988A6(), Local_58, 1) > 300f && func_107(unk_0xD80958FC74E988A6(), *bParam0, 1) > 150f)
					{
						func_258(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_277(bool bParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6)
{
	return func_259(bParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_278(struct<110> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_279(Param0, Local_28[iVar0 /*110*/], bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, bool bParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, bool bParam220)
{
	if (unk_0x7239B21A38F536BA(bParam110) && unk_0xC86D67D52A707CF8(bParam110, unk_0xD80958FC74E988A6(), bParam220))
	{
		if (func_107(bParam0, bParam110, 1) < 15f)
		{
			if (unk_0x0267D00AF114F17A(bParam0, bParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(bool bParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_259(bParam0, iParam1, sParam2, 0f, 0f, 0f, bParam3, bParam4, iParam5, bParam6);
}

int func_281(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((bParam0 != 0 && unk_0x7239B21A38F536BA(bParam0)) && !unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), iParam110) && (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), bParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), bParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), iParam0) && (unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6())))
	{
		return 1;
	}
	return 0;
}

int func_283(struct<110> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_284(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_284(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (unk_0x7239B21A38F536BA(Param71.f_0) && unk_0x84A2DD9AC37C35C1(Param71.f_0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(Param71.f_0, false) };
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(Param0.f_0, true), Var0, true) < 10f)
		{
			if (unk_0x0267D00AF114F17A(Param0.f_0, Param71.f_0))
			{
				if ((unk_0x9CD27B0045628463() - Param71.f_103) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					bVar1 = unk_0x93C8B64DEB84728C(Param71.f_0);
					if (unk_0x524AC5ECEA15343E(bVar1))
					{
						bVar2 = unk_0x04A2A40C73395041(bVar1);
						if ((bVar2 == unk_0xD80958FC74E988A6() && !unk_0x84A2DD9AC37C35C1(bVar2)) && Param0.f_39)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				bVar3 = unk_0x16FFE42AB2D2DC59(Param71.f_0);
				if (bVar3 == joaat("weapon_unarmed") || (bVar3 != joaat("weapon_unarmed") && unk_0x3BE0BB12D25FB305(bVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_285(bool bParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<4> Var18;
	
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &uVar0, true);
	fVar1 = func_107(unk_0xD80958FC74E988A6(), *bParam0, 1);
	if (unk_0xDFD5033FDBA0A9C8(*bParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xC86D67D52A707CF8(*bParam0, unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x131D401334815E94(*bParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_283(*bParam0, &uVar6, &bVar7, &bVar8);
	if (((bParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_258(bParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(bParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x8507BCB710FA6DC0(*bParam0, 124) || unk_0x8507BCB710FA6DC0(*bParam0, 125)) || unk_0x8507BCB710FA6DC0(*bParam0, 126)) || unk_0x8507BCB710FA6DC0(*bParam0, 22)) || unk_0x8507BCB710FA6DC0(*bParam0, 23)) || unk_0x8507BCB710FA6DC0(*bParam0, 88))
	{
		func_258(bParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((bParam0->f_39 && bParam0->f_5 != 4) && func_282(4))
	{
		func_258(bParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (bParam0->f_39 && func_281(*bParam0, 2))
	{
		func_258(bParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((bParam0->f_39 && fVar1 < 8f) && bParam0->f_5 != 4) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 5))
	{
		func_258(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 7)
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_277(bParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 6)
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_277(bParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_1322 == 10)
	{
		if (bParam0->f_39)
		{
			func_280(bParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_280(bParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x8507BCB710FA6DC0(*bParam0, 42)) || unk_0x8507BCB710FA6DC0(*bParam0, 114)) || func_278(*bParam0, 0))
	{
		func_258(bParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x8507BCB710FA6DC0(*bParam0, 103)) || func_278(*bParam0, 1))
	{
		func_258(bParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((bParam0->f_5 != 3 && bParam0->f_84) && (bParam0->f_39 || bParam0->f_41)) && (fVar1 < 8f || func_108(unk_0xD80958FC74E988A6(), Local_58, 1) < 40f))
	{
		if (bParam0->f_39)
		{
			func_258(bParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_277(bParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if (bParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_258(bParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_258(bParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((bParam0->f_39 || bParam0->f_41) && (bParam0->f_86 || bParam0->f_87)) && iLocal_1322 == 9) && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "CHECK_DRIVER")) && func_108(unk_0xD80958FC74E988A6(), Local_58, 1) < 15f)
	{
		if (bParam0->f_39)
		{
			func_280(bParam0, 1, "SEE_VAN_LEAVING", Local_46[func_102() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_280(bParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1322 != 9)
	{
		if ((bParam0->f_86 && (((iLocal_1322 == 0 || iLocal_1322 == 1) || iLocal_1322 == 4) || bParam0->f_5 == 1)) || (bParam0->f_87 && ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 5)))
		{
			if ((iLocal_1322 == 5 || iLocal_1322 == 4) && unk_0xFCDFF7B72D23A1AC(*bParam0, bLocal_1325, 19))
			{
				switch (iLocal_1322)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_258(bParam0, 2, 1, &Var4, 1, 0);
			}
			else if (bParam0->f_39)
			{
				switch (iLocal_1322)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (bParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_258(bParam0, 2, 1, &Var4, 1, 0);
			}
			else if (bParam0->f_41)
			{
				func_277(bParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
			}
		}
	}
	if (bParam0->f_34 > -1 && bParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar9 = Local_1106[bParam0->f_34 /*32*/].f_30;
		switch (unk_0xD24D37CC275948CC(&(Local_1106[bParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 5, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 3, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (bParam0->f_5 != 4)
				{
					if (func_108(*bParam0, Local_1106[bParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_258(bParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_258(bParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 5, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 5, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 3, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((bParam0->f_5 != 4 && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "STEALING_VAN")) && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "GET_IN_VAN")) && !unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "EXIT_VAN"))
				{
					func_258(bParam0, 3, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("gunshot"):
				if (bParam0->f_5 != 4)
				{
					func_258(bParam0, 5, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (bParam0->f_86)
				{
					func_258(bParam0, 2, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (bParam0->f_86)
				{
					func_258(bParam0, 2, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (bParam0->f_87)
				{
					func_258(bParam0, 2, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (bParam0->f_87)
				{
					func_258(bParam0, 2, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (bParam0->f_87)
				{
					func_258(bParam0, 2, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (bParam0->f_87)
				{
					func_277(bParam0, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (bParam0->f_87)
				{
					func_280(bParam0, 1, &(Local_1106[bParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	bParam0->f_34 = -1;
	if (bParam0->f_7 != bParam0->f_5)
	{
		bParam0->f_8 = 1;
	}
	else
	{
		bParam0->f_8 = 0;
	}
	bParam0->f_7 = bParam0->f_5;
	if (!unk_0x0C515FAB3FF9EA92(&(bParam0->f_25), &(bParam0->f_9)))
	{
		bParam0->f_33 = 1;
	}
	else
	{
		bParam0->f_33 = 0;
	}
	bParam0->f_25 = { bParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_28.f_0)
	{
		if (Local_28[iVar10 /*110*/] == *bParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (bParam0->f_5)
	{
		case 5:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_290(*bParam0) || (bParam0->f_48 % 2) == 0) || !func_181(Local_29.f_0))
					{
						if ((unk_0xD24D37CC275948CC(&(bParam0->f_9)) == joaat("gunshot") || unk_0xD24D37CC275948CC(&(bParam0->f_9)) == 1921975061) || unk_0xD24D37CC275948CC(&(bParam0->f_9)) == 880647822)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_GUN1") };
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(bParam0, &(bParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(bParam0, &(bParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0xD24D37CC275948CC(&(bParam0->f_9)) == joaat("killed") || unk_0xD24D37CC275948CC(&(bParam0->f_9)) == 1518302817) || unk_0xD24D37CC275948CC(&(bParam0->f_9)) == -1298712083)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_KILL") };
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_288(bParam0, &(bParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					else
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_GETSEC") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						bParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case 1224761252:
					if (func_281(*bParam0, 4))
					{
						func_258(bParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 1000)
					{
						func_258(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_281(*bParam0, 4))
					{
						func_258(bParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x9CD27B0045628463() - bParam0->f_37) > 15000 || (unk_0x9CD27B0045628463() - bParam0->f_38) > 3000) && !unk_0x049E937F18F4020C(*bParam0))
					{
						func_258(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_290(*bParam0) || bParam0->f_48 == 0)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					else
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
					{
						switch (iLocal_1305)
						{
							case 0:
								func_264(iVar11, "JS_STOCK", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 1:
								func_264(iVar11, "JS_STOCKb", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 2:
								func_264(iVar11, "JS_STOCKc", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 3:
								func_264(iVar11, "JS_STOCKd", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 4:
								func_264(iVar11, "JS_STOCKe", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 5:
								func_264(iVar11, "JS_STOCKf", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 6:
								func_264(iVar11, "JS_STOCKg", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 7:
								func_264(iVar11, "JS_STOCKh", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 8:
								func_264(iVar11, "JS_STOCKi", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 9:
								func_264(iVar11, "JS_STOCKj", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							
							case 10:
								func_264(iVar11, "JS_STOCKk", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!bParam0->f_49)
					{
						if (func_264(iVar11, "SOL1_AMB1", bParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_45(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_45(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							bParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "SEE_VAN_LEAVING") || unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "CHECK_DRIVER"))
			{
				Var16 = { func_287(unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 1f, 0f) - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
				Var17 = { func_287(unk_0x3FEF770D40960D5A(Local_28[iVar11 /*110*/], true) - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
				fVar14 = func_286(Var16, Var17);
				fVar15 = unk_0x1D08B970013C34B6(fVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_290(*bParam0) && unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_LVE1") };
							func_264(iVar11, &Var12, bParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_280(bParam0, 1, "CHECK_DRIVER", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					else if (func_108(unk_0xD80958FC74E988A6(), Local_58, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_258(bParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_290(*bParam0))
					{
						Var12 = { func_289(iVar11, "JS_VAN_LVE2") };
						func_264(iVar11, &Var12, bParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 3000)
					{
						func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 2000 && !unk_0x049E937F18F4020C(*bParam0))
						{
							func_258(bParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_280(bParam0, 1, "SEE_VAN_LEAVING_1", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9CD27B0045628463() - bParam0->f_37) > 4000 && func_108(*bParam0, bParam0->f_88, 1) < 3f) && unk_0xAC29253EEF8F0180(*bParam0))
					{
						func_258(bParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SND_INV") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 4000 && !unk_0x049E937F18F4020C(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST2") };
							func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST1") };
							func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x9CD27B0045628463() - bParam0->f_38) > 8000 && func_108(unk_0xD80958FC74E988A6(), Local_58, 1) > 65f) && (func_107(unk_0xD80958FC74E988A6(), *bParam0, 1) > 10f || (unk_0x9CD27B0045628463() - bParam0->f_38) > 16000)) && !unk_0x049E937F18F4020C(*bParam0))
					{
						func_258(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_290(*bParam0) && bParam0->f_35)
					{
						if (!bParam0->f_84)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_MELE_1") };
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							bParam0->f_84 = 1;
						}
						else if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_2") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x9CD27B0045628463() - bParam0->f_37) > 4000)
					{
						func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_ESC") };
							func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x9CD27B0045628463() - bParam0->f_37) > 2000 && bParam0->f_39) && !unk_0x049E937F18F4020C(*bParam0)) && iLocal_1322 != 9) && iLocal_1322 != 10)
					{
						func_258(bParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 2000)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN1") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 2000)
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_290(*bParam0))
					{
						if (func_267(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(bParam0, &(bParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - bParam0->f_38) > 5000 && !unk_0x049E937F18F4020C(*bParam0))
			{
				if (iVar11 == 1)
				{
					func_264(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1305 = 0;
				}
				func_258(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (bParam0->f_39)
				{
					if ((unk_0x9CD27B0045628463() - bParam0->f_38) > 1000 && !unk_0x049E937F18F4020C(*bParam0))
					{
						if (((unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "ENT_FOOT") || unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "ENT_VEH")) || unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "WH_FOOT")) || unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "WH_VEH"))
						{
							Var18 = { bParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_258(bParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "WH_FOOT") || unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "WH_VEH")) || (unk_0x0C515FAB3FF9EA92(&(bParam0->f_9), "WH_DITCH_VEH") && !unk_0x049E937F18F4020C(*bParam0)))
					{
						if (((bParam0->f_104 >= 6 && iLocal_1278 != -1) && (unk_0x9CD27B0045628463() - iLocal_1278) > 7000) && (unk_0x9CD27B0045628463() - bParam0->f_38) == 0)
						{
							func_258(bParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0xD24D37CC275948CC(&(bParam0->f_9)))
				{
					case -426892158:
						if (func_290(*bParam0))
						{
							if (!bParam0->f_82)
							{
								if (func_267(iVar11))
								{
									if (!bParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1") };
										func_264(iVar11, &Var12, bParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1_P") };
										func_264(iVar11, &Var12, bParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_267(iVar11))
							{
								if (!bParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2") };
									func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2_P") };
									func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							bParam0->f_82 = 1;
						}
						else if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
						{
							if (func_267(iVar11))
							{
								if (!bParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F") };
									func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F_P") };
									func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_290(*bParam0) || bParam0->f_48 == 0)
						{
							if (!bParam0->f_82)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V1") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										bParam0->f_48++;
									}
								}
								bParam0->f_82 = 1;
							}
							else if (unk_0x0C515FAB3FF9EA92(&(bParam0->f_17), "WH_VEH"))
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										bParam0->f_48++;
									}
								}
							}
							else if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									bParam0->f_48++;
								}
							}
						}
						else if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
						{
							if (func_267(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_290(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (bParam0->f_104 < 5)
									{
										Var12 = { func_289(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_290(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (bParam0->f_104 < 5)
									{
										if (((bParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_290(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
							{
								if (func_267(iVar11))
								{
									if (bParam0->f_104 < 5)
									{
										if (((bParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(bParam0, &(bParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V4") };
									func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								bParam0->f_48++;
							}
						}
						else if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 5000)
						{
							if (((bParam0->f_48 - 1) % 3) == 0)
							{
								Var12 = { func_289(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
							}
							func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							bParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									if (!bParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3") };
										func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3_P") };
										func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								bParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x9CD27B0045628463() - iLocal_1278) > 1000)
							{
								if (func_267(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V5") };
									func_264(iVar11, &Var12, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								bParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_286(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_287(struct<3> Param0)
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

void func_288(bool bParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (Local_28[iVar0 /*110*/] == *bParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	bParam0->f_50 = iVar1;
	StringCopy(&(bParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(bParam0->f_50.f_17), sParam2, 24);
	bParam0->f_50.f_28 = iParam4;
	bParam0->f_50.f_26 = fParam3;
	bParam0->f_50.f_29 = iParam5;
	bParam0->f_50.f_30 = iParam7;
	bParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_261(&(bParam0->f_50), 0);
	}
}

struct<6> func_289(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_290(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_291(bool bParam0)
{
	if (unk_0x6CD5A433374D4CFB(*bParam0, unk_0xD80958FC74E988A6()))
	{
		bParam0->f_40 = unk_0x9CD27B0045628463();
		bParam0->f_39 = 1;
	}
	else if ((unk_0x9CD27B0045628463() - bParam0->f_40) > 2000 || !unk_0xD71649DB0A545AA3(*bParam0, unk_0xD80958FC74E988A6(), 90f))
	{
		bParam0->f_40 = unk_0x9CD27B0045628463();
		bParam0->f_39 = 0;
	}
	if (bParam0->f_39)
	{
		bLocal_1319 = false;
	}
	if (bLocal_1319)
	{
		unk_0xC1E8A365BF3B29F2(*bParam0, 188, true);
	}
	if (!func_292())
	{
		bParam0->f_41 = unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), *bParam0);
		if (bParam0->f_41)
		{
			bParam0->f_43 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
	}
	else
	{
		bParam0->f_41 = 0;
	}
	switch (bParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			bParam0->f_102 = 1;
			break;
		
		default:
			bParam0->f_102 = 0;
			break;
	}
}

int func_292()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x7239B21A38F536BA(Local_46[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_46[iVar0 /*8*/], false))
		{
			if (unk_0x4319E335B71FFF34(Local_46[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_293()
{
	struct<3> Var0;
	var uVar1;
	
	unk_0xF372BC22FCB88606("BUGSTAR", &iLocal_1279);
	unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_1279);
	unk_0xBF25EB89375A37AD(5, iLocal_1279, joaat("player"));
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_1279);
	unk_0xBF25EB89375A37AD(1, iLocal_1279, joaat("COP"));
	unk_0xC12321827687FE4D(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, true);
	unk_0x46A1E1A299EC4BBA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0xA56F01F3765B93A0(138.43f, -3092.47f, 4.9f, 28.375f, true, false, false, false);
	if (func_195() || func_6(0))
	{
		iLocal_67 = 0;
		if (func_195())
		{
			if (Global_94618)
			{
				iLocal_67++;
			}
		}
		if (func_195())
		{
			func_245(iLocal_67, &Var0, &uVar1);
			func_299(Var0, uVar1, 1, 0);
		}
		bLocal_66 = true;
	}
	else
	{
		while (!func_190(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_298(&uLocal_70);
		}
	}
	func_297(&uLocal_70, "JHP1A", 0);
	func_240(&uLocal_70, "misslsdhsclipboard@base");
	func_240(&uLocal_70, "misslsdhsclipboard@idle_a");
	func_240(&uLocal_70, "misstrevor3");
	func_173(&uLocal_70, joaat("p_amb_clipboard_01"));
	func_239(&uLocal_70, iLocal_1281);
	func_241(&uLocal_70, &Local_59);
	unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), 0.15f);
	func_295(87);
	func_45(&uLocal_1112, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	func_45(&uLocal_1112, 3, 0, "LESTER", 0, 1);
	func_263(bLocal_1277);
	func_294();
	iLocal_1281 = unk_0x05B7A89BD78797FC(Local_58, "po1_08_warehouseint1");
	unk_0x9D74AE343DB65533(&cLocal_49);
	iLocal_1327 = unk_0x1B5C85C612E5256E(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!unk_0x02245FE4BED318B8(false))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_294()
{
	Global_94619 = 1;
}

void func_295(int iParam0)
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_296(2);
			func_296(4);
			break;
		
		case 73:
			func_296(0);
			func_296(1);
			func_296(7);
			break;
		
		case 92:
			func_296(10);
			func_296(9);
			func_296(13);
			func_296(6);
			break;
		
		case 68:
			func_296(11);
			break;
		
		case 78:
			func_296(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_296(3);
			break;
		
		default:
			break;
	}
}

void func_296(bool bParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_96296, bParam0);
}

int func_297(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_779[bParam2 /*5*/].f_1 || uParam0->f_779[bParam2 /*5*/])
	{
		if (unk_0x0C515FAB3FF9EA92(uParam0->f_779[bParam2 /*5*/].f_4, bParam1))
		{
			uParam0->f_779[bParam2 /*5*/].f_2 = 0;
			uParam0->f_1007 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bParam2 >= 11)
		{
			unk_0x6009F9F1AE90D8A6(bParam1, bParam2);
		}
		else
		{
			unk_0x71A78003C8E71424(bParam1, bParam2);
		}
		uParam0->f_779[bParam2 /*5*/] = 1;
		uParam0->f_779[bParam2 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_779[bParam2 /*5*/].f_4 = bParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	func_247(uParam0);
}

void func_299(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_195())
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
		func_194(1);
	}
}

void func_300(int iParam0)
{
	struct<3> Var0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_312();
		func_8(0);
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
		unk_0x1090044AD1DA76FA();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = true;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xCA042B6957743895(&cVar1))
		{
			func_310(&Var0);
		}
		else
		{
			func_301(&Var0, &cVar1);
		}
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
	}
}

void func_301(char* sParam0, char* sParam1)
{
	func_309(sParam0, sParam1);
	func_302(0);
}

void func_302(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_303(iVar0))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_308();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_307(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6(), 0);
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
	func_304(&(Global_113386.f_2363.f_539), iVar1);
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

void func_304(var uParam0, int iParam1)
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
			if (!func_306(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_305(&(uParam0->f_2296[iVar0]));
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

void func_305(var uParam0)
{
	*uParam0 = -15;
}

int func_306(int iParam0, var uParam1, float fParam2)
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
			return func_306(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_306(8, uParam1, fParam2);
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

void func_307(int iParam0, bool bParam1)
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

void func_308()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_167())
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
			switch (func_167())
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

void func_309(bool bParam0, bool bParam1)
{
	if (!unk_0xCA042B6957743895(sParam0))
	{
		if (unk_0xF030907CCBB8A9FD(bParam0) <= 16)
		{
			if (unk_0xF030907CCBB8A9FD(sParam1) <= 16)
			{
				StringCopy(&Global_78551, bParam0, 16);
				StringCopy(&Global_78555, bParam1, 16);
			}
		}
	}
}

void func_310(char* sParam0)
{
	func_311(sParam0);
	func_302(0);
}

void func_311(bool bParam0)
{
	if (!unk_0xCA042B6957743895(sParam0))
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

void func_312()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		if (!func_313())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_303(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_308();
		}
	}
}

int func_313()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

