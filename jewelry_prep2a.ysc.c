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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_750 = 5;
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
	var uLocal_781 = 7;
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
	var uLocal_831 = 5;
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
	var uLocal_857 = 3;
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
	var uLocal_873 = 21;
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
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 10;
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
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 5;
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
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 5;
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
	var uLocal_1088 = 0;
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
	struct<8> Local_1104[2];
	bool bLocal_1105 = 0;
	var uLocal_1106 = 3;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 1092616192;
	var uLocal_1113 = 1101004800;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 3;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 16;
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
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = -1;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 1000;
	var uLocal_1305 = 1000;
	var uLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	struct<3> Local_1310 = { 0, 0, 0 } ;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	bool bLocal_1318 = 0;
	var uLocal_1319 = 0;
	struct<2> Local_1320 = { 0, 0 } ;
	bool bLocal_1321 = 0;
	var uLocal_1322 = 0;
	struct<2> Local_1323[3];
	bool bLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	float fLocal_1328 = 0f;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	char cLocal_1334[24] = "";
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	bool bLocal_1345 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	bLocal_82 = joaat("s_m_m_armoured_01");
	bLocal_83 = joaat("boxville3");
	bLocal_84 = joaat("prop_idol_case_02");
	bLocal_85 = joaat("prop_yell_plastic_target");
	Local_86 = { 0f, 0.175f, 0f };
	Local_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1328 = 0f;
	iLocal_1343 = -1;
	if (unk_0xC968670BFACE42D9(3))
	{
		func_320(5);
	}
	unk_0xC4301E5121A0ED73(true);
	func_299();
	while (true)
	{
		unk_0x208784099002BC30("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_297();
		}
		func_295(&uLocal_94);
		func_209();
		func_207();
		if (!bLocal_91)
		{
			func_203();
			func_202(&Local_1104);
			func_1();
		}
		unk_0x245A6883D966D537(0.8f);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_88)
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0x706D57B0F50DA710("JHP2A_STOP");
	unk_0xCC33FA791322B9D9();
	unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
	func_8(0);
	if (func_7(87))
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
	
	unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
	unk_0x0FC2D89AC25A5814(joaat("boxville3"), false);
	unk_0xE163A4BCE4DE6F11(joaat("s_m_m_armoured_01"), false);
	if (func_21())
	{
		func_13(0);
	}
	iLocal_1330 = 0;
	Global_75595 = 0;
	if (bParam0)
	{
		unk_0x020E5F00CDA207BA(1f);
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		Global_75595 = 0;
	}
	if (unk_0x7239B21A38F536BA(bLocal_1318))
	{
		if (bParam0)
		{
			unk_0xEA386986E786A54F(&bLocal_1318);
		}
		else
		{
			unk_0x629BFA74418D6239(&bLocal_1318);
		}
	}
	if (unk_0x7239B21A38F536BA(Local_1310.f_0))
	{
		if (bParam0)
		{
			unk_0x9614299DCB53E54B(&Local_1310);
		}
		else
		{
			unk_0x2595DD4236549CE3(&Local_1310);
		}
	}
	if (unk_0x7239B21A38F536BA(Local_1320.f_0))
	{
		if (bParam0 && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xEA386986E786A54F(&Local_1320);
		}
		else
		{
			unk_0x629BFA74418D6239(&Local_1320);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1323.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_1323[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0x539E0AE3E6634B9F(&(Local_1323[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xB346476EF1A64897(Local_1323[iVar0 /*2*/]))
				{
					unk_0x961AC54BF0613F5D(Local_1323[iVar0 /*2*/], true, true);
				}
				unk_0x3AE22DEB5BA5A3E6(&(Local_1323[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x7239B21A38F536BA(bLocal_1324))
	{
		if (bParam0)
		{
			unk_0x539E0AE3E6634B9F(&bLocal_1324);
		}
		else
		{
			if (unk_0xB346476EF1A64897(bLocal_1324))
			{
				unk_0x961AC54BF0613F5D(bLocal_1324, true, true);
			}
			unk_0x3AE22DEB5BA5A3E6(&bLocal_1324);
		}
	}
	if (iLocal_1325 != 0)
	{
		unk_0x31D16B74C6E29D66(iLocal_1325, false);
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
		{
			unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1295, 0, 0);
	func_10();
	if (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
	{
		unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(bool bParam0, bool bParam1)
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

void func_10()
{
	Global_96296 = 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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
		if (func_12(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(bVar0))
	{
		if (func_12(bVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_12(bool bParam0)
{
	unk_0x0A24DA3A41B718F5(bParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_20();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_19(0))
		{
			func_14(0);
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

void func_14(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_17())
		{
			func_16(1, 1);
		}
		else
		{
			func_16(0, 0);
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
	if (!func_15())
	{
		Global_20266.f_1 = 3;
	}
}

int func_15()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_17()
{
	return BitTest(Global_1958711, 5);
}

bool func_18()
{
	return BitTest(Global_1958711, 19);
}

int func_19(int iParam0)
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

void func_20()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

int func_21()
{
	if (Global_20266.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_23()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	
	Var0 = { 692.8256f, -1012.544f, 21.722f };
	Var1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_201(Local_1320.f_0))
		{
			if (unk_0xBC8DBDCA2436F7E8(Local_1320.f_0) != 0)
			{
				Local_1320.f_1 = unk_0xBC8DBDCA2436F7E8(Local_1320.f_0);
			}
			else
			{
				Local_1320.f_1 = func_200(Local_1320.f_0, 0, 0);
			}
			func_199("JHP2A_STEAL", 7500, 1);
			func_198("JHP2A_HLP2", 15000);
		}
		else if (unk_0xBC8DBDCA2436F7E8(Local_1320.f_0) != 0)
		{
			unk_0xB98236CAAECEF897(true);
			iVar3 = unk_0xBC8DBDCA2436F7E8(Local_1320.f_0);
			unk_0x86A652570E5F25DD(&iVar3);
			unk_0xB98236CAAECEF897(false);
		}
		unk_0x706D57B0F50DA710("JHP2A_START");
		func_138(0f, 0f, 0f, 0f, 1, func_193());
		unk_0x293220DA1B46CEBC(5f, 5f, 4);
		iLocal_1338 = 0;
		iLocal_90 = 1;
		bLocal_1345 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_137();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1307 == 0 && unk_0x7239B21A38F536BA(Local_1320.f_0)) && unk_0x4C241E39B23DF959(Local_1320.f_0, false)) && unk_0x7239B21A38F536BA(Local_1310.f_0)) && !unk_0x84A2DD9AC37C35C1(Local_1310.f_0)) && unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, false)) && func_134(&(Local_1104[0 /*8*/])))
				{
					func_106(&uLocal_1295, Local_1320.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1295, 0, 0);
				}
				if (iLocal_1307 == 3 || iLocal_1307 == 2)
				{
					unk_0x293220DA1B46CEBC(5f, 5f, 4);
					func_103(&bLocal_1105, 1, 0);
					if (unk_0x4D79439A6B55AC67() && func_12("JHP2A_HLP2"))
					{
						unk_0x8DFCED7A656F8802(true);
					}
					if (!iLocal_1338)
					{
						func_199("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((unk_0x7239B21A38F536BA(bLocal_1321) && unk_0x4C241E39B23DF959(bLocal_1321, false)) && unk_0x146DF9EC4C4B9FD4(bLocal_1321, Local_1320.f_0))
				{
					if (unk_0xA6DB27D19ECBB7DA(Local_1320.f_1))
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						unk_0xB98236CAAECEF897(true);
						unk_0x86A652570E5F25DD(&(Local_1320.f_1));
						unk_0xB98236CAAECEF897(false);
						func_102(705, 0);
					}
					func_101(&bLocal_1105, Var0, 0.1f, 0.1f, 0.1f, 1, bLocal_1321, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x51210CED3DA1C78A(Local_1320.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, false, true, 0))
					{
						unk_0x260BE8F09E326A20(bLocal_1321, 5f, -1, false);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1307 == 1)
				{
					func_103(&bLocal_1105, 1, 0);
					if (!unk_0xA6DB27D19ECBB7DA(Local_1323[0 /*2*/].f_1))
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						Local_1323[0 /*2*/].f_1 = func_100(Local_1323[0 /*2*/]);
						func_199("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1338 = 1;
						unk_0x31B927BBC44156CD(Local_1320.f_0, false);
					}
				}
				else if (iLocal_1307 == 0)
				{
					if (unk_0xA6DB27D19ECBB7DA(Local_1320.f_1))
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						unk_0xB98236CAAECEF897(true);
						unk_0x86A652570E5F25DD(&(Local_1320.f_1));
						unk_0xB98236CAAECEF897(false);
						func_102(705, 0);
					}
					if (func_98(&bLocal_1105, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1320.f_0, "JHP2A_RTNVAN", "", "", unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_1320.f_0, false), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (unk_0xA6DB27D19ECBB7DA(bLocal_1105) && unk_0xDD2238F57B977751(bLocal_1105))
					{
						unk_0x4F7D8A9BFB0B43E9(bLocal_1105, false);
					}
				}
				break;
			
			case 101:
				if (unk_0x7239B21A38F536BA(Local_1320.f_0) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_1320.f_0, false))
				{
					bVar4 = Local_1320.f_0;
				}
				else if (unk_0x7239B21A38F536BA(bLocal_1321) && unk_0x146DF9EC4C4B9FD4(bLocal_1321, Local_1320.f_0))
				{
					bVar4 = bLocal_1321;
				}
				if (func_96(bVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					unk_0xCC33FA791322B9D9();
					unk_0x31B927BBC44156CD(Local_1320.f_0, false);
					unk_0x2B6747FAA9DB9D6B(Local_1320.f_0, true);
					if (unk_0x7239B21A38F536BA(bLocal_1321))
					{
						unk_0x260BE8F09E326A20(bLocal_1321, 5f, true, false);
					}
					func_95(0, -1);
					if (unk_0x7239B21A38F536BA(Local_1323[0 /*2*/]))
					{
						unk_0x539E0AE3E6634B9F(&(Local_1323[0 /*2*/]));
					}
					if (unk_0x7239B21A38F536BA(Local_1323[1 /*2*/]))
					{
						unk_0x539E0AE3E6634B9F(&(Local_1323[1 /*2*/]));
					}
					if (unk_0x7239B21A38F536BA(Local_1323[2 /*2*/]))
					{
						unk_0x539E0AE3E6634B9F(&(Local_1323[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
				{
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (unk_0x7239B21A38F536BA(Local_1323[iVar2 /*2*/]) && !unk_0xB346476EF1A64897(Local_1323[iVar2 /*2*/]))
						{
							if (unk_0xA6DB27D19ECBB7DA(Local_1320.f_1))
							{
								unk_0xB98236CAAECEF897(true);
								unk_0x86A652570E5F25DD(&(Local_1320.f_1));
								unk_0xB98236CAAECEF897(false);
							}
							if (!unk_0xA6DB27D19ECBB7DA(Local_1323[iVar2 /*2*/].f_1))
							{
								Local_1323[iVar2 /*2*/].f_1 = func_100(Local_1323[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (unk_0x7239B21A38F536BA(Local_1323[iVar2 /*2*/]) && !unk_0xB346476EF1A64897(Local_1323[iVar2 /*2*/]))
						{
							if (!unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
							{
								bVar5 = func_94(Local_1323[iVar2 /*2*/]);
								if ((bVar5 && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(Local_1320.f_0, 0f, -3f, -0.5f), unk_0x1899F328B0E12848(Local_1320.f_0, 0f, -4.5f, 1f), 1.68f, false, true, 1)) || (!bVar5 && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(Local_1323[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), true, false, false);
									unk_0x539E0AE3E6634B9F(&(Local_1323[iVar2 /*2*/]));
									unk_0xCC33FA791322B9D9();
									unk_0x67C540AA08E4A6F5(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_102(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (unk_0xA6DB27D19ECBB7DA(Local_1323[iVar2 /*2*/].f_1))
						{
							unk_0x86A652570E5F25DD(&(Local_1323[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_48(&bLocal_1105, Var1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar6, true);
					if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, false, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && bLocal_1345))
					{
						unk_0xFE99B66D079CF6BC(0, 37, true);
						unk_0xFE99B66D079CF6BC(0, 44, true);
						if (!func_21())
						{
							func_13(1);
						}
						if (!unk_0xE3B6097CC25AA69E(unk_0xD80958FC74E988A6()))
						{
							if (!unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false) && !func_19(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_47("JHP2A_HLP1");
							}
						}
						if (unk_0x580417101DDB492F(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x8DFCED7A656F8802(true);
							}
							bVar9 = unk_0xCAE1DC9A0E22A16D(unk_0xD80958FC74E988A6(), true);
							unk_0x710311ADF0E20730(bVar9);
							unk_0x293220DA1B46CEBC(3f, 5f, 4);
							unk_0xE65F427EB70AB1ED(-1, "Drop_Case", bVar9, "JWL_PREP_2A_SOUNDS", false, 0);
							unk_0x3AE22DEB5BA5A3E6(&bVar9);
							unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
							unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"));
							func_95(0, -1);
							func_46(706);
							func_103(&bLocal_1105, 1, 0);
							if (func_7(87))
							{
								if (func_21())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_21())
						{
							func_13(0);
						}
						if (unk_0x4D79439A6B55AC67())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x8DFCED7A656F8802(true);
							}
						}
					}
					bLocal_1345 = unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true);
				}
				break;
			
			case 1000:
				unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), false, 0);
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
				unk_0x31B927BBC44156CD(Local_1320.f_0, false);
				unk_0x2B6747FAA9DB9D6B(Local_1320.f_0, true);
				func_45(1);
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1130, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			
			case 2000:
				unk_0x293220DA1B46CEBC(5f, 5f, 4);
				unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
				Global_75595 = 1;
				func_45(1);
				func_44(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1130, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_24()
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

int func_25()
{
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2)
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
					func_40();
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
		if (func_39(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_38();
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
				func_36();
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
				if (func_35())
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
			if (func_15())
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
			func_34();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_33();
		func_28();
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
		func_40();
	}
	return 0;
}

void func_28()
{
	if (!func_29())
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

int func_29()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x4F8644AF03D0E0D6() == func_32())
	{
		return 0;
	}
	if (func_30(unk_0x4F8644AF03D0E0D6()))
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

bool func_30(bool bParam0)
{
	return func_31(bParam0, 20);
}

var func_31(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_32()
{
	return -1;
}

void func_33()
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

void func_34()
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

int func_35()
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

void func_36()
{
	if (func_37(14))
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
		Global_20266 = func_193();
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

bool func_37(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_38()
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

bool func_39(int iParam0, int iParam1)
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

void func_40()
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

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_42()
{
	if (func_43())
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

int func_43()
{
	if (Global_21605 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_44(bool bParam0, bool bParam1)
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

void func_45(bool bParam0)
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

void func_46(int iParam0)
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

void func_47(bool bParam0)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

int func_48(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	return func_49(bParam0, Param1, Param2, func_93(), func_93(), bParam3, 3, 0, 0, 0, 0, bParam4, func_92(), func_92(), func_92(), func_92(), func_92(), 0, bParam5, func_92(), 0, 0, bParam6, iParam7, func_92(), func_92(), func_92(), bParam8, 1065353216);
}

int func_49(bool bParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28)
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
	func_91(bParam0);
	func_90(bParam0);
	func_89();
	if (func_72(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam12, bParam13, bParam14, bParam15, bParam0->f_8, bParam17, bParam10, 0, 0, bParam24, bParam25, bParam26, iParam6, bParam18))
	{
		func_71(bParam12);
		func_71(bParam13);
		func_71(bParam14);
		func_71(bParam15);
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
				if (func_69(bParam0, iParam21))
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
				func_71(bParam16);
				func_71(bParam19);
				func_71("MORE_SEATS");
				if (bParam18 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						func_71(bParam11);
					}
					if (unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(bParam0);
					}
					if ((!func_66(bParam0, 1) && !func_65(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_64(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_71("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_66(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						bParam0->f_5 = func_61(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0xDF735600A4696DAF(bParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_60(bParam0->f_5, bParam0);
						}
					}
					else if (!func_59(Var3, unk_0x586AFE3FF72D996E(bParam0->f_5), 0.1f, 0))
					{
						unk_0xAE2AF67E9D9AF65D(bParam0->f_5, Var3);
						if (bParam27)
						{
							func_60(bParam0->f_5, bParam0);
						}
					}
					if (!func_66(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 2))
						{
							func_64(bParam0, bParam11, 0);
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
								else if (!unk_0x9BB01E3834671191(bParam0->f_17[iVar2], func_58()) || !func_56(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_53(bParam0))
							{
								func_71(bParam11);
								func_71(bParam16);
								func_71(bParam12);
								func_71(bParam13);
								func_71(bParam14);
								func_71(bParam15);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(bParam19);
								func_103(bParam0, 1, 0);
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
					func_71(bParam16);
					func_71(bParam19);
					if (unk_0xA6DB27D19ECBB7DA(bParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*bParam0))
					{
						unk_0x86A652570E5F25DD(&(bParam0->f_5));
						unk_0x86A652570E5F25DD(bParam0);
						func_71(bParam11);
					}
					if ((!func_66(bParam0, 1) && !func_65(bParam0)) && !BitTest(bParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_64(bParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_71("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(bParam0->f_13), false);
						unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), true);
					}
					if (BitTest(bParam0->f_13, 1))
					{
						if (!func_66(bParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
							{
								func_62(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_71(bParam11);
							}
							*bParam0 = func_50(bParam10, 0, 0);
							unk_0x9029B2F3DA924928(*bParam0, 2);
							if (!BitTest(bParam0->f_13, 4))
							{
								func_60(*bParam0, bParam0);
							}
						}
						if (!func_66(bParam0, 2))
						{
							if (!BitTest(bParam0->f_13, 3))
							{
								func_64(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (BitTest(bParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(bParam19))
								{
									if (!BitTest(bParam0->f_13, 4))
									{
										func_64(bParam0, bParam19, 0);
										unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
									}
								}
								else if (!BitTest(bParam0->f_13, 4))
								{
									func_64(bParam0, bParam16, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
								if (!BitTest(bParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(bParam0->f_17[0]))
									{
										func_62(bParam0->f_17[0], "GET_IN_CAR", 3);
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
					func_71(bParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_66(bParam0, 2))
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
										func_62(bParam0->f_17[bVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(bParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 13);
								}
							}
							else if (!BitTest(bParam0->f_13, 3))
							{
								func_64(bParam0, bParam16, 0);
								unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								if (BitTest(bParam0->f_13, 9))
								{
									func_64(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(bParam0, 2))
					{
						if (!BitTest(bParam0->f_13, 3))
						{
							func_64(bParam0, bParam16, 0);
							unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(bParam0->f_13), 4);
						}
						else if (BitTest(bParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(bParam19))
							{
								if (!BitTest(bParam0->f_13, 4))
								{
									func_64(bParam0, bParam19, 0);
									unk_0x933D6A9EEC1BACD0(&(bParam0->f_13), 4);
								}
							}
							else if (!BitTest(bParam0->f_13, 4))
							{
								func_64(bParam0, bParam16, 0);
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
		func_71(bParam11);
		func_71(bParam16);
		func_71(bParam19);
		func_71(bParam16);
		func_71("LOSE_WANTED");
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

bool func_50(bool bParam0, bool bParam1, bool bParam2)
{
	return func_51(bParam0, !bParam1, bParam2);
}

bool func_51(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	bVar0 = unk_0x5CDE92C702A8FCE7(bParam0);
	if (unk_0x6AC7003FA6E5575E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_52(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(bVar0, func_52(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(bVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(bParam0))
	{
		unk_0xD38744167B2FA257(bVar0, func_52(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return bVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_53(bool bParam0)
{
	if (BitTest(bParam0->f_13, 12))
	{
		if (func_55(unk_0xD80958FC74E988A6()))
		{
			if (func_54(1, 0, 1) || BitTest(bParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_54(1, 0, 1) || BitTest(bParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
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

int func_55(bool bParam0)
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

int func_56(bool bParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_57(unk_0xD80958FC74E988A6(), bParam0))
			{
				unk_0x4102C7858CFEE4E4(func_58(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(bParam0, func_58()))
		{
			unk_0x4102C7858CFEE4E4(func_58(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1)
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

int func_58()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_59(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_60(bool bParam0, bool bParam1)
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

bool func_61(struct<3> Param0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(bVar0, func_52(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(bVar0, bParam1);
	return bVar0;
}

void func_62(bool bParam0, bool bParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(bParam0, bParam1, func_63(iParam2), true);
}

int func_63(int iParam0)
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

void func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_199(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = unk_0x9CD27B0045628463();
}

int func_65(bool bParam0)
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

int func_66(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_68(bParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
	{
		if (func_43() && !func_67())
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)
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

int func_69(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_70(bVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(bool bParam0, var uParam1, int iParam2)
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

void func_71(bool bParam0)
{
	if (!unk_0xF22B6C47C6EAB066(bParam0))
	{
		unk_0xCF708001E1E536DD(bParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[bVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470) == 7 && !func_88(uParam0->f_17[bVar0], uParam0->f_21))
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
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
					{
						if (func_86(uParam0, uParam0->f_17[bVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_58());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_85(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(bParam10))
		{
			bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(bVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
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
							func_62(uParam0->f_17[bVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
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
			func_71("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(bParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_66(uParam0, 2))
					{
						bVar10 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_84(bVar10, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
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
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
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
							if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
							{
								if (!func_85(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_83(uParam0->f_17[bVar0]))
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
					if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
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
					if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
					{
						bVar21 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(bVar21))
						{
							if (func_70(bVar21, uParam0, 0))
							{
								if (func_82(bVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], bVar0);
									func_81(bVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(bVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(bVar21) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[bVar0], 2);
								}
								func_80(bVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()) && !func_79(uParam0->f_17[bVar0], bParam10)) && !func_78(uParam0->f_17[bVar0], bParam10))
					{
						if (func_86(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0]))
								{
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_58());
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
									func_60(uParam0->f_1[bVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
					{
						if (((func_56(uParam0->f_17[bVar0], 1) || func_79(uParam0->f_17[bVar0], bParam10)) || iParam12) || (unk_0x4C241E39B23DF959(bParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), bParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
								func_71(uVar12[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(uParam0->f_1[bVar0], uParam0);
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
										if (!func_56(uParam0->f_17[bVar0], 1))
										{
											if (func_55(uParam0->f_17[bVar0]))
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
									if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
										}
									}
									iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
									if (iVar11 == 7 && !func_88(uParam0->f_17[bVar0], bParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[bVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_77(uParam0->f_17[bVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[bVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0])) && !unk_0x28D3FED7190D3A0B(bParam10))
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
										uParam0->f_1[bVar0] = func_50(uParam0->f_17[bVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[bVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
							{
								if (func_86(uParam0, uParam0->f_17[bVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[bVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[bVar0]))
									{
										iVar11 = unk_0x77F1BEB8863288D5(uParam0->f_17[bVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[bVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[bVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_58());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), bParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[bVar0], func_58());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[bVar0], func_58()) && !unk_0x28D3FED7190D3A0B(bParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[bVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[bVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[bVar0]));
					func_71(uVar12[bVar0]);
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
		if (!func_66(uParam0, 2))
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
							if (func_83(uParam0->f_17[bVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[bVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[bVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_83(uParam0->f_17[bVar0]))
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
								func_64(uParam0, bParam7, 0);
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
									if (!func_76(bVar0, uParam0))
									{
										if (!unk_0xF22B6C47C6EAB066(uVar13[bVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar13[bVar0], ""))
											{
												func_74(uParam0, uVar12[bVar0], uVar13[bVar0], 0);
												func_73(bVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_76(bVar0, uParam0))
										{
											func_64(uParam0, uVar12[bVar0], 0);
											func_73(bVar0, uParam0);
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
					func_71(uVar12[bVar0]);
				}
				bVar0++;
			}
			func_71("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_73(bool bParam0, var uParam1)
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

void func_74(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(bParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(bParam1, ""))
			{
				func_75(bParam1, bParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_75(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0xC63CD5D2920ACBE7(bParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

int func_76(bool bParam0, var uParam1)
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

int func_77(bool bParam0, float fParam1)
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

int func_78(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(bParam0))
	{
		if (!unk_0x9BB01E3834671191(bParam0, func_58()))
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

int func_79(bool bParam0, bool bParam1)
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

void func_80(bool bParam0, var uParam1)
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

void func_81(bool bParam0, var uParam1)
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

int func_82(bool bParam0, var uParam1)
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

int func_83(bool bParam0)
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

int func_84(bool bParam0, var uParam1)
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

int func_85(var uParam0)
{
	bool bVar0;
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_70(bVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, bool bParam1, float fParam2, bool bParam3)
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
						if (func_85(uParam0))
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
					if (func_70(bVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(bVar0, false))
						{
							if (func_87(bVar0))
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

int func_87(bool bParam0)
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

int func_88(bool bParam0, bool bParam1)
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

void func_89()
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

void func_90(var uParam0)
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

void func_91(var uParam0)
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

bool func_92()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()
{
	struct<3> Var0;
	
	return Var0;
}

int func_94(bool bParam0)
{
	struct<3> Var0;
	
	if (unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
	{
		return 0;
	}
	Var0 = { unk_0x21C235BC64831E5A(unk_0x3FEF770D40960D5A(bParam0, true), unk_0x1899F328B0E12848(Local_1320.f_0, Local_86), unk_0x1899F328B0E12848(Local_1320.f_0, Local_87), false) };
	if (unk_0xB7A628320EFF8E47(Var0, unk_0x1899F328B0E12848(Local_1320.f_0, Local_86)) <= unk_0xB7A628320EFF8E47(unk_0x1899F328B0E12848(Local_1320.f_0, Local_87), unk_0x1899F328B0E12848(Local_1320.f_0, Local_86)))
	{
		return 1;
	}
	return 0;
}

void func_95(bool bParam0, int iParam1)
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

int func_96(bool bParam0, float fParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_97(bParam0);
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

void func_97(bool bParam0)
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

bool func_98(bool bParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_49(bParam0, Param1, func_99(), Param2, Param3, bParam5, 5, 0, 0, 0, bParam6, bParam7, func_92(), func_92(), func_92(), func_92(), bParam8, 0, bParam10, bParam9, 1, iParam11, bParam12, iParam13, func_92(), func_92(), func_92(), 1, bParam4);
}

Vector3 func_99()
{
	return 0f, 0f, 2f;
}

bool func_100(bool bParam0)
{
	return func_51(bParam0, 1, 0);
}

int func_101(bool bParam0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(bParam0, Param1, Param2, func_93(), func_93(), bParam3, 5, 0, 0, 0, bParam4, bParam5, func_92(), func_92(), func_92(), func_92(), bParam6, 0, bParam8, bParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_102(int iParam0, bool bParam1)
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

void func_103(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_105(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(bParam0->f_1[bVar0]))
		{
			unk_0x86A652570E5F25DD(&(bParam0->f_1[bVar0]));
		}
		func_104(bVar0, bParam0);
		func_81(bVar0, bParam0);
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
				if (unk_0x9BB01E3834671191(bParam0->f_17[bVar0], func_58()) && bParam0->f_17[bVar0] != unk_0xD80958FC74E988A6())
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

void func_104(int iParam0, var uParam1)
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

void func_105(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_5));
	}
}

void func_106(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_107(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_107(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_108(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_108(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, bParam1, Param2, bParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_109(var uParam0, bool bParam1, struct<3> Param2, bool bParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_12(bVar0))
	{
		func_133();
	}
	if (func_132(bParam1) && unk_0x47D6F43D77935C75(bParam1))
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
			if (func_127(uParam0, bParam5, bParam7, 0))
			{
				func_123(uParam0, bParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_113(bVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam6)
						{
							if (!func_12(bVar0))
							{
								func_198(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_113(bVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(bVar0))
				{
					if (((unk_0xE659E47AF827484B(bParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam6)
					{
						if (!func_12(bVar0))
						{
							func_198(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", bVar0))
							{
								func_112(1);
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
				if (func_12(bParam3))
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
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_11(uParam0, bVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_11(uParam0, bVar0, 1);
				}
			}
			if (!func_127(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, bVar0, 0);
	}
}

void func_110(var uParam0)
{
	if (func_132(unk_0xD80958FC74E988A6()))
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

int func_111(var uParam0)
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

int func_112(bool bParam0)
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

int func_113(bool bParam0)
{
	if (!func_114(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(bParam0) && func_12(bParam0)) || func_12("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_19(0))
	{
		return 0;
	}
	if (func_122())
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
	if ((func_121() || func_120(Global_4718592.f_168757)) || func_119())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar1 = func_118(unk_0xD80958FC74E988A6(), 0);
			if (((unk_0xE33FFA906CE74880(bVar0, bVar1) || (unk_0x9F47B058362C84B5(bVar0) == joaat("apc") && bVar1 != -1)) || (unk_0x9F47B058362C84B5(bVar0) == joaat("akula") && bVar1 != -1)) || (((unk_0x9F47B058362C84B5(bVar0) == joaat("riot2") && bVar1 == 0) && func_117(bVar0, 10)) && unk_0x772960298DA26FDB(bVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_115(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_115(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == unk_0x4F8644AF03D0E0D6()) && func_116(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
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

int func_117(bool bParam0, bool bParam1)
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

bool func_118(bool bParam0, bool bParam1)
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

var func_119()
{
	return Global_2714762.f_19;
}

bool func_120(int iParam0)
{
	return iParam0 == 51;
}

var func_121()
{
	return Global_2714762.f_18;
}

bool func_122()
{
	return unk_0x9CD27B0045628463() <= Global_23150.f_6269 + 100;
}

void func_123(var uParam0, bool bParam1, struct<3> Param2, int iParam3)
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
		func_11(uParam0, 0, 0);
	}
	if (func_126(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x524AC5ECEA15343E(bParam1))
		{
			bVar0 = unk_0x04A2A40C73395041(bParam1);
			if (!unk_0x997ABD671D25CA0B(bVar0, false))
			{
				if (unk_0x12534C348C6CB68B(bVar0))
				{
					if (!func_124())
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

bool func_124()
{
	return func_125(unk_0x4F8644AF03D0E0D6());
}

int func_125(bool bParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_126(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
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
						if (!func_131(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_131(bParam1, bParam2, bParam3))
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
					if (!func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_130(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
				else if (!func_131(bParam1, bParam2, bParam3))
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
						if (func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_128(bParam1, bParam2, bParam3))
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
					else if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_114(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_133();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_130(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_131(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
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

int func_132(bool bParam0)
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

void func_133()
{
	unk_0x933D6A9EEC1BACD0(&Global_8137, 4);
}

int func_134(var uParam0)
{
	if (func_136(uParam0) && !func_135(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	bool bVar0;
	
	if (iLocal_1307 == 0 || iLocal_1307 == 1)
	{
		if (((unk_0x5F9532F3B5CC2551(Local_1320.f_0, false) || (unk_0x7239B21A38F536BA(Local_1323[0 /*2*/]) && !unk_0xB346476EF1A64897(Local_1323[0 /*2*/]))) || (unk_0x7239B21A38F536BA(Local_1323[1 /*2*/]) && !unk_0xB346476EF1A64897(Local_1323[1 /*2*/]))) || (unk_0x7239B21A38F536BA(Local_1323[2 /*2*/]) && !unk_0xB346476EF1A64897(Local_1323[2 /*2*/])))
		{
			iLocal_1307 = 2;
		}
	}
	if (iLocal_1307 == 2)
	{
		if ((((!unk_0x7239B21A38F536BA(Local_1320.f_0) || !unk_0x4C241E39B23DF959(Local_1320.f_0, false)) || (unk_0x7239B21A38F536BA(Local_1323[0 /*2*/]) && !func_94(Local_1323[0 /*2*/]))) || (unk_0x7239B21A38F536BA(Local_1323[1 /*2*/]) && !func_94(Local_1323[1 /*2*/]))) || (unk_0x7239B21A38F536BA(Local_1323[2 /*2*/]) && !func_94(Local_1323[2 /*2*/])))
		{
			iLocal_1307 = 3;
		}
	}
	if (iLocal_1307 == 0)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x9F47B058362C84B5(bVar0) == joaat("towtruck") || unk_0x9F47B058362C84B5(bVar0) == joaat("towtruck2"))
			{
				if (unk_0x4C241E39B23DF959(bVar0, false))
				{
					if (unk_0x146DF9EC4C4B9FD4(bVar0, Local_1320.f_0))
					{
						bLocal_1321 = bVar0;
					}
				}
			}
		}
	}
	if (iLocal_1307 == 0)
	{
		if (!unk_0x4C241E39B23DF959(Local_1320.f_0, false))
		{
			iLocal_1307 = 1;
		}
	}
	if (iLocal_1307 == 1 && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_1320.f_0, true))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_138(struct<3> Param0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x7239B21A38F536BA(Global_103950.f_4))
	{
		if (unk_0x4C241E39B23DF959(Global_103950.f_4, false))
		{
			if (func_192(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_189(unk_0x3FEF770D40960D5A(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						bParam1 = uVar1;
					}
				}
				func_139(Global_103950.f_4, Param0, bParam1, 24, 0);
			}
		}
	}
}

void func_139(bool bParam0, struct<3> Param1, bool bParam2, int iParam3, bool bParam4)
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
		func_188(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_183(bParam0, &Var0);
		if (func_126(Param1, 0f, 0f, 0f, 0))
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
		func_176(iParam3, &Var0, Param1, bParam2, func_182(bParam0));
		func_140(iParam3, bParam0, 0);
	}
}

void func_140(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_172(&(Global_77137.f_555[0 /*21*/]), iParam0))
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
				Global_113386.f_32749.f_4801 = func_161();
			}
			if (bParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_192(iParam0);
					if ((unk_0x7239B21A38F536BA(bVar0) && unk_0x4C241E39B23DF959(bVar0, false)) && bParam1 != bVar0)
					{
						func_141(bVar0, 145);
					}
				}
				Global_78043 = bParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_141(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_142(bParam0))
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
	func_183(bParam0, &(Global_113386.f_32749.f_5510));
}

int func_142(bool bParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || func_159(bParam0, 0, 0)) || func_159(bParam0, 1, 0)) || func_159(bParam0, 2, 0)) || func_182(bParam0) != 145) || func_158(bParam0)) || func_157(bParam0)) || func_156(bParam0)) || func_155(bParam0)) || !func_143(unk_0x9F47B058362C84B5(bParam0)))
	{
		if (func_157(bParam0))
		{
		}
		if (func_157(bParam0))
		{
		}
		if (func_159(bParam0, 0, 0))
		{
		}
		if (func_159(bParam0, 1, 0))
		{
		}
		if (func_159(bParam0, 2, 0))
		{
		}
		if (func_182(bParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_143(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_144(bParam0, 0))
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

int func_144(bool bParam0, bool bParam1)
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
		if (!func_154())
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
		if ((((!func_153() && !func_152()) && !func_151()) && !func_150()) && !func_154())
		{
			return 0;
		}
	}
	if ((bParam0 == joaat("hotknife") || bParam0 == joaat("carbonrs")) || bParam0 == joaat("khamelion"))
	{
		if ((func_149() || unk_0x48AF36444B965238()) || func_148())
		{
		}
		else if (!func_151())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_147(bParam0))
		{
			return 0;
		}
	}
	if (!func_145(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_145(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_146())
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

int func_146()
{
	if (unk_0x48AF36444B965238())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_147(bool bParam0)
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

bool func_148()
{
	return (unk_0xA72BC0B675B1519E() || unk_0x807ABE1AB65C24D2());
}

bool func_149()
{
	return (unk_0x4D982ADB1978442D() || unk_0xC545AB1CF97ABB34());
}

int func_150()
{
	return 0;
}

int func_151()
{
	return 1;
}

int func_152()
{
	return 1;
}

int func_153()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_154()
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

int func_155(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	bVar1 = unk_0x7CE1CCB9B293020E(bParam0);
	if (bVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(bVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_144(bVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_156(bool bParam0)
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

int func_157(bool bParam0)
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

int func_158(bool bParam0)
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

int func_159(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_160(iParam1, iVar0, &sVar1, &iVar2))
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

int func_160(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_161()
{
	var uVar0;
	
	func_171(&uVar0, unk_0x494E97C2EF27C470());
	func_170(&uVar0, unk_0x13D2B8ADD79640F2());
	func_169(&uVar0, unk_0x25223CA6B4D20B7F());
	func_164(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_163(&uVar0, unk_0xBBC72712E80257A1());
	func_162(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_162(var uParam0, int iParam1)
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

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_164(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_168(*uParam0);
	iVar1 = func_166(*uParam0);
	if (bParam1 < 1 || bParam1 > func_165(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 4));
}

int func_165(int iParam0, int iParam1)
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

var func_166(bool bParam0)
{
	return (unk_0x97EF1E5BCE9DC075(bParam0, 26) & 31 * func_167(BitTest(bParam0, 31), -1, 1)) + 2011;
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168(var uParam0)
{
	return uParam0 & 15;
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 9));
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 14));
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(bParam1, 20));
}

int func_172(var uParam0, int iParam1)
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
			uParam0->f_4 = func_173(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_173(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_173(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_173(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_173(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_173(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_173(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_173(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_173(2, 1);
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
			if (func_154())
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
			if (func_154())
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
		if (!func_126(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_126(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_126(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_173(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_175(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_174(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_174(int iParam0, var uParam1, int iParam2)
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

bool func_175(int iParam0)
{
	return iParam0 < 3;
}

void func_176(int iParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4)
{
	if (func_172(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_181(iParam0);
			func_180(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_177(iParam0, 1);
		}
	}
}

void func_177(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_179(iParam0, 0))
		{
			func_178(iParam0, 1, 0);
			func_178(iParam0, 2, 0);
			func_178(iParam0, 3, 0);
			func_178(iParam0, 4, 0);
			func_178(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_178(iParam0, 0, 0);
	}
}

void func_178(int iParam0, bool bParam1, bool bParam2)
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

int func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_180(var uParam0, var uParam1)
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

void func_181(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_172(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_77137.f_139[iParam0]))
		{
			unk_0xAD738C3085FE7E11(Global_77137.f_139[iParam0], true, true);
			unk_0x629BFA74418D6239(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_177(iParam0, 0);
		}
	}
}

int func_182(bool bParam0)
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

void func_183(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(bParam0, false))
	{
		func_187(uParam1);
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
		if (uParam1->f_65 == -1 && !func_186(uParam1->f_66))
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
		func_185(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(bParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar0 + 1));
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

int func_184(int iParam0)
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

int func_185(bool bParam0, var uParam1, var uParam2)
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

int func_186(int iParam0)
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

void func_187(var uParam0)
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

void func_188(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_181(iParam0);
	func_177(iParam0, 0);
}

int func_189(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_190(Param0, iParam1, 1);
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

int func_190(struct<3> Param0, int iParam1, int iParam2)
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
				if (func_191(iVar0) || iParam2 == 0)
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

var func_191(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_193()
{
	func_194();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_194()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_196(Global_113386.f_2363.f_539.f_4321) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_195(unk_0xD80958FC74E988A6());
			if (func_175(iVar0) && (!func_37(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_175(Global_113386.f_2363.f_539.f_4321))
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

int func_195(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		bVar1 = unk_0x9F47B058362C84B5(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_196(iVar0) == bVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_196(int iParam0)
{
	if (func_175(iParam0))
	{
		return func_197(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_197(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_198(bool bParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(bParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_199(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(bParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

bool func_200(bool bParam0, bool bParam1, bool bParam2)
{
	return func_51(bParam0, !bParam1, bParam2);
}

int func_201(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
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

void func_202(var uParam0)
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

void func_203()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!iLocal_1344)
		{
			func_206(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -1);
			func_205(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), -1);
			iLocal_1344 = 1;
		}
	}
	else if (iLocal_1344)
	{
		func_205(0, -1);
		func_206(0, -1);
		iLocal_1344 = 0;
	}
	if (!iLocal_1342)
	{
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_1320.f_0, true))
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1342 = 1;
			}
			else if (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1342 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1307)
		{
			case 0:
				if ((unk_0x7239B21A38F536BA(Local_1310.f_0) && !unk_0x84A2DD9AC37C35C1(Local_1310.f_0)) && func_134(&(Local_1104[0 /*8*/])))
				{
					if (Local_1104[0 /*8*/].f_1 == 1)
					{
						if (func_204(unk_0xD80958FC74E988A6(), Local_1320.f_0, 1) > 500f)
						{
							func_320(1);
						}
					}
					else if (Local_1104[0 /*8*/].f_1 == 4)
					{
						if (func_204(unk_0xD80958FC74E988A6(), Local_1320.f_0, 1) > 250f)
						{
							func_320(1);
						}
					}
					else if (func_204(unk_0xD80958FC74E988A6(), Local_1320.f_0, 1) > 250f)
					{
						func_320(2);
					}
				}
				else if (func_204(unk_0xD80958FC74E988A6(), Local_1320.f_0, 1) > 250f)
				{
					func_320(2);
				}
				break;
			
			case 1:
				if (func_204(unk_0xD80958FC74E988A6(), Local_1320.f_0, 1) > 250f)
				{
					func_320(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
				{
					if (((((unk_0x7239B21A38F536BA(Local_1323[0 /*2*/]) && func_204(unk_0xD80958FC74E988A6(), Local_1323[0 /*2*/], 1) > 250f) && unk_0x7239B21A38F536BA(Local_1323[1 /*2*/])) && func_204(unk_0xD80958FC74E988A6(), Local_1323[1 /*2*/], 1) > 250f) && unk_0x7239B21A38F536BA(Local_1323[2 /*2*/])) && func_204(unk_0xD80958FC74E988A6(), Local_1323[2 /*2*/], 1) > 250f)
					{
						func_320(3);
					}
				}
				break;
			}
	}
	if (unk_0x7239B21A38F536BA(Local_1320.f_0))
	{
		if ((unk_0xCFB0A0D8EDD145A3(Local_1320.f_0) && !unk_0x4C241E39B23DF959(Local_1320.f_0, false)) && !unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
		{
			func_320(4);
		}
	}
}

float func_204(bool bParam0, bool bParam1, bool bParam2)
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

void func_205(bool bParam0, int iParam1)
{
	Global_63165 = bParam0;
	Global_63166 = iParam1;
}

void func_206(bool bParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = bParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != bParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = bParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_207()
{
	if (unk_0x7239B21A38F536BA(Local_1310.f_0))
	{
		if (!unk_0x997ABD671D25CA0B(Local_1310.f_0, false))
		{
			func_208(Local_1310.f_0, &(Local_1310.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
	}
	if (unk_0x7239B21A38F536BA(Local_1320.f_0))
	{
		if (((!func_201(Local_1320.f_0) && unk_0x5F9532F3B5CC2551(Local_1320.f_0, false)) && iLocal_1339) && func_204(Local_1320.f_0, unk_0xD80958FC74E988A6(), 1) > 200f)
		{
			unk_0x629BFA74418D6239(&Local_1320);
		}
	}
}

int func_208(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
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

void func_209()
{
	struct<3> Var0;
	bool bVar1;
	
	if (bLocal_91 == 1)
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
			iLocal_88 = iLocal_92;
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0xCC33FA791322B9D9();
			unk_0x8DFCED7A656F8802(true);
			func_8(1);
			if (unk_0x991251AFC3981F84())
			{
				unk_0x440AF51A3462B86F();
			}
			if (!func_294())
			{
				func_293(iLocal_88, &Var0, &bVar1);
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), bVar1);
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
				func_291(&uLocal_94, Var0, 50f, 0);
			}
			func_290(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_289(&uLocal_94, bLocal_82);
					func_289(&uLocal_94, bLocal_83);
					func_289(&uLocal_94, bLocal_84);
					func_288(&uLocal_94, &Global_97303);
					break;
				
				case 1:
					func_289(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!func_287(&uLocal_94))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_207();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_280(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x0C515FAB3FF9EA92(&Global_97303, "jhp2a_main"))
					{
						while (!func_213(&bLocal_1318, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x01C7B9B38428AEB6(1395.851f, -1069.306f, 52.4779f, 20f, false, false, false, false, false, false, 0);
						}
					}
					else
					{
						while (!func_213(&bLocal_1318, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x01C7B9B38428AEB6(1256.913f, 556.8416f, 79.7013f, 20f, false, false, false, false, false, false, 0);
						}
					}
					unk_0x33E8CD3322E2FE31(bLocal_1318, false);
					unk_0x7EE3A3C5E4A40CC9(bLocal_1318, true, false);
					unk_0x7EE3A3C5E4A40CC9(bLocal_1318, 2, true);
					unk_0x49733E92263139D1(bLocal_1318, 5f);
					unk_0x2497C4717C8B881E(bLocal_1318, true, true, false);
					if (func_294())
					{
						func_210(bLocal_1318, -1, 1);
					}
					else
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
						unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), bLocal_1318, -1);
					}
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1320.f_0 = unk_0xAF35D0D2583051B0(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x31B927BBC44156CD(Local_1320.f_0, false);
						unk_0x49733E92263139D1(Local_1320.f_0, 5f);
					}
					if (func_294())
					{
						func_210(0, -1, 1);
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
				unk_0xD4E8E24955024033(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_210(bool bParam0, bool bParam1, int iParam2)
{
	if (func_212() && func_294())
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
		func_211(0);
	}
}

void func_211(int iParam0)
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

int func_212()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_213(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_212())
	{
		if (func_279())
		{
			func_180(&(Global_106934.f_2890.f_12), &Var0);
		}
	}
	else if (func_277())
	{
		func_180(&(Global_103950.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_276(0, &Var0))
		{
			if (unk_0x7F6DB52EEFC96DF8(Var0.f_66) || unk_0xB50C0B0CEDC6CE84(Var0.f_66))
			{
				unk_0x963D27A58DF860AC(Var0.f_66);
				if (unk_0x98A4EB5D89A0C952(Var0.f_66))
				{
					*bParam0 = unk_0xAF35D0D2583051B0(Var0.f_66, Param1, bParam2, true, true, false);
					func_258(*bParam0, &Var0, 0, 1);
					unk_0xE532F5D78798DAAB(Var0.f_66);
					unk_0x49733E92263139D1(*bParam0, 5f);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!unk_0x7239B21A38F536BA(*bParam0))
		{
			if (func_214(bParam0, 0, Param1, bParam2, 1, 0))
			{
				unk_0x0FC2D89AC25A5814(func_173(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_214(bool bParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_175(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_174(iParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x7239B21A38F536BA(*bParam0))
		{
			if (unk_0x9F47B058362C84B5(*bParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			unk_0x963D27A58DF860AC(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x98A4EB5D89A0C952(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = unk_0xAF35D0D2583051B0(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, bParam3, false, false, false);
				unk_0x49733E92263139D1(*bParam0, 5f);
				unk_0xAB04325045427AAE(*bParam0, false);
				unk_0x428BACCDF5E26EAD(*bParam0, false);
				unk_0x92F0CF722BC4202F(*bParam0, true);
				unk_0x6B76DC1F3AE6E6A3(*bParam0, 1250, false);
				unk_0x45F6D8EEF34ABEF1(*bParam0, 1250f);
				unk_0x70DB57649FA8D0D8(*bParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x4F1D4BE3A7F24601(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x2036F561ADD12E33(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x79D3B596FE44EE8B(*bParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x7EE3A3C5E4A40CC9(*bParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xF39C4F538B5124C2(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_257(&uVar1, &bVar0))
				{
					unk_0x95A88F0B409CDA47(*bParam0, &uVar1);
					unk_0x9088EB5A43FFB0A1(*bParam0, bVar0);
				}
				else
				{
					unk_0x95A88F0B409CDA47(*bParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x4C4D6B2644F458CB())
					{
						unk_0x9088EB5A43FFB0A1(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB5BA80F839791C0F(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xEB9DC3C7D8596C46(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x57C51E6BAD752696(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x8E0A582209A62695(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2AA720E4287BF269(*bParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2AA720E4287BF269(*bParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2AA720E4287BF269(*bParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2AA720E4287BF269(*bParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x87B63E25A529D526(*bParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x60BF608F1B8CD1B6(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(*bParam0)))
					{
						if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(*bParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x487EB21CC7295BA1(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x487EB21CC7295BA1(*bParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_251(bParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x3AFDC536C3D01674(*bParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x9F47B058362C84B5(*bParam0) == joaat("bodhi2"))
					{
						func_249(bParam0);
					}
				}
				if (bParam4)
				{
					unk_0xE532F5D78798DAAB(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_248(*bParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			unk_0x963D27A58DF860AC(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x98A4EB5D89A0C952(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = unk_0xAF35D0D2583051B0(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, bParam3, false, false, false);
				unk_0x49733E92263139D1(*bParam0, 5f);
				unk_0xAB04325045427AAE(*bParam0, false);
				unk_0x428BACCDF5E26EAD(*bParam0, false);
				unk_0x92F0CF722BC4202F(*bParam0, true);
				unk_0x6B76DC1F3AE6E6A3(*bParam0, 1250, false);
				unk_0x45F6D8EEF34ABEF1(*bParam0, 1250f);
				unk_0x70DB57649FA8D0D8(*bParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x4F1D4BE3A7F24601(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x2036F561ADD12E33(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x79D3B596FE44EE8B(*bParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x7EE3A3C5E4A40CC9(*bParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xF39C4F538B5124C2(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_257(&uVar1, &bVar0))
				{
					unk_0x95A88F0B409CDA47(*bParam0, &uVar1);
					unk_0x9088EB5A43FFB0A1(*bParam0, bVar0);
				}
				else
				{
					unk_0x95A88F0B409CDA47(*bParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x4C4D6B2644F458CB())
					{
						unk_0x9088EB5A43FFB0A1(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB5BA80F839791C0F(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xEB9DC3C7D8596C46(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x57C51E6BAD752696(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x8E0A582209A62695(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2AA720E4287BF269(*bParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2AA720E4287BF269(*bParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2AA720E4287BF269(*bParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2AA720E4287BF269(*bParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x87B63E25A529D526(*bParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x60BF608F1B8CD1B6(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(*bParam0)))
					{
						if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(*bParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x487EB21CC7295BA1(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x487EB21CC7295BA1(*bParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_251(bParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x3AFDC536C3D01674(*bParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x9F47B058362C84B5(*bParam0) == joaat("bodhi2"))
					{
						func_249(bParam0);
					}
				}
				if (bParam4)
				{
					unk_0xE532F5D78798DAAB(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_248(*bParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x963D27A58DF860AC(Var2.f_0);
			if (unk_0x98A4EB5D89A0C952(Var2.f_0))
			{
				bVar5 = true;
				*bParam0 = unk_0xAF35D0D2583051B0(Var2.f_0, Param2, bParam3, true, true, false);
				unk_0x49733E92263139D1(*bParam0, 5f);
				unk_0xAB04325045427AAE(*bParam0, false);
				unk_0x428BACCDF5E26EAD(*bParam0, false);
				unk_0x92F0CF722BC4202F(*bParam0, true);
				StringCopy(&cVar6, unk_0x7CE1CCB9B293020E(*bParam0), 16);
				unk_0x6B76DC1F3AE6E6A3(*bParam0, 1250, false);
				unk_0x45F6D8EEF34ABEF1(*bParam0, 1250f);
				unk_0x70DB57649FA8D0D8(*bParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x4F1D4BE3A7F24601(*bParam0, Var2.f_5, Var2.f_6);
				unk_0x2036F561ADD12E33(*bParam0, Var2.f_7, Var2.f_8);
				unk_0x79D3B596FE44EE8B(*bParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x7EE3A3C5E4A40CC9(*bParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xF39C4F538B5124C2(*bParam0, Var2.f_24);
				}
				if (func_257(&uVar1, &bVar0))
				{
					unk_0x95A88F0B409CDA47(*bParam0, &uVar1);
					unk_0x9088EB5A43FFB0A1(*bParam0, bVar0);
				}
				else
				{
					unk_0x95A88F0B409CDA47(*bParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0x4C4D6B2644F458CB())
					{
						unk_0x9088EB5A43FFB0A1(*bParam0, Var2.f_26);
					}
				}
				unk_0xB5BA80F839791C0F(*bParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0xEB9DC3C7D8596C46(*bParam0, Var2.f_88);
				unk_0x57C51E6BAD752696(*bParam0, Var2.f_87);
				unk_0x8E0A582209A62695(*bParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0x2AA720E4287BF269(*bParam0, 2, BitTest(Var2.f_92, 28));
				unk_0x2AA720E4287BF269(*bParam0, 3, BitTest(Var2.f_92, 29));
				unk_0x2AA720E4287BF269(*bParam0, 0, BitTest(Var2.f_92, 30));
				unk_0x2AA720E4287BF269(*bParam0, 1, BitTest(Var2.f_92, 31));
				if (unk_0x87B63E25A529D526(*bParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0x60BF608F1B8CD1B6(*bParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(*bParam0)))
					{
						if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(*bParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0x487EB21CC7295BA1(*bParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0x487EB21CC7295BA1(*bParam0, Var2.f_90);
						}
					}
				}
				func_251(bParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x3AFDC536C3D01674(*bParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x9F47B058362C84B5(*bParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						unk_0x95A88F0B409CDA47(*bParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x9F47B058362C84B5(*bParam0) == joaat("bodhi2"))
					{
						func_249(bParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && unk_0x9F47B058362C84B5(*bParam0) == joaat("tailgater"))
				{
					unk_0x6AF0636DDEDCB6DD(*bParam0, 6, true, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 14, 7, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 11, 2, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 2, 3, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 7, 5, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, false, false, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 3, 3, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 13, true, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 4, 3, false);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 12, 2, false);
					unk_0x2A1F4F37F95BAD08(*bParam0, 22, true);
					unk_0x487EB21CC7295BA1(*bParam0, 2);
					unk_0x6AF0636DDEDCB6DD(*bParam0, 23, 11, false);
					unk_0x57C51E6BAD752696(*bParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_215(iParam1, bParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0xE532F5D78798DAAB(Var2.f_0);
				}
				if (bVar5)
				{
					func_248(*bParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_215(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_175(iParam0) && unk_0x7239B21A38F536BA(*bParam1)) && unk_0x4C241E39B23DF959(*bParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_141(*bParam1, iParam0);
		}
		if (unk_0x33F2E3FE70EAAE1D(*bParam1) != 0)
		{
			unk_0x1F2AA07F00B3217A(*bParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x9F47B058362C84B5(*bParam1);
		if (unk_0x1CDD6BADC297830D(*bParam1, &bVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x9F47B058362C84B5(bVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x8F17BC8BA08DA62B(*bParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xEEF059FAD016D209(*bParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xD2E6822DBFD6C8BD(*bParam1, true);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xD2E6822DBFD6C8BD(*bParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xD2E6822DBFD6C8BD(*bParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xD2E6822DBFD6C8BD(*bParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xD2E6822DBFD6C8BD(*bParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xD2E6822DBFD6C8BD(*bParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xD2E6822DBFD6C8BD(*bParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xD2E6822DBFD6C8BD(*bParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xD2E6822DBFD6C8BD(*bParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xD2E6822DBFD6C8BD(*bParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xD2E6822DBFD6C8BD(*bParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xD2E6822DBFD6C8BD(*bParam1, 12);
		if (unk_0x52F357A30698BCCE(*bParam1, false))
		{
			iVar2 = unk_0xF8C397922FC03F41(*bParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xE8AF77C4C06ADC93();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x7CE1CCB9B293020E(*bParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xF11BC2DD9A3E7195(*bParam1);
		unk_0xA19435F193E081AC(*bParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x3BC4245933A166F7(*bParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xB635392A4938B3C3(*bParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x678B9BB8C3F58FEB(*bParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x0EE21293DAD47C95(*bParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x2BB9230590DA5E8A(*bParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xB3ED1BFB4BE636DC(*bParam1);
		unk_0x7619EEE8C886757F(*bParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x8C4B92553E4766A5(*bParam1, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x8C4B92553E4766A5(*bParam1, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x8C4B92553E4766A5(*bParam1, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x8C4B92553E4766A5(*bParam1, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[iParam0] = 10;
		if (unk_0x6325D1A044AE510D(*bParam1) >= 0 && func_219(*bParam1, 0, &uVar0))
		{
			func_185(bParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[iParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113386.f_20118[iParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113386.f_20118[iParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113386.f_20118[iParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113386.f_20118[iParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113386.f_20118[iParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113386.f_20118[iParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113386.f_20118[iParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113386.f_20118[iParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113386.f_20118[iParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113386.f_20118[iParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113386.f_20118[iParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113386.f_20118[iParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113386.f_20118[iParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113386.f_20118[iParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113386.f_20118[iParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113386.f_20118[iParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113386.f_20118[iParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113386.f_20118[iParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113386.f_20118[iParam0 /*43*/].f_24 = unk_0xE38E9162A2500646(*bParam1, 11) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_25 = unk_0xE38E9162A2500646(*bParam1, 12) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_26 = unk_0xE38E9162A2500646(*bParam1, 4) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_27 = unk_0xE38E9162A2500646(*bParam1, 23) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_28 = unk_0xE38E9162A2500646(*bParam1, 14) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_29 = unk_0xE38E9162A2500646(*bParam1, 16) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_30 = unk_0xE38E9162A2500646(*bParam1, 15) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_32 = unk_0xEEBFC7A7EFDC35B4(*bParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = unk_0x02165D55000219AC(*bParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[1] = unk_0x90A38E9838E0A8C1(*bParam1, 14, 0);
				Global_113386.f_20118[iParam0 /*43*/].f_33[2] = unk_0x90A38E9838E0A8C1(*bParam1, 14, 1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[3] = unk_0x90A38E9838E0A8C1(*bParam1, 14, 2);
				Global_113386.f_20118[iParam0 /*43*/].f_33[4] = unk_0x90A38E9838E0A8C1(*bParam1, 14, 3);
				Global_113386.f_20118[iParam0 /*43*/].f_39 = unk_0xFC058F5121E54C32(*bParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_31 = func_218(*bParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = unk_0xACB5DCCA1EC76840(*bParam1);
				unk_0xE8D65CA700C9A693(*bParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_216(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
				unk_0x81592BE4E3878728(*bParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_216(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_217(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_217(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_218(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	bVar4 = 20000;
	bVar5 = bVar4;
	if ((unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false)) && unk_0x6325D1A044AE510D(bParam0) >= 0)
	{
		if (unk_0xFC058F5121E54C32(bParam0) == 3)
		{
			bVar5 = iVar0;
		}
		else if (unk_0xFC058F5121E54C32(bParam0) == 1)
		{
			bVar5 = iVar1;
		}
		else if (unk_0xFC058F5121E54C32(bParam0) == 2)
		{
			bVar5 = iVar2;
		}
		else if (unk_0xFC058F5121E54C32(bParam0) == 0)
		{
			if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(bParam0)))
			{
				bVar5 = iVar3;
			}
			else
			{
				bVar5 = bVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(bVar5) / unk_0xBBDA792448DB5A89(bVar4));
	return fVar6;
}

int func_219(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x7239B21A38F536BA(bParam0))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(bParam0, false))
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(unk_0x9F47B058362C84B5(bParam0)))
	{
		return 0;
	}
	bVar0 = unk_0x9F47B058362C84B5(bParam0);
	if ((!func_246(bVar0, bParam1, uParam2) && !func_245(unk_0x4F8644AF03D0E0D6())) && !func_227(bParam0))
	{
		return 0;
	}
	if (func_245(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_226(bVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_225(unk_0x4F8644AF03D0E0D6()) && (unk_0xDCE4334788AF94EA(bVar0) || unk_0xA0948AB42D7BA0DE(bVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x9F243D3919F442FE(bParam0) && !func_223(bParam0)) && !bVar1) && !(func_222(unk_0x9F47B058362C84B5(bParam0)) && func_220(unk_0x4F8644AF03D0E0D6())))
	{
		switch (unk_0x9F47B058362C84B5(bParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if ((func_156(bParam0) && unk_0x9F47B058362C84B5(bParam0) != joaat("sentinel2")) && unk_0x9F47B058362C84B5(bParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_220(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_222(bool bParam0)
{
	if (((bParam0 == joaat("mule4") || bParam0 == joaat("pounder2")) || bParam0 == joaat("speedo4")) || bParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_223(bool bParam0)
{
	switch (unk_0x9F47B058362C84B5(bParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_224(unk_0x4F8644AF03D0E0D6()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_224(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_225(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_226(bool bParam0)
{
	return 1;
}

int func_227(bool bParam0)
{
	if (func_244(unk_0x4F8644AF03D0E0D6()) || func_243(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_228(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(bool bParam0)
{
	if ((!unk_0x7239B21A38F536BA(bParam0) || !unk_0x4C241E39B23DF959(bParam0, false)) || unk_0x5F9532F3B5CC2551(bParam0, false))
	{
		return 0;
	}
	if (func_231(bParam0, 0))
	{
		return 1;
	}
	if (unk_0x05661B80A8C9165F(bParam0, "Player_Vehicle"))
	{
		if (unk_0xA06C969B02A97298(bParam0, "Player_Vehicle") == unk_0xBC1D768F2F5D6C05(unk_0x4F8644AF03D0E0D6()))
		{
			if (!func_229(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_229(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
	{
		bVar0 = unk_0x9F47B058362C84B5(bParam0);
		if ((unk_0x9F243D3919F442FE(bParam0) && !func_223(bParam0)) || func_230(bVar0))
		{
			return 1;
		}
		switch (bVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("caracara"):
			case joaat("caracara2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_230(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
			return 1;
		
		default:
	}
	return 0;
}

int func_231(bool bParam0, bool bParam1)
{
	switch (unk_0x9F47B058362C84B5(bParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_233(unk_0x9F47B058362C84B5(bParam0), 0))
			{
				if (Global_2815059.f_303 == bParam0)
				{
					return 1;
				}
				else if (func_232(bParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_232(bool bParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2703735.f_206[iVar0] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_233(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_242(bParam0, 0))
		{
			return 1;
		}
	}
	switch (bParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_241();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14731)
			{
				return func_240();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14732)
			{
				return func_240();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14730)
			{
				return func_240();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14733)
			{
				return func_240();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14735)
			{
				return func_240();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_239();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19186)
			{
				return func_238();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19188)
			{
				return func_238();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19192)
			{
				return func_238();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19189)
			{
				return func_238();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19196)
			{
				return func_238();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19194)
			{
				return func_238();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19199)
			{
				return func_238();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21144)
			{
				return func_237();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21145)
			{
				return func_237();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_236();
			break;
		
		case joaat("glendale"):
			if (func_236() || func_235())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_236();
			break;
		
		case joaat("issi3"):
			return func_236();
			break;
		
		case joaat("gargoyle"):
			return func_236();
			break;
		
		case joaat("dominator"):
			return func_236();
			break;
		
		case joaat("dominator2"):
			return func_236();
			break;
		
		case joaat("imperator"):
			return func_236();
			break;
		
		case joaat("imperator2"):
			return func_236();
			break;
		
		case joaat("imperator3"):
			return func_236();
			break;
		
		case joaat("deathbike"):
			return func_236();
			break;
		
		case joaat("deathbike2"):
			return func_236();
			break;
		
		case joaat("deathbike3"):
			return func_236();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_236();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_29320)
			{
				return func_235();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29670)
			{
				return func_235();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_29319)
			{
				return func_235();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29669)
			{
				return func_235();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29668)
			{
				return func_235();
			}
			break;
	}
	switch (bParam0)
	{
		case -893984159:
			if (Global_262145.f_33045)
			{
				return func_234();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_33044)
			{
				return func_234();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_33037)
			{
				return func_234();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_33046)
			{
				return func_234();
			}
			break;
	}
	return 0;
}

bool func_234()
{
	return unk_0x812595A0644CE1DE(1199590110);
}

bool func_235()
{
	return unk_0x812595A0644CE1DE(joaat("mpsum"));
}

bool func_236()
{
	return unk_0x812595A0644CE1DE(joaat("mpchristmas2018"));
}

bool func_237()
{
	return unk_0x812595A0644CE1DE(joaat("mpgunrunning"));
}

bool func_238()
{
	return unk_0x812595A0644CE1DE(joaat("mpimportexport"));
}

bool func_239()
{
	return unk_0x812595A0644CE1DE(joaat("mpjanuary2016"));
}

bool func_240()
{
	return unk_0x812595A0644CE1DE(joaat("mplowrider2"));
}

bool func_241()
{
	return unk_0x812595A0644CE1DE(joaat("mplowrider"));
}

int func_242(bool bParam0, int iParam1)
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

int func_243(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_32())
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_244(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_32())
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_245(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_116(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_221(Global_2689235[bParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_246(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((bParam0 == joaat("police") || bParam0 == joaat("policeold1")) || bParam0 == joaat("policeold2")) || bParam0 == joaat("police2")) || bParam0 == joaat("police3")) || bParam0 == joaat("police4")) || bParam0 == joaat("fbi")) || bParam0 == joaat("fbi2")) || bParam0 == joaat("polmav")) || bParam0 == joaat("policeb")) || bParam0 == joaat("policet")) || bParam0 == joaat("riot")) || bParam0 == joaat("sheriff")) || bParam0 == joaat("pranger")) || bParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((bParam0 == joaat("ambulance") || bParam0 == joaat("firetruk")) || bParam0 == joaat("taxi")) || bParam0 == joaat("lguard")) || bParam0 == joaat("ripley")) || bParam0 == joaat("dilettante2")) || bParam0 == joaat("airbus")) || bParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((bParam0 == joaat("burrito") || bParam0 == joaat("rumpo2")) || bParam0 == joaat("speedo")) || bParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((bParam0 == joaat("scorcher") || bParam0 == joaat("bmx")) || bParam0 == joaat("cruiser")) || bParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((bParam0 == joaat("caddy") || bParam0 == joaat("forklift")) || bParam0 == joaat("caddy2")) || bParam0 == joaat("crusader")) || bParam0 == joaat("tribike")) || bParam0 == joaat("tribike2")) || bParam0 == joaat("tribike3")) || bParam0 == joaat("tractor")) || bParam0 == joaat("tractor2")) || bParam0 == joaat("mower")) || bParam0 == joaat("tornado4")) || bParam0 == joaat("docktug")) || bParam0 == joaat("stretch")) || bParam0 == joaat("bison2")) || bParam0 == joaat("bison3")) || bParam0 == joaat("benson")) || bParam0 == joaat("pounder")) || bParam0 == joaat("submersible")) || bParam0 == joaat("emperor3")) || bParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_225(unk_0x4F8644AF03D0E0D6()) && (unk_0xDCE4334788AF94EA(bParam0) || unk_0xA0948AB42D7BA0DE(bParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0x7F6DB52EEFC96DF8(bParam0) && !unk_0xB50C0B0CEDC6CE84(bParam0)) && bParam0 != joaat("blazer")) && bParam0 != joaat("blazer2")) && bParam0 != joaat("blazer3")) && bParam0 != joaat("blazer4")) && bParam0 != joaat("blazer5")) && bParam0 != joaat("chimera")) && bParam0 != joaat("trailerlarge")) && bParam0 != joaat("trailersmall2")) && bParam0 != joaat("rrocket")) && bParam0 != joaat("stryder")) && bParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (bParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((bParam0 == joaat("insurgent") || bParam0 == joaat("technical")) || bParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_247(bParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (bParam0 == joaat("insurgent") || bParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_247(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_248(bool bParam0, int iParam1)
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

void func_249(bool bParam0)
{
	if (!func_250(*bParam0))
	{
		unk_0x7EE3A3C5E4A40CC9(*bParam0, 5, !Global_113386.f_9085.f_99.f_58[119]);
	}
}

bool func_250(bool bParam0)
{
	return unk_0xD2E6822DBFD6C8BD(bParam0, 5);
}

int func_251(bool bParam0, var uParam1, var uParam2)
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
				else if (func_255(*bParam0, bVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_242(unk_0x9F47B058362C84B5(*bParam0), 1) && unk_0x772960298DA26FDB(*bParam0, 24) != func_254(*bParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6AF0636DDEDCB6DD(*bParam0, 24, func_254(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_253(bParam0);
	if (func_252(*bParam0))
	{
		unk_0x3E8C8727991A8A0B(*bParam0, true);
		unk_0x92F0CF722BC4202F(*bParam0, true);
	}
	return 1;
}

int func_252(bool bParam0)
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

void func_253(var uParam0)
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

int func_254(bool bParam0, int iParam1)
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

int func_255(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_256() && unk_0x00834EAC4A96E010(bParam0, bParam1, bParam2))
	{
		return 1;
	}
	return 0;
}

int func_256()
{
	return 0;
}

int func_257(var uParam0, bool bParam1)
{
	if (unk_0x10FAB35428CCC9D7())
	{
	}
	else if (Global_113386.f_20118.f_261)
	{
		*uParam0 = { Global_113386.f_20118.f_267 };
		*bParam1 = Global_113386.f_20118.f_271;
		return 1;
	}
	return 0;
}

void func_258(bool bParam0, var uParam1, bool bParam2, bool bParam3)
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
		if (!func_269(bParam0))
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
			if (BitTest(uParam1->f_77, func_184(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_184(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_184(iVar2)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_184(iVar3)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar3));
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
					if (BitTest(uParam1->f_77, func_184(iVar4)))
					{
					}
					else
					{
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_184(4)))
			{
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(4));
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
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_184(iVar5)))
				{
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_77), func_184(iVar5));
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
			if (func_267(uParam1->f_5) || func_267(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_266(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_265())
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
		if (uParam1->f_65 == -1 && !func_186(uParam1->f_66))
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
						func_264(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_264(bParam0, uParam1->f_69);
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
			func_251(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDCE4334788AF94EA(uParam1->f_66) && !unk_0x45A9187928F4B9E3(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_184(iVar6 + 1)))
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
		if (((func_259() && unk_0xA0948AB42D7BA0DE(uParam1->f_66)) && unk_0xE43701C36CAFF1A4(bParam0)) && !unk_0x423E8DE37D934D89(bParam0, joaat("avenger")))
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

int func_259()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_262(7))
	{
		if (func_261(Global_2703735.f_4.f_16) || func_260(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_260(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_31(iParam0, 9);
	}
	return 0;
}

bool func_262(int iParam0)
{
	return func_263(&(Global_2703735.f_169), iParam0);
}

var func_263(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

void func_264(bool bParam0, int iParam1)
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

bool func_265()
{
	return unk_0x812595A0644CE1DE(joaat("mpindependence"));
}

int func_266(bool bParam0)
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

int func_267(int iParam0)
{
	if (!func_256() && func_268(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
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

int func_269(bool bParam0)
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!func_275(unk_0x4F8644AF03D0E0D6(), -1))
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
	if (func_271(unk_0x4F8644AF03D0E0D6()) == 3)
	{
		if (unk_0x7239B21A38F536BA(bParam0) && unk_0x4C241E39B23DF959(bParam0, false))
		{
			if (func_270(bParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_270(bool bParam0)
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

int func_271(bool bParam0)
{
	if (func_274(bParam0) == 233)
	{
		return func_272(bParam0);
	}
	return -1;
}

int func_272(int iParam0)
{
	if (func_273(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_273(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)
{
	if (func_273(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_275(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (func_116(bParam0, 1, 1))
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

int func_276(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_175(iParam0))
	{
		return 0;
	}
	if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xD24D37CC275948CC(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0xD24D37CC275948CC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xD24D37CC275948CC(&(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0xD24D37CC275948CC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_174(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xD24D37CC275948CC(&(Var0.f_27)) == unk_0xD24D37CC275948CC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_174(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xD24D37CC275948CC(&(Var0.f_27)) == unk_0xD24D37CC275948CC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_277()
{
	return func_278(&(Global_103950.f_2890));
}

int func_278(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_144(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_279()
{
	return func_278(&(Global_106934.f_2890));
}

int func_280(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_288(&uLocal_94, &Global_97303);
	func_289(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_289(&uLocal_94, bLocal_84);
	func_289(&uLocal_94, bLocal_85);
	if ((unk_0x98A4EB5D89A0C952(joaat("s_m_m_armoured_01")) && unk_0x98A4EB5D89A0C952(bLocal_84)) && unk_0x98A4EB5D89A0C952(bLocal_85))
	{
		if (bParam0)
		{
			if (!unk_0x7239B21A38F536BA(Local_1320.f_0))
			{
				if (unk_0x7239B21A38F536BA(Global_96938[0]))
				{
					unk_0xAD738C3085FE7E11(Global_96938[0], true, true);
					Local_1320.f_0 = Global_96938[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x7239B21A38F536BA(Local_1310.f_0))
			{
				if (unk_0x7239B21A38F536BA(Global_96938.f_9[0]))
				{
					unk_0xAD738C3085FE7E11(Global_96938.f_9[0], true, true);
					Local_1310.f_0 = Global_96938.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_289(&uLocal_94, bLocal_83);
			if (unk_0x98A4EB5D89A0C952(bLocal_83) && unk_0xCB4E8BE8A0063C5D(&Global_97303))
			{
				if (unk_0x0C515FAB3FF9EA92(&Global_97303, "jhp2a_main"))
				{
					unk_0x2FB897405C90B361(&Global_97303, 23, &Var1);
					unk_0x01C7B9B38428AEB6(Var1, 20f, false, false, false, false, false, false, 0);
					Local_1320.f_0 = unk_0xAF35D0D2583051B0(bLocal_83, Var1, 119.4988f, true, true, false);
					Local_1310.f_0 = unk_0x7DD959874C1FD534(Local_1320.f_0, 26, bLocal_82, -1, true, true);
					unk_0x49733E92263139D1(Local_1320.f_0, 5f);
					unk_0x3123FAA6DB1CF7ED(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, 23, 16, -1, 12f, false, 2f);
				}
				else
				{
					unk_0x2FB897405C90B361(&Global_97303, 29, &Var1);
					unk_0x01C7B9B38428AEB6(Var1, 20f, false, false, false, false, false, false, 0);
					Local_1320.f_0 = unk_0xAF35D0D2583051B0(bLocal_83, Var1, 134.0011f, true, true, false);
					Local_1310.f_0 = unk_0x7DD959874C1FD534(Local_1320.f_0, 26, bLocal_82, -1, true, true);
					unk_0x49733E92263139D1(Local_1320.f_0, 5f);
					unk_0x3123FAA6DB1CF7ED(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, 29, 16, -1, 12f, false, 2f);
				}
			}
		}
		if (unk_0x7239B21A38F536BA(Local_1320.f_0))
		{
			func_286(Local_1320.f_0, 0);
			if (unk_0x4C241E39B23DF959(Local_1320.f_0, false))
			{
				unk_0x92F0CF722BC4202F(Local_1320.f_0, true);
				unk_0x0DC7CABAB1E9B67E(Local_1320.f_0, true, 1);
				unk_0x192547247864DFDD(Local_1320.f_0, true);
				unk_0x2B6747FAA9DB9D6B(Local_1320.f_0, true);
			}
		}
		if (unk_0x7239B21A38F536BA(Local_1310.f_0))
		{
			if (!unk_0x84A2DD9AC37C35C1(Local_1310.f_0))
			{
				unk_0x9F8AA94D6D97DBF4(Local_1310.f_0, true);
				unk_0xC80A74AC829DDD92(Local_1310.f_0, iLocal_1309);
				unk_0x7AEFB85C1D49DEB6(Local_1310.f_0, 5);
				unk_0x63F58F7C80513AAD(Local_1310.f_0, false);
				unk_0x9F7794730795E019(Local_1310.f_0, 1, false);
				unk_0xBF0FD6E56C964FCB(Local_1310.f_0, joaat("weapon_pistol"), 15, false, true);
				func_285(&uLocal_1130, 3, Local_1310.f_0, "JHP2A_Driver", 0, 1);
				func_284(&(Local_1104[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x7239B21A38F536BA(Local_1320.f_0) && unk_0x7239B21A38F536BA(Local_1310.f_0))
		{
			func_283();
			func_284(&(Local_1104[1 /*8*/]), 0, 0, 1);
			func_281(&uLocal_94, joaat("boxville3"));
			func_281(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_281(&uLocal_94, bLocal_84);
			func_281(&uLocal_94, bLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_281(var uParam0, bool bParam1)
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
					func_282(uParam0[iVar0 /*5*/]);
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

void func_282(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_283()
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(Local_1320.f_0))
	{
		if (!unk_0x5F9532F3B5CC2551(Local_1320.f_0, false) && !unk_0x7239B21A38F536BA(bLocal_1324))
		{
			bLocal_1324 = unk_0x509D5878EB39E842(bLocal_85, unk_0x3FEF770D40960D5A(Local_1320.f_0, true), true, true, false);
			unk_0xF6DF6E90DE7DF90F(bLocal_1324, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0xC3675780C92F90F9(bLocal_1324, Local_1320.f_0, -1, -1, unk_0x2274BC1C4885E333(Local_1320.f_0, unk_0x44A8FCB8ED227738(Local_1320.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, true, true, false, true, 2);
			unk_0xEA1C610A04DB6BBB(bLocal_1324, false, false);
		}
		if (!unk_0x7239B21A38F536BA(Local_1323[0 /*2*/]))
		{
			if (unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
			{
				Var0 = { unk_0x1899F328B0E12848(Local_1320.f_0, unk_0x313CE5879CEB6FCD(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2), false, false);
				Local_1323[0 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[0 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, unk_0x3FEF770D40960D5A(Local_1320.f_0, true), true, true, false);
				unk_0xF6DF6E90DE7DF90F(Local_1323[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x6B9BBD38AB0796DF(Local_1323[0 /*2*/], Local_1320.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				unk_0x3910051CCECDB00C(Local_1323[0 /*2*/], true);
			}
		}
		if (!unk_0x7239B21A38F536BA(Local_1323[1 /*2*/]))
		{
			if (unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
			{
				Var0 = { unk_0x1899F328B0E12848(Local_1320.f_0, unk_0x313CE5879CEB6FCD(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2), false, false);
				Local_1323[1 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[1 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, unk_0x3FEF770D40960D5A(Local_1320.f_0, true), true, true, false);
				unk_0xF6DF6E90DE7DF90F(Local_1323[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x6B9BBD38AB0796DF(Local_1323[1 /*2*/], Local_1320.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				unk_0x3910051CCECDB00C(Local_1323[1 /*2*/], true);
			}
		}
		if (!unk_0x7239B21A38F536BA(Local_1323[2 /*2*/]))
		{
			if (unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
			{
				Var0 = { unk_0x1899F328B0E12848(Local_1320.f_0, unk_0x313CE5879CEB6FCD(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2), false, false);
				Local_1323[2 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[2 /*2*/] = unk_0x509D5878EB39E842(bLocal_84, unk_0x3FEF770D40960D5A(Local_1320.f_0, true), true, true, false);
				unk_0xF6DF6E90DE7DF90F(Local_1323[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x6B9BBD38AB0796DF(Local_1323[2 /*2*/], Local_1320.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				unk_0x3910051CCECDB00C(Local_1323[2 /*2*/], true);
			}
		}
	}
}

int func_284(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_285(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_286(bool bParam0, int iParam1)
{
	Global_100441.f_22[iParam1] = bParam0;
}

int func_287(var uParam0)
{
	if (func_295(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_288(var uParam0, bool bParam1)
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

int func_289(var uParam0, bool bParam1)
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

void func_290(var uParam0)
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

int func_291(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_292(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_126(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
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

int func_292(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_293(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_294()
{
	return BitTest(Global_100441.f_20, 13);
}

int func_295(var uParam0)
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
						func_282(uParam0[bVar1 /*5*/]);
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
						func_282(&(uParam0->f_273[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_374[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_656[bVar1 /*6*/]));
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
						func_282(&(uParam0->f_475[bVar1 /*6*/]));
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
						func_282(&(uParam0->f_202[bVar1 /*7*/]));
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
						func_282(&(uParam0->f_151[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_737[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_763[bVar1 /*5*/]));
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
								func_282(&(uParam0->f_687[bVar1 /*7*/]));
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
							func_282(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_282(&(uParam0->f_687[bVar1 /*7*/]));
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
						func_282(&(uParam0->f_904[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_955[bVar1 /*5*/]));
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
						func_282(&(uParam0->f_779[bVar1 /*5*/]));
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
					func_282(&(uParam0->f_885));
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
					func_282(&(uParam0->f_889));
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
						func_296(uParam0);
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
				func_282(&(uParam0->f_893));
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
						func_282(&(uParam0->f_981[bVar1 /*5*/]));
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

void func_296(var uParam0)
{
	if (unk_0xA41A05B6CB741B85())
	{
		unk_0xC197616D221FF4A4();
		func_282(&(uParam0->f_893));
	}
}

void func_297()
{
	if (bLocal_93 && (func_298() || unk_0xB16FCE9DDC7BA182()))
	{
		func_8(1);
		unk_0x1090044AD1DA76FA();
	}
}

int func_298()
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

void func_299()
{
	struct<3> Var0;
	var uVar1;
	
	func_306();
	unk_0xF372BC22FCB88606("SECDRIVER", &iLocal_1309);
	unk_0xBF25EB89375A37AD(1, iLocal_1309, joaat("COP"));
	unk_0xBF25EB89375A37AD(1, iLocal_1309, -183807561);
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_1309);
	if (func_6(0) || func_212())
	{
		iLocal_92 = 0;
		if (func_212())
		{
			if (Global_94618)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_97303, "jhp2a_alt", 64);
		if (func_212())
		{
			func_293(iLocal_92, &Var0, &uVar1);
			func_305(Var0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_280(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_304(&uLocal_94);
		}
	}
	func_303(&uLocal_94, "JHP2A", 0);
	unk_0x020E5F00CDA207BA(0.1f);
	unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
	func_301(88);
	func_285(&uLocal_1130, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	func_285(&uLocal_1130, 3, 0, "Lester", 0, 1);
	unk_0x0FC2D89AC25A5814(joaat("boxville3"), true);
	unk_0xE163A4BCE4DE6F11(joaat("s_m_m_armoured_01"), true);
	if (unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"), false))
	{
		unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("weapon_briefcase"));
	}
	func_300();
	if (unk_0xCA042B6957743895(&Global_97303))
	{
	}
	iLocal_1325 = unk_0x1B5C85C612E5256E(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!unk_0x02245FE4BED318B8(false))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_75595 = 1;
}

void func_300()
{
	Global_94619 = 1;
}

void func_301(int iParam0)
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_302(2);
			func_302(4);
			break;
		
		case 73:
			func_302(0);
			func_302(1);
			func_302(7);
			break;
		
		case 92:
			func_302(10);
			func_302(9);
			func_302(13);
			func_302(6);
			break;
		
		case 68:
			func_302(11);
			break;
		
		case 78:
			func_302(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_302(3);
			break;
		
		default:
			break;
	}
}

void func_302(bool bParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_96296, bParam0);
}

int func_303(var uParam0, bool bParam1, bool bParam2)
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

void func_304(var uParam0)
{
	func_295(uParam0);
}

void func_305(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_212())
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
		func_211(1);
	}
}

void func_306()
{
	func_314(&(Local_1104[0 /*8*/]), 85336, "Van Driver Manager");
	func_314(&(Local_1104[1 /*8*/]), 83983, "Cargo Manager");
}

void func_307(var uParam0)
{
	if (!func_135(uParam0))
	{
		if (unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
		{
			func_312(Local_1323[0 /*2*/], 1);
			func_312(Local_1323[1 /*2*/], 1);
			func_312(Local_1323[2 /*2*/], 1);
			iLocal_1339 = 1;
			func_311(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_310(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x2F844A8B08D76685("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((unk_0x9CD27B0045628463() - iLocal_1331) > 150)
						{
							if (unk_0xC86D67D52A707CF8(bLocal_1324, unk_0xD80958FC74E988A6(), false))
							{
								if ((((unk_0x131D401334815E94(bLocal_1324, joaat("weapon_molotov"), 0) || unk_0x131D401334815E94(bLocal_1324, joaat("weapon_bzgas"), 0)) || unk_0x131D401334815E94(bLocal_1324, joaat("weapon_knife"), 0)) || unk_0x131D401334815E94(bLocal_1324, joaat("weapon_unarmed"), 0)) || unk_0x131D401334815E94(bLocal_1324, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0xAC678E40BE7C74D2(bLocal_1324);
								}
								else
								{
									unk_0xA72CD9CA74A5ECBA(bLocal_1324);
									iLocal_1331 = unk_0x9CD27B0045628463();
									iLocal_1330++;
									if (iLocal_1330 >= 3)
									{
										unk_0xE65F427EB70AB1ED(-1, "Lock_Destroyed", bLocal_1324, "JWL_PREP_2A_SOUNDS", false, 0);
									}
									else
									{
										unk_0xE65F427EB70AB1ED(-1, "Lock_Damage", bLocal_1324, "JWL_PREP_2A_SOUNDS", false, 0);
									}
								}
							}
						}
						else
						{
							unk_0xA72CD9CA74A5ECBA(bLocal_1324);
						}
					}
					if (((((iLocal_1330 >= 3 || unk_0x5F9532F3B5CC2551(bLocal_1324, false)) || unk_0xB8E181E559464527(Local_1320.f_0, 2)) || unk_0xB8E181E559464527(Local_1320.f_0, 3)) || unk_0xFE3F9C29F7B32BD5(Local_1320.f_0, 2) > 0f) || unk_0xFE3F9C29F7B32BD5(Local_1320.f_0, 3) > 0f)
					{
						if (unk_0x7239B21A38F536BA(bLocal_1324))
						{
							unk_0x539E0AE3E6634B9F(&bLocal_1324);
						}
						if (!unk_0xB8E181E559464527(Local_1320.f_0, 2))
						{
							unk_0x7C65DAC73C35C862(Local_1320.f_0, 2, false, false);
						}
						if (!unk_0xB8E181E559464527(Local_1320.f_0, 3))
						{
							unk_0x7C65DAC73C35C862(Local_1320.f_0, 3, false, false);
						}
						iLocal_1340 = 0;
						iLocal_1341 = 0;
						func_312(Local_1323[0 /*2*/], 0);
						func_312(Local_1323[1 /*2*/], 0);
						func_312(Local_1323[2 /*2*/], 0);
						func_309(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_308(Local_1320.f_0))
					{
						if (unk_0x73D57CFFDD12C355(unk_0xFE3F9C29F7B32BD5(Local_1320.f_0, 2)) > 0.5f && unk_0x73D57CFFDD12C355(unk_0xFE3F9C29F7B32BD5(Local_1320.f_0, 3)) > 0.5f)
						{
							func_309(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_308(Local_1320.f_0))
					{
						if (!unk_0xB8E181E559464527(Local_1320.f_0, 2))
						{
							if (unk_0x3E933CFF7B111C22(Local_1320.f_0, 2))
							{
								unk_0x7C65DAC73C35C862(Local_1320.f_0, 2, true, false);
								unk_0xA5A9653A8D2CAF48(Local_1320.f_0, 2, false, false, true);
								iLocal_1340 = 1;
							}
						}
						else
						{
							iLocal_1340 = 1;
						}
						if (!unk_0xB8E181E559464527(Local_1320.f_0, 3))
						{
							if (unk_0x3E933CFF7B111C22(Local_1320.f_0, 3))
							{
								unk_0x7C65DAC73C35C862(Local_1320.f_0, 3, true, false);
								unk_0xA5A9653A8D2CAF48(Local_1320.f_0, 3, false, false, true);
								iLocal_1341 = 1;
							}
						}
						else
						{
							iLocal_1341 = 1;
						}
						if (iLocal_1340 && iLocal_1341)
						{
							iLocal_1339 = 1;
							func_309(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

int func_308(bool bParam0)
{
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(bParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_309(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9CD27B0045628463();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_310(var uParam0, bool bParam1)
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

void func_311(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9CD27B0045628463();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_312(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(bParam0))
	{
		if (unk_0xB346476EF1A64897(bParam0))
		{
			unk_0x961AC54BF0613F5D(bParam0, true, bParam1);
			unk_0x1A9205C1B9EE827F(bParam0, true, false);
			unk_0x710311ADF0E20730(bParam0);
		}
		if (bParam1)
		{
			Var0 = { func_313(unk_0x3FEF770D40960D5A(bParam0, true) - unk_0x1899F328B0E12848(Local_1320.f_0, unk_0x313CE5879CEB6FCD(-0.15f, 0.15f), IntToFloat(-unk_0xD53343AA4FB7DD28(3, 6)), unk_0x313CE5879CEB6FCD(-0.1f, 0.1f))) };
			unk_0x18FF00FC7EFF559E(bParam0, 1, Var0 * FtoV(unk_0x313CE5879CEB6FCD(0.25f, 0.5f)), false, true, true, false);
			unk_0x18FF00FC7EFF559E(bParam0, 5, IntToFloat(unk_0xD53343AA4FB7DD28(false, 10)), IntToFloat(unk_0xD53343AA4FB7DD28(false, 10)), IntToFloat(unk_0xD53343AA4FB7DD28(false, 10)), false, true, true, false);
			unk_0xA53ED5520C07654A(bParam0, Local_1320.f_0, true);
		}
	}
}

Vector3 func_313(struct<3> Param0)
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

int func_314(var uParam0, int iParam1, char* sParam2)
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

void func_315(var uParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	float fVar4;
	
	if (!func_135(uParam0))
	{
		if (((!unk_0x7239B21A38F536BA(Local_1310.f_0) || unk_0x84A2DD9AC37C35C1(Local_1310.f_0)) || (unk_0x7239B21A38F536BA(Local_1320.f_0) && func_204(Local_1320.f_0, Local_1310.f_0, 1) > 200f)) || (!unk_0x997ABD671D25CA0B(Local_1310.f_0, false) && func_204(Local_1320.f_0, Local_1310.f_0, 1) > 200f))
		{
			if (unk_0x7239B21A38F536BA(Local_1320.f_0) && unk_0x4C241E39B23DF959(Local_1320.f_0, false))
			{
				unk_0x2B6747FAA9DB9D6B(Local_1320.f_0, false);
			}
			unk_0x2595DD4236549CE3(&Local_1310);
			func_311(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x7239B21A38F536BA(Local_1320.f_0) || !unk_0x4C241E39B23DF959(Local_1320.f_0, false)) || !unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, false)))
			{
				iLocal_1332 = 0;
				iLocal_1333 = 0;
				StringCopy(&cLocal_1334, "", 24);
				func_309(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					bVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x17FFC1B2BA35A494(bVar0, Local_1320.f_0))
					{
						if ((!iLocal_1327 && (unk_0x9CD27B0045628463() - iLocal_1329) > 500) && fLocal_1328 >= 4f)
						{
							iLocal_1327 = 1;
							iLocal_1326++;
						}
					}
					else if (iLocal_1327)
					{
						iLocal_1329 = unk_0x9CD27B0045628463();
						iLocal_1327 = 0;
					}
					Var1 = { func_313(unk_0x3FEF770D40960D5A(bVar0, true) - unk_0x3FEF770D40960D5A(Local_1320.f_0, true)) };
					Var2 = { unk_0x4805D2B1D8CF94A9(Local_1320.f_0) - unk_0x4805D2B1D8CF94A9(bVar0) };
					fLocal_1328 = func_319(Var2, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0xC86D67D52A707CF8(Local_1320.f_0, unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(Local_1310.f_0, unk_0xD80958FC74E988A6(), true)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 124)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 125)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 126)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 29)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 118)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 123)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 22)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 24)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 47)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 138)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 88)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 89)) || unk_0x9A497FE2DF198913(Local_1310.f_0)) || unk_0x28D3FED7190D3A0B(Local_1320.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_309(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x7239B21A38F536BA(Local_1320.f_0) && unk_0x4C241E39B23DF959(Local_1320.f_0, false))
						{
							if ((unk_0x1218E6886D3D8327(unk_0xD80958FC74E988A6()) || fLocal_1328 > 0.5f) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), unk_0x1899F328B0E12848(Local_1320.f_0, 0f, 2f, -0.5f), unk_0x1899F328B0E12848(Local_1320.f_0, 0f, 10f, 2f), 4.5f, false, true, 0))
							{
								if (!unk_0x9D6BFC12B05C6121(Local_1320.f_0))
								{
									if (iLocal_1343 == -1)
									{
										iLocal_1343 = unk_0x9CD27B0045628463();
									}
									else if ((unk_0x9CD27B0045628463() - iLocal_1343) > 5000)
									{
										unk_0x9C8C6504B5B63D2C(Local_1320.f_0, 2000, joaat("normal"), false);
									}
								}
								else
								{
									iLocal_1343 = -1;
								}
							}
						}
						if (func_318(Local_1320.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_288(&uLocal_94, "jhp2a_airport");
						}
						if (!func_317(Local_1310.f_0, -235832601, 1))
						{
							if (unk_0x51210CED3DA1C78A(Local_1320.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, false, true, 0))
							{
								if (unk_0xCB4E8BE8A0063C5D("jhp2a_airport"))
								{
									iLocal_1332 = 0;
									iLocal_1333 = 0;
									StringCopy(&cLocal_1334, "", 24);
									func_309(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x3123FAA6DB1CF7ED(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, -1, 24, -1, 12f, false, 2f);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0xC86D67D52A707CF8(Local_1320.f_0, unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(Local_1310.f_0, unk_0xD80958FC74E988A6(), true)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 124)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 125)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 126)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 29)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 118)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 123)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 22)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 24)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 47)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 138)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 88)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 89)) || unk_0x9A497FE2DF198913(Local_1310.f_0)) || unk_0x28D3FED7190D3A0B(Local_1320.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_309(uParam0, 5, 0);
					}
					else if (!func_317(Local_1310.f_0, -235832601, 1))
					{
						if (unk_0x51210CED3DA1C78A(Local_1320.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, false, true, 0))
						{
							iLocal_1332 = 0;
							iLocal_1333 = 0;
							StringCopy(&cLocal_1334, "", 24);
							func_309(uParam0, 3, 0);
						}
						else
						{
							unk_0x3123FAA6DB1CF7ED(Local_1310.f_0, Local_1320.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, false, 2f);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0xC86D67D52A707CF8(Local_1320.f_0, unk_0xD80958FC74E988A6(), true) || unk_0xC86D67D52A707CF8(Local_1310.f_0, unk_0xD80958FC74E988A6(), true)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 124)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 125)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 126)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 29)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 118)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 123)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 22)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 24)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 47)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 62)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 138)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 88)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 89)) || unk_0x9A497FE2DF198913(Local_1310.f_0)) || unk_0x28D3FED7190D3A0B(Local_1320.f_0)) || unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_1320.f_0, true)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_309(uParam0, 5, 0);
					}
					else if (unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, true))
					{
						if (!func_317(Local_1310.f_0, 451360105, 1))
						{
							unk_0xD3DBCE61A490BE02(Local_1310.f_0, Local_1320.f_0, 0);
						}
					}
					else
					{
						unk_0xB664292EAECF7FA6(Local_1320.f_0, 2);
						if (!func_317(Local_1310.f_0, 242628503, 1))
						{
							unk_0xE8854A4326B9E12B(&iLocal_1308);
							unk_0x15D3A79D4E44B913(false, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 0.25f, false, 1193033728);
							unk_0x142A02425FF02BD9(false, "WORLD_HUMAN_SMOKING", -1, true);
							unk_0x39E72BC99E6360CB(iLocal_1308);
							unk_0x5ABA3986D90D8A3B(Local_1310.f_0, iLocal_1308);
							unk_0x3841422E9C488D8C(&iLocal_1308);
						}
					}
					break;
				
				case 4:
					if (unk_0xBA291848A0815CA9(Local_1320.f_0, false, true))
					{
						iVar3++;
					}
					if (unk_0xBA291848A0815CA9(Local_1320.f_0, true, true))
					{
						iVar3++;
					}
					if (unk_0xBA291848A0815CA9(Local_1320.f_0, 4, true))
					{
						iVar3++;
					}
					if (unk_0xBA291848A0815CA9(Local_1320.f_0, 5, true))
					{
						iVar3++;
					}
					if (((((IntToFloat(unk_0xEEF059FAD016D209(Local_1320.f_0)) <= 0f || unk_0xC45D23BAF168AAB8(Local_1320.f_0) <= 250f) || unk_0x7D5DABE888D2D074(Local_1320.f_0) <= 400f) || unk_0x84A2DD9AC37C35C1(Local_1310.f_0)) || iVar3 >= 2) || iLocal_1326 > 6)
					{
						if (unk_0x7239B21A38F536BA(Local_1320.f_0) && unk_0x4C241E39B23DF959(Local_1320.f_0, false))
						{
							unk_0x2B6747FAA9DB9D6B(Local_1320.f_0, false);
						}
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_309(uParam0, 5, 0);
					}
					else if (!func_317(Local_1310.f_0, -1273030092, 1))
					{
						unk_0x9454528DF15D657A(Local_1310.f_0, Local_1320.f_0, unk_0xD80958FC74E988A6(), 8, 90f, 786468, 400f, 10f, false);
					}
					break;
				
				case 5:
					if (unk_0x7239B21A38F536BA(Local_1320.f_0) && !unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
					{
						if (unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, false))
						{
							if (!func_87(Local_1320.f_0))
							{
								if (!func_317(Local_1310.f_0, -2118855366, 1))
								{
									unk_0xE1EF3C1216AFF2CD(Local_1310.f_0);
									unk_0xC429DCEEB339E129(Local_1310.f_0, Local_1320.f_0, 5, -1);
								}
							}
							else if (!func_317(Local_1310.f_0, 451360105, 1))
							{
								unk_0xD3DBCE61A490BE02(Local_1310.f_0, Local_1320.f_0, 256);
							}
						}
						else if (!func_317(Local_1310.f_0, 780511057, 1))
						{
							unk_0x63F58F7C80513AAD(Local_1310.f_0, true);
							unk_0xF166E48407BAC484(Local_1310.f_0, unk_0xD80958FC74E988A6(), 0, 16);
						}
					}
					if (unk_0x7239B21A38F536BA(Local_1320.f_0) && !unk_0x5F9532F3B5CC2551(Local_1320.f_0, false))
					{
						unk_0x2FA133A4A9D37ED8(Local_1320.f_0, 2, true);
						unk_0x2FA133A4A9D37ED8(Local_1320.f_0, 3, true);
					}
					break;
				}
		}
		if ((unk_0x7239B21A38F536BA(Local_1310.f_0) && !unk_0x84A2DD9AC37C35C1(Local_1310.f_0)) && !unk_0xE0A0AEC214B1FABA(Local_1310.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1332)
					{
						case 0:
							if (func_42() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								if (unk_0x9A497FE2DF198913(Local_1310.f_0))
								{
									func_62(Local_1310.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									func_62(Local_1310.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1332++;
							}
							break;
						
						case 1:
							if (!unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, false) || iLocal_1307 == 3)
							{
								if (!unk_0xA3EE4A07279BB9DB(Local_1310.f_0, Local_1320.f_0, false))
								{
									iLocal_1332 = 4;
								}
								else
								{
									iLocal_1332++;
								}
							}
							else if (func_42() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								if (func_316(&uLocal_1130, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1332++;
								}
							}
							break;
						
						case 2:
							if (func_42() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								if (unk_0xCA042B6957743895(&cLocal_1334))
								{
									fVar4 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_1310.f_0, true));
									if ((((((iLocal_1327 || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 124)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 125)) || unk_0x8507BCB710FA6DC0(Local_1310.f_0, 126)) || fVar4 < 49f) && (unk_0x9CD27B0045628463() - iLocal_1333) > 5000) && fVar4 < 225f)
									{
										if (unk_0xD53343AA4FB7DD28(false, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0xCA042B6957743895(&cLocal_1334))
								{
									if (unk_0x0C515FAB3FF9EA92(&cLocal_1334, "GENERIC_CURSE_HIGH"))
									{
										func_62(Local_1310.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1332++;
									}
									else
									{
										if (func_316(&uLocal_1130, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
										{
											iLocal_1332++;
										}
										iLocal_1332++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_43() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								iLocal_1333 = unk_0x9CD27B0045628463();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1332)
					{
						case 0:
							if (func_42() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								if (unk_0xCA042B6957743895(&cLocal_1334))
								{
									if ((unk_0x9CD27B0045628463() - iLocal_1333) > 5000 && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_1310.f_0, true)) < 400f)
									{
										if (unk_0xD53343AA4FB7DD28(false, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0xCA042B6957743895(&cLocal_1334))
								{
									if (unk_0x0C515FAB3FF9EA92(&cLocal_1334, "GENERIC_INSULT_HIGH"))
									{
										func_62(Local_1310.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1332++;
									}
									else if (func_316(&uLocal_1130, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
									{
										iLocal_1332++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_43() && !unk_0x9072C8B49907BFAD(Local_1310.f_0))
							{
								iLocal_1333 = unk_0x9CD27B0045628463();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

bool func_316(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_27(sParam2, iParam3, 0);
}

int func_317(bool bParam0, int iParam1, bool bParam2)
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

float func_318(bool bParam0, struct<3> Param1, bool bParam2)
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

float func_319(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_320(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	unk_0x706D57B0F50DA710("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_332();
		func_8(0);
		unk_0x1090044AD1DA76FA();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0xCA042B6957743895(&cVar1))
		{
			func_330(&Var0);
		}
		else
		{
			func_321(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_321(char* sParam0, char* sParam1)
{
	func_329(sParam0, sParam1);
	func_322(0);
}

void func_322(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_323(iVar0))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_328();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_327(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6(), 0);
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6(), 0);
	func_324(&(Global_113386.f_2363.f_539), iVar1);
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

void func_324(var uParam0, int iParam1)
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
			if (!func_326(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_325(&(uParam0->f_2296[iVar0]));
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

void func_325(var uParam0)
{
	*uParam0 = -15;
}

int func_326(int iParam0, var uParam1, float fParam2)
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
			return func_326(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_326(8, uParam1, fParam2);
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

void func_327(int iParam0, bool bParam1)
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

void func_328()
{
	Global_100476 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_78551))
		{
			switch (func_193())
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
			switch (func_193())
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

void func_329(bool bParam0, bool bParam1)
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

void func_330(char* sParam0)
{
	func_331(sParam0);
	func_322(0);
}

void func_331(bool bParam0)
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

void func_332()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		if (!func_333())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_323(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_328();
		}
	}
}

int func_333()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

