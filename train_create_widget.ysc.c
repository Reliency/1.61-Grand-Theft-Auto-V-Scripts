#region Local Var
	bool bLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	bool bLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	bLocal_4 = true;
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(3))
	{
		func_1();
	}
	unk_0x80D9F74197EA47D9(false);
	unk_0x736A718577F39C7D();
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), 626.68f, 6442.31f, 30.88f, true, false, false, true);
		unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), -177f);
		unk_0xB4EC2312F4E5B1F1(0f);
	}
	unk_0x963D27A58DF860AC(joaat("freight"));
	unk_0x963D27A58DF860AC(joaat("freightcar"));
	unk_0x963D27A58DF860AC(joaat("freightgrain"));
	unk_0x963D27A58DF860AC(joaat("freightcont1"));
	unk_0x963D27A58DF860AC(joaat("freightcont2"));
	unk_0x963D27A58DF860AC(joaat("tankercar"));
	unk_0x963D27A58DF860AC(joaat("metrotrain"));
	while ((((((!unk_0x98A4EB5D89A0C952(joaat("freight")) || !unk_0x98A4EB5D89A0C952(joaat("freightcar"))) || !unk_0x98A4EB5D89A0C952(joaat("freightgrain"))) || !unk_0x98A4EB5D89A0C952(joaat("freightcont1"))) || !unk_0x98A4EB5D89A0C952(joaat("freightcont2"))) || !unk_0x98A4EB5D89A0C952(joaat("tankercar"))) || !unk_0x98A4EB5D89A0C952(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(false);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(false);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (iLocal_5)
			{
				if (unk_0x7239B21A38F536BA(bLocal_0))
				{
					unk_0x5B76B14AE875C795(&bLocal_0);
				}
				bLocal_0 = unk_0x63C6CCA8E68AE8C8(iLocal_2, Local_1, bLocal_4, false, false);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				Local_1 = { unk_0xA200EB1EE790F448() };
				iLocal_7 = 0;
			}
			if (unk_0x4C241E39B23DF959(bLocal_0, false) && !unk_0x5F9532F3B5CC2551(bLocal_0, false))
			{
				unk_0xAA0BC91BE0B796E3(bLocal_0, fLocal_3);
				unk_0x16469284DB8C62B5(bLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x80D9F74197EA47D9(true);
	unk_0x1090044AD1DA76FA();
}

