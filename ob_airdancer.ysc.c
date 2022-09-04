#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	bool bScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xC968670BFACE42D9(2))
	{
		func_1();
	}
	if (unk_0x7239B21A38F536BA(bScriptParam_3))
	{
		unk_0x428CA6DBD1094446(bScriptParam_3, true);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(bScriptParam_3))
		{
			if (unk_0xCCBA154209823057(bScriptParam_3))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x060D6E96F8B8E48D(bScriptParam_3))
						{
							unk_0xD3BD40951412FEF6("map_objects");
							if (unk_0xD031A9162D01088C("map_objects"))
							{
								unk_0x7FB218262B810701(bScriptParam_3, "airdancer_test", "map_objects", 1f, true, false, false, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x1090044AD1DA76FA();
}

void func_2(bool bParam0)
{
	func_3(bParam0);
}

void func_3(bool bParam0)
{
	if (unk_0x0C515FAB3FF9EA92(bParam0, bParam0))
	{
	}
}

